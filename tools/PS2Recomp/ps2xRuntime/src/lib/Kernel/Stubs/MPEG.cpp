#include "runtime/ps2_wait_stats.h"
#include "Common.h"
#include "MPEG.h"
#include "runtime/ee_scheduler.h"

#if !defined(PS2X_HAS_FFMPEG)
#define PS2X_HAS_FFMPEG 1
#endif

#if PS2X_HAS_FFMPEG
extern "C"
{
#include <libavcodec/avcodec.h>
#include <libavutil/error.h>
#include <libavutil/log.h>
#include <libswscale/swscale.h>
}
#endif

#include <deque>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <memory>
#include <mutex>
#include <unordered_map>

#include "Syscalls/Helpers/State.h"

namespace ps2_stubs
{
    namespace
    {
        struct MpegDecodedFrame
        {
            int width = 0;
            int height = 0;
            int repeatPict = 0;
            int64_t pts90k = -1;
            std::vector<uint8_t> rgba;
        };

        struct MpegProfile
        {
            static bool enabled()
            {
                static const bool value = std::getenv("PS2X_MPEG_PROFILE") != nullptr;
                return value;
            }

            static void add(std::atomic<uint64_t> &counter, uint64_t value)
            {
                counter.fetch_add(value, std::memory_order_relaxed);
            }

            static inline std::atomic<uint64_t> feedNs{0};
            static inline std::atomic<uint64_t> convertNs{0};
            static inline std::atomic<uint64_t> guestWriteNs{0};
            static inline std::atomic<uint32_t> presentedFrames{0};
        };

        using MpegClock = std::chrono::steady_clock;
        uint64_t elapsedNs(MpegClock::time_point start)
        {
            return static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(MpegClock::now() - start).count());
        }

        void reportMpegProfileFrame(uint64_t guestWriteDurationNs)
        {
            if (!MpegProfile::enabled())
                return;
            MpegProfile::add(MpegProfile::guestWriteNs, guestWriteDurationNs);
            const uint32_t frame = MpegProfile::presentedFrames.fetch_add(1u, std::memory_order_relaxed) + 1u;
            if (frame % 60u != 0u)
                return;

            const uint64_t feedNs = MpegProfile::feedNs.exchange(0u, std::memory_order_relaxed);
            const uint64_t convertNs = MpegProfile::convertNs.exchange(0u, std::memory_order_relaxed);
            const uint64_t writeNs = MpegProfile::guestWriteNs.exchange(0u, std::memory_order_relaxed);
            std::fprintf(stderr,
                         "[MPEG:profile] frames=60 input+decode=%.2fms/frame rgba=%.2fms/frame EE-copy=%.2fms/frame\n",
                         static_cast<double>(feedNs) / 60000000.0,
                         static_cast<double>(convertNs) / 60000000.0,
                         static_cast<double>(writeNs) / 60000000.0);
        }

#if PS2X_HAS_FFMPEG
        std::string ffmpegErrorString(int err)
        {
            std::array<char, AV_ERROR_MAX_STRING_SIZE> buffer{};
            if (av_strerror(err, buffer.data(), buffer.size()) < 0)
            {
                return "unknown FFmpeg error";
            }
            return std::string(buffer.data());
        }

        void configureFfmpegLogLevel()
        {
            static std::once_flag s_once;
            std::call_once(s_once, []
                           {
#if AGRESSIVE_LOGS
                               av_log_set_level(AV_LOG_WARNING);
#else
                               av_log_set_level(AV_LOG_ERROR);
#endif
                           });
        }

        class MpegFfmpegDecoder
        {
        public:
            MpegFfmpegDecoder() = default;

            ~MpegFfmpegDecoder()
            {
                reset();
            }

            MpegFfmpegDecoder(const MpegFfmpegDecoder &) = delete;
            MpegFfmpegDecoder &operator=(const MpegFfmpegDecoder &) = delete;

            bool feed(const uint8_t *data, size_t size, std::deque<MpegDecodedFrame> &frames, int64_t pts90k = -1, int64_t dts90k = -1)
            {
                if (!data || size == 0)
                {
                    return true;
                }

                if (!ensureInitialized())
                {
                    return false;
                }

                const bool profileEnabled = MpegProfile::enabled();
                const auto profileStart = profileEnabled ? MpegClock::now() : MpegClock::time_point{};

                static uint32_t s_feedLogCount = 0u;
                const bool shouldLog = (s_feedLogCount < 32u);
                if (shouldLog)
                    ++s_feedLogCount;

                size_t totalParsed = 0u;
                size_t totalPacketsSent = 0u;
                size_t framesBefore = frames.size();

                const uint8_t *cursor = data;
                size_t remaining = size;
                int64_t parserPts = pts90k >= 0 ? pts90k : AV_NOPTS_VALUE;
                int64_t parserDts = dts90k >= 0 ? dts90k : AV_NOPTS_VALUE;
                while (remaining > 0)
                {
                    uint8_t *packetData = nullptr;
                    int packetSize = 0;
                    const int chunk = static_cast<int>(std::min<size_t>(
                        remaining, static_cast<size_t>(std::numeric_limits<int>::max())));
                    const int used = av_parser_parse2(
                        m_parser,
                        m_codecCtx,
                        &packetData,
                        &packetSize,
                        cursor,
                        chunk,
                        parserPts,
                        parserDts,
                        0);
                    if (used < 0)
                    {
                        std::cerr << "[MPEG] parser failed: " << ffmpegErrorString(used) << std::endl;
                        return false;
                    }
                    if (used == 0 && packetSize == 0)
                    {
                        break;
                    }

                    totalParsed += static_cast<size_t>(used);
                    cursor += used;
                    remaining -= static_cast<size_t>(used);

                    if (used > 0)
                    {
                        parserPts = AV_NOPTS_VALUE;
                        parserDts = AV_NOPTS_VALUE;
                    }

                    if (packetSize > 0)
                    {
                        ++totalPacketsSent;
                        if (!sendPacket(packetData, static_cast<size_t>(packetSize), frames, m_parser->pts, m_parser->dts))
                        {
                            return false;
                        }
                    }
                }

                if (shouldLog)
                {
                    PS2_IF_AGRESSIVE_LOGS({
                        std::cerr << "[MPEG:feed] inSize=" << size
                                  << " parsed=" << totalParsed
                                  << " packets=" << totalPacketsSent
                                  << " newFrames=" << (frames.size() - framesBefore)
                                  << " totalFrames=" << frames.size()
                                  << std::endl;
                    });
                }

                if (profileEnabled)
                    MpegProfile::add(MpegProfile::feedNs, elapsedNs(profileStart));

                return true;
            }

            bool flush(std::deque<MpegDecodedFrame> &frames)
            {
                if (!m_initialized || m_drained)
                {
                    return true;
                }

                if (m_parser)
                {
                    uint8_t *packetData = nullptr;
                    int packetSize = 0;
                    const int used = av_parser_parse2(
                        m_parser,
                        m_codecCtx,
                        &packetData,
                        &packetSize,
                        nullptr,
                        0,
                        AV_NOPTS_VALUE,
                        AV_NOPTS_VALUE,
                        0);
                    (void)used;
                    if (packetSize > 0 && !sendPacket(packetData, static_cast<size_t>(packetSize), frames, m_parser->pts, m_parser->dts))
                    {
                        return false;
                    }
                }

                const int sendRet = avcodec_send_packet(m_codecCtx, nullptr);
                if (sendRet < 0 && sendRet != AVERROR_EOF)
                {
                    std::cerr << "[MPEG] decoder flush failed: " << ffmpegErrorString(sendRet) << std::endl;
                    return false;
                }

                const bool ok = receiveFrames(frames);
                m_drained = true;
                return ok;
            }

            void reset()
            {
                if (m_swsCtx)
                {
                    sws_freeContext(m_swsCtx);
                    m_swsCtx = nullptr;
                }
                if (m_frame)
                {
                    av_frame_free(&m_frame);
                }
                if (m_packet)
                {
                    av_packet_free(&m_packet);
                }
                if (m_codecCtx)
                {
                    avcodec_free_context(&m_codecCtx);
                }
                if (m_parser)
                {
                    av_parser_close(m_parser);
                    m_parser = nullptr;
                }

                m_swsWidth = 0;
                m_swsHeight = 0;
                m_swsFormat = AV_PIX_FMT_NONE;
                m_initialized = false;
                m_drained = false;
            }

        private:
            bool ensureInitialized()
            {
                if (m_initialized)
                {
                    return true;
                }

                configureFfmpegLogLevel();

                const AVCodec *codec = avcodec_find_decoder(AV_CODEC_ID_MPEG2VIDEO);
                if (!codec)
                {
                    std::cerr << "[MPEG] FFmpeg MPEG-2 decoder not found." << std::endl;
                    return false;
                }

                m_parser = av_parser_init(AV_CODEC_ID_MPEG2VIDEO);
                if (!m_parser)
                {
                    std::cerr << "[MPEG] FFmpeg MPEG-video parser not found." << std::endl;
                    return false;
                }

                m_codecCtx = avcodec_alloc_context3(codec);
                m_frame = av_frame_alloc();
                m_packet = av_packet_alloc();
                if (!m_codecCtx || !m_frame || !m_packet)
                {
                    std::cerr << "[MPEG] failed to allocate FFmpeg decoder state." << std::endl;
                    reset();
                    return false;
                }

                // MPEG-2 supports slice threading. Let FFmpeg size the worker
                // pool so decode work does not serialize on one host core.
                m_codecCtx->thread_count = 0;
                m_codecCtx->thread_type = FF_THREAD_SLICE;
                m_codecCtx->pkt_timebase = AVRational{1, 90000};
                // feedElementaryStream() does not create the decoder until a valid
                // MPEG sequence header has been found.  Dropping non-key pictures
                // here therefore throws away real presentation frames and makes
                // movies finish early once the EE is fast enough to drain them.
                m_codecCtx->skip_frame = AVDISCARD_DEFAULT;
                m_codecCtx->err_recognition = 0;
                const int ret = avcodec_open2(m_codecCtx, codec, nullptr);
                if (ret < 0)
                {
                    std::cerr << "[MPEG] failed to open MPEG decoder: " << ffmpegErrorString(ret) << std::endl;
                    reset();
                    return false;
                }

                m_initialized = true;
                m_drained = false;
                return true;
            }

            bool sendPacket(const uint8_t *data,
                            size_t size,
                            std::deque<MpegDecodedFrame> &frames,
                            int64_t pts = AV_NOPTS_VALUE,
                            int64_t dts = AV_NOPTS_VALUE)
            {
                if (!data || size == 0)
                {
                    return true;
                }

                av_packet_unref(m_packet);
                const int allocRet = av_new_packet(m_packet, static_cast<int>(size));
                if (allocRet < 0)
                {
                    std::cerr << "[MPEG] failed to allocate packet: " << ffmpegErrorString(allocRet) << std::endl;
                    return false;
                }
                std::memcpy(m_packet->data, data, size);
                m_packet->pts = pts;
                m_packet->dts = dts;

                int ret = avcodec_send_packet(m_codecCtx, m_packet);
                if (ret == AVERROR(EAGAIN))
                {
                    if (!receiveFrames(frames))
                    {
                        av_packet_unref(m_packet);
                        return false;
                    }
                    ret = avcodec_send_packet(m_codecCtx, m_packet);
                }
                av_packet_unref(m_packet);
                if (ret < 0 && ret != AVERROR(EAGAIN))
                {
                    static uint32_t s_rejectedPacketLogCount = 0u;
                    if (s_rejectedPacketLogCount < 32u)
                    {
                        std::cerr << "[MPEG] decoder rejected packet, dropping: "
                                  << ffmpegErrorString(ret) << std::endl;
                        ++s_rejectedPacketLogCount;
                    }
                    return true;
                }

                return receiveFrames(frames);
            }

            bool receiveFrames(std::deque<MpegDecodedFrame> &frames)
            {
                while (true)
                {
                    const int ret = avcodec_receive_frame(m_codecCtx, m_frame);
                    if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
                    {
                        return true;
                    }
                    if (ret < 0)
                    {
                        static uint32_t s_receiveErrorLogCount = 0u;
                        if (s_receiveErrorLogCount < 32u)
                        {
                            std::cerr << "[MPEG] decoder receive failed, dropping: "
                                      << ffmpegErrorString(ret) << std::endl;
                            ++s_receiveErrorLogCount;
                        }
                        return true;
                    }

                    if (!convertFrame(frames))
                    {
                        av_frame_unref(m_frame);
                        return false;
                    }
                    av_frame_unref(m_frame);
                }
            }

            bool convertFrame(std::deque<MpegDecodedFrame> &frames)
            {
                const bool profileEnabled = MpegProfile::enabled();
                const auto profileStart = profileEnabled ? MpegClock::now() : MpegClock::time_point{};
                const AVFrame *sourceFrame = m_frame;
                const int width = sourceFrame->width;
                const int height = sourceFrame->height;
                const AVPixelFormat srcFormat = static_cast<AVPixelFormat>(sourceFrame->format);
                if (width <= 0 || height <= 0 || srcFormat == AV_PIX_FMT_NONE)
                {
                    return false;
                }

                if (!m_swsCtx ||
                    m_swsWidth != width ||
                    m_swsHeight != height ||
                    m_swsFormat != srcFormat)
                {
                    if (m_swsCtx)
                    {
                        sws_freeContext(m_swsCtx);
                        m_swsCtx = nullptr;
                    }
                    m_swsCtx = sws_getContext(
                        width,
                        height,
                        srcFormat,
                        width,
                        height,
                        AV_PIX_FMT_RGBA,
                        SWS_BILINEAR,
                        nullptr,
                        nullptr,
                        nullptr);
                    if (!m_swsCtx)
                    {
                        std::cerr << "[MPEG] failed to create FFmpeg scaler." << std::endl;
                        return false;
                    }
                    m_swsWidth = width;
                    m_swsHeight = height;
                    m_swsFormat = srcFormat;
                }

                MpegDecodedFrame decoded;
                decoded.width = width;
                decoded.height = height;
                decoded.repeatPict = std::max(0, m_frame->repeat_pict);
                decoded.pts90k = m_frame->best_effort_timestamp != AV_NOPTS_VALUE
                                     ? m_frame->best_effort_timestamp
                                     : -1;
                decoded.rgba.resize(static_cast<size_t>(width) * static_cast<size_t>(height) * 4u);

                uint8_t *dstData[4] = {decoded.rgba.data(), nullptr, nullptr, nullptr};
                int dstLinesize[4] = {width * 4, 0, 0, 0};
                const int scaledRows = sws_scale(
                    m_swsCtx,
                    sourceFrame->data,
                    sourceFrame->linesize,
                    0,
                    height,
                    dstData,
                    dstLinesize);
                if (scaledRows <= 0)
                {
                    std::cerr << "[MPEG] FFmpeg scaler produced no rows." << std::endl;
                    return false;
                }

                frames.push_back(std::move(decoded));
                if (profileEnabled)
                    MpegProfile::add(MpegProfile::convertNs, elapsedNs(profileStart));
                return true;
            }

            AVCodecParserContext *m_parser = nullptr;
            AVCodecContext *m_codecCtx = nullptr;
            AVFrame *m_frame = nullptr;
            AVPacket *m_packet = nullptr;
            SwsContext *m_swsCtx = nullptr;
            int m_swsWidth = 0;
            int m_swsHeight = 0;
            AVPixelFormat m_swsFormat = AV_PIX_FMT_NONE;
            bool m_initialized = false;
            bool m_drained = false;
        };
#else
        // TODO
        class MpegFfmpegDecoder
        {
        public:
            bool feed(const uint8_t *, size_t, std::deque<MpegDecodedFrame> &, int64_t = -1, int64_t = -1)
            {
                static bool s_warnedNoFfmpeg = false;
                if (!s_warnedNoFfmpeg)
                {
                    std::cerr << "[MPEG] runtime built without FFmpeg; MPEG video decode is disabled." << std::endl;
                    s_warnedNoFfmpeg = true;
                }
                return false;
            }

            bool flush(std::deque<MpegDecodedFrame> &)
            {
                return true;
            }

            void reset() {}
        };
#endif

        struct MpegRegisteredCallback
        {
            uint32_t type = 0u;
            uint32_t streamId = 0u;
            uint32_t func = 0u;
            uint32_t data = 0u;
            uint32_t handle = 0u;
            bool stream = false;
        };

        constexpr uint64_t kPictureClockOne = 1ull << 32u;
        // NTSC-style fields at ~59.94 Hz to keep MPEG timing yet (29.97 fps).
        constexpr uint64_t kDefaultPictureIntervalQ32 = 2ull * kPictureClockOne;
        constexpr size_t kMpegTimingScanLimit = 4096u;
        constexpr size_t kMaxDecodedPicturesAhead = 8u;

        // Video data the demux accepted while kMaxDecodedPicturesAhead pictures were already decoded: kept compressed,
        // as the console's demux keeps it in the game's ring, and decoded as the game takes pictures.
        struct MpegPendingVideo
        {
            std::vector<uint8_t> data;
            int64_t pts90k = -1;
            int64_t dts90k = -1;
        };
        constexpr size_t kMaxPendingVideoBytes = 32u << 20;

        struct MpegPlaybackState
        {
            uint32_t picturesServed = 0u;
            uint32_t width = 320u;
            uint32_t height = 240u;
            uint32_t decodeMode = 0u;
            uint32_t imageBufferAddr = 0u;
            bool sawInput = false;
            bool sawSequenceEnd = false;
            bool streamEnded = false;
            bool decoderFailed = false;
            uint64_t cdStreamGeneration = 0u;
            bool waitingForVideoSequenceHeader = true;
            std::vector<uint8_t> videoSequenceSyncBuffer;
            std::vector<uint8_t> pssBuffer;
            std::vector<uint32_t> pssGuestAddrs;
            std::deque<MpegDecodedFrame> decodedFrames;
            std::deque<MpegPendingVideo> pendingVideo;
            size_t pendingVideoBytes = 0u;
            size_t pendingVideoLimit = 0u; // the game's demux ring size (sceMpegDemuxPssRing), 0 = none given
            std::unique_ptr<MpegFfmpegDecoder> decoder;
            uint8_t frameRateCode = 0u;
            uint8_t frameRateExtensionN = 0u;
            uint8_t frameRateExtensionD = 0u;
            bool hasFrameRateExtension = false;
            std::vector<uint8_t> videoTimingScanBuffer;
            uint64_t pictureIntervalQ32 = kDefaultPictureIntervalQ32;
            uint64_t nextPictureTickQ32 = std::numeric_limits<uint64_t>::max();
            uint64_t presentationEndTickQ32 = std::numeric_limits<uint64_t>::max();
            int64_t firstPresentedPts90k = -1;
            uint64_t ptsPresentationBaseTickQ32 = 0u;
        };

        struct MpegStreamCallbackEvent
        {
            uint32_t mpegAddr = 0u;
            uint32_t streamType = 0u;
            uint32_t dataAddr = 0u;
            uint32_t len = 0u;
            uint64_t pts = 0xFFFFFFFFFFFFFFFFull;
            uint64_t dts = 0xFFFFFFFFFFFFFFFFull;
            std::vector<MpegRegisteredCallback> callbacks;
        };

        struct MpegStubState
        {
            bool initialized = false;
            uint32_t nextCallbackHandle = 1u;
            uint64_t cdStreamGeneration = 0u;
            uint64_t cdStreamBytesProduced = 0u;
            uint64_t cdStreamBytesDemuxed = 0u;
            bool cdStreamEofPending = false;
            bool currentCdStreamEofSeen = false;
            uint32_t feedEsTraceCount = 0u;
            uint32_t demuxPssTraceCount = 0u;
            uint32_t demuxRingTraceCount = 0u;
            uint32_t getPictureWaitTraceCount = 0u;
            uint32_t pictureTraceCount = 0u;
            uint32_t isEndTraceCount = 0u;
            std::unordered_map<uint32_t, std::vector<MpegRegisteredCallback>> callbacksByMpeg;
            std::unordered_map<uint32_t, MpegPlaybackState> playbackByMpeg;
        };

        std::mutex g_mpeg_stub_mutex;
        constexpr uint32_t kMpegPictureWaitType = 1u;
        MpegStubState g_mpeg_stub_state;

        // TODO this resolution should follow runtime resolution
        constexpr uint32_t kStubMovieWidth = 320u;
        constexpr uint32_t kStubMovieHeight = 240u;
        constexpr uint32_t kMpegStrM2V = 0u;
        constexpr uint32_t kMpegStrPCM = 1u;
        constexpr uint32_t kMpegStrADPCM = 2u;
        constexpr uint8_t kMpegPackHeader = 0xBAu;
        constexpr uint8_t kMpegSystemHeader = 0xBBu;
        constexpr uint8_t kMpegProgramEnd = 0xB9u;
        constexpr uint8_t kMpegSequenceEnd = 0xB7u;
        constexpr uint8_t kMpegPrivateStream1 = 0xBDu;
        constexpr size_t kStartCodeNotFound = std::numeric_limits<size_t>::max();
        constexpr uint32_t kMpegCallbackDataSize = 0x20u;

        uint64_t mpegPictureIntervalQ32(uint8_t frameRateCode, uint8_t frameRateExtensionN = 0u, uint8_t frameRateExtensionD = 0u)
        {
            uint64_t frameRateNumerator = 0u;
            uint64_t frameRateDenominator = 1u;
            switch (frameRateCode)
            {
            case 1u:
                frameRateNumerator = 24000u;
                frameRateDenominator = 1001u;
                break;
            case 2u:
                frameRateNumerator = 24u;
                break;
            case 3u:
                frameRateNumerator = 25u;
                break;
            case 4u:
                frameRateNumerator = 30000u;
                frameRateDenominator = 1001u;
                break;
            case 5u:
                frameRateNumerator = 30u;
                break;
            case 6u:
                frameRateNumerator = 50u;
                break;
            case 7u:
                frameRateNumerator = 60000u;
                frameRateDenominator = 1001u;
                break;
            case 8u:
                frameRateNumerator = 60u;
                break;
            default:
                return 0u;
            }

            const uint64_t extensionNumerator = static_cast<uint64_t>(frameRateExtensionN) + 1u;
            const uint64_t extensionDenominator = static_cast<uint64_t>(frameRateExtensionD) + 1u;
            const uint64_t denominator = 1001u * frameRateNumerator * extensionNumerator;
            const uint64_t numerator = (60000u * frameRateDenominator * extensionDenominator) << 32u;
            return std::max(kPictureClockOne, (numerator + denominator / 2u) / denominator);
        }

        uint32_t readMpegBits(const uint8_t *data, size_t bitOffset, uint32_t bitCount)
        {
            uint32_t value = 0u;
            for (uint32_t bit = 0u; bit < bitCount; ++bit)
            {
                const size_t absoluteBit = bitOffset + bit;
                const uint8_t source = data[absoluteBit >> 3u];
                value = (value << 1u) | ((source >> (7u - static_cast<uint32_t>(absoluteBit & 7u))) & 1u);
            }
            return value;
        }

        void updateMpegPictureTiming(MpegPlaybackState &playback, const uint8_t *data, size_t size)
        {
            if (!data || size == 0u)
            {
                return;
            }

            playback.videoTimingScanBuffer.insert(playback.videoTimingScanBuffer.end(), data, data + size);
            if (playback.videoTimingScanBuffer.size() > kMpegTimingScanLimit)
            {
                const size_t discard = playback.videoTimingScanBuffer.size() - kMpegTimingScanLimit;
                playback.videoTimingScanBuffer.erase(playback.videoTimingScanBuffer.begin(), playback.videoTimingScanBuffer.begin() + static_cast<std::ptrdiff_t>(discard));
            }

            const std::vector<uint8_t> &buffer = playback.videoTimingScanBuffer;
            size_t lastSequenceHeader = kStartCodeNotFound;
            for (size_t i = 0u; i + 7u < buffer.size(); ++i)
            {
                if (buffer[i + 0u] == 0x00u &&
                    buffer[i + 1u] == 0x00u &&
                    buffer[i + 2u] == 0x01u &&
                    buffer[i + 3u] == 0xB3u)
                {
                    const uint8_t frameRateCode = buffer[i + 7u] & 0x0Fu;
                    if (mpegPictureIntervalQ32(frameRateCode) != 0u)
                    {
                        lastSequenceHeader = i;
                    }
                }
            }

            if (lastSequenceHeader == kStartCodeNotFound)
            {
                return;
            }

            playback.frameRateCode = buffer[lastSequenceHeader + 7u] & 0x0Fu;
            playback.frameRateExtensionN = 0u;
            playback.frameRateExtensionD = 0u;
            playback.hasFrameRateExtension = false;
            playback.pictureIntervalQ32 = mpegPictureIntervalQ32(playback.frameRateCode);

            for (size_t i = lastSequenceHeader + 8u; i + 9u < buffer.size(); ++i)
            {
                if (buffer[i + 0u] != 0x00u ||
                    buffer[i + 1u] != 0x00u ||
                    buffer[i + 2u] != 0x01u)
                {
                    continue;
                }

                if (buffer[i + 3u] == 0xB3u)
                {
                    break;
                }
                if (buffer[i + 3u] != 0xB5u)
                {
                    continue;
                }

                const uint8_t *extension = buffer.data() + i + 4u;
                if (readMpegBits(extension, 0u, 4u) != 1u)
                {
                    continue;
                }

                playback.frameRateExtensionN = static_cast<uint8_t>(readMpegBits(extension, 41u, 2u));
                playback.frameRateExtensionD = static_cast<uint8_t>(readMpegBits(extension, 43u, 5u));
                playback.hasFrameRateExtension = true;
                playback.pictureIntervalQ32 = mpegPictureIntervalQ32(
                    playback.frameRateCode,
                    playback.frameRateExtensionN,
                    playback.frameRateExtensionD);
                break;
            }

            if (playback.pictureIntervalQ32 == 0u)
            {
                playback.pictureIntervalQ32 = kDefaultPictureIntervalQ32;
            }
        }

        uint64_t decodedFrameIntervalQ32(const MpegPlaybackState &playback,
                                         const MpegDecodedFrame &frame)
        {
            const uint64_t base = playback.pictureIntervalQ32 != 0u
                                      ? playback.pictureIntervalQ32
                                      : kDefaultPictureIntervalQ32;
            const uint64_t fields = static_cast<uint64_t>(2 + std::max(0, frame.repeatPict));
            return std::max(kPictureClockOne, (base * fields + 1u) / 2u);
        }

        constexpr uint64_t kMpegPtsWrap = 1ull << 33u;
        constexpr uint64_t kMpegPtsHalfWrap = 1ull << 32u;

        int64_t mpegPtsDelta90k(int64_t fromPts, int64_t toPts)
        {
            if (fromPts < 0 || toPts < 0)
            {
                return 0;
            }

            uint64_t from = static_cast<uint64_t>(fromPts) & (kMpegPtsWrap - 1u);
            uint64_t to = static_cast<uint64_t>(toPts) & (kMpegPtsWrap - 1u);
            uint64_t delta = (to - from) & (kMpegPtsWrap - 1u);
            if (delta >= kMpegPtsHalfWrap)
            {
                return -static_cast<int64_t>(kMpegPtsWrap - delta);
            }
            return static_cast<int64_t>(delta);
        }

        uint64_t mpegPtsDeltaToVSyncQ32(uint64_t delta90k)
        {
            // 90 kHz MPEG clock -> NTSC field clock (60000/1001 Hz):
            // fields = pts * 60000 / (90000 * 1001) = pts * 2 / 3003.
            constexpr uint64_t kPtsDivisor = 3003u;
            const uint64_t whole = delta90k / kPtsDivisor;
            const uint64_t remainder = delta90k % kPtsDivisor;
            const uint64_t wholeQ32 = whole * 2u * kPictureClockOne;
            const uint64_t remainderQ32 = ((remainder * 2u * kPictureClockOne) + kPtsDivisor / 2u) / kPtsDivisor;
            return wholeQ32 + remainderQ32;
        }

        uint64_t presentationTickForFrame(MpegPlaybackState &playback, const MpegDecodedFrame &frame, uint64_t currentTickQ32)
        {
            if (frame.pts90k < 0)
            {
                if (playback.nextPictureTickQ32 == std::numeric_limits<uint64_t>::max())
                {
                    playback.nextPictureTickQ32 = currentTickQ32;
                }
                return playback.nextPictureTickQ32;
            }

            if (playback.firstPresentedPts90k < 0)
            {
                playback.firstPresentedPts90k = frame.pts90k;
                playback.ptsPresentationBaseTickQ32 = currentTickQ32;
                return currentTickQ32;
            }

            const int64_t delta = mpegPtsDelta90k(playback.firstPresentedPts90k, frame.pts90k);
            if (delta >= 0)
            {
                return playback.ptsPresentationBaseTickQ32 + mpegPtsDeltaToVSyncQ32(static_cast<uint64_t>(delta));
            }

            const uint64_t backwards = mpegPtsDeltaToVSyncQ32(static_cast<uint64_t>(-delta));
            return playback.ptsPresentationBaseTickQ32 > backwards
                       ? playback.ptsPresentationBaseTickQ32 - backwards
                       : 0u;
        }

        uint32_t align16(uint32_t value)
        {
            return (value + 15u) & ~15u;
        }

        uint32_t readStackArg(uint8_t *rdram, R5900Context *ctx, uint32_t offset)
        {
            if (!rdram || !ctx)
            {
                return 0u;
            }
            return FAST_READ32(getRegU32(ctx, 29) + offset);
        }

        uint32_t readAbiArg4(uint8_t *rdram, R5900Context *ctx)
        {
            const uint32_t regArg = getRegU32(ctx, 8);
            if (regArg != 0u)
            {
                return regArg;
            }
            return readStackArg(rdram, ctx, 0x10u);
        }

        MpegPlaybackState &getPlaybackState(uint32_t mpegAddr)
        {
            return g_mpeg_stub_state.playbackByMpeg[mpegAddr];
        }

        MpegPlaybackState makeFreshPlaybackState()
        {
            MpegPlaybackState playback{};
            playback.cdStreamGeneration = g_mpeg_stub_state.cdStreamGeneration;
            return playback;
        }

        MpegPlaybackState makeFreshPlaybackStatePreservingConfig(const MpegPlaybackState &oldPlayback)
        {
            MpegPlaybackState playback = makeFreshPlaybackState();
            playback.decodeMode = oldPlayback.decodeMode;
            playback.imageBufferAddr = oldPlayback.imageBufferAddr;
            playback.width = oldPlayback.width;
            playback.height = oldPlayback.height;
            return playback;
        }

        uint16_t readBe16(const uint8_t *p)
        {
            return static_cast<uint16_t>((static_cast<uint16_t>(p[0]) << 8u) | static_cast<uint16_t>(p[1]));
        }

        bool isVideoStreamId(uint8_t streamId)
        {
            return streamId >= 0xE0u && streamId <= 0xEFu;
        }

        bool isAudioStreamId(uint8_t streamId)
        {
            return streamId == kMpegPrivateStream1 || (streamId >= 0xC0u && streamId <= 0xDFu);
        }

        bool isLengthPrefixedHeader(uint8_t streamId)
        {
            switch (streamId)
            {
            case kMpegSystemHeader:
            case 0xBCu: // program_stream_map
            case 0xBEu: // padding_stream
            case 0xBFu: // private_stream_2
            case 0xF0u: // ECM
            case 0xF1u: // EMM
            case 0xF2u: // DSMCC
            case 0xF8u: // ITU-T H.222.1 type E
            case 0xFFu: // program_stream_directory
                return true;
            default:
                return false;
            }
        }

        size_t findStartCode(const std::vector<uint8_t> &buffer, size_t from)
        {
            if (buffer.size() < 4 || from >= buffer.size() - 3u)
            {
                return kStartCodeNotFound;
            }

            for (size_t i = from; i + 3u < buffer.size(); ++i)
            {
                if (buffer[i] == 0x00u && buffer[i + 1u] == 0x00u && buffer[i + 2u] == 0x01u)
                {
                    return i;
                }
            }
            return kStartCodeNotFound;
        }

        bool containsMpegSequenceEnd(const uint8_t *data, size_t size)
        {
            if (!data || size < 4)
            {
                return false;
            }

            for (size_t i = 0; i + 3u < size; ++i)
            {
                if (data[i] == 0x00u &&
                    data[i + 1u] == 0x00u &&
                    data[i + 2u] == 0x01u &&
                    data[i + 3u] == kMpegSequenceEnd)
                {
                    return true;
                }
            }
            return false;
        }

        size_t findMpegSequenceHeader(const uint8_t *data, size_t size)
        {
            if (!data || size < 8u)
            {
                return kStartCodeNotFound;
            }

            for (size_t i = 0; i + 7u < size; ++i)
            {
                if (data[i] == 0x00u &&
                    data[i + 1u] == 0x00u &&
                    data[i + 2u] == 0x01u &&
                    data[i + 3u] == 0xB3u)
                {
                    const uint32_t width = (static_cast<uint32_t>(data[i + 4u]) << 4u) |
                                           (static_cast<uint32_t>(data[i + 5u]) >> 4u);
                    const uint32_t height = ((static_cast<uint32_t>(data[i + 5u]) & 0x0Fu) << 8u) |
                                            static_cast<uint32_t>(data[i + 6u]);
                    const uint8_t frameRateCode = data[i + 7u] & 0x0Fu;
                    if (width != 0u && height != 0u && width <= 4096u && height <= 4096u &&
                        mpegPictureIntervalQ32(frameRateCode) != 0u)
                    {
                        return i;
                    }
                }
            }
            return kStartCodeNotFound;
        }

        struct MpegPesHeader
        {
            size_t payloadOffset = 0u;
            int64_t pts90k = -1;
            int64_t dts90k = -1;
        };

        int64_t decodePesTimestamp90k(const uint8_t *p, size_t remaining)
        {
            if (!p || remaining < 5u)
            {
                return -1;
            }

            const uint64_t value =
                (static_cast<uint64_t>((p[0] >> 1u) & 0x07u) << 30u) |
                (static_cast<uint64_t>(p[1]) << 22u) |
                (static_cast<uint64_t>((p[2] >> 1u) & 0x7Fu) << 15u) |
                (static_cast<uint64_t>(p[3]) << 7u) |
                static_cast<uint64_t>((p[4] >> 1u) & 0x7Fu);
            return static_cast<int64_t>(value & (kMpegPtsWrap - 1u));
        }

        MpegPesHeader parsePesHeader(const uint8_t *packet, size_t packetSize)
        {
            MpegPesHeader result{};
            result.payloadOffset = packetSize;
            if (!packet || packetSize <= 6u)
            {
                return result;
            }

            size_t pos = 6u;
            if (packetSize >= 9u && (packet[pos] & 0xC0u) == 0x80u)
            {
                const uint8_t ptsDtsFlags = packet[pos + 1u] & 0xC0u;
                const size_t headerDataLength = static_cast<size_t>(packet[pos + 2u]);
                const size_t optionalStart = 9u;
                const size_t optionalEnd = std::min(packetSize, optionalStart + headerDataLength);
                if ((ptsDtsFlags == 0x80u || ptsDtsFlags == 0xC0u) && optionalEnd >= optionalStart + 5u)
                {
                    result.pts90k = decodePesTimestamp90k(packet + optionalStart, optionalEnd - optionalStart);
                }
                if (ptsDtsFlags == 0xC0u && optionalEnd >= optionalStart + 10u)
                {
                    result.dts90k = decodePesTimestamp90k(packet + optionalStart + 5u, optionalEnd - optionalStart - 5u);
                }
                result.payloadOffset = optionalEnd;
                return result;
            }

            // MPEG-1 PES.
            while (pos < packetSize && packet[pos] == 0xFFu)
            {
                ++pos;
            }
            if (pos + 1u < packetSize && (packet[pos] & 0xC0u) == 0x40u)
            {
                pos += 2u;
            }
            if (pos >= packetSize)
            {
                return result;
            }

            const uint8_t marker = packet[pos] & 0xF0u;
            if (marker == 0x20u && pos + 5u <= packetSize)
            {
                result.pts90k = decodePesTimestamp90k(packet + pos, packetSize - pos);
                pos += 5u;
            }
            else if (marker == 0x30u && pos + 10u <= packetSize)
            {
                result.pts90k = decodePesTimestamp90k(packet + pos, packetSize - pos);
                result.dts90k = decodePesTimestamp90k(packet + pos + 5u, packetSize - pos - 5u);
                pos += 10u;
            }
            else if (packet[pos] == 0x0Fu)
            {
                ++pos;
            }

            result.payloadOffset = std::min(packetSize, pos);
            return result;
        }

        void flushDecoderIfEnded(MpegPlaybackState &playback)
        {
            if (playback.streamEnded && playback.decoder)
            {
                playback.decoder->flush(playback.decodedFrames);
            }
        }

        void feedElementaryStream(MpegPlaybackState &playback, const uint8_t *data, size_t size, int64_t pts90k = -1, int64_t dts90k = -1)
        {
            if (!data || size == 0)
            {
                return;
            }

            const uint32_t feedEsIdx = g_mpeg_stub_state.feedEsTraceCount++;
            if (feedEsIdx < 32u)
            {
                PS2_IF_AGRESSIVE_LOGS({
                    char hexBuf[16] = {};
                    for (size_t i = 0; i < std::min<size_t>(4u, size); ++i)
                    {
                        ::snprintf(hexBuf + i * 2, 3, "%02x", data[i]);
                    }
                    std::cerr << "[MPEG:feedES] #" << feedEsIdx
                              << " size=" << size
                              << " first4=" << hexBuf
                              << " decoderFailed=" << playback.decoderFailed
                              << " waitSeq=" << playback.waitingForVideoSequenceHeader
                              << std::endl;
                });
            }

            playback.sawInput = true;
            // Diagnostic: PS2X_MPEG_ES_DUMP=<file> appends the video elementary stream as demuxed.
            if (static const char *esDumpPath = std::getenv("PS2X_MPEG_ES_DUMP"); esDumpPath && esDumpPath[0])
            {
                if (FILE *f = std::fopen(esDumpPath, "ab"))
                {
                    std::fwrite(data, 1, size, f);
                    std::fclose(f);
                }
            }
            updateMpegPictureTiming(playback, data, size);
            if (playback.waitingForVideoSequenceHeader)
            {
                playback.videoSequenceSyncBuffer.insert(
                    playback.videoSequenceSyncBuffer.end(),
                    data,
                    data + size);

                constexpr size_t kMaxVideoSequenceSyncBytes = 2u * 1024u * 1024u;
                if (playback.videoSequenceSyncBuffer.size() > kMaxVideoSequenceSyncBytes)
                {
                    const size_t keepFrom = playback.videoSequenceSyncBuffer.size() - 3u;
                    playback.videoSequenceSyncBuffer.erase(
                        playback.videoSequenceSyncBuffer.begin(),
                        playback.videoSequenceSyncBuffer.begin() + static_cast<std::ptrdiff_t>(keepFrom));
                }

                const size_t sequenceHeader = findMpegSequenceHeader(
                    playback.videoSequenceSyncBuffer.data(),
                    playback.videoSequenceSyncBuffer.size());
                if (sequenceHeader == kStartCodeNotFound)
                {
                    return;
                }

                if (sequenceHeader != 0u)
                {
                    playback.videoSequenceSyncBuffer.erase(
                        playback.videoSequenceSyncBuffer.begin(),
                        playback.videoSequenceSyncBuffer.begin() + static_cast<std::ptrdiff_t>(sequenceHeader));
                }

                data = playback.videoSequenceSyncBuffer.data();
                size = playback.videoSequenceSyncBuffer.size();
                if (playback.pictureIntervalQ32 == 0u)
                {
                    playback.pictureIntervalQ32 = kDefaultPictureIntervalQ32;
                }
                playback.nextPictureTickQ32 = std::numeric_limits<uint64_t>::max();
                playback.presentationEndTickQ32 = std::numeric_limits<uint64_t>::max();
                playback.firstPresentedPts90k = -1;
                playback.ptsPresentationBaseTickQ32 = 0u;
                playback.waitingForVideoSequenceHeader = false;
                playback.decoderFailed = false;
                playback.decoder.reset();
                playback.decodedFrames.clear();
            }

            if (containsMpegSequenceEnd(data, size))
            {
                playback.sawSequenceEnd = true;
                playback.cdStreamGeneration = g_mpeg_stub_state.cdStreamGeneration;
            }

            if (!playback.decoder)
            {
                playback.decoder = std::make_unique<MpegFfmpegDecoder>();
            }

            if (!playback.decoder->feed(data, size, playback.decodedFrames, pts90k, dts90k))
            {
                playback.decoder.reset();
                playback.waitingForVideoSequenceHeader = true;
                playback.videoSequenceSyncBuffer.clear();
                playback.decoderFailed = false;
                return;
            }

            playback.videoSequenceSyncBuffer.clear();
            flushDecoderIfEnded(playback);
        }

        void erasePssPrefix(MpegPlaybackState &playback, size_t count)
        {
            std::vector<uint8_t> &buffer = playback.pssBuffer;
            std::vector<uint32_t> &guestAddrs = playback.pssGuestAddrs;
            const size_t clamped = std::min(count, buffer.size());
            if (clamped == 0u)
            {
                return;
            }

            buffer.erase(buffer.begin(), buffer.begin() + static_cast<std::ptrdiff_t>(clamped));
            if (guestAddrs.size() >= clamped)
            {
                guestAddrs.erase(guestAddrs.begin(), guestAddrs.begin() + static_cast<std::ptrdiff_t>(clamped));
            }
            else
            {
                guestAddrs.clear();
            }
        }

        std::vector<MpegRegisteredCallback> matchingStreamCallbacks(uint32_t mpegAddr, uint32_t streamType)
        {
            std::vector<MpegRegisteredCallback> out;
            auto it = g_mpeg_stub_state.callbacksByMpeg.find(mpegAddr);
            if (it == g_mpeg_stub_state.callbacksByMpeg.end())
            {
                return out;
            }

            for (const MpegRegisteredCallback &callback : it->second)
            {
                if (callback.stream && callback.type == streamType)
                {
                    out.push_back(callback);
                }
            }
            return out;
        }

        // Stream data handed to the game's callbacks must be the packet's bytes in guest memory. A packet that began in
        // the previous demux call lies in a buffer the game has since refilled (Silent Hill Origins reads every 16 KB
        // chunk into the same buffer), so its recorded address points at other data: the menu music came out as noise.
        // Then the bytes are staged in a runtime-owned guest area, as libmpeg's own demux buffer does on the console.
        uint8_t *g_mpegRdram = nullptr;
        PS2Runtime *g_mpegRuntime = nullptr;
        uint32_t g_mpegStage = 0u, g_mpegStagePos = 0u;
        constexpr uint32_t kMpegStageSize = 0x20000u; // from the 256 KB runtime scratch arena; larger than the retry bound below

        uint32_t stableCallbackAddr(const uint8_t *data, uint32_t len, uint32_t guestAddr)
        {
            if (!g_mpegRdram || len == 0u)
                return guestAddr;
            const uint32_t phys = guestAddr & PS2_RAM_MASK;
            (void)phys; // always staged: a refused packet is offered again after the game has reused its read buffer
            if (g_mpegStage == 0u && g_mpegRuntime)
                g_mpegStage = g_mpegRuntime->runtimeScratchAlloc(kMpegStageSize, 64u);
            if (g_mpegStage == 0u || len > kMpegStageSize)
            {
                static bool warned = false;
                if (!warned)
                {
                    warned = true;
                    std::fprintf(stderr, "[mpeg] no guest staging area: refused stream packets may be lost\n");
                }
                return guestAddr;
            }
            if (g_mpegStagePos + len > kMpegStageSize)
                g_mpegStagePos = 0u;
            const uint32_t addr = g_mpegStage + g_mpegStagePos;
            std::memcpy(g_mpegRdram + (addr & PS2_RAM_MASK), data, len);
            g_mpegStagePos = (g_mpegStagePos + len + 15u) & ~15u;
            return addr;
        }

        // 16-bit PCM in a PSS stream reaches the SPU2 as little-endian. Some of Silent Hill Origins' movies (the French
        // logo, LOGOWF.PSS) carry it big-endian, which plays as hiss although the console plays them clean. The order
        // is decided per CD stream from the first audio packet (the reading whose consecutive samples differ least is
        // the signal) and a big-endian stream is swapped byte pair by byte pair across packets; packets carry an odd
        // number of bytes, so a byte may be held back for the next one (the total delivered is unchanged).
        // The 4-byte sub-stream header (0xFF 0xA0 0x00 0x00) is passed through. PS2X_MPEG_PCM_ORDER=le|be forces it.
        struct PcmOrderState
        {
            uint64_t generation = ~0ull;
            int bigEndian = -1; // -1 undecided
            bool carrying = false;
            uint8_t carry = 0u;
        };
        PcmOrderState g_pcmOrder;

        double pcmRoughness(const uint8_t *p, size_t n, bool bigEndian)
        {
            double sum = 0.0, diff = 0.0;
            int prev = 0;
            size_t count = 0;
            for (size_t i = 0; i + 1 < n; i += 2, ++count)
            {
                const int v = static_cast<int16_t>(bigEndian ? (p[i] << 8 | p[i + 1]) : (p[i + 1] << 8 | p[i]));
                sum += double(v) * v;
                if (count)
                    diff += double(v - prev) * (v - prev);
                prev = v;
            }
            return sum > 0.0 ? diff / sum : 0.0;
        }

        const std::vector<uint8_t> &streamPcmInHostOrder(const uint8_t *packet, size_t size, std::vector<uint8_t> &out)
        {
            out.assign(packet, packet + size);
            if (size <= 4u)
                return out;
            PcmOrderState &st = g_pcmOrder;
            if (st.generation != g_mpeg_stub_state.cdStreamGeneration)
                st = PcmOrderState{g_mpeg_stub_state.cdStreamGeneration};
            if (st.bigEndian < 0)
            {
                static const char *forced = std::getenv("PS2X_MPEG_PCM_ORDER");
                if (forced && forced[0])
                    st.bigEndian = forced[0] == 'b' ? 1 : 0;
                else
                {
                    const uint8_t *pcm = packet + 4u;
                    const size_t n = std::min<size_t>(size - 4u, 2048u) & ~size_t(1);
                    const double le = pcmRoughness(pcm, n, false), be = pcmRoughness(pcm, n, true);
                    st.bigEndian = (be * 2.0 < le) ? 1 : 0;
                    if (std::getenv("PS2X_MPEG_TRACE"))
                        std::fprintf(stderr, "[mpeg-pcm] gen=%llu byte order %s (roughness le=%.2f be=%.2f)\n",
                                     (unsigned long long)st.generation, st.bigEndian ? "big-endian: swapped" : "little-endian", le, be);
                }
            }
            if (!st.bigEndian)
                return out;
            std::vector<uint8_t> stream;
            stream.reserve(size + 1u);
            if (st.carrying)
                stream.push_back(st.carry);
            stream.insert(stream.end(), packet + 4u, packet + size);
            const size_t even = stream.size() & ~size_t(1);
            for (size_t i = 0; i < even; i += 2)
                std::swap(stream[i], stream[i + 1]);
            st.carrying = (stream.size() & 1u) != 0u;
            if (st.carrying)
                st.carry = stream.back();
            out.assign(packet, packet + 4u);
            out.insert(out.end(), stream.begin(), stream.begin() + static_cast<std::ptrdiff_t>(even));
            return out;
        }

        void queueStreamCallbackEvent(uint32_t mpegAddr,
                                      uint32_t streamType,
                                      uint32_t dataAddr,
                                      uint32_t len,
                                      std::vector<MpegStreamCallbackEvent> &callbackEvents,
                                      int64_t pts90k = -1,
                                      int64_t dts90k = -1)
        {
            MpegStreamCallbackEvent event{};
            event.mpegAddr = mpegAddr;
            event.streamType = streamType;
            event.dataAddr = dataAddr;
            event.len = len;
            event.pts = pts90k >= 0 ? static_cast<uint64_t>(pts90k) : 0xFFFFFFFFFFFFFFFFull;
            event.dts = dts90k >= 0 ? static_cast<uint64_t>(dts90k) : 0xFFFFFFFFFFFFFFFFull;
            event.callbacks = matchingStreamCallbacks(mpegAddr, streamType);
            if (!event.callbacks.empty())
            {
                callbackEvents.push_back(std::move(event));
            }
        }

        // Video from the demux, kept compressed until the game asks for pictures.
        void feedDemuxedVideo(MpegPlaybackState &playback, const uint8_t *data, size_t size, int64_t pts90k, int64_t dts90k)
        {
            if (playback.pendingVideo.empty())
            {
                feedElementaryStream(playback, data, size, pts90k, dts90k);
                return;
            }
            playback.pendingVideo.push_back(MpegPendingVideo{std::vector<uint8_t>(data, data + size), pts90k, dts90k});
            playback.pendingVideoBytes += size;
        }

        // Decodes kept video until `pictures` are waiting (or nothing is kept).
        void decodePendingVideo(MpegPlaybackState &playback, size_t pictures)
        {
            while (!playback.pendingVideo.empty() && playback.decodedFrames.size() < pictures)
            {
                MpegPendingVideo next = std::move(playback.pendingVideo.front());
                playback.pendingVideo.pop_front();
                playback.pendingVideoBytes -= next.data.size();
                feedElementaryStream(playback, next.data.data(), next.data.size(), next.pts90k, next.dts90k);
            }
        }

        // Set once a program stream has delivered video through sceMpegDemuxPss/Ring. Such games
        // also copy the same elementary stream into their own ring and DMA it to the IPU; the
        // decoder must then take it from one source only, or it sees the picture data twice,
        // interleaved at arbitrary offsets.
        bool g_pssDemuxFeedsDecoder = false;

        void processPssBuffer(uint32_t mpegAddr,
                              MpegPlaybackState &playback,
                              std::vector<MpegStreamCallbackEvent> &callbackEvents,
                              bool finalChunk = false)
        {
            std::vector<uint8_t> &buffer = playback.pssBuffer;

            while (true)
            {
                if (playback.streamEnded)
                {
                    erasePssPrefix(playback, buffer.size());
                    return;
                }

                const size_t start = findStartCode(buffer, 0u);
                if (start == kStartCodeNotFound)
                {
                    if (finalChunk)
                    {
                        erasePssPrefix(playback, buffer.size());
                        return;
                    }
                    if (buffer.size() > 3u)
                    {
                        erasePssPrefix(playback, buffer.size() - 3u);
                    }
                    return;
                }

                if (start > 0u)
                {
                    erasePssPrefix(playback, start);
                }

                if (buffer.size() < 4u)
                {
                    return;
                }

                const uint8_t streamId = buffer[3u];

                if (streamId == kMpegProgramEnd)
                {
                    if (std::getenv("PS2X_MPEG_TRACE") != nullptr)
                        std::fprintf(stderr, "[mpeg-eof] program end code in the stream (gen=%llu)\n",
                                     (unsigned long long)g_mpeg_stub_state.cdStreamGeneration);
                    playback.streamEnded = true;
                    playback.cdStreamGeneration = g_mpeg_stub_state.cdStreamGeneration;
                    flushDecoderIfEnded(playback);
                    erasePssPrefix(playback, buffer.size());
                    return;
                }

                if (streamId == kMpegPackHeader)
                {
                    if (buffer.size() < 12u)
                    {
                        if (finalChunk)
                        {
                            erasePssPrefix(playback, buffer.size());
                        }
                        return;
                    }

                    size_t packSize = 12u;
                    if ((buffer[4u] & 0xC0u) == 0x40u)
                    {
                        if (buffer.size() < 14u)
                        {
                            if (finalChunk)
                            {
                                erasePssPrefix(playback, buffer.size());
                            }
                            return;
                        }
                        packSize = 14u + static_cast<size_t>(buffer[13u] & 0x07u);
                    }
                    if (buffer.size() < packSize)
                    {
                        if (finalChunk)
                        {
                            erasePssPrefix(playback, buffer.size());
                        }
                        return;
                    }
                    erasePssPrefix(playback, packSize);
                    continue;
                }

                if (buffer.size() < 6u)
                {
                    if (finalChunk)
                    {
                        erasePssPrefix(playback, buffer.size());
                    }
                    return;
                }

                const uint16_t packetLength = readBe16(buffer.data() + 4u);
                if (isLengthPrefixedHeader(streamId))
                {
                    const size_t packetEnd = 6u + static_cast<size_t>(packetLength);
                    if (buffer.size() < packetEnd)
                    {
                        if (finalChunk)
                        {
                            erasePssPrefix(playback, buffer.size());
                        }
                        return;
                    }
                    erasePssPrefix(playback, packetEnd);
                    continue;
                }

                size_t packetEnd = 0u;
                if (packetLength != 0u)
                {
                    packetEnd = 6u + static_cast<size_t>(packetLength);
                    if (buffer.size() < packetEnd)
                    {
                        if (!finalChunk)
                        {
                            return;
                        }
                        packetEnd = buffer.size();
                    }
                }
                else
                {
                    const size_t next = findStartCode(buffer, 6u);
                    if (next == kStartCodeNotFound)
                    {
                        if (!finalChunk)
                        {
                            return;
                        }
                        packetEnd = buffer.size();
                    }
                    else
                    {
                        packetEnd = next;
                    }
                }

                if (isVideoStreamId(streamId))
                {
                    const MpegPesHeader pes = parsePesHeader(buffer.data(), packetEnd);
                    const size_t payloadStart = pes.payloadOffset;
                    if (payloadStart < packetEnd)
                    {
                        if (payloadStart < playback.pssGuestAddrs.size())
                        {
                            queueStreamCallbackEvent(
                                mpegAddr,
                                kMpegStrM2V,
                                stableCallbackAddr(buffer.data() + payloadStart, static_cast<uint32_t>(packetEnd - payloadStart),
                                                   playback.pssGuestAddrs[payloadStart]),
                                static_cast<uint32_t>(packetEnd - payloadStart),
                                callbackEvents,
                                pes.pts90k,
                                pes.dts90k);
                        }
                        // A game with its own M2V callback copies the video into its ring and DMAs it to the IPU
                        // (Silent Hill Origins): the decoder then takes the video from that DMA only, and the ring drains
                        // as pictures are decoded; its callback refusing data is what paces the demux.
                        if (matchingStreamCallbacks(mpegAddr, kMpegStrM2V).empty())
                        {
                            g_pssDemuxFeedsDecoder = true;
                        feedDemuxedVideo(
                            playback,
                            buffer.data() + payloadStart,
                            packetEnd - payloadStart,
                            pes.pts90k,
                            pes.dts90k);
                        }
                    }
                }
                else if (isAudioStreamId(streamId))
                {
                    const MpegPesHeader pes = parsePesHeader(buffer.data(), packetEnd);
                    const size_t payloadStart = pes.payloadOffset;
                    if (payloadStart < packetEnd && payloadStart < playback.pssGuestAddrs.size())
                    {
                        std::vector<uint8_t> audio;
                        const std::vector<uint8_t> &packet = streamPcmInHostOrder(buffer.data() + payloadStart, packetEnd - payloadStart, audio);
                        const uint32_t audioLen = static_cast<uint32_t>(packet.size());
                        const uint32_t audioAddr = stableCallbackAddr(packet.data(), audioLen, playback.pssGuestAddrs[payloadStart]);
                        queueStreamCallbackEvent(mpegAddr, kMpegStrPCM, audioAddr, audioLen, callbackEvents, pes.pts90k, pes.dts90k);
                        queueStreamCallbackEvent(mpegAddr, kMpegStrADPCM, audioAddr, audioLen, callbackEvents, pes.pts90k, pes.dts90k);
                    }
                }

                erasePssPrefix(playback, packetEnd);
            }
        }

        void finishPlaybackStream(uint32_t mpegAddr, MpegPlaybackState &playback)
        {
            std::vector<MpegStreamCallbackEvent> ignoredCallbacks;
            processPssBuffer(mpegAddr, playback, ignoredCallbacks, true);
            decodePendingVideo(playback, std::numeric_limits<size_t>::max());
            playback.streamEnded = true;
            playback.cdStreamGeneration = g_mpeg_stub_state.cdStreamGeneration;
            flushDecoderIfEnded(playback);
        }

        void finalizeCdStreamEofUnlocked(std::vector<uint32_t> &completedMpegIds, bool &changed)
        {
            if (std::getenv("PS2X_MPEG_TRACE") != nullptr)
                std::fprintf(stderr, "[mpeg-eof] CD stream end accepted: gen=%llu produced=%llu demuxed=%llu\n",
                             (unsigned long long)g_mpeg_stub_state.cdStreamGeneration,
                             (unsigned long long)g_mpeg_stub_state.cdStreamBytesProduced,
                             (unsigned long long)g_mpeg_stub_state.cdStreamBytesDemuxed);
            g_mpeg_stub_state.cdStreamEofPending = false;
            g_mpeg_stub_state.currentCdStreamEofSeen = true;
            for (auto &[mpegAddr, playback] : g_mpeg_stub_state.playbackByMpeg)
            {
                completedMpegIds.push_back(mpegAddr);
                if (!playback.sawInput || playback.streamEnded)
                {
                    continue;
                }

                finishPlaybackStream(mpegAddr, playback);
                changed = true;
            }
        }

        bool mpegDemuxBackpressured(const MpegPlaybackState &playback)
        {
            // Let EOF finalization drain any tail that is already in the guest
            // ring, otherwise bound decode lead to a handful of pictures.
            //
            // Important: do not park sceMpegDemuxPss/Ring here. Code Veronica
            // explicitly wakes its video thread before every demux call and that
            // thread sleeps again after presenting one picture. A single host
            // decoder feed can enqueue more than kMaxDecodedPicturesAhead frames;
            // parking the producer then leaves the consumer asleep after draining
            // just one frame, with nobody left to issue the next WakeupThread.
            // Returning 0 bytes consumed instead leaves the guest ring intact and
            // lets the game's producer loop wake the consumer again. Backpressure
            // still propagates naturally to sceCdStRead because the ring does not
            // advance while this is true.
            // Only a runaway producer is held back: the console's demux accepts data while the game's ring has room,
            // with no regard for decoded pictures (Silent Hill Origins' cutscenes carry their sound in the same
            // stream, and refusing it ended the scene). Video beyond the decoded pictures is kept compressed.
            // Pictures decoded ahead are the producer's brake (the game's demux loop reads the disc as fast as it can;
            // on the console the stream callbacks refusing data stop it). Keeping video compressed instead removed that
            // brake: a whole FMV was read in seconds and its sound overflowed.
            return !g_mpeg_stub_state.currentCdStreamEofSeen &&
                   playback.decodedFrames.size() >= kMaxDecodedPicturesAhead;
        }

        bool mpegStreamEndedForCurrentCdStream(const MpegPlaybackState &playback)
        {
            return playback.streamEnded && playback.sawInput &&
                   playback.cdStreamGeneration == g_mpeg_stub_state.cdStreamGeneration;
        }

        void recordCdStreamBytesDemuxedUnlocked(
            size_t consumed,
            std::vector<uint32_t> &completedMpegIds,
            bool &changed)
        {
            g_mpeg_stub_state.cdStreamBytesDemuxed += consumed;
            if (g_mpeg_stub_state.cdStreamEofPending &&
                g_mpeg_stub_state.cdStreamBytesDemuxed >= g_mpeg_stub_state.cdStreamBytesProduced)
            {
                finalizeCdStreamEofUnlocked(completedMpegIds, changed);
            }
        }

        void appendPssBytes(uint32_t mpegAddr,
                            MpegPlaybackState &playback,
                            const uint8_t *data,
                            size_t size,
                            uint32_t guestAddr,
                            std::vector<MpegStreamCallbackEvent> &callbackEvents)
        {
            if (!data || size == 0)
            {
                return;
            }

            if (playback.sawInput && playback.cdStreamGeneration != g_mpeg_stub_state.cdStreamGeneration)
            {
                playback = makeFreshPlaybackState();
            }

            if (playback.streamEnded)
            {
                if (playback.cdStreamGeneration == g_mpeg_stub_state.cdStreamGeneration)
                {
                    playback.sawInput = true;
                    return;
                }

                playback = makeFreshPlaybackState();
            }

            if (!playback.sawInput)
            {
                playback.cdStreamGeneration = g_mpeg_stub_state.cdStreamGeneration;
            }
            playback.sawInput = true;

            // Diagnostic: PS2X_MPEG_PSS_DUMP=<file> appends the program stream bytes the guest handed over.
            if (static const char *pssDumpPath = std::getenv("PS2X_MPEG_PSS_DUMP"); pssDumpPath && pssDumpPath[0])
            {
                if (FILE *f = std::fopen(pssDumpPath, "ab"))
                {
                    std::fwrite(data, 1, size, f);
                    std::fclose(f);
                }
            }
            playback.pssBuffer.insert(playback.pssBuffer.end(), data, data + size);
            playback.pssGuestAddrs.reserve(playback.pssGuestAddrs.size() + size);
            for (size_t i = 0; i < size; ++i)
            {
                playback.pssGuestAddrs.push_back(guestAddr + static_cast<uint32_t>(i));
            }
            processPssBuffer(mpegAddr, playback, callbackEvents);
        }

        size_t appendGuestBytes(uint32_t mpegAddr,
                                MpegPlaybackState &playback,
                                const uint8_t *rdram,
                                uint32_t addr,
                                size_t size,
                                std::vector<MpegStreamCallbackEvent> &callbackEvents)
        {
            size_t copied = 0u;
            while (copied < size)
            {
                const uint32_t curAddr = addr + static_cast<uint32_t>(copied);
                const uint32_t offset = curAddr & PS2_RAM_MASK;
                size_t chunk = std::min<size_t>(size - copied, PS2_RAM_SIZE - offset);
                if (chunk == 0u)
                {
                    break;
                }

                const uint8_t *src = getConstMemPtr(rdram, curAddr);
                if (!src)
                {
                    break;
                }

                appendPssBytes(
                    mpegAddr,
                    playback,
                    src,
                    chunk,
                    curAddr,
                    callbackEvents);
                copied += chunk;
            }
            return copied;
        }

        size_t appendGuestRingBytes(uint32_t mpegAddr,
                                    MpegPlaybackState &playback,
                                    const uint8_t *rdram,
                                    uint32_t dataAddr,
                                    uint32_t byteCount,
                                    uint32_t ringBaseAddr,
                                    uint32_t ringSize,
                                    std::vector<MpegStreamCallbackEvent> &callbackEvents)
        {
            if (byteCount == 0u)
            {
                return 0u;
            }

            const uint32_t base = ringBaseAddr & PS2_RAM_MASK;
            const uint32_t data = dataAddr & PS2_RAM_MASK;
            if (ringBaseAddr != 0u && ringSize != 0u && ringSize <= PS2_RAM_SIZE)
            {
                const uint32_t ringOffset = (data - base) & PS2_RAM_MASK;
                if (ringOffset < ringSize)
                {
                    const uint32_t first = std::min<uint32_t>(byteCount, ringSize - ringOffset);
                    size_t copied = appendGuestBytes(
                        mpegAddr,
                        playback,
                        rdram,
                        dataAddr,
                        first,
                        callbackEvents);
                    if (copied < first)
                    {
                        return copied;
                    }

                    const uint32_t remaining = byteCount - first;
                    if (remaining != 0u)
                    {
                        copied += appendGuestBytes(
                            mpegAddr,
                            playback,
                            rdram,
                            ringBaseAddr,
                            remaining,
                            callbackEvents);
                    }
                    return copied;
                }
            }

            return appendGuestBytes(mpegAddr, playback, rdram, dataAddr, byteCount, callbackEvents);
        }

        bool writeMpegCallbackData(uint8_t *rdram, uint32_t addr, const MpegStreamCallbackEvent &event)
        {
            if (!rdram || addr == 0u)
            {
                return false;
            }

            uint8_t *data = getMemPtr(rdram, addr);
            if (!data)
            {
                return false;
            }

            std::memset(data, 0, kMpegCallbackDataSize);
            *reinterpret_cast<uint32_t *>(data + 0x00u) = event.streamType;
            *reinterpret_cast<uint32_t *>(data + 0x08u) = event.dataAddr;
            *reinterpret_cast<uint32_t *>(data + 0x0Cu) = event.len;
            *reinterpret_cast<uint64_t *>(data + 0x10u) = event.pts;
            *reinterpret_cast<uint64_t *>(data + 0x18u) = event.dts;
            return true;
        }

        void dispatchGuestStreamCallback(uint8_t *rdram,
                                         R5900Context *callerCtx,
                                         PS2Runtime *runtime,
                                         const MpegStreamCallbackEvent &event,
                                         const MpegRegisteredCallback &callback)
        {
            if (!rdram || !callerCtx || !runtime || callback.func == 0u || !runtime->hasFunction(callback.func))
            {
                return;
            }

            const uint32_t cbDataAddr = runtime->runtimeScratchAlloc(kMpegCallbackDataSize, 16u);
            if (cbDataAddr == 0u)
            {
                return;
            }
            if (!writeMpegCallbackData(rdram, cbDataAddr, event))
            {
                runtime->runtimeScratchFree(cbDataAddr);
                return;
            }

            R5900Context callbackCtx = *callerCtx;
            SET_GPR_U32(&callbackCtx, 4, event.mpegAddr);
            SET_GPR_U32(&callbackCtx, 5, cbDataAddr);
            SET_GPR_U32(&callbackCtx, 6, callback.data);
            SET_GPR_U32(&callbackCtx, 7, 0u);
            SET_GPR_U32(&callbackCtx, 29, 0u);
            SET_GPR_U32(&callbackCtx, 31, 0u);
            callbackCtx.pc = callback.func;

            GuestInvocation invocation{};
            invocation.kind = GuestInvocationKind::RpcCallback;
            invocation.context = callbackCtx;
            invocation.onComplete = [runtime, cbDataAddr](const R5900Context &, R5900Context &)
            {
                runtime->runtimeScratchFree(cbDataAddr);
            };
            runtime->eeScheduler().queueInvocation(std::move(invocation));
        }

        // Stream callbacks run one at a time, in order. A callback that returns 0 refuses the packet (its buffer is full):
        // libmpeg's demux stops there and offers the same packet again on its next call, and so does this. Dropping it
        // instead lost an odd number of bytes of Silent Hill Origins' 16-bit PCM and turned the rest of the music to hiss.
        using MpegCallbackItem = std::pair<MpegStreamCallbackEvent, MpegRegisteredCallback>;
        std::deque<MpegCallbackItem> g_mpegRetry; // refused packets, oldest first (g_mpeg_stub_mutex)
        bool g_mpegChainRunning = false;
        size_t g_mpegUndeliveredBytes = 0u; // staged packet bytes not yet accepted (in a chain or waiting to retry)

        void dispatchCallbackChain(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime,
                                   std::shared_ptr<std::vector<MpegCallbackItem>> items, size_t index)
        {
            for (; index < items->size(); ++index)
            {
                const MpegCallbackItem &item = (*items)[index];
                const MpegRegisteredCallback &callback = item.second;
                if (!rdram || !ctx || !runtime || callback.func == 0u || !runtime->hasFunction(callback.func))
                {
                    std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
                    g_mpegUndeliveredBytes -= std::min<size_t>(g_mpegUndeliveredBytes, item.first.len);
                    continue;
                }
                const uint32_t cbDataAddr = runtime->runtimeScratchAlloc(kMpegCallbackDataSize, 16u);
                if (cbDataAddr == 0u)
                    continue;
                if (!writeMpegCallbackData(rdram, cbDataAddr, item.first))
                {
                    runtime->runtimeScratchFree(cbDataAddr);
                    continue;
                }
                R5900Context callbackCtx = *ctx;
                SET_GPR_U32(&callbackCtx, 4, item.first.mpegAddr);
                SET_GPR_U32(&callbackCtx, 5, cbDataAddr);
                SET_GPR_U32(&callbackCtx, 6, callback.data);
                SET_GPR_U32(&callbackCtx, 7, 0u);
                SET_GPR_U32(&callbackCtx, 29, 0u);
                SET_GPR_U32(&callbackCtx, 31, 0u);
                callbackCtx.pc = callback.func;
                GuestInvocation invocation{};
                invocation.kind = GuestInvocationKind::RpcCallback;
                invocation.context = callbackCtx;
                const uint64_t generation = g_mpeg_stub_state.cdStreamGeneration;
                invocation.onComplete = [rdram, runtime, cbDataAddr, items, index, generation](const R5900Context &completed, R5900Context &parent)
                {
                    runtime->runtimeScratchFree(cbDataAddr);
                    if (static_cast<int32_t>(getRegU32(&completed, 2)) == 0)
                    {
                        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
                        if (generation != g_mpeg_stub_state.cdStreamGeneration)
                        {
                            g_mpegChainRunning = false; // a refused packet of a stream that has ended: dropped
                            return;
                        }
                        for (size_t k = items->size(); k > index; --k)
                            g_mpegRetry.push_front((*items)[k - 1]);
                        if (std::getenv("PS2X_MPEG_TRACE"))
                        {
                            static unsigned s_ref = 0;
                            if ((++s_ref % 50u) == 1u)
                                std::fprintf(stderr, "[mpeg-cb] refused #%u type=%u len=%u\n", s_ref, (*items)[index].first.streamType,
                                             (*items)[index].first.len);
                        }
                        g_mpegChainRunning = false;
                        return;
                    }
                    {
                        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
                        const size_t len = (*items)[index].first.len;
                        g_mpegUndeliveredBytes -= std::min(g_mpegUndeliveredBytes, len);
                    }
                    // PS2X_MPEG_CB_DUMP=<file>: every packet a stream callback accepted, as "type len" then the bytes.
                    static std::FILE *cbDump = []() -> std::FILE * {
                        const char *path = std::getenv("PS2X_MPEG_CB_DUMP");
                        return path ? std::fopen(path, "wb") : nullptr;
                    }();
                    if (cbDump)
                    {
                        const MpegStreamCallbackEvent &ev = (*items)[index].first;
                        const uint32_t hdr[2] = {ev.streamType, ev.len};
                        std::fwrite(hdr, sizeof(hdr), 1, cbDump);
                        std::fwrite(rdram + (ev.dataAddr & PS2_RAM_MASK), 1, ev.len, cbDump);
                    }
                    if (std::getenv("PS2X_MPEG_TRACE"))
                    {
                        static unsigned s_acc = 0;
                        if ((++s_acc % 200u) == 0u)
                            std::fprintf(stderr, "[mpeg-cb] accepted %u packets, %zu waiting for retry\n", s_acc, g_mpegRetry.size());
                    }
                    dispatchCallbackChain(rdram, &parent, runtime, items, index + 1);
                };
                runtime->eeScheduler().queueInvocation(std::move(invocation));
                return;
            }
            std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
            g_mpegChainRunning = false;
        }

        // Whether stream data must wait: packets refused earlier are still to be delivered, or a chain is running.
        // Refused packets wait in g_mpegRetry, in order, ahead of everything that arrives later; the demux keeps taking
        // data (holding it back made the game spin on the demux and never drain its sound buffer) unless that queue
        // grows past a few seconds of stream.
        bool mpegCallbacksBlockedUnlocked()
        {
            // Everything staged and not yet accepted must fit in the staging ring, or a waiting packet is overwritten
            // (it then delivers another packet's bytes: a duplicate, and an odd byte count shifts the sound).
            return g_mpegUndeliveredBytes > kMpegStageSize / 2u;
        }

        void dispatchStreamCallbacks(uint8_t *rdram,
                                     R5900Context *ctx,
                                     PS2Runtime *runtime,
                                     const std::vector<MpegStreamCallbackEvent> &events)
        {
            auto items = std::make_shared<std::vector<MpegCallbackItem>>();
            {
                std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
                if (g_mpegChainRunning)
                {
                    // A chain is delivering: everything new waits behind it, in order.
                    for (const MpegStreamCallbackEvent &event : events)
                        for (const MpegRegisteredCallback &callback : event.callbacks)
                        {
                            g_mpegRetry.emplace_back(event, callback);
                            g_mpegUndeliveredBytes += event.len;
                        }
                    return;
                }
                for (MpegCallbackItem &item : g_mpegRetry)
                    items->push_back(std::move(item));
                g_mpegRetry.clear();
                for (const MpegStreamCallbackEvent &event : events)
                    for (const MpegRegisteredCallback &callback : event.callbacks)
                    {
                        items->emplace_back(event, callback);
                        g_mpegUndeliveredBytes += event.len;
                    }
                if (items->empty())
                    return;
                g_mpegChainRunning = true;
            }
            dispatchCallbackChain(rdram, ctx, runtime, items, 0u);
        }

        void dispatchStreamCallbacksUnlocked(uint8_t *rdram,
                                             R5900Context *ctx,
                                             PS2Runtime *runtime,
                                             const std::vector<MpegStreamCallbackEvent> &events)
        {
            dispatchStreamCallbacks(rdram, ctx, runtime, events);
        }

        // ---- toIPU DMA (EE DMAC channel 4) as an HLE bitstream source -------------------
        //
        // Games that drive libmpeg directly (not through sceMpegDemuxPss) feed the IPU
        // input FIFO from a DMA chain on channel 4. With the HLE decoder there is no IPU
        // consuming that FIFO, so we pull the chain here, on demand, exactly as the IPU
        // would: advancing MADR/QWC/TADR as data is consumed and clearing CHCR.STR when
        // the chain ends. The guest's own ring-buffer bookkeeping reads those registers.
        constexpr uint32_t kD4Chcr = 0x1000B400u;
        constexpr uint32_t kD4Madr = 0x1000B410u;
        constexpr uint32_t kD4Qwc = 0x1000B420u;
        constexpr uint32_t kD4Tadr = 0x1000B430u;
        constexpr uint32_t kChcrStr = 0x100u;
        constexpr uint32_t kMpegCbNodata = 1u;

        // Trace budget per CD stream: each stream (movie, cutscene) gets its own first lines.
        bool mpegTraceBudget(unsigned &count, uint64_t &generation)
        {
            if (generation != g_mpeg_stub_state.cdStreamGeneration)
            {
                generation = g_mpeg_stub_state.cdStreamGeneration;
                count = 0u;
            }
            return count++ < 40u;
        }

        bool mpegTrace()
        {
            static const bool enabled = std::getenv("PS2X_MPEG_TRACE") != nullptr;
            return enabled;
        }

        bool toIpuDmaActive(PS2Runtime *runtime)
        {
            return (runtime->memory().readIORegister(kD4Chcr) & kChcrStr) != 0u;
        }

        // Moves up to maxBytes from the toIPU chain into the decoder. Returns bytes moved.
        size_t pullToIpuDma(uint8_t *rdram, PS2Runtime *runtime, MpegPlaybackState &playback, size_t maxBytes)
        {
            PS2Memory &mem = runtime->memory();
            uint32_t chcr = mem.readIORegister(kD4Chcr);
            if ((chcr & kChcrStr) == 0u)
                return 0u;
            uint32_t madr = mem.readIORegister(kD4Madr);
            uint32_t qwc = mem.readIORegister(kD4Qwc) & 0xFFFFu;
            uint32_t tadr = mem.readIORegister(kD4Tadr);
            const uint32_t mode = (chcr >> 2) & 3u;
            size_t moved = 0u;
            int tagsRead = 0;
            bool stop = false;

            auto feedGuest = [&](uint32_t addr, uint32_t bytes)
            {
                uint32_t done = 0u;
                while (done < bytes)
                {
                    const uint32_t cur = (addr + done) & PS2_RAM_MASK;
                    const uint32_t chunk = std::min<uint32_t>(bytes - done, PS2_RAM_SIZE - cur);
                    const uint8_t *src = getConstMemPtr(rdram, cur);
                    if (!src || chunk == 0u)
                        break;
                    if (const char *dumpPath = std::getenv("PS2X_MPEG_DUMP"))
                    {
                        // Diagnostic: append the exact bitstream handed to the decoder.
                        if (FILE *f = std::fopen(dumpPath, "ab"))
                        {
                            std::fwrite(src, 1, chunk, f);
                            std::fclose(f);
                        }
                    }
                    // The chain is still consumed so the guest's ring bookkeeping advances.
                    if (!g_pssDemuxFeedsDecoder)
                        feedElementaryStream(playback, src, chunk);
                    done += chunk;
                }
            };

            // Invariant between calls: STR set && QWC==0 means the previous block ended on a
            // non-terminal tag (or the channel was just kicked), so the next tag is fetched.
            while (!stop && moved < maxBytes)
            {
                if (qwc != 0u)
                {
                    const uint32_t budgetQw = static_cast<uint32_t>(std::max<size_t>((maxBytes - moved) / 16u, 1u));
                    const uint32_t takeQw = std::min<uint32_t>(qwc, budgetQw);
                    feedGuest(madr, takeQw * 16u);
                    madr += takeQw * 16u;
                    qwc -= takeQw;
                    moved += takeQw * 16u;
                    if (qwc != 0u)
                        break; // budget exhausted mid-block; resume here next time
                    // Block finished: normal mode ends; chain mode ends on REFE/END.
                    const uint32_t lastId = (chcr >> 28) & 7u;
                    if (mode != 1u || lastId == 0u || lastId == 7u)
                    {
                        stop = true;
                        break;
                    }
                    continue;
                }
                if (mode != 1u || ++tagsRead > 4096)
                {
                    stop = true;
                    break;
                }
                const uint8_t *tp = getConstMemPtr(rdram, tadr & PS2_RAM_MASK);
                if (!tp)
                {
                    stop = true;
                    break;
                }
                uint64_t tag;
                std::memcpy(&tag, tp, sizeof(tag));
                const uint32_t tagQwc = static_cast<uint32_t>(tag & 0xFFFFu);
                const uint32_t id = static_cast<uint32_t>((tag >> 28) & 7u);
                const uint32_t addr = static_cast<uint32_t>((tag >> 32) & 0x7FFFFFF0u);
                // CHCR[31:16] mirrors the tag's upper halfword (PCE/ID/IRQ): tag bits 16..31.
                chcr = (chcr & 0x0000FFFFu) | (static_cast<uint32_t>(tag) & 0xFFFF0000u);
                qwc = tagQwc;
                if (mpegTrace())
                {
                    static unsigned s_t = 0;
                    if (s_t++ < 20000u)
                        std::fprintf(stderr, "[mpeg-ipu] tag @0x%x id=%u addr=0x%x qwc=0x%x\n", tadr, id, addr, tagQwc);
                }
                switch (id)
                {
                case 0: // REFE
                case 3: // REF
                case 4: // REFS
                    madr = addr;
                    tadr += 16u;
                    break;
                case 1: // CNT
                    madr = tadr + 16u;
                    tadr = madr + tagQwc * 16u;
                    break;
                case 2: // NEXT
                    madr = tadr + 16u;
                    tadr = addr;
                    break;
                case 7: // END
                    madr = tadr + 16u;
                    break;
                default: // CALL/RET are not valid on toIPU
                    qwc = 0u;
                    stop = true;
                    break;
                }
                if (qwc == 0u && (id == 0u || id == 7u))
                {
                    stop = true;
                    break;
                }
            }

            mem.writeIORegister(kD4Madr, madr);
            mem.writeIORegister(kD4Qwc, qwc);
            mem.writeIORegister(kD4Tadr, tadr);
            if (stop)
                chcr &= ~kChcrStr;
            if (mpegTrace())
            {
                static unsigned s_n = 0;
                if (s_n++ < 20000u)
                    std::fprintf(stderr, "[mpeg-ipu] pull moved=%zu madr=0x%x qwc=0x%x tadr=0x%x chcr=0x%x stop=%d frames=%zu\n",
                                 moved, madr, qwc, tadr, chcr, stop ? 1 : 0, playback.decodedFrames.size());
            }
            // Channel 4 has no DMAC-side transfer handler, so storing CHCR with STR does not re-kick.
            mem.writeIORegister(kD4Chcr, chcr);
            return moved;
        }

        const MpegRegisteredCallback *findCallback(uint32_t mpegAddr, uint32_t type)
        {
            auto it = g_mpeg_stub_state.callbacksByMpeg.find(mpegAddr);
            if (it == g_mpeg_stub_state.callbacksByMpeg.end())
                return nullptr;
            for (const MpegRegisteredCallback &cb : it->second)
                if (!cb.stream && cb.type == type)
                    return &cb;
            return nullptr;
        }

        // The picture goes out as 16-pixel-wide columns of macroblocks; limitBytes is the room the caller gave
        // (sceMpegGetPicture's mbcount x 1024 bytes): nothing is written past it, whatever size the stream says.
        void writeBlankMpegFrame(uint8_t *rdram, uint32_t destAddr, uint32_t width, uint32_t height, size_t limitBytes)
        {
            if (!rdram || destAddr == 0u)
            {
                return;
            }

            const uint32_t outWidth = align16(width == 0u ? kStubMovieWidth : width);
            const uint32_t outHeight = align16(height == 0u ? kStubMovieHeight : height);
            const uint32_t macroblockColumns = outWidth / 16u;
            for (uint32_t mbx = 0u; mbx < macroblockColumns; ++mbx)
            {
                const size_t stripOffset =
                    static_cast<size_t>(mbx) * static_cast<size_t>(outHeight) * 16u * 4u;
                for (uint32_t y = 0u; y < outHeight; ++y)
                {
                    if (stripOffset + (static_cast<size_t>(y) + 1u) * 16u * 4u > limitBytes)
                        break;
                    uint8_t *dst = getMemPtr(
                        rdram,
                        destAddr + static_cast<uint32_t>(stripOffset + static_cast<size_t>(y) * 16u * 4u));
                    if (!dst)
                    {
                        continue;
                    }
                    for (uint32_t x = 0u; x < 16u; ++x)
                    {
                        dst[x * 4u + 0u] = 0u;
                        dst[x * 4u + 1u] = 0u;
                        dst[x * 4u + 2u] = 0u;
                        dst[x * 4u + 3u] = 0x80u;
                    }
                }
            }
        }

        void writeDecodedFrameToGuest(uint8_t *rdram, uint32_t destAddr, const MpegDecodedFrame &frame, size_t limitBytes)
        {
            if (!rdram || destAddr == 0u || frame.rgba.empty() || frame.width <= 0 || frame.height <= 0)
            {
                return;
            }

            const bool profileEnabled = MpegProfile::enabled();
            const auto profileStart = profileEnabled ? MpegClock::now() : MpegClock::time_point{};

            const uint32_t width = static_cast<uint32_t>(frame.width);
            const uint32_t height = static_cast<uint32_t>(frame.height);
            if (const char *dump = std::getenv("PS2X_MPEG_PIC_DUMP"))
            {
                // Diagnostic: last decoded picture (linear RGB) as PPM, plus guest address.
                if (FILE *f = std::fopen(dump, "wb"))
                {
                    std::fprintf(f, "P6\n%u %u\n255\n", width, height);
                    for (size_t i = 0; i < static_cast<size_t>(width) * height; ++i)
                        std::fwrite(frame.rgba.data() + i * 4u, 1, 3, f);
                    std::fclose(f);
                }
            }
            const uint32_t outWidth = align16(width);
            const uint32_t outHeight = align16(height);
            const uint32_t macroblockColumns = outWidth / 16u;

            for (uint32_t mbx = 0u; mbx < macroblockColumns; ++mbx)
            {
                const size_t stripOffset =
                    static_cast<size_t>(mbx) * static_cast<size_t>(outHeight) * 16u * 4u;
                for (uint32_t y = 0u; y < outHeight; ++y)
                {
                    if (stripOffset + (static_cast<size_t>(y) + 1u) * 16u * 4u > limitBytes)
                        break;
                    uint8_t *dst = getMemPtr(
                        rdram,
                        destAddr + static_cast<uint32_t>(stripOffset + static_cast<size_t>(y) * 16u * 4u));
                    if (!dst)
                    {
                        continue;
                    }

                    for (uint32_t x = 0u; x < 16u; ++x)
                    {
                        const uint32_t srcX = mbx * 16u + x;
                        const uint8_t *src = nullptr;
                        if (srcX < width && y < height)
                        {
                            src = frame.rgba.data() +
                                  (static_cast<size_t>(y) * static_cast<size_t>(width) + srcX) * 4u;
                        }

                        if (src)
                        {
                            dst[x * 4u + 0u] = src[0u];
                            dst[x * 4u + 1u] = src[1u];
                            dst[x * 4u + 2u] = src[2u];
                            dst[x * 4u + 3u] = 0x80u;
                        }
                        else
                        {
                            dst[x * 4u + 0u] = 0u;
                            dst[x * 4u + 1u] = 0u;
                            dst[x * 4u + 2u] = 0u;
                            dst[x * 4u + 3u] = 0x80u;
                        }
                    }
                }
            }
            if (profileEnabled)
                reportMpegProfileFrame(elapsedNs(profileStart));
        }

        void resetMpegStubStateUnlocked()
        {
            g_pssDemuxFeedsDecoder = false;
            g_mpeg_stub_state.initialized = false;
            g_mpeg_stub_state.nextCallbackHandle = 1u;
            g_mpeg_stub_state.cdStreamGeneration = 0u;
            g_mpeg_stub_state.cdStreamBytesProduced = 0u;
            g_mpeg_stub_state.cdStreamBytesDemuxed = 0u;
            g_mpeg_stub_state.cdStreamEofPending = false;
            g_mpeg_stub_state.currentCdStreamEofSeen = false;
            g_mpeg_stub_state.feedEsTraceCount = 0u;
            g_mpeg_stub_state.demuxPssTraceCount = 0u;
            g_mpeg_stub_state.demuxRingTraceCount = 0u;
            g_mpeg_stub_state.getPictureWaitTraceCount = 0u;
            g_mpeg_stub_state.pictureTraceCount = 0u;
            g_mpeg_stub_state.isEndTraceCount = 0u;
            g_mpeg_stub_state.callbacksByMpeg.clear();
            g_mpeg_stub_state.playbackByMpeg.clear();
        }
    }

    void resetMpegStubState()
    {
        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        resetMpegStubStateUnlocked();
    }

    void enqueueMpegDecodedFrameForTesting(uint32_t mpegAddr)
    {
        constexpr int kTestFrameWidth = 16;
        constexpr int kTestFrameHeight = 16;

        MpegDecodedFrame frame;
        frame.width = kTestFrameWidth;
        frame.height = kTestFrameHeight;
        frame.rgba.resize(static_cast<size_t>(kTestFrameWidth * kTestFrameHeight * 4), 0x80u);

        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        MpegPlaybackState &playback = getPlaybackState(mpegAddr);
        playback.sawInput = true;
        playback.decodedFrames.push_back(std::move(frame));
    }

    void notifyMpegCdStreamStart(PS2Runtime *runtime)
    {
        (void)runtime;
        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        // Each stream decides again where the decoder's data comes from. Silent Hill Origins plays its FMVs through
        // sceMpegDemuxPssRing but its cutscenes (IGC.ARC) through its own demux and DMA to the IPU; the flag left on
        // by an FMV made the cutscene's IPU data be dropped (choppy pictures, scene cut short).
        g_pssDemuxFeedsDecoder = false;
        // Packets of the previous stream still waiting for its player are dropped with it.
        g_mpegRetry.clear();
        g_mpegUndeliveredBytes = 0u;
        ++g_mpeg_stub_state.cdStreamGeneration;
        g_mpeg_stub_state.cdStreamBytesProduced = 0u;
        g_mpeg_stub_state.cdStreamBytesDemuxed = 0u;
        g_mpeg_stub_state.cdStreamEofPending = false;
        g_mpeg_stub_state.currentCdStreamEofSeen = false;
        g_mpeg_stub_state.feedEsTraceCount = 0u;
        g_mpeg_stub_state.demuxPssTraceCount = 0u;
        g_mpeg_stub_state.demuxRingTraceCount = 0u;
        g_mpeg_stub_state.getPictureWaitTraceCount = 0u;
        g_mpeg_stub_state.pictureTraceCount = 0u;
        g_mpeg_stub_state.isEndTraceCount = 0u;

        for (auto &[mpegAddr, playback] : g_mpeg_stub_state.playbackByMpeg)
        {
            playback = makeFreshPlaybackStatePreservingConfig(playback);
        }
        if (mpegTrace())
            std::fprintf(stderr, "[mpeg-stream] CD stream start: generation=%llu players=%zu\n",
                         (unsigned long long)g_mpeg_stub_state.cdStreamGeneration, g_mpeg_stub_state.playbackByMpeg.size());
        PS2_IF_AGRESSIVE_LOGS({
            std::cerr << "[MPEG:CdStreamStart] generation=" << g_mpeg_stub_state.cdStreamGeneration
                      << " reopened=" << g_mpeg_stub_state.playbackByMpeg.size() << std::endl;
        });
    }

    void notifyMpegCdStreamDataProduced(uint32_t byteCount, bool endOfStream)
    {
        if (endOfStream && mpegTrace())
            std::fprintf(stderr, "[mpeg-eof] CD read reached the stream end (bytes=%u)\n", byteCount);
        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        g_mpeg_stub_state.cdStreamBytesProduced += byteCount;
        if (endOfStream)
        {
            g_mpeg_stub_state.cdStreamEofPending = true;
        }
    }

    void notifyMpegCdStreamEof(PS2Runtime *runtime)
    {
        std::vector<uint32_t> completedMpegIds;
        bool changed = false;
        {
            std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
            finalizeCdStreamEofUnlocked(completedMpegIds, changed);
        }

        if (changed)
        {
            static uint32_t s_eofLogCount = 0u;
            if (s_eofLogCount < 8u)
            {
                PS2_IF_AGRESSIVE_LOGS({
                    std::cerr << "[MPEG:CdStreamEof] finalized active MPEG playback" << std::endl;
                });
                ++s_eofLogCount;
            }
        }
        if (runtime)
        {
            for (const uint32_t mpegAddr : completedMpegIds)
            {
                runtime->eeScheduler().completeExternalWait(kMpegPictureWaitType, mpegAddr, KE_OK);
            }
        }
    }

    void sceMpegFlush(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        const uint32_t mpegAddr = getRegU32(ctx, 4);
        bool wakePictureWaiter = false;
        {
            std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
            g_mpegRdram = rdram;
            g_mpegRuntime = runtime;
            MpegPlaybackState &playback = getPlaybackState(mpegAddr);
            const size_t framesBefore = playback.decodedFrames.size();
            if (playback.decoder)
            {
                playback.decoder->flush(playback.decodedFrames);
            }
            wakePictureWaiter = playback.decodedFrames.size() != framesBefore ||
                                playback.streamEnded ||
                                playback.decoderFailed;
        }
        if (wakePictureWaiter)
        {
            runtime->eeScheduler().completeExternalWait(kMpegPictureWaitType, mpegAddr, KE_OK);
        }
        setReturnS32(ctx, 0);
    }

    void sceMpegAddBs(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t mpegAddr = getRegU32(ctx, 4);
        const uint32_t dataAddr = getRegU32(ctx, 5);
        const uint32_t byteCount = getRegU32(ctx, 6);

        size_t copied = 0u;
        bool wakePictureWaiter = false;
        {
            std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
            g_mpegRdram = rdram;
            g_mpegRuntime = runtime;
            MpegPlaybackState &playback = getPlaybackState(mpegAddr);
            const size_t framesBefore = playback.decodedFrames.size();
            while (copied < byteCount)
            {
                const uint32_t curAddr = dataAddr + static_cast<uint32_t>(copied);
                const uint32_t offset = curAddr & PS2_RAM_MASK;
                const size_t chunk = std::min<size_t>(static_cast<size_t>(byteCount) - copied, PS2_RAM_SIZE - offset);
                const uint8_t *src = getConstMemPtr(rdram, curAddr);
                if (!src || chunk == 0u)
                {
                    break;
                }
                feedElementaryStream(playback, src, chunk);
                copied += chunk;
            }
            wakePictureWaiter = playback.decodedFrames.size() != framesBefore || playback.streamEnded || playback.decoderFailed;
        }

        if (wakePictureWaiter)
        {
            runtime->eeScheduler().completeExternalWait(kMpegPictureWaitType, mpegAddr, KE_OK);
        }
        setReturnS32(ctx, static_cast<int32_t>(copied));
    }

    void sceMpegAddCallback(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;

        const uint32_t mpegAddr = getRegU32(ctx, 4);
        const uint32_t callbackType = getRegU32(ctx, 5);
        const uint32_t callbackFunc = getRegU32(ctx, 6);
        const uint32_t callbackData = getRegU32(ctx, 7);

        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        g_mpeg_stub_state.initialized = true;
        (void)getPlaybackState(mpegAddr);

        const uint32_t handle = g_mpeg_stub_state.nextCallbackHandle++;
        g_mpeg_stub_state.callbacksByMpeg[mpegAddr].push_back(
            MpegRegisteredCallback{callbackType, 0u, callbackFunc, callbackData, handle, false});

        setReturnU32(ctx, handle);
    }

    void sceMpegAddStrCallback(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)runtime;
        const uint32_t mpegAddr = getRegU32(ctx, 4);
        const uint32_t streamType = getRegU32(ctx, 5);
        const uint32_t streamId = getRegU32(ctx, 6);
        const uint32_t callbackFunc = getRegU32(ctx, 7);
        const uint32_t callbackData = readAbiArg4(rdram, ctx);

        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        g_mpeg_stub_state.initialized = true;
        (void)getPlaybackState(mpegAddr);
        const uint32_t handle = g_mpeg_stub_state.nextCallbackHandle++;
        g_mpeg_stub_state.callbacksByMpeg[mpegAddr].push_back(
            MpegRegisteredCallback{streamType, streamId, callbackFunc, callbackData, handle, true});
        setReturnU32(ctx, 0u);
    }

    void sceMpegClearRefBuff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)ctx;
        (void)runtime;
        static const uint32_t kRefGlobalAddrs[] = {
            0x171800u, 0x17180Cu, 0x171818u, 0x171804u, 0x171810u, 0x17181Cu};
        for (uint32_t addr : kRefGlobalAddrs)
        {
            uint8_t *p = getMemPtr(rdram, addr);
            if (!p)
                continue;
            uint32_t ptr = *reinterpret_cast<uint32_t *>(p);
            if (ptr != 0u)
            {
                uint8_t *q = getMemPtr(rdram, ptr + 0x28u);
                if (q)
                    *reinterpret_cast<uint32_t *>(q) = 0u;
            }
        }
        setReturnU32(ctx, 1u);
    }

    static void mpegGuestWrite32(uint8_t *rdram, uint32_t addr, uint32_t value)
    {
        if (uint8_t *p = getMemPtr(rdram, addr))
            *reinterpret_cast<uint32_t *>(p) = value;
    }
    static void mpegGuestWrite64(uint8_t *rdram, uint32_t addr, uint64_t value)
    {
        if (uint8_t *p = getMemPtr(rdram, addr))
        {
            *reinterpret_cast<uint32_t *>(p) = static_cast<uint32_t>(value);
            *reinterpret_cast<uint32_t *>(p + 4) = static_cast<uint32_t>(value >> 32);
        }
    }

    void sceMpegCreate(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t param_1 = getRegU32(ctx, 4); // a0
        const uint32_t param_2 = getRegU32(ctx, 5); // a1
        const uint32_t param_3 = getRegU32(ctx, 6); // a2

        const uint32_t uVar3 = (param_2 + 3u) & 0xFFFFFFFCu;
        const int32_t iVar2_signed = static_cast<int32_t>(param_3) - static_cast<int32_t>(uVar3 - param_2);

        if (iVar2_signed <= 0x117)
        {
            setReturnU32(ctx, 0u);
            return;
        }

        {
            std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
            getPlaybackState(param_1) = makeFreshPlaybackState();
        }

        const uint32_t puVar4 = uVar3 + 0x108u;
        const uint32_t innerSize = static_cast<uint32_t>(iVar2_signed) - 0x118u;

        mpegGuestWrite32(rdram, param_1 + 0x40, uVar3);

        const uint32_t a1_init = uVar3 + 0x118u;
        mpegGuestWrite32(rdram, puVar4 + 0x0, a1_init);
        mpegGuestWrite32(rdram, puVar4 + 0x4, innerSize);
        mpegGuestWrite32(rdram, puVar4 + 0x8, a1_init);
        mpegGuestWrite32(rdram, puVar4 + 0xC, a1_init);

        // One 0x600 block per sceMpeg object, kept for its lifetime: games re-create the same
        // object for every movie, so allocating per call would leak the runtime arena.
        uint32_t allocResult = uVar3 + 0x200u;
        if (runtime)
        {
            static std::mutex s_blockMutex;
            static std::unordered_map<uint32_t, uint32_t> s_blockByMpeg;
            std::lock_guard<std::mutex> lock(s_blockMutex);
            uint32_t &block = s_blockByMpeg[param_1];
            if (block == 0u)
                block = runtime->runtimeScratchAlloc(0x600, 8u);
            allocResult = block;
        }
        mpegGuestWrite32(rdram, uVar3 + 0x44, allocResult);

        // param_1[0..2] = 0; param_1[4..0xe] = 0xffffffff/0 as per decompilation
        mpegGuestWrite32(rdram, param_1 + 0x00, 0);
        mpegGuestWrite32(rdram, param_1 + 0x04, 0);
        mpegGuestWrite32(rdram, param_1 + 0x08, 0);
        mpegGuestWrite64(rdram, param_1 + 0x10, 0xFFFFFFFFFFFFFFFFULL);
        mpegGuestWrite64(rdram, param_1 + 0x18, 0xFFFFFFFFFFFFFFFFULL);
        mpegGuestWrite64(rdram, param_1 + 0x20, 0);
        mpegGuestWrite64(rdram, param_1 + 0x28, 0xFFFFFFFFFFFFFFFFULL);
        mpegGuestWrite64(rdram, param_1 + 0x30, 0xFFFFFFFFFFFFFFFFULL);
        mpegGuestWrite64(rdram, param_1 + 0x38, 0);

        static const unsigned s_zeroOffsets[] = {
            0xB4, 0xB8, 0xBC, 0xC0, 0xC4, 0xC8, 0xCC, 0xD0, 0xD4, 0xD8, 0xDC, 0xE0, 0xE4, 0xE8, 0xF8,
            0x0C, 0x14, 0x2C, 0x34, 0x3C,
            0x48, 0xFC, 0x100, 0x104, 0x70, 0x90, 0xAC};
        for (unsigned off : s_zeroOffsets)
            mpegGuestWrite32(rdram, uVar3 + off, 0u);
        mpegGuestWrite64(rdram, uVar3 + 0x78, 0);
        mpegGuestWrite64(rdram, uVar3 + 0x88, 0);

        mpegGuestWrite64(rdram, uVar3 + 0xF0, 0xFFFFFFFFFFFFFFFFULL);
        mpegGuestWrite32(rdram, uVar3 + 0x1C, 0x1209F8u);
        mpegGuestWrite32(rdram, uVar3 + 0x24, 0x120A08u);
        mpegGuestWrite32(rdram, uVar3 + 0xB0, 1u);
        mpegGuestWrite32(rdram, uVar3 + 0x9C, 0xFFFFFFFFu);
        mpegGuestWrite32(rdram, uVar3 + 0x80, 0xFFFFFFFFu);
        mpegGuestWrite32(rdram, uVar3 + 0x94, 0xFFFFFFFFu);
        mpegGuestWrite32(rdram, uVar3 + 0x98, 0xFFFFFFFFu);

        mpegGuestWrite32(rdram, 0x1717BCu, param_1);

        static const uint32_t s_refValues[] = {
            0x171A50u, 0x171C58u, 0x171CC0u, 0x171D28u, 0x171D90u,
            0x171AB8u, 0x171B20u, 0x171B88u, 0x171BF0u};
        for (unsigned i = 0; i < 9u; ++i)
            mpegGuestWrite32(rdram, 0x171800u + i * 4u, s_refValues[i]);

        uint32_t setDynamicRet = a1_init;
        if (uint8_t *p = getMemPtr(rdram, puVar4 + 8))
            setDynamicRet = *reinterpret_cast<uint32_t *>(p);
        mpegGuestWrite32(rdram, puVar4 + 12, setDynamicRet);

        setReturnU32(ctx, setDynamicRet);
    }

    void sceMpegDelete(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;

        const uint32_t mpegAddr = getRegU32(ctx, 4);
        {
            std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
            g_mpeg_stub_state.callbacksByMpeg.erase(mpegAddr);
            g_mpeg_stub_state.playbackByMpeg.erase(mpegAddr);
        }
        runtime->eeScheduler().completeExternalWait(kMpegPictureWaitType, mpegAddr, KE_WAIT_DELETE);
        setReturnU32(ctx, 0u);
    }

    void sceMpegDemuxPss(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t mpegAddr = getRegU32(ctx, 4);
        const uint32_t dataAddr = getRegU32(ctx, 5);
        const uint32_t byteCount = getRegU32(ctx, 6);

        std::vector<MpegStreamCallbackEvent> callbackEvents;
        std::vector<uint32_t> completedMpegIds;
        size_t consumed = 0u;
        size_t decodedBefore = 0u;
        size_t decodedCount = 0u;
        uint32_t traceIdx = 0u;
        bool eofChanged = false;
        bool backpressured = false;
        {
            std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
            g_mpegRdram = rdram;
            g_mpegRuntime = runtime;
            MpegPlaybackState &playback = getPlaybackState(mpegAddr);
            decodedBefore = playback.decodedFrames.size();
            // Once this stream has ended nothing more is consumed: the guest sees 0, the
            // same signal it gets from a full decoder, and stops refilling.
            backpressured = mpegCallbacksBlockedUnlocked() || mpegDemuxBackpressured(playback) ||
                            mpegStreamEndedForCurrentCdStream(playback);
            if (!backpressured)
            {
                consumed = appendGuestBytes(mpegAddr, playback, rdram, dataAddr, byteCount, callbackEvents);
                recordCdStreamBytesDemuxedUnlocked(consumed, completedMpegIds, eofChanged);
            }
            decodedCount = playback.decodedFrames.size();
            traceIdx = g_mpeg_stub_state.demuxPssTraceCount++;
        }

        if (backpressured)
        {
            if (traceIdx < 32u)
            {
                PS2_IF_AGRESSIVE_LOGS({
                    std::cerr << "[MPEG:DemuxPss:BACKPRESSURE] mpeg=0x" << std::hex << mpegAddr << std::dec << " decoded=" << decodedCount << std::endl;
                });
            }
            dispatchStreamCallbacks(rdram, ctx, runtime, {}); // offer refused packets again
            setReturnS32(ctx, 0);
            // The game's demux loop runs until a timer passes a mark; refusing at once made it spin without letting
            // time, the sound driver or the callbacks run. Answer after the next vertical blank instead.
            {
                bool waitForBlank;
                {
                    std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
                    waitForBlank = mpegCallbacksBlockedUnlocked() || g_mpegChainRunning;
                }
                if (waitForBlank)
                {
                    EeScheduler &scheduler = runtime->eeScheduler();
                    scheduler.waitVSync(scheduler.currentVSyncTick(), -1, [](R5900Context &resumeContext) { setReturnS32(&resumeContext, 0); });
                }
            }
            return;
        }
        const bool currentStreamCompleted = std::find(completedMpegIds.begin(), completedMpegIds.end(), mpegAddr) != completedMpegIds.end();
        if (decodedCount != decodedBefore || eofChanged || currentStreamCompleted)
        {
            runtime->eeScheduler().completeExternalWait(kMpegPictureWaitType, mpegAddr, KE_OK);
        }
        for (const uint32_t completedMpegId : completedMpegIds)
        {
            if (completedMpegId != mpegAddr)
            {
                runtime->eeScheduler().completeExternalWait(kMpegPictureWaitType, completedMpegId, KE_OK);
            }
        }

        if (traceIdx < 32u)
        {
            PS2_IF_AGRESSIVE_LOGS({
                std::cerr << "[MPEG:DemuxPss] mpeg=0x" << std::hex << mpegAddr
                          << " data=0x" << dataAddr << std::dec
                          << " bytes=" << byteCount
                          << " consumed=" << consumed
                          << " decoded=" << decodedCount
                          << " callbacks=" << callbackEvents.size()
                          << std::endl;
            });
        }

        dispatchStreamCallbacksUnlocked(rdram, ctx, runtime, callbackEvents);
        setReturnS32(ctx, static_cast<int32_t>(consumed));
    }

    void sceMpegDemuxPssRing(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        static std::atomic<uint32_t> s_demuxRingEntryCount{0u};
        const uint32_t entryIdx = s_demuxRingEntryCount.fetch_add(1u, std::memory_order_relaxed);
        if (entryIdx < 4u)
        {
            PS2_IF_AGRESSIVE_LOGS({
                std::cerr << "[MPEG:DemuxPssRing:ENTER] call #" << entryIdx
                          << " pc=0x" << std::hex << ctx->pc
                          << " ra=0x" << getRegU32(ctx, 31)
                          << std::dec << std::endl;
            });
        }

        const uint32_t mpegAddr = getRegU32(ctx, 4);
        const uint32_t dataAddr = getRegU32(ctx, 5);
        const uint32_t availableBytes = getRegU32(ctx, 6);
        const uint32_t ringBaseAddr = getRegU32(ctx, 7);
        const uint32_t ringSize = readAbiArg4(rdram, ctx);

        std::vector<MpegStreamCallbackEvent> callbackEvents;
        std::vector<uint32_t> completedMpegIds;
        size_t consumed = 0u;
        size_t decodedBefore = 0u;
        size_t decodedCount = 0u;
        uint32_t traceIdx = 0u;
        bool eofChanged = false;
        bool backpressured = false;
        {
            std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
            g_mpegRdram = rdram;
            g_mpegRuntime = runtime;
            MpegPlaybackState &playback = getPlaybackState(mpegAddr);
            playback.pendingVideoLimit = ringSize;
            decodedBefore = playback.decodedFrames.size();
            // Once this stream has ended nothing more is consumed: the guest sees 0, the
            // same signal it gets from a full decoder, and stops refilling.
            backpressured = mpegCallbacksBlockedUnlocked() || mpegDemuxBackpressured(playback) ||
                            mpegStreamEndedForCurrentCdStream(playback);
            if (!backpressured)
            {
                consumed = appendGuestRingBytes(
                    mpegAddr,
                    playback,
                    rdram,
                    dataAddr,
                    availableBytes,
                    ringBaseAddr,
                    ringSize,
                    callbackEvents);
                recordCdStreamBytesDemuxedUnlocked(consumed, completedMpegIds, eofChanged);
            }
            decodedCount = playback.decodedFrames.size();
            traceIdx = g_mpeg_stub_state.demuxRingTraceCount++;
        }

        if (backpressured)
        {
            if (mpegTrace())
            {
                static unsigned s_n = 0; static uint64_t s_gen = ~0ull;
                if (mpegTraceBudget(s_n, s_gen))
                    std::fprintf(stderr, "[mpeg-demux] ring REFUSED mpeg=0x%x avail=%u decoded=%zu eofSeen=%d\n", mpegAddr, availableBytes,
                                 decodedCount, int(g_mpeg_stub_state.currentCdStreamEofSeen));
            }
            if (traceIdx < 32u)
            {
                PS2_IF_AGRESSIVE_LOGS({
                    std::cerr << "[MPEG:DemuxPssRing:BACKPRESSURE] mpeg=0x" << std::hex << mpegAddr
                              << std::dec << " decoded=" << decodedCount
                              << " avail=" << availableBytes << std::endl;
                });
            }
            dispatchStreamCallbacks(rdram, ctx, runtime, {}); // offer refused packets again
            setReturnS32(ctx, 0);
            // The game's demux loop runs until a timer passes a mark; refusing at once made it spin without letting
            // time, the sound driver or the callbacks run. Answer after the next vertical blank instead.
            {
                bool waitForBlank;
                {
                    std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
                    waitForBlank = mpegCallbacksBlockedUnlocked() || g_mpegChainRunning;
                }
                if (waitForBlank)
                {
                    EeScheduler &scheduler = runtime->eeScheduler();
                    scheduler.waitVSync(scheduler.currentVSyncTick(), -1, [](R5900Context &resumeContext) { setReturnS32(&resumeContext, 0); });
                }
            }
            return;
        }
        const bool currentStreamCompleted = std::find(completedMpegIds.begin(), completedMpegIds.end(), mpegAddr) != completedMpegIds.end();
        if (decodedCount != decodedBefore || eofChanged || currentStreamCompleted)
        {
            runtime->eeScheduler().completeExternalWait(kMpegPictureWaitType, mpegAddr, KE_OK);
        }
        for (const uint32_t completedMpegId : completedMpegIds)
        {
            if (completedMpegId != mpegAddr)
            {
                runtime->eeScheduler().completeExternalWait(kMpegPictureWaitType, completedMpegId, KE_OK);
            }
        }

        if (traceIdx < 32u)
        {
            PS2_IF_AGRESSIVE_LOGS({
                std::cerr << "[MPEG:DemuxPssRing] mpeg=0x" << std::hex << mpegAddr
                          << " data=0x" << dataAddr
                          << " ring=0x" << ringBaseAddr << std::dec
                          << " avail=" << availableBytes
                          << " consumed=" << consumed
                          << " decoded=" << decodedCount
                          << " callbacks=" << callbackEvents.size()
                          << std::endl;
            });
        }

        if (mpegTrace())
        {
            static unsigned s_n = 0; static uint64_t s_gen = ~0ull;
            if (mpegTraceBudget(s_n, s_gen))
                std::fprintf(stderr, "[mpeg-demux] ring mpeg=0x%x avail=%u consumed=%zu decoded=%zu callbacks=%zu ringBase=0x%x ringSize=0x%x kept=%zu\n",
                             mpegAddr, availableBytes, consumed, decodedCount, callbackEvents.size(), ringBaseAddr, ringSize,
                             getPlaybackState(mpegAddr).pendingVideoBytes);
        }
        dispatchStreamCallbacksUnlocked(rdram, ctx, runtime, callbackEvents);
        setReturnS32(ctx, static_cast<int32_t>(consumed));
    }

    void sceMpegDispCenterOffX(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        setReturnS32(ctx, 0);
    }

    void sceMpegDispCenterOffY(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        setReturnS32(ctx, 0);
    }

    void sceMpegDispHeight(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        const uint32_t mpegAddr = getRegU32(ctx, 4);
        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        setReturnU32(ctx, getPlaybackState(mpegAddr).height);
    }

    void sceMpegDispWidth(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        const uint32_t mpegAddr = getRegU32(ctx, 4);
        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        setReturnU32(ctx, getPlaybackState(mpegAddr).width);
    }

    void sceMpegGetDecodeMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        const uint32_t mpegAddr = getRegU32(ctx, 4);
        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        setReturnU32(ctx, getPlaybackState(mpegAddr).decodeMode);
    }

    void sceMpegGetPicture(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t mpegAddr = getRegU32(ctx, 4);
        const uint32_t imageAddr = getRegU32(ctx, 5);
        uint32_t width = kStubMovieWidth;
        uint32_t height = kStubMovieHeight;
        uint32_t frameCount = 0u;
        bool haveFrame = false;
        MpegDecodedFrame frame;
        {
            std::unique_lock<std::mutex> lock(g_mpeg_stub_mutex);
            MpegPlaybackState &playback = getPlaybackState(mpegAddr);
            decodePendingVideo(playback, kMaxDecodedPicturesAhead);

            // Direct-IPU feeding: pull the toIPU chain until a picture is decoded or it stops.
            constexpr size_t kIpuPullStep = 0x4000u;
            while (playback.decodedFrames.empty() && !playback.streamEnded && !playback.decoderFailed &&
                   pullToIpuDma(rdram, runtime, playback, kIpuPullStep) != 0u)
            {
                playback.sawInput = true;
            }

            // IPU starved with the channel idle: libmpeg asks the application for more
            // bitstream through its sceMpegCbNodata callback, then retries the decode.
            if (playback.decodedFrames.empty() && !playback.streamEnded && !playback.decoderFailed &&
                !toIpuDmaActive(runtime))
            {
                if (const MpegRegisteredCallback *nodata = findCallback(mpegAddr, kMpegCbNodata);
                    nodata && nodata->func != 0u && runtime->hasFunction(nodata->func))
                {
                    const uint32_t cbFunc = nodata->func;
                    if (mpegTrace())
                    {
                        static unsigned s_n = 0;
                        if (s_n++ < 200u)
                            std::fprintf(stderr, "[mpeg-ipu] nodata cb=0x%x chcr=0x%x\n", cbFunc,
                                         runtime->memory().readIORegister(kD4Chcr));
                    }
                    const uint32_t cbData = nodata->data;
                    lock.unlock();
                    const uint32_t cbDataAddr = runtime->runtimeScratchAlloc(kMpegCallbackDataSize, 16u);
                    if (uint8_t *p = cbDataAddr ? getMemPtr(rdram, cbDataAddr) : nullptr)
                    {
                        std::memset(p, 0, kMpegCallbackDataSize);
                        *reinterpret_cast<uint32_t *>(p) = kMpegCbNodata; // sceMpegCbData.type
                    }
                    GuestInvocation invocation{};
                    invocation.kind = GuestInvocationKind::HleCall;
                    invocation.context = *ctx;
                    invocation.context.pc = cbFunc;
                    SET_GPR_U32(&invocation.context, 4, mpegAddr);
                    SET_GPR_U32(&invocation.context, 5, cbDataAddr);
                    SET_GPR_U32(&invocation.context, 6, cbData);
                    SET_GPR_U32(&invocation.context, 29, 0u);
                    SET_GPR_U32(&invocation.context, 31, 0u);
                    invocation.onComplete = [rdram, runtime, cbDataAddr](const R5900Context &completed, R5900Context &parent)
                    {
                        if (cbDataAddr)
                            runtime->runtimeScratchFree(cbDataAddr);
                        if (static_cast<int32_t>(getRegU32(&completed, 2)) == 0)
                        {
                            // Callback declined to supply data: decode aborts.
                            setReturnS32(&parent, -1);
                            return;
                        }
                        if (!toIpuDmaActive(runtime))
                        {
                            // The application's refill is asynchronous (CD read completing via
                            // SIF interrupts). On hardware libmpeg keeps polling while those
                            // interrupts run; here we must let the scheduler deliver them, so
                            // yield until the next vblank before retrying.
                            EeScheduler &scheduler = runtime->eeScheduler();
                            scheduler.waitVSync(
                                scheduler.currentVSyncTick(),
                                -1,
                                [rdram, runtime](R5900Context &resumeContext)
                                {
                                    sceMpegGetPicture(rdram, &resumeContext, runtime);
                                });
                        }
                        sceMpegGetPicture(rdram, &parent, runtime);
                    };
                    runtime->eeScheduler().invokeCurrent(std::move(invocation));
                }
            }

            if (playback.decodedFrames.empty() &&
                !g_mpeg_stub_state.currentCdStreamEofSeen &&
                !playback.streamEnded &&
                !playback.decoderFailed)
            {
                if (g_mpeg_stub_state.getPictureWaitTraceCount < 32u)
                {
                    PS2_IF_AGRESSIVE_LOGS({
                        std::cerr << "[MPEG:GetPicture] waiting for frames, mpeg=0x" << std::hex << mpegAddr
                                  << std::dec << " ended=" << playback.streamEnded
                                  << " failed=" << playback.decoderFailed
                                  << " sawInput=" << playback.sawInput << std::endl;
                    });
                    ++g_mpeg_stub_state.getPictureWaitTraceCount;
                }
                if (mpegTrace())
                {
                    static unsigned s_n = 0; static uint64_t s_gen = ~0ull;
                    if (mpegTraceBudget(s_n, s_gen))
                        std::fprintf(stderr, "[mpeg-wait] GetPicture waits: mpeg=0x%x sawInput=%d seqHdrWait=%d pss=%zu gen=%llu/%llu produced=%llu demuxed=%llu eofSeen=%d toIpu=%d nodataCb=%d feedsDecoder=%d\n",
                                     mpegAddr, int(playback.sawInput), int(playback.waitingForVideoSequenceHeader), playback.pssBuffer.size(),
                                     (unsigned long long)playback.cdStreamGeneration, (unsigned long long)g_mpeg_stub_state.cdStreamGeneration,
                                     (unsigned long long)g_mpeg_stub_state.cdStreamBytesProduced, (unsigned long long)g_mpeg_stub_state.cdStreamBytesDemuxed,
                                     int(g_mpeg_stub_state.currentCdStreamEofSeen), int(toIpuDmaActive(runtime)),
                                     int(findCallback(mpegAddr, kMpegCbNodata) != nullptr), int(g_pssDemuxFeedsDecoder));
                }
                lock.unlock();
                runtime->eeScheduler().waitExternal(
                    EeWaitReason::Mpeg,
                    kMpegPictureWaitType,
                    mpegAddr,
                    [rdram, runtime](R5900Context &resumeContext)
                    {
                        if (static_cast<int32_t>(getRegU32(&resumeContext, 2)) < 0)
                        {
                            return;
                        }
                        sceMpegGetPicture(rdram, &resumeContext, runtime);
                    });
            }

            if (!playback.decodedFrames.empty())
            {
                const uint64_t currentTick = runtime->eeScheduler().currentVSyncTick();
                const uint64_t currentTickQ32 = currentTick << 32u;
                const MpegDecodedFrame &nextFrame = playback.decodedFrames.front();
                const uint64_t frameIntervalQ32 = decodedFrameIntervalQ32(playback, nextFrame);
                uint64_t presentationTargetQ32 = presentationTickForFrame(playback, nextFrame, currentTickQ32);

                if (currentTickQ32 > presentationTargetQ32 && currentTickQ32 - presentationTargetQ32 >= frameIntervalQ32)
                {
                    const uint64_t correction = currentTickQ32 - presentationTargetQ32;
                    presentationTargetQ32 = currentTickQ32;
                    if (nextFrame.pts90k >= 0 && playback.firstPresentedPts90k >= 0)
                    {
                        playback.ptsPresentationBaseTickQ32 += correction;
                    }
                    playback.nextPictureTickQ32 = currentTickQ32;
                }

                // Holding the caller until the picture's display time paces players that just ask for pictures in a
                // loop. A player that already asks for them by its own clock (Black's: frame index = elapsed time /
                // frame duration) is only held back by it: the wait costs its loop a whole extra vertical blank.
                // PS2X_MPEG_PACING=0 hands pictures over as soon as they are asked for.
                static const bool s_pacing = []
                {
                    const char *value = std::getenv("PS2X_MPEG_PACING");
                    return !(value && value[0] == '0');
                }();
                if (s_pacing && currentTickQ32 < presentationTargetQ32)
                {
                    const uint64_t eligibleTick = (presentationTargetQ32 + kPictureClockOne - 1u) >> 32u;
                    lock.unlock();
                    runtime->eeScheduler().waitVSync(
                        eligibleTick - 1u,
                        -1,
                        [rdram, runtime](R5900Context &resumeContext)
                        {
                            if (static_cast<int32_t>(getRegU32(&resumeContext, 2)) < 0)
                            {
                                return;
                            }
                            sceMpegGetPicture(rdram, &resumeContext, runtime);
                        });
                }

                frame = std::move(playback.decodedFrames.front());
                playback.decodedFrames.pop_front();
                playback.width = static_cast<uint32_t>(frame.width);
                playback.height = static_cast<uint32_t>(frame.height);
                width = playback.width;
                height = playback.height;
                frameCount = playback.picturesServed;
                playback.picturesServed += 1u;
                g_ps2xMpegPictures.fetch_add(1u, std::memory_order_relaxed);
                playback.nextPictureTickQ32 = presentationTargetQ32 + frameIntervalQ32;
                playback.presentationEndTickQ32 = playback.nextPictureTickQ32;
                haveFrame = true;
                if (g_mpeg_stub_state.pictureTraceCount < 32u)
                {
                    PS2_IF_AGRESSIVE_LOGS({
                        std::cerr << "[MPEG:GetPicture:FRAME] mpeg=0x" << std::hex << mpegAddr
                                  << std::dec << " generation=" << g_mpeg_stub_state.cdStreamGeneration
                                  << " frame=" << frameCount
                                  << " queued=" << playback.decodedFrames.size()
                                  << " size=" << width << "x" << height << std::endl;
                    });
                    ++g_mpeg_stub_state.pictureTraceCount;
                }
            }
            else
            {
                width = playback.width;
                height = playback.height;
                frameCount = playback.picturesServed;
            }
        }

        mpegGuestWrite32(rdram, mpegAddr + 0x00u, width);
        mpegGuestWrite32(rdram, mpegAddr + 0x04u, height);
        mpegGuestWrite32(rdram, mpegAddr + 0x08u, frameCount);

        if (uint8_t *base = getMemPtr(rdram, mpegAddr))
        {
            const uint32_t iVar1 = *reinterpret_cast<uint32_t *>(base + 0x40);
            if (uint8_t *inner = getMemPtr(rdram, iVar1))
            {
                *reinterpret_cast<uint32_t *>(inner + 0xb0) = 1;
                *reinterpret_cast<uint32_t *>(inner + 0xd8) = (getRegU32(ctx, 5) & 0x0FFFFFFFu) | 0x20000000u;
                *reinterpret_cast<uint32_t *>(inner + 0xe4) = getRegU32(ctx, 6);
                *reinterpret_cast<uint32_t *>(inner + 0xdc) = 0;
                *reinterpret_cast<uint32_t *>(inner + 0xe0) = 0;
            }
        }

        const uint32_t macroblocks = getRegU32(ctx, 6);
        const size_t limitBytes = macroblocks != 0u ? static_cast<size_t>(macroblocks) * 1024u : SIZE_MAX;
        if (haveFrame && static_cast<size_t>(align16(width)) * align16(height) * 4u > limitBytes)
        {
            static unsigned s_warned = 0;
            if (s_warned++ < 4u)
                std::fprintf(stderr, "[mpeg] a %ux%u picture does not fit the %u macroblocks given at 0x%x: cut to them\n", width, height, macroblocks, imageAddr);
        }
        if (haveFrame)
        {
            writeDecodedFrameToGuest(rdram, imageAddr, frame, limitBytes);
        }
        else if (frameCount == 0u)
        {
            writeBlankMpegFrame(rdram, imageAddr, width, height, limitBytes);
        }

        setReturnS32(ctx, 0);
    }

    void sceMpegGetPictureRAW8(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceMpegGetPictureRAW8", rdram, ctx, runtime);
    }

    void sceMpegGetPictureRAW8xy(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceMpegGetPictureRAW8xy", rdram, ctx, runtime);
    }

    void sceMpegInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        const uint64_t cdStreamGeneration = g_mpeg_stub_state.cdStreamGeneration;
        const uint64_t cdStreamBytesProduced = g_mpeg_stub_state.cdStreamBytesProduced;
        const uint64_t cdStreamBytesDemuxed = g_mpeg_stub_state.cdStreamBytesDemuxed;
        const bool cdStreamEofPending = g_mpeg_stub_state.cdStreamEofPending;
        const bool currentCdStreamEofSeen = g_mpeg_stub_state.currentCdStreamEofSeen;
        resetMpegStubStateUnlocked();
        g_mpeg_stub_state.initialized = true;
        g_mpeg_stub_state.cdStreamGeneration = cdStreamGeneration;
        g_mpeg_stub_state.cdStreamBytesProduced = cdStreamBytesProduced;
        g_mpeg_stub_state.cdStreamBytesDemuxed = cdStreamBytesDemuxed;
        g_mpeg_stub_state.cdStreamEofPending = cdStreamEofPending;
        g_mpeg_stub_state.currentCdStreamEofSeen = currentCdStreamEofSeen;
        setReturnU32(ctx, 0u);
    }

    void sceMpegIsEnd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        const uint32_t mpegAddr = getRegU32(ctx, 4);

        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        g_mpeg_stub_state.initialized = true;
        MpegPlaybackState &playback = getPlaybackState(mpegAddr);
        // Only the producer/demux EOF is authoritative. A sequence_end_code can
        // be observed while more PSS data is still buffered, and a decoder
        // failure before producer EOF may still recover on a later sequence.
        const bool producerEnded =
            g_mpeg_stub_state.currentCdStreamEofSeen &&
            playback.cdStreamGeneration == g_mpeg_stub_state.cdStreamGeneration;
        const bool ended = producerEnded &&
                           (playback.streamEnded || (playback.decoderFailed && playback.sawInput));
        const uint64_t presentationEnd = playback.presentationEndTickQ32;
        const uint64_t currentTickQ32 = runtime != nullptr
                                            ? (runtime->eeScheduler().currentVSyncTick() << 32u)
                                            : std::numeric_limits<uint64_t>::max();
        const bool presentationComplete =
            presentationEnd == std::numeric_limits<uint64_t>::max() ||
            currentTickQ32 >= presentationEnd;

        if (g_mpeg_stub_state.isEndTraceCount < 16u)
        {
            PS2_IF_AGRESSIVE_LOGS({
                std::cerr << "[MPEG:IsEnd] mpeg=0x" << std::hex << mpegAddr << std::dec
                          << " ended=" << ended
                          << " producerEof=" << producerEnded
                          << " seqEnd=" << playback.sawSequenceEnd
                          << " streamEnded=" << playback.streamEnded
                          << " presentationComplete=" << presentationComplete
                          << " frames=" << playback.decodedFrames.size()
                          << " sawInput=" << playback.sawInput << std::endl;
            });
            ++g_mpeg_stub_state.isEndTraceCount;
        }

        setReturnS32(ctx, (ended && playback.decodedFrames.empty() && presentationComplete) ? 1 : 0);
    }

    void sceMpegIsRefBuffEmpty(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        const uint32_t mpegAddr = getRegU32(ctx, 4);
        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        const MpegPlaybackState &playback = getPlaybackState(mpegAddr);
        setReturnS32(ctx, playback.decodedFrames.empty() ? 1 : 0);
    }

    void sceMpegReset(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)runtime;
        const uint32_t param_1 = getRegU32(ctx, 4);
        {
            std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
            MpegPlaybackState &playback = getPlaybackState(param_1);
            MpegPlaybackState resetState = makeFreshPlaybackStatePreservingConfig(playback);
            if (playback.streamEnded || playback.decoderFailed)
            {
                resetState.sawInput = true;
                resetState.streamEnded = true;
                resetState.cdStreamGeneration = playback.cdStreamGeneration;
            }
            playback = std::move(resetState);
        }
        uint8_t *base = getMemPtr(rdram, param_1);
        if (!base)
        {
            return;
        }
        uint32_t inner = *reinterpret_cast<uint32_t *>(base + 0x40);
        if (inner == 0u)
            return;
        mpegGuestWrite32(rdram, param_1 + 0x00u, 0u);
        mpegGuestWrite32(rdram, param_1 + 0x04u, 0u);
        mpegGuestWrite32(rdram, param_1 + 0x08u, 0u);
        mpegGuestWrite32(rdram, inner + 0x00, 0u);
        mpegGuestWrite32(rdram, inner + 0x04, 0u);
        mpegGuestWrite32(rdram, inner + 0x08, 0u);
        mpegGuestWrite32(rdram, param_1 + 0x08, 0u);
        mpegGuestWrite32(rdram, inner + 0x80, 0xFFFFFFFFu);
        mpegGuestWrite32(rdram, inner + 0xAC, 0u);
        mpegGuestWrite32(rdram, 0x171904u, 0u);
    }

    void sceMpegResetDefaultPtsGap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        setReturnS32(ctx, 0);
    }

    void sceMpegSetDecodeMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        const uint32_t mpegAddr = getRegU32(ctx, 4);
        const uint32_t mode = getRegU32(ctx, 5);
        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        getPlaybackState(mpegAddr).decodeMode = mode;
        setReturnS32(ctx, 0);
    }

    void sceMpegSetDefaultPtsGap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        setReturnS32(ctx, 0);
    }

    void sceMpegSetImageBuff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        const uint32_t mpegAddr = getRegU32(ctx, 4);
        const uint32_t imageBufferAddr = getRegU32(ctx, 5);
        std::lock_guard<std::mutex> lock(g_mpeg_stub_mutex);
        getPlaybackState(mpegAddr).imageBufferAddr = imageBufferAddr;
        setReturnS32(ctx, 0);
    }
}
