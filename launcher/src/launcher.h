// Launcher model: settings, key bindings, mods, and starting the recompiled game.
#pragma once
#include <array>
#include <atomic>
#include <mutex>
#include <thread>
#include <map>
#include <string>
#include <vector>

namespace launcher
{
    struct Action
    {
        const char *id;     // key in keymap.ini, matched by the runtime
        const char *label;
        const char *group;
        int defaults[2];    // raylib key codes (0 = none)
    };
    extern const std::vector<Action> kActions;

    struct Resolution { const char *label; int w, h; };
    extern const std::vector<Resolution> kResolutions;

    struct Mod
    {
        std::string id, name, description, author, version, dir;
        bool virtualIso = false;
        std::string onEnable, onDisable;
        std::vector<std::pair<std::string, std::string>> env;
        bool enabled = false;
    };

    struct Settings
    {
        std::string iso;                  // the game's disc image (.iso)
        int resolution = 3;               // index in kResolutions; last one = custom
        int customW = 1920, customH = 1080;
        bool fullscreen = false;
        bool widescreen = true;
        int tickRate = 60;                // frames per second: 30 (the console's) or 60
        int internalScale = 4;            // 1..4 times the PS2 resolution
        std::string language = "pt";      // pt (Brazilian Portuguese, the overlay) or en, fr, de, it, es
        float gamma = 1.15f;              // > 1 lifts the dark tones (native renderer)
        // Optional picture effects of the native renderer; each can be switched off.
        int aa = 1;                       // polygon edge smoothing: 0 off, 1 FXAA, 2 SMAA
        bool sharpenOn = false;           // contrast-adaptive sharpening
        float sharpen = 0.5f;             // its strength, 0.05..1
        bool aoOn = false;                // ambient occlusion (corners and contact shadows, from the Z buffer)
        float ao = 0.6f;                  // its strength, 0.05..1
        bool softOn = false;              // soft shadow edges (the flashlight's shadow mask, filtered)
        float soft = 0.6f;                // how soft, 0.05..1
        int inputDevice = 0;              // 0 = keyboard and mouse, 1 = gamepad
        int mouseSens = 50;               // 1..100
        bool showFps = false;
        bool debug = false;
        std::map<std::string, std::array<int, 2>> keys;  // action id -> two key codes
    };

    struct IsoInfo { bool exists = false, recognised = false; unsigned long long size = 0; std::string note; };

    class App
    {
    public:
        App();
        Settings s;
        std::vector<Mod> mods;
        std::string root, status;

        void load();
        void save() const;
        void resetKeys();
        void scanMods();
        void setMod(Mod &m, bool on);
        IsoInfo inspectIso(const std::string &path) const;
        std::string runnerPath() const;
        bool runnerExists() const;
        std::vector<std::pair<std::string, std::string>> buildEnv() const;
        bool launch();
        void stop();
        bool running();
        std::string logPath() const;
        static std::string keyName(int code);
        bool nativeRendererAvailable() const;

        // The disc's files, extracted once into recomp/disc (the runtime opens cdrom0: paths there; raw sector reads
        // still go to the ISO). Extraction runs on its own thread; the UI polls these.
        std::string discDir() const;
        bool discReady() const;              // extracted from this very ISO (size and date match)
        void startExtract();
        std::atomic<bool> extracting{false};
        std::atomic<double> extractProgress{0.0};
        std::string extractError() const;
        ~App();

    private:
        std::string settingsPath() const;
        void writeKeymap() const;
        std::thread extractThread_;
        mutable std::mutex extractMutex_;
        std::string extractError_;
        long pid_ = 0;
        void *hProc_ = nullptr;
        std::string pendingMods_;
        bool firstRun_ = false;
    };
}
