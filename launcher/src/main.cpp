#include <algorithm>
#include "launcher.h"
#include "ui.h"
#include <imgui.h>
#include <raylib.h>
#include <rlImGui.h>

#include <cstdlib>
#include <filesystem>

static const char *findFont()
{
    static const char *candidates[] = {
        "/System/Library/Fonts/SFNS.ttf", "/System/Library/Fonts/Helvetica.ttc",
        "C:/Windows/Fonts/segoeui.ttf", "C:/Windows/Fonts/arial.ttf",
        "/usr/share/fonts/truetype/noto/NotoSans-Regular.ttf", "/usr/share/fonts/noto/NotoSans-Regular.ttf",
        "/usr/share/fonts/TTF/DejaVuSans.ttf", "/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf"};
    for (const char *c : candidates)
        if (std::filesystem::exists(c)) return c;
    return nullptr;
}

extern float rlImGuiUiScale;

int main()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_WINDOW_HIGHDPI | FLAG_MSAA_4X_HINT | FLAG_VSYNC_HINT);
    InitWindow(1180, 760, "Silent Hill Origins — Launcher");
    // The layout is designed for 1180x760; a smaller window shows the same layout scaled down (rlImGuiUiScale).
    // The first window fits the screen it opens on (notebooks at 1366x768, or with the system scale at 125-150%).
    {
        const int monitor = GetCurrentMonitor();
        const int mw = GetMonitorWidth(monitor), mh = GetMonitorHeight(monitor);
        if (mw > 0 && mh > 0 && (mw < 1180 + 40 || mh < 760 + 80))
        {
            const float fit = std::min((mw - 40) / 1180.0f, (mh - 80) / 760.0f);
            const int w = int(1180 * fit), h = int(760 * fit);
            SetWindowSize(w, h);
            SetWindowPosition((mw - w) / 2, (mh - h) / 2);
        }
    }
    SetWindowMinSize(640, 412);
    // LAUNCHER_SIZE=WxH and LAUNCHER_SHOT=<file.png>: a window of that size, captured after a second, then closed
    // (layout checks without touching the screen).
    const char *shot = std::getenv("LAUNCHER_SHOT");
    if (const char *size = std::getenv("LAUNCHER_SIZE"))
    {
        int w = 0, h = 0;
        if (std::sscanf(size, "%dx%d", &w, &h) == 2 && w > 0 && h > 0)
        {
            SetWindowMinSize(1, 1);
            SetWindowSize(w, h);
        }
    }
    int frame = 0;
    SetExitKey(KEY_NULL);
    SetTargetFPS(60);

    rlImGuiBeginInitImGui();
    ImGuiIO &io = ImGui::GetIO();
    io.IniFilename = nullptr;
    const float dpi = GetWindowScaleDPI().x > 0 ? GetWindowScaleDPI().x : 1.0f;
    const char *font = findFont();
    ImFont *fonts[3];
    const float sizes[] = {16, 20, 40};
    for (int i = 0; i < 3; ++i)
        fonts[i] = font ? io.Fonts->AddFontFromFileTTF(font, sizes[i] * dpi) : io.Fonts->AddFontDefault();
    io.FontDefault = fonts[0];
    io.FontGlobalScale = 1.0f / dpi;
    rlImGuiEndInitImGui();
    ui::applyTheme(fonts[0], fonts[1], fonts[2]);

    launcher::App app;
    ui::loadIcons(app.root);
    ui::State st;
    if (const char *pg = std::getenv("LAUNCHER_PAGE")) st.page = std::atoi(pg);
    while (!WindowShouldClose())
    {
        if (IsFileDropped())
        {
            FilePathList f = LoadDroppedFiles();
            if (f.count > 0) ui::onFileDropped(app, st, f.paths[0]);
            UnloadDroppedFiles(f);
        }
        app.running();  // refreshes the status when the game exits
        BeginDrawing();
        ClearBackground({11, 11, 12, 255});
        rlImGuiUiScale = std::clamp(std::min(GetScreenWidth() / 1180.0f, GetScreenHeight() / 760.0f), 0.5f, 1.0f);
        rlImGuiBegin();
        ui::draw(app, st, GetScreenWidth() / rlImGuiUiScale, GetScreenHeight() / rlImGuiUiScale);
        rlImGuiEnd();
        EndDrawing();
        if (shot && ++frame == 60)
        {
            TakeScreenshot(shot);
            break;
        }
    }
    app.save();
    rlImGuiShutdown();
    CloseWindow();
    return 0;
}
