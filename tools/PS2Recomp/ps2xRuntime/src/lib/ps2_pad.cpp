#include "runtime/ps2_pad.h"
#include "ps2_host_backend.h"
#include <atomic>
#include <chrono>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <map>
#include <string>
#include <utility>
#include <vector>

namespace
{
    constexpr uint8_t kPadAnalogMarker = 0x73;
    constexpr uint8_t kPadStickCenter = 0x80;

    constexpr uint16_t PAD_LEFT = 0x0080u;
    constexpr uint16_t PAD_DOWN = 0x0040u;
    constexpr uint16_t PAD_RIGHT = 0x0020u;
    constexpr uint16_t PAD_UP = 0x0010u;
    constexpr uint16_t PAD_START = 0x0008u;
    constexpr uint16_t PAD_R3 = 0x0004u;
    constexpr uint16_t PAD_L3 = 0x0002u;
    constexpr uint16_t PAD_SELECT = 0x0001u;
    constexpr uint16_t PAD_SQUARE = 0x8000u;
    constexpr uint16_t PAD_CROSS = 0x4000u;
    constexpr uint16_t PAD_CIRCLE = 0x2000u;
    constexpr uint16_t PAD_TRIANGLE = 0x1000u;
    constexpr uint16_t PAD_R1 = 0x0800u;
    constexpr uint16_t PAD_L1 = 0x0400u;
    constexpr uint16_t PAD_R2 = 0x0200u;
    constexpr uint16_t PAD_L2 = 0x0100u;

    // PS2X_KEYMAP=<file>: lines "<action>=<raylib key>,<raylib key>" written by the launcher. Without it
    // (or for a missing action) the built-in layout below applies.
    struct KeyMap
    {
        std::map<std::string, std::pair<int, int>> keys;
        bool loaded = false;
        KeyMap()
        {
            const char *path = std::getenv("PS2X_KEYMAP");
            if (!path)
                return;
            std::ifstream f(path);
            std::string line;
            while (std::getline(f, line))
            {
                const size_t eq = line.find('=');
                if (eq == std::string::npos)
                    continue;
                int a = 0, b = 0;
                std::sscanf(line.c_str() + eq + 1, "%d,%d", &a, &b);
                keys[line.substr(0, eq)] = {a, b};
                loaded = true;
            }
        }
        bool down(const char *id, int def0, int def1 = 0) const
        {
            int a = def0, b = def1;
            if (loaded)
            {
                const auto it = keys.find(id);
                if (it != keys.end())
                    a = it->second.first, b = it->second.second;
            }
            // Escape opens the in-game menu: never a pad button (old key maps had it as Circle).
            return (a != KEY_ESCAPE && pressed(a)) || (b != KEY_ESCAPE && pressed(b));
        }
        // Codes 1000+n are mouse button n (1000 left, 1001 right, 1002 middle, 1003/1004 side buttons) and 1010 is
        // the mouse wheel; they only count while the mouse is captured.
        static bool pressed(int code);
    };
    const KeyMap &keyMap()
    {
        static const KeyMap map;
        return map;
    }

    struct MouseState
    {
        std::atomic<bool> captured{false};
        std::atomic<int64_t> dx{0}, dy{0}; // thousandths of a host point
        std::atomic<int64_t> wheelUntilMs{0}; // the wheel acts as a button for a moment after each notch
        bool skipNextDelta = false;   // main thread only
        bool swallowClick = false;    // main thread only: the click that captured the mouse is not a shot
    };
    MouseState g_mouse;

    int64_t nowMs()
    {
        return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();
    }

    bool KeyMap::pressed(int code)
    {
        if (code <= 0)
            return false;
        if (code < 1000)
            return IsKeyDown(code);
        if (!g_mouse.captured.load(std::memory_order_relaxed) || g_mouse.swallowClick)
            return false;
        if (code == 1010)
            return nowMs() < g_mouse.wheelUntilMs.load(std::memory_order_relaxed);
        return code <= 1006 && IsMouseButtonDown(code - 1000);
    }
}

void PSPadBackend::pollHostInput()
{
    // 0 (zero): ask the GS module for a replayable dump of the next frames (creates the file named by
    // PS2X_GS_DUMP_REQUEST, which the module watches; see PS2X_GS_DUMP).
    if (IsKeyPressed(KEY_ZERO) || IsKeyPressed(KEY_KP_0))
        if (const char *request = std::getenv("PS2X_GS_DUMP_REQUEST"))
            if (std::FILE *f = std::fopen(request, "wb"))
            {
                std::fclose(f);
                std::fprintf(stderr, "[gs-dump] 0: dump requested (%s)\n", request);
            }
    // Silent Hill Origins has no mouse camera: the mouse is left alone unless PS2X_MOUSE_LOOK=1.
    static const bool enabled = []
    {
        const char *env = std::getenv("PS2X_MOUSE_LOOK");
        return env && env[0] == '1';
    }();
    if (!enabled)
        return;
    MouseState &m = g_mouse;
    const bool captured = m.captured.load(std::memory_order_relaxed);
    if (!captured)
    {
        if (IsWindowFocused() && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            DisableCursor();
            m.captured.store(true, std::memory_order_relaxed);
            m.skipNextDelta = true; // the first delta after capturing holds the jump to the window centre
            m.swallowClick = true;
        }
        return;
    }
    if (IsKeyPressed(KEY_F1) || !IsWindowFocused())
    {
        EnableCursor();
        m.captured.store(false, std::memory_order_relaxed);
        m.dx.store(0);
        m.dy.store(0);
        return;
    }
    if (m.swallowClick && !IsMouseButtonDown(MOUSE_BUTTON_LEFT))
        m.swallowClick = false;
    const Vector2 delta = GetMouseDelta();
    if (m.skipNextDelta)
        m.skipNextDelta = false;
    else
    {
        m.dx.fetch_add(static_cast<int64_t>(delta.x * 1000.0f), std::memory_order_relaxed);
        m.dy.fetch_add(static_cast<int64_t>(delta.y * 1000.0f), std::memory_order_relaxed);
    }
    if (GetMouseWheelMove() != 0.0f)
        m.wheelUntilMs.store(nowMs() + 150, std::memory_order_relaxed);
}

bool ps2xTakeMouseLook(float &dx, float &dy)
{
    if (!g_mouse.captured.load(std::memory_order_relaxed))
        return false;
    const int64_t x = g_mouse.dx.exchange(0, std::memory_order_relaxed);
    const int64_t y = g_mouse.dy.exchange(0, std::memory_order_relaxed);
    dx = static_cast<float>(x) / 1000.0f;
    dy = static_cast<float>(y) / 1000.0f;
    return x != 0 || y != 0;
}

bool ps2xMouseCaptured()
{
    return g_mouse.captured.load(std::memory_order_relaxed);
}

bool PSPadBackend::readState(int /*port*/, int /*slot*/, uint8_t *data, size_t size)
{
    if (!data || size < 32)
        return false;

    std::memset(data, 0, 32);
    data[0] = 0x01;
    data[1] = kPadAnalogMarker;
    data[2] = 0xFF;
    data[3] = 0xFF;
    data[4] = data[5] = data[6] = data[7] = kPadStickCenter;

    uint16_t btns = 0xFFFFu;
    constexpr int kGamepad = 0;
    const bool useGamepad = IsGamepadAvailable(kGamepad);
    auto clearBit = [&btns](uint16_t mask)
    { btns &= ~mask; };

    if (useGamepad)
    {
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_FACE_UP))
            clearBit(PAD_UP);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_FACE_DOWN))
            clearBit(PAD_DOWN);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_FACE_LEFT))
            clearBit(PAD_LEFT);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_FACE_RIGHT))
            clearBit(PAD_RIGHT);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_FACE_DOWN))
            clearBit(PAD_CROSS);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_FACE_RIGHT))
            clearBit(PAD_CIRCLE);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_FACE_LEFT))
            clearBit(PAD_SQUARE);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_FACE_UP))
            clearBit(PAD_TRIANGLE);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_TRIGGER_1))
            clearBit(PAD_L1);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_TRIGGER_1))
            clearBit(PAD_R1);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_TRIGGER_2))
            clearBit(PAD_L2);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_TRIGGER_2))
            clearBit(PAD_R2);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_MIDDLE_RIGHT))
            clearBit(PAD_START);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_MIDDLE_LEFT))
            clearBit(PAD_SELECT);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_THUMB))
            clearBit(PAD_L3);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_THUMB))
            clearBit(PAD_R3);

        float lx = GetGamepadAxisMovement(kGamepad, GAMEPAD_AXIS_LEFT_X);
        float ly = GetGamepadAxisMovement(kGamepad, GAMEPAD_AXIS_LEFT_Y);
        float rx = GetGamepadAxisMovement(kGamepad, GAMEPAD_AXIS_RIGHT_X);
        float ry = GetGamepadAxisMovement(kGamepad, GAMEPAD_AXIS_RIGHT_Y);
        data[6] = static_cast<uint8_t>(128 + lx * 127);
        data[7] = static_cast<uint8_t>(128 + ly * 127);
        data[4] = static_cast<uint8_t>(128 + rx * 127);
        data[5] = static_cast<uint8_t>(128 + ry * 127);
    }

    // Keyboard and mouse always count, with or without a controller connected.
    {
        const KeyMap &km = keyMap();
        if (km.down("up", KEY_UP))
            clearBit(PAD_UP);
        if (km.down("down", KEY_DOWN))
            clearBit(PAD_DOWN);
        if (km.down("left", KEY_LEFT))
            clearBit(PAD_LEFT);
        if (km.down("right", KEY_RIGHT))
            clearBit(PAD_RIGHT);
        if (km.down("cross", KEY_X, KEY_SPACE))
            clearBit(PAD_CROSS);
        if (km.down("circle", KEY_C))
            clearBit(PAD_CIRCLE);
        if (km.down("square", KEY_Z, KEY_KP_0))
            clearBit(PAD_SQUARE);
        if (km.down("triangle", KEY_V, KEY_KP_1))
            clearBit(PAD_TRIANGLE);
        // Mouse: left button fires (R1), right button aims (L1), the wheel switches weapon (triangle). These hold
        // even when a keymap file gives the action only keyboard keys.
        if (km.down("l1", KEY_Q) || KeyMap::pressed(1001))
            clearBit(PAD_L1);
        if (km.down("r1", KEY_E) || KeyMap::pressed(1000))
            clearBit(PAD_R1);
        if (KeyMap::pressed(1010))
            clearBit(PAD_TRIANGLE);
        if (km.down("l2", KEY_LEFT_SHIFT))
            clearBit(PAD_L2);
        if (km.down("r2", KEY_RIGHT_SHIFT))
            clearBit(PAD_R2);
        if (km.down("l3", 0))
            clearBit(PAD_L3);
        if (km.down("r3", 0))
            clearBit(PAD_R3);
        if (km.down("start", KEY_ENTER))
            clearBit(PAD_START);
        if (km.down("select", KEY_TAB))
            clearBit(PAD_SELECT);

        // Sticks: WASD = left (movement), IJKL = right (camera). The arrow keys alone drive the
        // d-pad, so walking does not also press the digital directions. A key overrides the controller's stick on
        // its axis only while held.
        auto axis = [&](uint8_t &value, const char *plus, int plusKey, const char *minus, int minusKey)
        {
            const int dir = int(km.down(plus, plusKey)) - int(km.down(minus, minusKey));
            if (dir != 0)
                value = static_cast<uint8_t>(128 + 127 * dir);
        };
        axis(data[6], "ls_right", KEY_D, "ls_left", KEY_A);
        axis(data[7], "ls_down", KEY_S, "ls_up", KEY_W);
        axis(data[4], "rs_right", KEY_L, "rs_left", KEY_J);
        axis(data[5], "rs_down", KEY_K, "rs_up", KEY_I);
    }

    btns &= ~scriptedButtons(data);

    data[2] = static_cast<uint8_t>(btns & 0xFF);
    data[3] = static_cast<uint8_t>(btns >> 8);
    return true;
}

// PS2X_PAD_SCRIPT="<sec>:<button>[+<button>...][:<hold_sec>],..." presses buttons at fixed
// times after the first pad read, for unattended test runs.
// Analog names: ls_left/right/up/down and rs_left/right/up/down.
// Example: PS2X_PAD_SCRIPT="30:up,31:cross,40:start:0.5,50:ls_up:2"
std::function<double()> PSPadBackend::s_guestClock;

uint16_t PSPadBackend::scriptedButtons(uint8_t *data)
{
    struct Press
    {
        double at;
        double hold;
        uint32_t mask;
    };
    static const std::vector<Press> s_script = []
    {
        std::vector<Press> script;
        const char *env = std::getenv("PS2X_PAD_SCRIPT");
        if (!env)
            return script;
        static const std::pair<const char *, uint32_t> kNames[] = {
            {"up", PAD_UP}, {"down", PAD_DOWN}, {"left", PAD_LEFT}, {"right", PAD_RIGHT},
            {"cross", PAD_CROSS}, {"circle", PAD_CIRCLE}, {"square", PAD_SQUARE}, {"triangle", PAD_TRIANGLE},
            {"start", PAD_START}, {"select", PAD_SELECT}, {"l1", PAD_L1}, {"r1", PAD_R1},
            {"l2", PAD_L2}, {"r2", PAD_R2}, {"l3", PAD_L3}, {"r3", PAD_R3},
            {"ls_left", 1u << 16}, {"ls_right", 1u << 17}, {"ls_up", 1u << 18}, {"ls_down", 1u << 19},
            {"rs_left", 1u << 20}, {"rs_right", 1u << 21}, {"rs_up", 1u << 22}, {"rs_down", 1u << 23}};
        std::string all(env);
        size_t pos = 0;
        while (pos < all.size())
        {
            const size_t end = std::min(all.find(',', pos), all.size());
            const std::string item = all.substr(pos, end - pos);
            pos = end + 1;
            const size_t c1 = item.find(':');
            if (c1 == std::string::npos)
                continue;
            const size_t c2 = item.find(':', c1 + 1);
            Press press{std::atof(item.substr(0, c1).c_str()), 0.2, 0};
            const std::string names = item.substr(c1 + 1, c2 == std::string::npos ? std::string::npos : c2 - c1 - 1);
            if (c2 != std::string::npos)
                press.hold = std::atof(item.substr(c2 + 1).c_str());
            size_t np = 0;
            while (np <= names.size())
            {
                const size_t ne = std::min(names.find('+', np), names.size());
                const std::string name = names.substr(np, ne - np);
                for (const auto &[key, mask] : kNames)
                    if (name == key)
                        press.mask |= mask;
                np = ne + 1;
            }
            if (press.mask)
                script.push_back(press);
        }
        return script;
    }();
    if (s_script.empty())
        return 0;
    // Times are guest seconds (NTSC vblanks / 59.94) when a guest clock is installed, so a script
    // stays in sync with the game regardless of host speed; wall time otherwise.
    static const auto s_start = std::chrono::steady_clock::now();
    const double now = s_guestClock ? s_guestClock()
                                    : std::chrono::duration<double>(std::chrono::steady_clock::now() - s_start).count();
    uint32_t mask = 0;
    for (const Press &press : s_script)
        if (now >= press.at && now < press.at + press.hold)
            mask |= press.mask;
    // Script axes override only the named stick dimension; unmentioned dimensions
    // retain live input. Opposite directions cancel, and releasing restores live input.
    for (unsigned axis = 0; axis < 4; ++axis)
    {
        const unsigned shift = 16u + axis * 2u;
        if (mask & (3u << shift))
            data[axis < 2 ? 6 + axis : 2 + axis] = static_cast<uint8_t>(
                128 + 127 * (int((mask >> (shift + 1u)) & 1u) - int((mask >> shift) & 1u)));
    }
    static uint32_t s_lastMask = 0;
    if (mask != s_lastMask)
    {
        std::fprintf(stderr, "[pad-script] t=%.2f buttons=0x%04x sticks=%u,%u/%u,%u\n", now, mask & 0xFFFFu, data[6], data[7], data[4], data[5]);
        s_lastMask = mask;
    }
    return static_cast<uint16_t>(mask);
}
