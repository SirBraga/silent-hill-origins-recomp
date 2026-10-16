#include "launcher.h"
#include <raylib.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <sstream>

#if defined(_WIN32)
// Only the process functions are used: without the GDI and USER parts, windows.h does not clash with raylib
// (Rectangle, CloseWindow, ShowCursor).
#define WIN32_LEAN_AND_MEAN
#define NOGDI
#define NOUSER
#include <windows.h>
#else
#include <csignal>
#include <fcntl.h>
#include <sys/wait.h>
#include <unistd.h>
extern char **environ;
#endif

namespace fs = std::filesystem;

namespace launcher
{
    const std::vector<Action> kActions = {
        {"cross", "Cruz (X)", "Botões", {KEY_X, KEY_SPACE}},
        {"circle", "Círculo (O)", "Botões", {KEY_C, KEY_BACKSPACE}},
        {"square", "Quadrado", "Botões", {KEY_Z, KEY_KP_0}},
        {"triangle", "Triângulo", "Botões", {KEY_V, KEY_KP_1}},
        {"l1", "L1", "Gatilhos", {KEY_Q, 0}},
        {"r1", "R1", "Gatilhos", {KEY_E, 0}},
        {"l2", "L2", "Gatilhos", {KEY_LEFT_SHIFT, 0}},
        {"r2", "R2", "Gatilhos", {KEY_RIGHT_SHIFT, 0}},
        {"l3", "L3", "Gatilhos", {0, 0}},
        {"r3", "R3", "Gatilhos", {0, 0}},
        {"start", "Start", "Sistema", {KEY_ENTER, 0}},
        {"select", "Select (pular vídeo)", "Sistema", {KEY_TAB, 0}},
        {"up", "Direcional ↑", "Direcional", {KEY_UP, 0}},
        {"down", "Direcional ↓", "Direcional", {KEY_DOWN, 0}},
        {"left", "Direcional ←", "Direcional", {KEY_LEFT, 0}},
        {"right", "Direcional →", "Direcional", {KEY_RIGHT, 0}},
        {"ls_up", "Analógico esquerdo ↑", "Movimento", {KEY_W, 0}},
        {"ls_down", "Analógico esquerdo ↓", "Movimento", {KEY_S, 0}},
        {"ls_left", "Analógico esquerdo ←", "Movimento", {KEY_A, 0}},
        {"ls_right", "Analógico esquerdo →", "Movimento", {KEY_D, 0}},
        {"rs_up", "Câmera ↑", "Câmera", {KEY_I, 0}},
        {"rs_down", "Câmera ↓", "Câmera", {KEY_K, 0}},
        {"rs_left", "Câmera ←", "Câmera", {KEY_J, 0}},
        {"rs_right", "Câmera →", "Câmera", {KEY_L, 0}},
    };

    const std::vector<Resolution> kResolutions = {
        {"1280 × 720", 1280, 720},   {"1600 × 900", 1600, 900},   {"1920 × 1080", 1920, 1080},
        {"2560 × 1440", 2560, 1440}, {"3840 × 2160", 3840, 2160}, {"Personalizada", 0, 0},
    };

    namespace
    {
        using Ini = std::map<std::string, std::map<std::string, std::string>>;
        std::string trim(const std::string &s)
        {
            const auto a = s.find_first_not_of(" \t\r\n");
            if (a == std::string::npos)
                return "";
            return s.substr(a, s.find_last_not_of(" \t\r\n") - a + 1);
        }
        Ini readIni(const fs::path &p, std::vector<std::pair<std::string, std::string>> *envOrdered = nullptr)
        {
            Ini ini;
            std::ifstream f(p);
            std::string line, sec;
            while (std::getline(f, line))
            {
                line = trim(line);
                if (line.empty() || line[0] == '#' || line[0] == ';')
                    continue;
                if (line[0] == '[')
                {
                    sec = trim(line.substr(1, line.find(']') - 1));
                    continue;
                }
                const auto eq = line.find('=');
                if (eq == std::string::npos)
                    continue;
                const std::string k = trim(line.substr(0, eq)), v = trim(line.substr(eq + 1));
                ini[sec][k] = v;
                if (envOrdered && sec == "env")
                    envOrdered->push_back({k, v});
            }
            return ini;
        }
        int toInt(const std::string &s, int d)
        {
            try { return std::stoi(s); } catch (...) { return d; }
        }
        std::string get(const Ini &i, const char *sec, const char *key, const std::string &d = "")
        {
            auto s = i.find(sec);
            if (s == i.end()) return d;
            auto k = s->second.find(key);
            return k == s->second.end() ? d : k->second;
        }
    }

    App::App()
    {
        std::vector<fs::path> starts;
        std::error_code ec;
        starts.push_back(fs::current_path(ec));
        for (auto start : starts)
            for (int i = 0; i < 6 && !start.empty(); ++i, start = start.parent_path())
                if (fs::exists(start / "config" / "SLUS_217.31.toml"))
                {
                    root = start.string();
                    break;
                }
        if (root.empty())
        {
            const fs::path exe = fs::path(GetApplicationDirectory());
            for (auto p = exe; !p.empty() && p != p.parent_path(); p = p.parent_path())
                if (fs::exists(p / "config" / "SLUS_217.31.toml")) { root = p.string(); break; }
        }
        if (root.empty())
            root = fs::current_path(ec).string();
        resetKeys();
        load();
        scanMods();
    }

    std::string App::settingsPath() const { return (fs::path(root) / "launcher.ini").string(); }
    std::string App::logPath() const { return (fs::path(root) / "ps2recomp" / "logs" / "runner.log").string(); }

    void App::resetKeys()
    {
        for (const auto &a : kActions)
            s.keys[a.id] = {a.defaults[0], a.defaults[1]};
    }

    void App::load()
    {
        const Ini ini = readIni(settingsPath());
        s.iso = get(ini, "game", "iso");
        s.resolution = std::clamp(toInt(get(ini, "video", "resolution", "3"), 3), 0, (int)kResolutions.size() - 1);
        s.customW = toInt(get(ini, "video", "custom_w", "1920"), 1920);
        s.customH = toInt(get(ini, "video", "custom_h", "1080"), 1080);
        s.fullscreen = get(ini, "video", "fullscreen", "0") == "1";
        s.widescreen = get(ini, "video", "widescreen", "1") == "1";
        s.tickRate = std::clamp(toInt(get(ini, "video", "tick_rate", "60"), 60), 30, 60);
        s.internalScale = std::clamp(toInt(get(ini, "video", "internal_scale", "4"), 4), 1, 4);
        s.gamma = std::clamp((float)std::atof(get(ini, "video", "gamma", "1.15").c_str()), 0.8f, 1.6f);
        s.aa = std::clamp(toInt(get(ini, "video", "aa", get(ini, "video", "fxaa", "1") != "0" ? "1" : "0"), 1), 0, 2);
        s.sharpenOn = get(ini, "video", "sharpen_on", "0") == "1";
        s.sharpen = std::clamp((float)std::atof(get(ini, "video", "sharpen", "0.5").c_str()), 0.05f, 1.0f);
        s.aoOn = get(ini, "video", "ao_on", "0") == "1";
        s.ao = std::clamp((float)std::atof(get(ini, "video", "ao", "0.6").c_str()), 0.05f, 1.0f);
        s.softOn = get(ini, "video", "soft_shadows_on", "0") == "1";
        s.soft = std::clamp((float)std::atof(get(ini, "video", "soft_shadows", "0.6").c_str()), 0.05f, 1.0f);
        s.language = get(ini, "game", "language", "pt");
        s.inputDevice = std::clamp(toInt(get(ini, "input", "device", "0"), 0), 0, 1);
        s.mouseSens = std::clamp(toInt(get(ini, "input", "mouse_sens", "50"), 50), 1, 100);
        s.showFps = get(ini, "advanced", "show_fps", "0") == "1";
        s.debug = get(ini, "advanced", "debug", "0") == "1";
        for (const auto &a : kActions)
        {
            const std::string v = get(ini, "keys", a.id);
            if (v.empty()) continue;
            int k0 = 0, k1 = 0;
            std::sscanf(v.c_str(), "%d,%d", &k0, &k1);
            s.keys[a.id] = {k0, k1};
        }
        firstRun_ = !fs::exists(settingsPath());
        pendingMods_ = get(ini, "mods", "enabled");
    }

    void App::save() const
    {
        std::ofstream f(settingsPath());
        f << "[game]\niso=" << s.iso << "\nlanguage=" << s.language << "\n\n[video]\nresolution=" << s.resolution << "\ncustom_w=" << s.customW << "\ncustom_h=" << s.customH
          << "\nfullscreen=" << s.fullscreen << "\nwidescreen=" << s.widescreen << "\ntick_rate=" << s.tickRate
          << "\ninternal_scale=" << s.internalScale << "\ngamma=" << s.gamma
          << "\naa=" << s.aa << "\nsharpen_on=" << s.sharpenOn << "\nsharpen=" << s.sharpen
          << "\nao_on=" << s.aoOn << "\nao=" << s.ao << "\nsoft_shadows_on=" << s.softOn << "\nsoft_shadows=" << s.soft << "\n\n[input]\ndevice=" << s.inputDevice << "\nmouse_sens=" << s.mouseSens
          << "\n\n[advanced]\nshow_fps=" << s.showFps << "\ndebug=" << s.debug
          << "\n\n[keys]\n";
        for (const auto &a : kActions)
        {
            const auto &k = s.keys.at(a.id);
            f << a.id << "=" << k[0] << "," << k[1] << "\n";
        }
        f << "\n[mods]\nenabled=";
        bool first = true;
        for (const auto &m : mods)
            if (m.enabled) { f << (first ? "" : ",") << m.id; first = false; }
        f << "\n";
        writeKeymap();
    }

    // Read by the runtime (PS2X_KEYMAP): "<action>=<raylib key>,<raylib key>".
    void App::writeKeymap() const
    {
        std::ofstream f(fs::path(root) / "keymap.ini");
        for (const auto &a : kActions)
        {
            const auto &k = s.keys.at(a.id);
            f << a.id << "=" << k[0] << "," << k[1] << "\n";
        }
    }

    void App::scanMods()
    {
        mods.clear();
        std::error_code ec;
        const fs::path dir = fs::path(root) / "mods";
        if (!fs::exists(dir, ec)) return;
        for (const auto &e : fs::directory_iterator(dir, ec))
        {
            const fs::path ini = e.path() / "mod.ini";
            if (!e.is_directory() || !fs::exists(ini)) continue;
            Mod m;
            const Ini i = readIni(ini, &m.env);
            m.id = e.path().filename().string();
            m.dir = e.path().string();
            m.name = get(i, "mod", "name", m.id);
            m.description = get(i, "mod", "description");
            m.author = get(i, "mod", "author");
            m.version = get(i, "mod", "version");
            m.virtualIso = get(i, "mod", "virtual_iso", "0") == "1";
            m.onEnable = get(i, "hooks", "on_enable");
            m.onDisable = get(i, "hooks", "on_disable");
            std::stringstream ss(pendingMods_);
            for (std::string t; std::getline(ss, t, ',');)
                if (t == m.id) m.enabled = true;
            mods.push_back(std::move(m));
        }
        std::sort(mods.begin(), mods.end(), [](const Mod &a, const Mod &b) { return a.name < b.name; });
        if (firstRun_)
        {
            firstRun_ = false;
            save();
        }
    }

    // Mods may ship install/uninstall commands (run from the project root), e.g. swapping a disc file.
    void App::setMod(Mod &m, bool on)
    {
        const std::string &cmd = on ? m.onEnable : m.onDisable;
        if (!cmd.empty())
        {
            std::error_code ec;
            const auto cwd = fs::current_path(ec);
            fs::current_path(root, ec);
            const int rc = std::system(cmd.c_str());
            fs::current_path(cwd, ec);
            if (rc != 0)
            {
                status = "O mod \"" + m.name + "\" falhou ao " + (on ? "ativar" : "desativar") + " (código " + std::to_string(rc) + ")";
                return;
            }
        }
        m.enabled = on;
        save();
    }

    IsoInfo App::inspectIso(const std::string &path) const
    {
        IsoInfo info;
        std::error_code ec;
        if (path.empty() || !fs::is_regular_file(path, ec))
        {
            info.note = path.empty() ? "Escolha a ISO do Silent Hill Origins" : "Arquivo não encontrado";
            return info;
        }
        info.exists = true;
        info.size = fs::file_size(path, ec);
        std::ifstream f(path, std::ios::binary);
        std::string head(2 << 20, '\0');
        f.read(head.data(), head.size());
        head.resize((size_t)f.gcount());
        const bool iso9660 = head.size() > 0x8006 && head.compare(0x8001, 5, "CD001") == 0;
        info.recognised = iso9660 && head.find("SLUS_217.31") != std::string::npos;
        info.note = info.recognised ? "Silent Hill Origins (NTSC-U) · SLUS-21731"
                    : iso9660      ? "ISO válida, mas não parece ser Silent Hill Origins (SLUS-21731)"
                                   : "Não é uma imagem ISO 9660";
        return info;
    }

    std::string App::runnerPath() const
    {
#if defined(_WIN32)
        const char *exe = "SilentHillOriginsRecompiled.exe";
#else
        const char *exe = "SilentHillOriginsRecompiled";
#endif
        return (fs::path(root) / "tools/PS2Recomp/out/rt/ps2xRuntime" / exe).string();
    }
    bool App::runnerExists() const { std::error_code ec; return fs::exists(runnerPath(), ec); }

    bool App::nativeRendererAvailable() const
    {
        std::error_code ec;
#if defined(_WIN32)
        return fs::exists(fs::path(root) / "recomp/gpu/build/libblack-native-gs.dll", ec); // Vulkan backend
#else
        return fs::exists(fs::path(root) / "recomp/gpu/build/libblack-native-gs.so", ec); // Metal backend
#endif
    }

    std::vector<std::pair<std::string, std::string>> App::buildEnv() const
    {
        std::vector<std::pair<std::string, std::string>> e;
        const fs::path gpu = fs::path(root) / "recomp/gpu";
        e.push_back({"PS2X_CD_IMAGE", (fs::path(discDir()) / ".layout").string()}); // the disc read from the extracted folder
        e.push_back({"PS2X_CD_ROOT", discDir()});

        // Renderer: the native one (Metal on macOS, Vulkan on Windows), drawn straight to the window at internal_scale
        // times the game's resolution. It is loaded through the runtime's GS module interface (PS2X_GS_PARALLEL*).
#if defined(_WIN32)
        const fs::path nativeModule = gpu / "build/libblack-native-gs.dll";
#else
        const fs::path nativeModule = gpu / "build/libblack-native-gs.so";
#endif
        if (nativeRendererAvailable())
        {
            e.push_back({"PS2X_GS_PARALLEL", "1"});
            e.push_back({"PS2X_GS_PARALLEL_MODULE", nativeModule.string()});
            e.push_back({"PS2X_GS_NATIVE_PRESENT", "1"});
            e.push_back({"PS2X_GS_NATIVE_SCALE", std::to_string(s.internalScale)});
            char g[32];
            std::snprintf(g, sizeof g, "%.2f", s.gamma);
            e.push_back({"PS2X_GS_NATIVE_GAMMA", g});
            e.push_back({"PS2X_GS_NATIVE_FXAA", s.aa == 1 ? "1" : "0"});
            e.push_back({"PS2X_GS_NATIVE_SMAA", s.aa == 2 ? "1" : "0"});
            std::snprintf(g, sizeof g, "%.2f", s.sharpenOn ? s.sharpen : 0.0f);
            e.push_back({"PS2X_GS_NATIVE_SHARPEN", g});
            std::snprintf(g, sizeof g, "%.2f", s.sharpen);
            e.push_back({"PS2X_SHARPEN_AMOUNT", g});
            std::snprintf(g, sizeof g, "%.2f", s.aoOn ? s.ao : 0.0f);
            e.push_back({"PS2X_GS_NATIVE_AO", g});
            std::snprintf(g, sizeof g, "%.2f", s.ao);
            e.push_back({"PS2X_AO_AMOUNT", g});
            std::snprintf(g, sizeof g, "%.2f", s.softOn ? s.soft : 0.0f);
            e.push_back({"PS2X_GS_NATIVE_SOFT_SHADOWS", g});
            std::snprintf(g, sizeof g, "%.2f", s.soft);
            e.push_back({"PS2X_SOFT_SHADOWS_AMOUNT", g});
        }

        const Resolution &r = kResolutions[s.resolution];
        const int w = r.w ? r.w : s.customW, h = r.h ? r.h : s.customH;
        e.push_back({"PS2X_WINDOW_SIZE", std::to_string(w) + "x" + std::to_string(h)});
        if (s.fullscreen) e.push_back({"PS2X_FULLSCREEN", "1"});
        // 16:9: the game renders anamorphic once 16:9 is chosen in its own "aspect ratio" screen.
        e.push_back({"SHO_WIDESCREEN", s.widescreen ? "1" : "0"});
        if (s.widescreen) e.push_back({"PS2X_DISPLAY_ASPECT", "1.7778"});
        // 60: a new frame every vertical blank instead of every second one (the game measures its frame length).
        e.push_back({"SHO_VSYNC_INTERVAL", s.tickRate >= 60 ? "1" : "2"});
        e.push_back({"SHO_STREAM_30", "0"});
        e.push_back({"SHO_REAL_CLOCK", "0"});
        // Language: Portuguese takes the English slot, with its text and accented font laid over the disc image. The
        // other languages get their save messages rewritten for the PC (a save file, not a memory card).
        e.push_back({"SHO_LANGUAGE", s.language});
        const fs::path overlay = fs::path(root) / (s.language == "pt" ? "ps2recomp/sho_ptbr.ovl" : "ps2recomp/sho_pc.ovl");
        std::error_code ec;
        if (fs::exists(overlay, ec)) e.push_back({"PS2X_CD_OVERLAY", overlay.string()});
        if (s.showFps) e.push_back({"SHO_FPS", "1"});
        if (s.debug) e.push_back({"PS2X_DEBUG", "1"});
        e.push_back({"PS2X_VIF1_THREAD", "1"});
        e.push_back({"PS2X_IOP_THREAD", "1"});
        e.push_back({"PS2X_IOP_QUANTUM", "512"});
        e.push_back({"PS2X_GIF_INCREMENTAL", "0"});
        const fs::path dumps = fs::path(root) / "recomp/diagnostics/gs-dump";
        e.push_back({"PS2X_GS_DUMP", (dumps / "cena.gsdump").string()});
        e.push_back({"PS2X_GS_DUMP_REQUEST", (dumps / "cena.request").string()});
        e.push_back({"PS2X_GS_DUMP_FRAMES", "300"});
        e.push_back({"PS2X_INPUT_DEVICE", s.inputDevice == 1 ? "gamepad" : "keyboard"});
        e.push_back({"PS2X_MOUSE_SENS", std::to_string(s.mouseSens)});
        e.push_back({"PS2X_KEYMAP", (fs::path(root) / "keymap.ini").string()});
#if defined(_WIN32)
        const char *listSeparator = ";";
#else
        const char *listSeparator = ":";
#endif
        for (const auto &m : mods)
            if (m.enabled)
                for (auto kv : m.env)
                {
                    // ${MOD_DIR} is the mod's own folder, so a mod works wherever the project lives.
                    for (size_t at; (at = kv.second.find("${MOD_DIR}")) != std::string::npos;)
                        kv.second.replace(at, 10, m.dir);
                    // Several texture packs stack: their folders are listed together.
                    const auto same = std::find_if(e.begin(), e.end(), [&](const auto &x) { return x.first == kv.first; });
                    if (kv.first == "PS2X_TEXTURE_PACKS" && same != e.end())
                        same->second += listSeparator + kv.second;
                    else if (same != e.end())
                        same->second = kv.second;
                    else
                        e.push_back(kv);
                }
        return e;
    }

    // ---- disc extraction (ISO 9660) ----

    std::string App::discDir() const { return (fs::path(root) / "recomp" / "disc").string(); }

    namespace
    {
        // What the extracted folder was made from: the ISO's size and modification time.
        std::string isoStamp(const std::string &iso)
        {
            std::error_code ec;
            const auto size = fs::file_size(iso, ec);
            const auto time = fs::last_write_time(iso, ec).time_since_epoch().count();
            return std::to_string(size) + " " + std::to_string((long long)time);
        }
    }

    // Extracted and complete (the layout is written last, before the stamp). The ISO is not needed after this: it
    // only matters when a different one is chosen (then it is extracted again).
    bool App::discReady() const
    {
        std::error_code ec;
        std::ifstream f(fs::path(discDir()) / ".extracted");
        std::string line;
        std::getline(f, line);
        if (line.empty() || !fs::exists(fs::path(discDir()) / ".layout", ec)) return false;
        if (!s.iso.empty() && fs::exists(s.iso, ec)) return line == isoStamp(s.iso);
        return true;
    }

    std::string App::extractError() const
    {
        std::lock_guard<std::mutex> lock(extractMutex_);
        return extractError_;
    }

    void App::startExtract()
    {
        if (extracting) return;
        if (extractThread_.joinable()) extractThread_.join();
        extracting = true;
        extractProgress = 0.0;
        {
            std::lock_guard<std::mutex> lock(extractMutex_);
            extractError_.clear();
        }
        const std::string iso = s.iso, out = discDir();
        extractThread_ = std::thread([this, iso, out]
        {
            std::string error;
            std::ifstream in(iso, std::ios::binary);
            const auto readSector = [&](uint32_t lba, uint32_t count, std::vector<char> &buf) -> bool
            {
                buf.resize(size_t(count) * 2048u);
                in.seekg(std::streamoff(lba) * 2048);
                in.read(buf.data(), std::streamsize(buf.size()));
                return bool(in);
            };
            const auto u32 = [](const char *p) { return uint32_t((uint8_t)p[0]) | uint32_t((uint8_t)p[1]) << 8 | uint32_t((uint8_t)p[2]) << 16 | uint32_t((uint8_t)p[3]) << 24; };
            struct Entry { std::string path; uint32_t lba, size; };
            std::vector<Entry> files;
            std::vector<char> sector;
            uint64_t total = 0;
            if (!in || !readSector(16, 1, sector) || sector[0] != 1 || std::string(sector.data() + 1, 5) != "CD001")
                error = "A ISO não é uma imagem ISO 9660";
            else
            {
                // Walk the directory tree from the root record of the primary volume descriptor.
                const char *rootRecord = sector.data() + 156;
                std::vector<std::pair<std::string, std::pair<uint32_t, uint32_t>>> dirs{{"", {u32(rootRecord + 2), u32(rootRecord + 10)}}};
                std::error_code ec;
                fs::remove_all(out, ec);
                fs::create_directories(out, ec);
                for (size_t d = 0; d < dirs.size() && error.empty(); ++d)
                {
                    const std::string base = dirs[d].first;
                    const uint32_t lba = dirs[d].second.first, size = dirs[d].second.second;
                    std::vector<char> data;
                    if (!readSector(lba, (size + 2047u) / 2048u, data)) { error = "Falha ao ler um diretório da ISO"; break; }
                    for (uint32_t at = 0; at < size;)
                    {
                        const uint8_t len = (uint8_t)data[at];
                        if (len == 0) { at = (at / 2048u + 1u) * 2048u; continue; } // records do not cross sectors
                        const char *r = data.data() + at;
                        const uint8_t nameLen = (uint8_t)r[32];
                        std::string name(r + 33, nameLen);
                        const bool isDir = (r[25] & 2) != 0;
                        at += len;
                        if (nameLen == 1 && (name[0] == 0 || name[0] == 1)) continue; // . and ..
                        if (const auto semi = name.find(';'); semi != std::string::npos) name.resize(semi);
                        if (!name.empty() && name.back() == '.') name.pop_back();
                        const std::string path = base.empty() ? name : base + "/" + name;
                        if (isDir)
                        {
                            fs::create_directories(fs::path(out) / path, ec);
                            dirs.push_back({path, {u32(r + 2), u32(r + 10)}});
                        }
                        else
                        {
                            files.push_back({path, u32(r + 2), u32(r + 10)});
                            total += u32(r + 10);
                        }
                    }
                }
                uint64_t done = 0;
                std::vector<char> chunk(8u << 20);
                for (const Entry &f : files)
                {
                    if (!error.empty()) break;
                    std::ofstream o(fs::path(out) / f.path, std::ios::binary);
                    if (!o) { error = "Não foi possível criar " + f.path; break; }
                    in.seekg(std::streamoff(f.lba) * 2048);
                    for (uint64_t left = f.size; left;)
                    {
                        const size_t n = size_t(std::min<uint64_t>(left, chunk.size()));
                        in.read(chunk.data(), std::streamsize(n));
                        if (!in) { error = "Falha ao ler " + f.path; break; }
                        o.write(chunk.data(), std::streamsize(n));
                        left -= n;
                        done += n;
                        extractProgress = total ? double(done) / double(total) : 1.0;
                    }
                }
                if (error.empty())
                {
                    // The disc's layout, so the game runs from this folder with no ISO: which sectors each file
                    // occupies (the game also reads the disc by sector number: streamed audio, the IOP), and the
                    // sectors that belong to no file (volume descriptors, directories) kept in .meta.bin.
                    // All-zero sectors are left out (read back as zeros).
                    std::error_code sizeError;
                    const uint64_t totalSectors = uint64_t(fs::file_size(iso, sizeError)) / 2048u;
                    std::vector<bool> covered(size_t(totalSectors), false);
                    for (const Entry &f : files)
                        for (uint64_t at = f.lba, end = std::min<uint64_t>(f.lba + (uint64_t(f.size) + 2047u) / 2048u, totalSectors); at < end; ++at)
                            covered[size_t(at)] = true;
                    in.clear();
                    std::ofstream layout(fs::path(out) / ".layout");
                    std::ofstream meta(fs::path(out) / ".meta.bin", std::ios::binary);
                    layout << "PS2XDISC 1 " << totalSectors << "\n";
                    for (const Entry &f : files)
                        layout << "F " << f.lba << " " << f.size << " " << f.path << "\n";
                    uint64_t metaOffset = 0;
                    std::vector<char> one;
                    for (uint64_t lba = 0; lba < totalSectors && error.empty();)
                    {
                        if (covered[size_t(lba)]) { ++lba; continue; }
                        // A run of uncovered sectors with data.
                        uint64_t end = lba;
                        std::vector<char> run;
                        while (end < totalSectors && !covered[size_t(end)])
                        {
                            if (!readSector(uint32_t(end), 1, one)) { error = "Falha ao ler a ISO"; break; }
                            if (std::all_of(one.begin(), one.end(), [](char c) { return c == 0; })) break;
                            run.insert(run.end(), one.begin(), one.end());
                            ++end;
                        }
                        if (end > lba)
                        {
                            meta.write(run.data(), std::streamsize(run.size()));
                            layout << "M " << lba << " " << (end - lba) << " " << metaOffset << "\n";
                            metaOffset += run.size();
                            lba = end;
                        }
                        else
                            ++lba;
                    }
                    in.clear();
                }
                if (error.empty())
                {
                    std::ofstream stamp(fs::path(out) / ".extracted");
                    stamp << isoStamp(iso) << "\n";
                }
            }
            {
                std::lock_guard<std::mutex> lock(extractMutex_);
                extractError_ = error;
            }
            extractProgress = 1.0;
            extracting = false;
        });
    }

    App::~App()
    {
        if (extractThread_.joinable()) extractThread_.join();
    }

    bool App::launch()
    {
        if (running()) return true;
        if (!runnerExists()) { status = "Runtime não encontrado. Compile o runtime primeiro (ps2recomp/rebuild_ee.sh)."; return false; }
        if (extracting) { status = "Aguarde: extraindo o disco"; return false; }
        if (!discReady())
        {
            const auto info = inspectIso(s.iso);
            if (!info.exists) { status = s.iso.empty() ? "Escolha a ISO do jogo (ela é extraída uma vez; depois não é mais necessária)" : "ISO não encontrada: " + s.iso; return false; }
            startExtract();
            status = "Extraindo o disco para recomp/disc (só na primeira vez)…";
            return false;
        }
        save();
        std::error_code ec;
        fs::create_directories(fs::path(root) / "recomp/diagnostics/gs-dump", ec);
        fs::remove(fs::path(root) / "recomp/diagnostics/gs-dump/cena.request", ec);
        fs::create_directories(fs::path(logPath()).parent_path(), ec);
        const std::string exe = runnerPath(), elf = (fs::path(root) / "orig" / "SLUS_217.31").string();
        if (!fs::exists(elf, ec)) { status = "ELF não encontrado: " + elf; return false; }
        const auto env = buildEnv();
#if defined(_WIN32)
        for (const auto &kv : env) SetEnvironmentVariableA(kv.first.c_str(), kv.second.c_str());
        SECURITY_ATTRIBUTES sa{sizeof(sa), nullptr, TRUE};
        HANDLE log = CreateFileA(logPath().c_str(), GENERIC_WRITE, FILE_SHARE_READ, &sa, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        STARTUPINFOA si{sizeof(si)};
        if (log != INVALID_HANDLE_VALUE)
        {
            si.dwFlags = STARTF_USESTDHANDLES;
            si.hStdOutput = si.hStdError = log;
            si.hStdInput = GetStdHandle(STD_INPUT_HANDLE);
        }
        PROCESS_INFORMATION pi{};
        std::string cmd = "\"" + exe + "\" \"" + elf + "\"";
        const BOOL ok = CreateProcessA(nullptr, cmd.data(), nullptr, nullptr, TRUE, CREATE_NO_WINDOW, nullptr, root.c_str(), &si, &pi);
        if (log != INVALID_HANDLE_VALUE) CloseHandle(log);
        if (!ok) { status = "Falha ao iniciar o jogo"; return false; }
        CloseHandle(pi.hThread);
        hProc_ = pi.hProcess;
        pid_ = (long)pi.dwProcessId;
#else
        const pid_t p = fork();
        if (p < 0) { status = "fork falhou"; return false; }
        if (p == 0)
        {
            setsid();
            const std::string log = logPath();
            const int fd = open(log.c_str(), O_WRONLY | O_CREAT | O_TRUNC, 0644);
            if (fd >= 0) { dup2(fd, 1); dup2(fd, 2); close(fd); }
            for (const auto &kv : env) setenv(kv.first.c_str(), kv.second.c_str(), 1);
            if (chdir(root.c_str()) != 0) _exit(126);
            execl(exe.c_str(), exe.c_str(), elf.c_str(), (char *)nullptr);
            _exit(127);
        }
        pid_ = p;
#endif
        status = "Jogo em execução";
        return true;
    }

    bool App::running()
    {
        if (!pid_) return false;
#if defined(_WIN32)
        if (WaitForSingleObject((HANDLE)hProc_, 0) == WAIT_TIMEOUT) return true;
        CloseHandle((HANDLE)hProc_);
        pid_ = 0;
        status = "O jogo foi encerrado";
        return false;
#else
        int st = 0;
        if (waitpid((pid_t)pid_, &st, WNOHANG) == 0) return true;
        status = WIFEXITED(st) && WEXITSTATUS(st) != 0 ? "O jogo terminou com erro (veja o log)" : "O jogo foi encerrado";
        pid_ = 0;
        return false;
#endif
    }

    void App::stop()
    {
        if (!running()) return;
#if defined(_WIN32)
        TerminateProcess((HANDLE)hProc_, 0);
#else
        kill((pid_t)pid_, SIGTERM);
#endif
    }

    std::string App::keyName(int c)
    {
        if (c == 0) return "—";
        if (c >= KEY_A && c <= KEY_Z) return std::string(1, (char)c);
        if (c >= KEY_ZERO && c <= KEY_NINE) return std::string(1, (char)c);
        if (c >= KEY_F1 && c <= KEY_F12) return "F" + std::to_string(c - KEY_F1 + 1);
        if (c >= KEY_KP_0 && c <= KEY_KP_9) return "Num " + std::to_string(c - KEY_KP_0);
        switch (c)
        {
        case KEY_SPACE: return "Espaço";
        case KEY_ESCAPE: return "Esc";
        case KEY_ENTER: return "Enter";
        case KEY_TAB: return "Tab";
        case KEY_BACKSPACE: return "Backspace";
        case KEY_UP: return "↑";
        case KEY_DOWN: return "↓";
        case KEY_LEFT: return "←";
        case KEY_RIGHT: return "→";
        case KEY_LEFT_SHIFT: return "Shift esq.";
        case KEY_RIGHT_SHIFT: return "Shift dir.";
        case KEY_LEFT_CONTROL: return "Ctrl esq.";
        case KEY_RIGHT_CONTROL: return "Ctrl dir.";
        case KEY_LEFT_ALT: return "Alt esq.";
        case KEY_RIGHT_ALT: return "Alt dir.";
        case KEY_COMMA: return ",";
        case KEY_PERIOD: return ".";
        case KEY_SLASH: return "/";
        case KEY_SEMICOLON: return ";";
        case KEY_APOSTROPHE: return "'";
        case KEY_LEFT_BRACKET: return "[";
        case KEY_RIGHT_BRACKET: return "]";
        case KEY_MINUS: return "-";
        case KEY_EQUAL: return "=";
        case KEY_INSERT: return "Insert";
        case KEY_DELETE: return "Delete";
        case KEY_HOME: return "Home";
        case KEY_END: return "End";
        case KEY_PAGE_UP: return "Page Up";
        case KEY_PAGE_DOWN: return "Page Down";
        case KEY_KP_ADD: return "Num +";
        case KEY_KP_SUBTRACT: return "Num -";
        case KEY_KP_MULTIPLY: return "Num *";
        case KEY_KP_DIVIDE: return "Num /";
        case KEY_KP_ENTER: return "Num Enter";
        }
        return "Tecla " + std::to_string(c);
    }
}
