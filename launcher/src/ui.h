#pragma once
#include "launcher.h"
#include <imgui.h>

namespace ui
{
    struct State
    {
        int page = 0;
        float pageT = 1.0f;  // 0..1 page-enter animation
        int capAction = -1, capSlot = 0;  // key being rebound
        char isoBuf[1024] = "";
        bool isoInit = false;
        bool logLoaded = false;
        std::string logText;
    };
    void loadIcons(const std::string &root);
    void applyTheme(ImFont *body, ImFont *big, ImFont *title);
    void draw(launcher::App &app, State &st, float w, float h);
    void onFileDropped(launcher::App &app, State &st, const std::string &path);
}
