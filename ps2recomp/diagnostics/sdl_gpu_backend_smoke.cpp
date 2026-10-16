#include "runtime/gs/gs_cpu_backend.h"
#include "runtime/gs/gs_sdl_gpu_raster.h"
#include "runtime/gs/ps2_gs_memory.h"
#include <cstdlib>

#include <array>
#include <cstdio>
#include <stdexcept>
#include <vector>

int main()
{
    constexpr uint32_t bytes = 4u * 1024u * 1024u;
    std::vector<uint8_t> vram(bytes, 0);
    try
    {
        GSMem::InitLookupTables();
        setenv("PS2X_GS_SDL_GPU", "1", 1);
        setenv("PS2X_GS_SDL_GPU_STATS", "1", 1);
        GSSDLGpuRaster::InitializeHostVideo();
        uint32_t rasterPixel = 0;
        uint32_t cpuPixel = 0;
        uint32_t rasterAfterCpuPixel = 0;
        uint32_t tinyRasterPixel = 0;
        uint32_t clearPixel = 0;
        uint32_t uploadPixel = 0;
        uint32_t localCopyPixel = 0;
        uint32_t overlapCopyPixel = 0;
        std::array<uint8_t, 16> localReadbackBytes{};
        std::array<uint8_t, 2> nibbleReadbackBytes{};
        std::array<uint8_t, 3> ct24ReadbackBytes{};
        std::array<uint8_t, 2> ct16ReadbackBytes{};
        std::array<uint8_t, 1> p8ReadbackBytes{};
        bool localReadbackStatePassed = false;
        {
            GSCpuBackend gs;
            gs.Initialize(vram.data(), bytes);
            GSPrimitiveBatch batch{};
            batch.vertexCount = 2;
            batch.state.prim.type = GS_PRIM_SPRITE;
            batch.state.context.frame.fbw = 10;
            batch.state.context.frame.psm = GS_PSM_CT32;
            batch.state.context.scissor = {0, 127, 0, 127};
            batch.state.context.zbuf.psm = 48;
            batch.state.context.zbuf.zmask = true;
            batch.state.context.test = uint64_t(1) << 17; // Z test: always.
            batch.vertices[0].x = 2; batch.vertices[0].y = 2;
            batch.vertices[1].x = 30; batch.vertices[1].y = 30;
            for (auto &vertex : batch.vertices)
            {
                vertex.r = 0x33; vertex.g = 0x66; vertex.b = 0x99; vertex.a = 0xff;
            }
            gs.Submit(batch);

            // Force a CPU-only draw between two GPU draws. Its host-side VRAM
            // writes must be uploaded before the final GPU draw is submitted.
            batch.state.prim.aa1 = true;
            batch.vertices[0].x = 40; batch.vertices[0].y = 2;
            batch.vertices[1].x = 68; batch.vertices[1].y = 30;
            for (auto &vertex : batch.vertices)
            {
                vertex.r = 0x22; vertex.g = 0x77; vertex.b = 0x44; vertex.a = 0xff;
            }
            gs.Submit(batch);

            batch.state.prim.aa1 = false;
            batch.vertices[0].x = 78; batch.vertices[0].y = 2;
            batch.vertices[1].x = 106; batch.vertices[1].y = 30;
            for (auto &vertex : batch.vertices)
            {
                vertex.r = 0xaa; vertex.g = 0x55; vertex.b = 0x11; vertex.a = 0xff;
            }
            gs.Submit(batch);

            // The normal GPU path now accepts tiny independent draws too,
            // avoiding an otherwise expensive full-VRAM CPU/GPU handoff.
            batch.vertices[0].x = 110; batch.vertices[0].y = 40;
            batch.vertices[1].x = 114; batch.vertices[1].y = 44;
            for (auto &vertex : batch.vertices)
            {
                vertex.r = 0x12; vertex.g = 0x34; vertex.b = 0x56; vertex.a = 0xff;
            }
            gs.Submit(batch);

            GSContext clearContext = batch.state.context;
            clearContext.frame.fbp = 0;
            clearContext.frame.fbw = 10;
            clearContext.frame.psm = GS_PSM_CT32;
            clearContext.frame.fbmsk = 0;
            clearContext.scissor = {120, 123, 40, 43};
            clearContext.fba = 0;
            gs.ClearFramebuffer(clearContext, 0xff563412u);

            GSTransferCommand imageTransfer{};
            imageTransfer.bitbltbuf.dbp = 256;
            imageTransfer.bitbltbuf.dbw = 1;
            imageTransfer.bitbltbuf.dpsm = GS_PSM_CT32;
            imageTransfer.trxpos.dsax = 4;
            imageTransfer.trxpos.dsay = 48;
            imageTransfer.trxreg.rrw = 2;
            imageTransfer.trxreg.rrh = 2;
            imageTransfer.direction = 0;
            const std::array<uint32_t, 4> uploadWords{0xff102030u, 0xff405060u, 0xff708090u, 0xffa0b0c0u};
            gs.BeginTransfer(imageTransfer);
            gs.UploadImage(reinterpret_cast<const uint8_t *>(uploadWords.data()), 2u * sizeof(uint32_t));
            gs.UploadImage(reinterpret_cast<const uint8_t *>(uploadWords.data() + 2u), 2u * sizeof(uint32_t));

            GSTransferCommand localTransfer{};
            localTransfer.bitbltbuf.sbp = 256;
            localTransfer.bitbltbuf.sbw = 1;
            localTransfer.bitbltbuf.spsm = GS_PSM_CT32;
            localTransfer.bitbltbuf.dbp = 768;
            localTransfer.bitbltbuf.dbw = 1;
            localTransfer.bitbltbuf.dpsm = GS_PSM_CT32;
            localTransfer.trxpos.ssax = 4;
            localTransfer.trxpos.ssay = 48;
            localTransfer.trxpos.dsax = 4;
            localTransfer.trxpos.dsay = 48;
            localTransfer.trxreg.rrw = 2;
            localTransfer.trxreg.rrh = 2;
            localTransfer.direction = 2;
            gs.BeginTransfer(localTransfer);

            // Seed the overlap case through the production host-to-local path.
            const std::array<uint32_t, 3> overlapSeed{0xff010203u, 0xff111213u, 0xff212223u};
            GSTransferCommand seedTransfer = localTransfer;
            seedTransfer.bitbltbuf.dbp = 512;
            seedTransfer.trxreg.rrw = 3;
            seedTransfer.trxreg.rrh = 1;
            seedTransfer.direction = 0;
            gs.BeginTransfer(seedTransfer);
            gs.UploadImage(reinterpret_cast<const uint8_t *>(overlapSeed.data()), sizeof(overlapSeed));

            // An overlapping forward copy must read the values written by
            // earlier pixels, matching the guest's ordered GS transfer loop.
            GSTransferCommand overlapTransfer = localTransfer;
            overlapTransfer.bitbltbuf.sbp = 512;
            overlapTransfer.bitbltbuf.dbp = 512;
            overlapTransfer.trxpos.ssax = 4;
            overlapTransfer.trxpos.dsax = 5;
            overlapTransfer.trxreg.rrw = 3;
            overlapTransfer.trxreg.rrh = 1;
            gs.BeginTransfer(overlapTransfer);

            GSTransferCommand readbackTransfer = imageTransfer;
            readbackTransfer.bitbltbuf.sbp = 256;
            readbackTransfer.bitbltbuf.sbw = 1;
            readbackTransfer.bitbltbuf.spsm = GS_PSM_CT32;
            readbackTransfer.trxpos.ssax = 4;
            readbackTransfer.trxpos.ssay = 48;
            readbackTransfer.direction = 1;
            gs.BeginTransfer(readbackTransfer);
            const GSTransferSnapshot readbackState = gs.GetTransferSnapshot();
            const bool readbackCountMatched = readbackState.direction == 1u &&
                readbackState.localToHostPendingBytes == localReadbackBytes.size();
            if (gs.ConsumeLocalToHostBytes(localReadbackBytes.data(), localReadbackBytes.size()) != localReadbackBytes.size())
                throw std::runtime_error("SDL_GPU local-to-host CT32 byte count mismatch");
            localReadbackStatePassed = readbackCountMatched && gs.GetTransferSnapshot().localToHostPendingBytes == 0u;

            gs.WriteVram(GS_PSM_CT24, 1024, 1, 1, 48, 0x00332211u);
            gs.WriteVram(GS_PSM_CT16, 1280, 1, 1, 48, 0x0000a1b2u);
            gs.WriteVram(GS_PSM_T8, 1536, 1, 1, 48, 0x0000007eu);
            gs.WriteVram(GS_PSM_T4, 1792, 1, 2, 48, 1);
            gs.WriteVram(GS_PSM_T4, 1792, 1, 3, 48, 2);
            gs.WriteVram(GS_PSM_T4, 1792, 1, 4, 48, 3);
            auto readbackFormat = [&](uint8_t psm, uint32_t bp, uint32_t x, uint32_t width,
                                      uint8_t *destination, uint32_t bytes) {
                GSTransferCommand transfer = readbackTransfer;
                transfer.bitbltbuf.sbp = bp;
                transfer.bitbltbuf.spsm = psm;
                transfer.trxpos.ssax = x;
                transfer.trxreg.rrw = width;
                transfer.trxreg.rrh = 1;
                gs.BeginTransfer(transfer);
                return gs.ConsumeLocalToHostBytes(destination, bytes) == bytes;
            };
            const bool ct24ReadbackCount = readbackFormat(GS_PSM_CT24, 1024, 1, 1,
                ct24ReadbackBytes.data(), ct24ReadbackBytes.size());
            const bool ct16ReadbackCount = readbackFormat(GS_PSM_CT16, 1280, 1, 1,
                ct16ReadbackBytes.data(), ct16ReadbackBytes.size());
            const bool p8ReadbackCount = readbackFormat(GS_PSM_T8, 1536, 1, 1,
                p8ReadbackBytes.data(), p8ReadbackBytes.size());
            GSTransferCommand nibbleReadback = readbackTransfer;
            nibbleReadback.bitbltbuf.sbp = 1792;
            nibbleReadback.bitbltbuf.spsm = GS_PSM_T4;
            nibbleReadback.trxpos.ssax = 2;
            nibbleReadback.trxreg.rrw = 3;
            nibbleReadback.trxreg.rrh = 1;
            gs.BeginTransfer(nibbleReadback);
            if (gs.ConsumeLocalToHostBytes(nibbleReadbackBytes.data(), nibbleReadbackBytes.size()) != nibbleReadbackBytes.size())
                throw std::runtime_error("SDL_GPU local-to-host T4 byte count mismatch");
            if (!ct24ReadbackCount || !ct16ReadbackCount || !p8ReadbackCount)
                throw std::runtime_error("SDL_GPU local-to-host packed format byte count mismatch");
            gs.SnapshotVram(vram);
        }
        GSMem::TexturePageCache cache;
        rasterPixel = GSMem::ReadTexture(cache, vram.data(), GS_PSM_CT32, 0, 10, 2, 2);
        cpuPixel = GSMem::ReadTexture(cache, vram.data(), GS_PSM_CT32, 0, 10, 40, 2);
        rasterAfterCpuPixel = GSMem::ReadTexture(cache, vram.data(), GS_PSM_CT32, 0, 10, 78, 2);
        tinyRasterPixel = GSMem::ReadTexture(cache, vram.data(), GS_PSM_CT32, 0, 10, 110, 40);
        clearPixel = GSMem::ReadTexture(cache, vram.data(), GS_PSM_CT32, 0, 10, 120, 40);
        uploadPixel = GSMem::ReadTexture(cache, vram.data(), GS_PSM_CT32, 256, 1, 4, 48);
        localCopyPixel = GSMem::ReadTexture(cache, vram.data(), GS_PSM_CT32, 768, 1, 4, 48);
        overlapCopyPixel = GSMem::ReadTexture(cache, vram.data(), GS_PSM_CT32, 512, 1, 7, 48);

        constexpr uint32_t paletteBp = 512u;
        constexpr uint32_t paletteColor = 0xff336699u;
        GSMem::WriteCT32(vram.data(), paletteBp, 1, 0, 0, paletteColor);
        std::array<uint16_t, 512> clut{};
        GSTex0Reg tex{};
        tex.psm = GS_PSM_T4;
        tex.cbp = paletteBp;
        tex.cpsm = GS_PSM_CT32;
        tex.cld = 1;
        {
            GSSDLGpuRaster gpu(vram.data(), clut.data());
            gpu.loadClut(tex, GSTexClutReg{});
            gpu.sync();
        }
        const bool rasterPassed = rasterPixel == 0xff996633u;
        const bool cpuPassed = cpuPixel == 0xff447722u;
        const bool rasterAfterCpuPassed = rasterAfterCpuPixel == 0xff1155aau;
        const bool tinyRasterPassed = tinyRasterPixel == 0xff563412u;
        const bool clearPassed = clearPixel == 0xff563412u;
        const bool uploadPassed = uploadPixel == 0xff102030u;
        const bool localCopyPassed = localCopyPixel == 0xff102030u;
        const bool overlapCopyPassed = overlapCopyPixel == 0xff010203u;
        const std::array<uint8_t, 16> expectedReadbackBytes{
            0x30, 0x20, 0x10, 0xff, 0x60, 0x50, 0x40, 0xff,
            0x90, 0x80, 0x70, 0xff, 0xc0, 0xb0, 0xa0, 0xff};
        const bool localReadbackPassed = localReadbackBytes == expectedReadbackBytes && localReadbackStatePassed;
        const bool packedReadbackPassed = ct24ReadbackBytes == std::array<uint8_t, 3>{0x11, 0x22, 0x33} &&
            ct16ReadbackBytes == std::array<uint8_t, 2>{0xb2, 0xa1} && p8ReadbackBytes[0] == 0x7eu;
        const bool nibbleReadbackPassed = nibbleReadbackBytes[0] == 0x21u && nibbleReadbackBytes[1] == 0x03u;
        const bool clutPassed = clut[0] == 0x6699u && clut[256] == 0xff33u;
        std::printf("SDL_GPU GS check bits: raster=%u cpu=%u order=%u tiny=%u clear=%u upload=%u local=%u overlap=%u readback=%u packed=%u t4=%u\n",
            rasterPassed, cpuPassed, rasterAfterCpuPassed, tinyRasterPassed, clearPassed, uploadPassed,
            localCopyPassed, overlapCopyPassed, localReadbackPassed, packedReadbackPassed, nibbleReadbackPassed);
        std::printf("SDL_GPU Metal GS raster smoke: %s (pixel=%08x expected=ff996633)\n",
            rasterPassed ? "PASS" : "FAIL", rasterPixel);
        std::printf("SDL_GPU Metal GS mixed CPU/GPU coherence: %s (gpu=%08x cpu=%08x gpu-after-cpu=%08x tiny=%08x clear=%08x upload=%08x)\n",
            rasterPassed && cpuPassed && rasterAfterCpuPassed && tinyRasterPassed && clearPassed && uploadPassed && localCopyPassed && overlapCopyPassed ? "PASS" : "FAIL",
            rasterPixel, cpuPixel, rasterAfterCpuPixel, tinyRasterPixel, clearPixel, uploadPixel);
        std::printf("SDL_GPU Metal GS local-to-local transfer: %s (copy=%08x overlap=%08x expected=ff102030:ff010203)\n",
            localCopyPassed && overlapCopyPassed ? "PASS" : "FAIL", localCopyPixel, overlapCopyPixel);
        std::printf("SDL_GPU Metal GS local-to-host transfer: %s (CT32=%s packed=%s T4=%02x%02x expected=21 03)\n",
            localReadbackPassed && packedReadbackPassed && nibbleReadbackPassed ? "PASS" : "FAIL",
            localReadbackPassed ? "16 bytes match" : "byte mismatch",
            packedReadbackPassed ? "CT24/CT16/T8 match" : "packed-byte mismatch",
            nibbleReadbackBytes[0], nibbleReadbackBytes[1]);
        std::printf("SDL_GPU Metal GS CLUT smoke: %s (entry=%04x:%04x expected=ff33:6699)\n",
            clutPassed ? "PASS" : "FAIL", clut[256], clut[0]);
        return rasterPassed && cpuPassed && rasterAfterCpuPassed && tinyRasterPassed && clearPassed && uploadPassed && localCopyPassed && overlapCopyPassed && localReadbackPassed && packedReadbackPassed && nibbleReadbackPassed && clutPassed ? 0 : 1;
    }
    catch (const std::exception &e)
    {
        std::fprintf(stderr, "SDL_GPU Metal GS raster smoke: ERROR: %s\n", e.what());
        return 2;
    }
}
