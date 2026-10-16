#include "ui.h"
#include <imgui.h>
#include <raylib.h>
#include <rlImGui.h>

#include <filesystem>
#include <map>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <sstream>

using namespace launcher;

namespace ui
{
    namespace
    {
        constexpr ImU32 kAccent = IM_COL32(229, 50, 45, 255);
        constexpr ImU32 kAccentDim = IM_COL32(229, 50, 45, 60);
        constexpr ImU32 kPanel = IM_COL32(21, 21, 24, 255);
        constexpr ImU32 kRaised = IM_COL32(30, 30, 34, 255);
        constexpr ImU32 kLine = IM_COL32(48, 48, 54, 255);
        constexpr ImU32 kDim = IM_COL32(154, 154, 160, 255);
        constexpr ImU32 kText = IM_COL32(237, 237, 239, 255);
        constexpr ImU32 kOk = IM_COL32(86, 200, 120, 255);
        constexpr ImU32 kWarn = IM_COL32(236, 170, 60, 255);

        ImFont *g_big = nullptr, *g_title = nullptr;
        std::map<std::string, Texture2D> g_icons;  // keyed by action id (Kenney Input Prompts, CC0)

        ImVec4 C(ImU32 c) { return ImGui::ColorConvertU32ToFloat4(c); }

        // ---- animation helpers: values chase their target with an exponential ease (frame-rate independent)
        std::map<ImGuiID, float> g_anim;
        float anim(ImGuiID id, float target, float speed = 16.0f)
        {
            float &v = g_anim.try_emplace(id, target).first->second;
            v += (target - v) * (1.0f - std::exp(-speed * ImGui::GetIO().DeltaTime));
            if (std::fabs(target - v) < 0.002f) v = target;
            return v;
        }
        ImU32 mix(ImU32 a, ImU32 b, float t)
        {
            t = std::clamp(t, 0.0f, 1.0f);
            auto ch = [&](int s) { return (ImU32)(((a >> s) & 0xFF) + ((int)((b >> s) & 0xFF) - (int)((a >> s) & 0xFF)) * t); };
            return ch(IM_COL32_R_SHIFT) << IM_COL32_R_SHIFT | ch(IM_COL32_G_SHIFT) << IM_COL32_G_SHIFT |
                   ch(IM_COL32_B_SHIFT) << IM_COL32_B_SHIFT | ch(IM_COL32_A_SHIFT) << IM_COL32_A_SHIFT;
        }
        ImU32 F(ImU32 c) { return ImGui::GetColorU32(c); }  // applies the current style Alpha (page fade)
        bool g_playHover = false;
        bool g_launchAfterExtract = false; // JOGAR pressed before the disc was extracted: start once it is

        std::string pickFile()
        {
            std::string cmd;
#if defined(__APPLE__)
            cmd = "osascript -e 'POSIX path of (choose file with prompt \"Escolha a ISO do Silent Hill Origins\")' 2>/dev/null";
#elif defined(_WIN32)
            cmd = "powershell -NoProfile -Command \"Add-Type -AssemblyName System.Windows.Forms;"
                  "$d=New-Object System.Windows.Forms.OpenFileDialog;$d.Filter='ISO|*.iso;*.bin;*.img|Todos|*.*';"
                  "if($d.ShowDialog() -eq 'OK'){$d.FileName}\"";
#else
            cmd = "zenity --file-selection --title='Escolha a ISO do Silent Hill Origins' 2>/dev/null || kdialog --getopenfilename 2>/dev/null";
#endif
#if defined(_WIN32)
            FILE *p = _popen(cmd.c_str(), "r");
#else
            FILE *p = popen(cmd.c_str(), "r");
#endif
            if (!p) return "";
            char buf[2048] = {0};
            std::string out;
            while (std::fgets(buf, sizeof buf, p)) out += buf;
#if defined(_WIN32)
            _pclose(p);
#else
            pclose(p);
#endif
            while (!out.empty() && (out.back() == '\n' || out.back() == '\r')) out.pop_back();
            return out;
        }

        void header(const char *, const char *) {}

        bool beginCard(const char *id, const char *title)
        {
            ImGui::PushStyleColor(ImGuiCol_ChildBg, C(kPanel));
            ImGui::PushStyleColor(ImGuiCol_Border, C(kLine));
            ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 10);
            ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, {20, 16});
            const bool open = ImGui::BeginChild(id, {0, 0},
                ImGuiChildFlags_Borders | ImGuiChildFlags_AutoResizeY | ImGuiChildFlags_AlwaysUseWindowPadding);
            ImGui::PopStyleVar(2);
            ImGui::PopStyleColor(2);
            if (title && *title)
            {
                ImGui::PushStyleColor(ImGuiCol_Text, C(kAccent));
                ImGui::TextUnformatted(title);
                ImGui::PopStyleColor();
                ImGui::Dummy({0, 4});
            }
            return open;
        }
        void endCard() { ImGui::EndChild(); ImGui::Dummy({0, 6}); }

        // label on the left, control on the right; returns the x where the control starts.
        void rowLabel(const char *label, const char *hint = nullptr)
        {
            ImGui::AlignTextToFramePadding();
            ImGui::TextUnformatted(label);
            if (hint)
            {
                ImGui::SameLine();
                ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
                ImGui::Text("  %s", hint);
                ImGui::PopStyleColor();
            }
        }
        void rightAlign(float w)
        {
            ImGui::SameLine(ImGui::GetContentRegionMax().x - w);
        }

        bool toggle(const char *id, bool *v)
        {
            const float h = 24, w = 46;
            ImDrawList *dl = ImGui::GetWindowDrawList();
            const ImVec2 p = ImGui::GetCursorScreenPos();
            const bool hit = ImGui::InvisibleButton(id, {w, h});
            if (hit) *v = !*v;
            const bool hov = ImGui::IsItemHovered();
            const ImGuiID gid = ImGui::GetID(id);
            const float t = anim(gid, *v ? 1.0f : 0.0f, 18.0f);
            const float hv = anim(gid + 1, hov ? 1.0f : 0.0f, 20.0f);
            const ImU32 off = mix(kRaised, kLine, hv);
            dl->AddRectFilled(p, {p.x + w, p.y + h}, F(mix(off, kAccent, t)), h / 2);
            dl->AddRect(p, {p.x + w, p.y + h}, F(mix(kLine, kAccent, t)), h / 2);
            const float kx = p.x + h / 2 + (w - h) * t;
            dl->AddCircleFilled({kx, p.y + h / 2}, h / 2 - 3 + 0.8f * hv, F(kText));
            return hit;
        }

        bool toggleRow(const char *label, const char *hint, bool *v)
        {
            rowLabel(label, hint);
            rightAlign(46);
            ImGui::PushID(label);
            const bool r = toggle("t", v);
            ImGui::PopID();
            return r;
        }

        bool segmented(const char *id, const char *const *items, int n, int *sel, float w)
        {
            bool changed = false;
            ImDrawList *dl = ImGui::GetWindowDrawList();
            const float segW = w / n, h = 32;
            const ImVec2 p = ImGui::GetCursorScreenPos();
            dl->AddRectFilled(p, {p.x + w, p.y + h}, F(kRaised), 8);
            ImGui::PushID(id);
            // the highlight slides to the selected segment
            const float hx = anim(ImGui::GetID("hl"), segW * (float)*sel, 18.0f);
            dl->AddRectFilled({p.x + hx + 2, p.y + 2}, {p.x + hx + segW - 2, p.y + h - 2}, F(kAccent), 6);
            for (int i = 0; i < n; ++i)
            {
                ImGui::SetCursorScreenPos({p.x + segW * i, p.y});
                ImGui::PushID(i);
                if (ImGui::InvisibleButton("s", {segW, h})) { *sel = i; changed = true; }
                const bool hov = ImGui::IsItemHovered();
                const float hv = anim(ImGui::GetID("h"), (hov && *sel != i) ? 1.0f : 0.0f, 20.0f);
                ImGui::PopID();
                const ImVec2 a{p.x + segW * i + 2, p.y + 2}, b{p.x + segW * (i + 1) - 2, p.y + h - 2};
                if (hv > 0.01f)
                    dl->AddRectFilled(a, b, F(mix(kRaised, kLine, hv)), 6);
                const ImVec2 ts = ImGui::CalcTextSize(items[i]);
                dl->AddText({a.x + (b.x - a.x - ts.x) / 2, a.y + (b.y - a.y - ts.y) / 2}, F(kText), items[i]);
            }
            ImGui::PopID();
            ImGui::SetCursorScreenPos({p.x, p.y + h});
            ImGui::Dummy({w, 2});
            return changed;
        }

        void separator() { ImGui::Separator(); }

        // ------------------------------------------------------------------ pages
        void pagePlay(App &app, State &st)
        {
            header("Jogar", "Aponte para a imagem do disco e inicie.");
            if (!st.isoInit)
            {
                std::snprintf(st.isoBuf, sizeof st.isoBuf, "%s", app.s.iso.c_str());
                st.isoInit = true;
            }
            beginCard("iso", "IMAGEM DO DISCO");
            ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x - 130);
            if (ImGui::InputTextWithHint("##iso", "Caminho da ISO (ou arraste o arquivo para cá)", st.isoBuf, sizeof st.isoBuf))
                app.s.iso = st.isoBuf;
            ImGui::SameLine();
            if (ImGui::Button("Procurar…", {118, 0}))
            {
                const std::string p = pickFile();
                if (!p.empty()) onFileDropped(app, st, p);
            }
            const IsoInfo info = app.inspectIso(app.s.iso);
            ImGui::Dummy({0, 4});
            const ImU32 col = info.recognised ? kOk : (app.s.iso.empty() ? kDim : kWarn);
            ImDrawList *dl = ImGui::GetWindowDrawList();
            const ImVec2 p = ImGui::GetCursorScreenPos();
            dl->AddCircleFilled({p.x + 6, p.y + ImGui::GetTextLineHeight() / 2}, 4, col);
            ImGui::SetCursorScreenPos({p.x + 18, p.y});
            ImGui::PushStyleColor(ImGuiCol_Text, C(col));
            ImGui::TextUnformatted(info.note.c_str());
            ImGui::PopStyleColor();
            if (info.exists)
            {
                ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
                ImGui::Text("%.2f GB", info.size / 1073741824.0);
                ImGui::PopStyleColor();
            }
            endCard();

            beginCard("disc", "ARQUIVOS DO DISCO");
            rowLabel("Pasta", "o jogo lê os arquivos extraídos daqui");
            {
                const std::string where = "recomp/disc";
                rightAlign(ImGui::CalcTextSize(where.c_str()).x);
                ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
                ImGui::TextUnformatted(where.c_str());
                ImGui::PopStyleColor();
            }
            separator();
            if (app.extracting)
            {
                rowLabel("Extraindo…");
                rightAlign(260);
                ImGui::PushStyleColor(ImGuiCol_PlotHistogram, C(kAccent));
                ImGui::ProgressBar((float)app.extractProgress.load(), {260, 0});
                ImGui::PopStyleColor();
            }
            else
            {
                const bool ready = app.discReady();
                const std::string err = app.extractError();
                rowLabel(ready ? "Pronto: a ISO não é mais necessária" : (err.empty() ? "Escolha a ISO: ela é extraída automaticamente" : err.c_str()));
                if (ready && info.exists)
                {
                    rightAlign(150);
                    if (ImGui::Button("Extrair de novo", {150, 0}))
                        app.startExtract();
                }
            }
            endCard();

            beginCard("sys", "SISTEMA");
            rowLabel("Motor do jogo");
            const char *rt = app.runnerExists() ? "encontrado" : "não compilado (ps2recomp/build.sh)";
            rightAlign(ImGui::CalcTextSize(rt).x);
            ImGui::PushStyleColor(ImGuiCol_Text, C(app.runnerExists() ? kOk : kWarn));
            ImGui::TextUnformatted(rt);
            ImGui::PopStyleColor();
            separator();
            rowLabel("Estado");
            rightAlign(ImGui::CalcTextSize(app.status.empty() ? "Pronto" : app.status.c_str()).x);
            ImGui::TextUnformatted(app.status.empty() ? "Pronto" : app.status.c_str());
            separator();
            rowLabel("Pasta do projeto");
            rightAlign(ImGui::CalcTextSize(app.root.c_str()).x);
            ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
            ImGui::TextUnformatted(app.root.c_str());
            ImGui::PopStyleColor();
            endCard();

            beginCard("log", nullptr);
            ImGui::PushStyleColor(ImGuiCol_Text, C(kAccent));
            ImGui::AlignTextToFramePadding();
            ImGui::TextUnformatted("LOG DA ÚLTIMA EXECUÇÃO");
            ImGui::PopStyleColor();
            rightAlign(86);
            if (ImGui::Button("Atualizar", {86, 0}) || !st.logLoaded)
            {
                std::ifstream f(app.logPath());
                std::stringstream ss;
                ss << f.rdbuf();
                const std::string t = ss.str();
                st.logText = t.size() > 12000 ? "…" + t.substr(t.size() - 12000) : t;
                st.logLoaded = true;
            }
            ImGui::PushStyleColor(ImGuiCol_ChildBg, C(IM_COL32(11, 11, 12, 255)));
            ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 8);
            ImGui::BeginChild("logtext", {0, 190}, ImGuiChildFlags_AlwaysUseWindowPadding);
            ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
            ImGui::TextUnformatted(st.logText.empty() ? "(sem log ainda — inicie o jogo)" : st.logText.c_str());
            ImGui::PopStyleColor();
            ImGui::EndChild();
            ImGui::PopStyleVar();
            ImGui::PopStyleColor();
            endCard();
        }

        void pageVideo(App &app, State &)
        {
            Settings &s = app.s;
            header("Vídeo", "Janela, proporção e taxa de atualização do jogo.");

            beginCard("win", "JANELA");
            rowLabel("Resolução da janela");
            rightAlign(220);
            ImGui::SetNextItemWidth(220);
            if (ImGui::BeginCombo("##res", kResolutions[s.resolution].label))
            {
                for (int i = 0; i < (int)kResolutions.size(); ++i)
                    if (ImGui::Selectable(kResolutions[i].label, s.resolution == i)) s.resolution = i;
                ImGui::EndCombo();
            }
            if (s.resolution == (int)kResolutions.size() - 1)
            {
                ImGui::Dummy({0, 4});
                rightAlign(220);
                ImGui::SetNextItemWidth(104);
                ImGui::InputInt("##cw", &s.customW, 0);
                ImGui::SameLine();
                ImGui::SetNextItemWidth(104);
                ImGui::InputInt("##ch", &s.customH, 0);
                s.customW = std::clamp(s.customW, 320, 7680);
                s.customH = std::clamp(s.customH, 240, 4320);
            }
            separator();
            toggleRow("Tela cheia", nullptr, &s.fullscreen);
            separator();
            toggleRow("Widescreen 16:9", "usa a opção 16:9 do próprio jogo", &s.widescreen);
            endCard();

            beginCard("rend", "RENDERIZAÇÃO");
            rowLabel("Renderizador", "Metal no Mac, Vulkan no Windows");
            {
#if defined(_WIN32)
                const char *name = app.nativeRendererAvailable() ? "Nativo (Vulkan)" : "módulo não encontrado";
#else
                const char *name = app.nativeRendererAvailable() ? "Nativo (Metal)" : "módulo não encontrado";
#endif
                rightAlign(ImGui::CalcTextSize(name).x);
                ImGui::PushStyleColor(ImGuiCol_Text, C(app.nativeRendererAvailable() ? kOk : kDim));
                ImGui::TextUnformatted(name);
                ImGui::PopStyleColor();
            }
            separator();
            rowLabel("Resolução interna", "múltiplo da resolução do PS2");
            static const char *sc[] = {"1×", "2×", "3×", "4×"};
            int v = s.internalScale - 1;
            rightAlign(240);
            if (segmented("scale", sc, 4, &v, 240)) s.internalScale = v + 1;
            separator();
            rowLabel("Gama", "acima de 1 clareia as sombras");
            rightAlign(240);
            ImGui::SetNextItemWidth(240);
            ImGui::SliderFloat("##gamma", &s.gamma, 0.8f, 1.6f, "%.2f");
            endCard();

            if (app.nativeRendererAvailable())
            {
                beginCard("fx", "EFEITOS DE IMAGEM");
                rowLabel("Suavizar bordas", "SMAA: bordas limpas sem borrar texturas · FXAA: mais leve");
                {
                    static const char *aa[] = {"Desligado", "FXAA", "SMAA"};
                    rightAlign(240);
                    segmented("aa", aa, 3, &s.aa, 240);
                }
                separator();
                toggleRow("Nitidez", "realça detalhes e texturas sem criar halos", &s.sharpenOn);
                if (s.sharpenOn)
                {
                    rowLabel("Intensidade da nitidez", nullptr);
                    rightAlign(240);
                    ImGui::SetNextItemWidth(240);
                    ImGui::SliderFloat("##sharpen", &s.sharpen, 0.05f, 1.0f, "%.2f");
                }
                separator();
                toggleRow("Oclusão de ambiente", "sombra nos cantos e onde objetos se encostam", &s.aoOn);
                if (s.aoOn)
                {
                    rowLabel("Intensidade da oclusão", nullptr);
                    rightAlign(240);
                    ImGui::SetNextItemWidth(240);
                    ImGui::SliderFloat("##ao", &s.ao, 0.05f, 1.0f, "%.2f");
                }
                separator();
                toggleRow("Sombras suaves", "tira o serrilhado da sombra da lanterna", &s.softOn);
                if (s.softOn)
                {
                    rowLabel("Suavidade", nullptr);
                    rightAlign(240);
                    ImGui::SetNextItemWidth(240);
                    ImGui::SliderFloat("##soft", &s.soft, 0.05f, 1.0f, "%.2f");
                }
                endCard();
            }

            beginCard("rate", "TAXA DE QUADROS");
            rowLabel("Quadros por segundo", "30 = original · 60 = mais fluido");
            static const char *hz[] = {"30", "60"};
            int idx = s.tickRate >= 60 ? 1 : 0;
            rightAlign(160);
            if (segmented("hz", hz, 2, &idx, 160)) s.tickRate = idx ? 60 : 30;
            endCard();
        }

        // Xbox-layout name of the pad button that drives each action (the PS2 layout is fixed on a gamepad).
        const char *padButton(const std::string &id)
        {
            static const std::map<std::string, const char *> m = {
                {"cross", "A"}, {"circle", "B"}, {"square", "X"}, {"triangle", "Y"}, {"l1", "LB"}, {"r1", "RB"},
                {"l2", "LT"}, {"r2", "RT"}, {"l3", "Clique do analógico esq."}, {"r3", "Clique do analógico dir."},
                {"start", "Menu"}, {"select", "Ver"}, {"up", "Direcional ↑"}, {"down", "Direcional ↓"},
                {"left", "Direcional ←"}, {"right", "Direcional →"}, {"ls_up", "Analógico esq. ↑"},
                {"ls_down", "Analógico esq. ↓"}, {"ls_left", "Analógico esq. ←"}, {"ls_right", "Analógico esq. →"},
                {"rs_up", "Analógico dir. ↑"}, {"rs_down", "Analógico dir. ↓"}, {"rs_left", "Analógico dir. ←"},
                {"rs_right", "Analógico dir. →"}};
            const auto it = m.find(id);
            return it == m.end() ? "" : it->second;
        }

        void pageGamepad(App &)
        {
            beginCard("pad", "CONTROLE");
            const bool found = IsGamepadAvailable(0);
            const ImU32 col = found ? kOk : kDim;
            ImDrawList *dl = ImGui::GetWindowDrawList();
            const ImVec2 p = ImGui::GetCursorScreenPos();
            dl->AddCircleFilled({p.x + 6, p.y + ImGui::GetTextLineHeight() / 2}, 4, col);
            ImGui::SetCursorScreenPos({p.x + 18, p.y});
            ImGui::PushStyleColor(ImGuiCol_Text, C(col));
            ImGui::TextUnformatted(found ? GetGamepadName(0) : "Nenhum controle detectado. Conecte um por USB ou Bluetooth.");
            ImGui::PopStyleColor();
            endCard();

            beginCard("padmap", "MAPEAMENTO");
            ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
            ImGui::TextUnformatted("O layout do controle segue o PS2 e ainda não é editável. Botões equivalentes no padrão Xbox:");
            ImGui::PopStyleColor();
            ImGui::Dummy({0, 4});
            for (size_t i = 0; i < kActions.size(); ++i)
            {
                const Action &a = kActions[i];
                ImGui::PushID((int)i);
                ImGui::AlignTextToFramePadding();
                const auto icon = g_icons.find(a.id);
                if (icon != g_icons.end())
                {
                    rlImGuiImageSize(&icon->second, 30, 30);
                    ImGui::SameLine(0, 12);
                }
                ImGui::TextUnformatted(a.label);
                const char *b = padButton(a.id);
                rightAlign(ImGui::CalcTextSize(b).x);
                ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
                ImGui::TextUnformatted(b);
                ImGui::PopStyleColor();
                ImGui::PopID();
            }
            endCard();
        }

        void pageControls(App &app, State &st)
        {
            {
                static const char *dev[] = {"Teclado e mouse", "Controle"};
                segmented("device", dev, 2, &app.s.inputDevice, 360);
                ImGui::Dummy({0, 8});
            }
            if (app.s.inputDevice == 1)
            {
                st.capAction = -1;
                pageGamepad(app);
                return;
            }
            header("Controles", "Clique em uma tecla e pressione a nova. Controles USB/Bluetooth são detectados sozinhos e têm prioridade.");
            if (st.capAction >= 0)
            {
                const int k = GetKeyPressed();
                if (k > 0)
                {
                    auto &slot = app.s.keys[kActions[st.capAction].id][st.capSlot];
                    slot = k;
                    st.capAction = -1;
                }
                else if (ImGui::IsMouseClicked(0) && !ImGui::IsAnyItemHovered())
                    st.capAction = -1;
            }

            const char *group = "";
            bool open = false;
            for (int i = 0; i < (int)kActions.size(); ++i)
            {
                const Action &a = kActions[i];
                if (std::strcmp(a.group, "Câmera") == 0) continue;  // the mouse always drives the camera
                if (std::strcmp(group, a.group) != 0)
                {
                    if (open) endCard();
                    group = a.group;
                    char cid[64];
                    std::snprintf(cid, sizeof cid, "grp_%s", a.group);
                    std::string up = a.group;
                    for (auto &c : up) c = (char)std::toupper((unsigned char)c);
                    // toupper is ASCII-only: upper-case the accented letters used in the group names by hand
                    static const char *const lower[][2] = {{"õ", "Õ"}, {"ã", "Ã"}, {"â", "Â"}, {"ç", "Ç"}, {"é", "É"}, {"á", "Á"}};
                    for (const auto &p : lower)
                        for (size_t at; (at = up.find(p[0])) != std::string::npos;) up.replace(at, std::strlen(p[0]), p[1]);
                    beginCard(cid, up.c_str());
                    open = true;  // EndChild is required even when BeginChild returned false (clipped)
                }
                else
                    ImGui::Dummy({0, 2});
                ImGui::PushID(i);
                ImGui::AlignTextToFramePadding();
                const auto icon = g_icons.find(a.id);
                if (icon != g_icons.end())
                {
                    rlImGuiImageSize(&icon->second, 30, 30);
                    ImGui::SameLine(0, 12);
                }
                ImGui::TextUnformatted(a.label);
                for (int slot = 1; slot >= 0; --slot)
                {
                    const int code = app.s.keys[a.id][slot];
                    bool conflict = false;
                    if (code)
                        for (const auto &o : kActions)
                            for (int os = 0; os < 2; ++os)
                                if ((o.id != a.id || os != slot) && app.s.keys[o.id][os] == code) conflict = true;
                    const bool cap = st.capAction == i && st.capSlot == slot;
                    ImGui::SameLine(ImGui::GetWindowWidth() - 20 - (slot == 1 ? 130.0f : 270.0f));
                    ImGui::PushID(slot);
                    ImGui::PushStyleColor(ImGuiCol_Button, C(cap ? kAccentDim : kRaised));
                    if (conflict) ImGui::PushStyleColor(ImGuiCol_Text, C(kWarn));
                    if (ImGui::Button(cap ? "pressione…" : App::keyName(code).c_str(), {126, 0}))
                    {
                        st.capAction = i;
                        st.capSlot = slot;
                    }
                    if (conflict) ImGui::PopStyleColor();
                    ImGui::PopStyleColor();
                    if (conflict && ImGui::IsItemHovered()) ImGui::SetTooltip("Esta tecla também está em outra ação");
                    if (ImGui::IsItemClicked(ImGuiMouseButton_Right)) app.s.keys[a.id][slot] = 0;
                    ImGui::PopID();
                }
                ImGui::PopID();
            }
            if (open) endCard();
            beginCard("mouse", "MOUSE");
            rowLabel("Sensibilidade da câmera", "o mouse controla a câmera");
            rightAlign(240);
            ImGui::SetNextItemWidth(240);
            ImGui::SliderInt("##sens", &app.s.mouseSens, 1, 100, "%d%%");
            endCard();
            ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
            ImGui::TextUnformatted("Dica: botão direito em uma tecla remove o atalho.");
            ImGui::PopStyleColor();
        }

        void pageMods(App &app, State &)
        {
            header("Mods", "Pacotes em mods/<nome>/mod.ini. Cada um pode definir variáveis de ambiente e comandos de instalação.");
            if (app.mods.empty())
            {
                ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
                ImGui::TextUnformatted("Nenhum mod encontrado em mods/.");
                ImGui::PopStyleColor();
            }
            for (auto &m : app.mods)
            {
                ImGui::PushID(m.id.c_str());
                beginCard(m.id.c_str(), nullptr);
                ImGui::PushFont(g_big);
                ImGui::TextUnformatted(m.name.c_str());
                ImGui::PopFont();
                bool on = m.enabled;
                rightAlign(46);
                if (toggle("t", &on)) app.setMod(m, on);
                ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
                if (!m.author.empty() || !m.version.empty())
                    ImGui::Text("%s%s%s", m.author.c_str(), (!m.author.empty() && !m.version.empty()) ? " · " : "", m.version.c_str());
                ImGui::TextWrapped("%s", m.description.c_str());
                ImGui::PopStyleColor();
                endCard();
                ImGui::PopID();
            }
        }

        void pageAbout(App &)
        {
            beginCard("author", nullptr);
            ImGui::PushFont(g_title, 52);
            ImGui::TextUnformatted("Feito por Pedro Braga");
            ImGui::PopFont();
            ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
            ImGui::TextWrapped("Launcher do Silent Hill Origins recompilado: o jogo do PS2 traduzido por recompilação estática para rodar de forma nativa, sem emulação.");
            ImGui::PopStyleColor();
            endCard();

            beginCard("ver", "VERSÃO");
            rowLabel("Launcher");
            rightAlign(ImGui::CalcTextSize("0.1").x);
            ImGui::TextUnformatted("0.1");
            separator();
            rowLabel("Jogo");
            rightAlign(ImGui::CalcTextSize("Silent Hill Origins · SLUS-21731 (NTSC-U)").x);
            ImGui::TextUnformatted("Silent Hill Origins · SLUS-21731 (NTSC-U)");
            endCard();

            beginCard("credits", "CRÉDITOS");
            static const char *rows[][2] = {
                {"Ícones de controle", "Kenney Input Prompts (CC0) · kenney.nl"},
                {"Interface", "Dear ImGui · rlImGui"},
                {"Janela e entrada", "raylib"},
                {"Recompilador", "PS2Recomp"}};
            for (int i = 0; i < 4; ++i)
            {
                if (i) separator();
                rowLabel(rows[i][0]);
                ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
                rightAlign(ImGui::CalcTextSize(rows[i][1]).x);
                ImGui::TextUnformatted(rows[i][1]);
                ImGui::PopStyleColor();
            }
            endCard();
        }

        void pageAdvanced(App &app, State &)
        {
            Settings &s = app.s;
            header("Avançado", "Opções de diagnóstico e o ambiente que será passado ao jogo.");
            beginCard("adv", "JOGO");
            rowLabel("Idioma", "português usa a tradução com acentos");
            {
                static const char *codes[] = {"pt", "en", "fr", "de", "it", "es"};
                static const char *names[] = {"Português (Brasil)", "English", "Français", "Deutsch", "Italiano", "Español"};
                int cur = 0;
                for (int i = 0; i < 6; ++i)
                    if (s.language == codes[i]) cur = i;
                rightAlign(220);
                ImGui::SetNextItemWidth(220);
                if (ImGui::BeginCombo("##lang", names[cur]))
                {
                    for (int i = 0; i < 6; ++i)
                        if (ImGui::Selectable(names[i], cur == i)) s.language = codes[i];
                    ImGui::EndCombo();
                }
            }
            separator();
            toggleRow("Mostrar FPS no terminal", "senão só registra travadas", &s.showFps);
            separator();
            toggleRow("Modo depuração", "painel de depuração do runtime", &s.debug);
            endCard();
            beginCard("env", "VARIÁVEIS DE AMBIENTE");
            for (const auto &kv : app.buildEnv())
            {
                ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
                ImGui::Text("%s", kv.first.c_str());
                ImGui::PopStyleColor();
                ImGui::SameLine(260);
                ImGui::TextUnformatted(kv.second.empty() ? "(vazio)" : kv.second.c_str());
            }
            endCard();
        }
    }

    void loadIcons(const std::string &root)
    {
        const std::filesystem::path dir = std::filesystem::path(root) / "launcher" / "assets" / "icons";
        for (const auto &a : kActions)
        {
            const std::string p = (dir / (std::string(a.id) + ".png")).string();
            if (!FileExists(p.c_str())) continue;
            Texture2D t = LoadTexture(p.c_str());
            if (t.id == 0) continue;
            GenTextureMipmaps(&t);
            SetTextureFilter(t, TEXTURE_FILTER_TRILINEAR);
            g_icons[a.id] = t;
        }
    }

    void onFileDropped(App &app, State &st, const std::string &path)
    {
        app.s.iso = path;
        std::snprintf(st.isoBuf, sizeof st.isoBuf, "%s", path.c_str());
        if (st.page != 0) { st.page = 0; st.pageT = 0.0f; }
    }

    void applyTheme(ImFont *body, ImFont *big, ImFont *title)
    {
        ImGuiStyle &s = ImGui::GetStyle();
        s.WindowRounding = 0; s.FrameRounding = 8; s.ChildRounding = 10; s.PopupRounding = 8; s.GrabRounding = 8;
        s.FramePadding = {12, 8}; s.ItemSpacing = {10, 8}; s.WindowPadding = {0, 0};
        s.FrameBorderSize = 0; s.ScrollbarSize = 10; s.ScrollbarRounding = 8;
        ImVec4 *c = s.Colors;
        c[ImGuiCol_Text] = C(kText);
        c[ImGuiCol_TextDisabled] = C(kDim);
        c[ImGuiCol_WindowBg] = C(IM_COL32(11, 11, 12, 255));
        c[ImGuiCol_ChildBg] = C(kPanel);
        c[ImGuiCol_PopupBg] = C(kRaised);
        c[ImGuiCol_Border] = C(kLine);
        c[ImGuiCol_FrameBg] = C(kRaised);
        c[ImGuiCol_FrameBgHovered] = C(kLine);
        c[ImGuiCol_FrameBgActive] = C(kLine);
        c[ImGuiCol_Button] = C(kRaised);
        c[ImGuiCol_ButtonHovered] = C(kLine);
        c[ImGuiCol_ButtonActive] = C(kAccentDim);
        c[ImGuiCol_Header] = C(kAccentDim);
        c[ImGuiCol_HeaderHovered] = C(IM_COL32(229, 50, 45, 90));
        c[ImGuiCol_HeaderActive] = C(IM_COL32(229, 50, 45, 120));
        c[ImGuiCol_Separator] = C(kLine);
        c[ImGuiCol_SliderGrab] = C(kAccent);
        c[ImGuiCol_SliderGrabActive] = C(IM_COL32(245, 78, 72, 255));
        c[ImGuiCol_ScrollbarBg] = ImVec4(0, 0, 0, 0);
        c[ImGuiCol_ScrollbarGrab] = C(kLine);
        c[ImGuiCol_TextSelectedBg] = C(IM_COL32(229, 50, 45, 100));
        c[ImGuiCol_NavCursor] = C(kAccent);
        g_big = big;
        g_title = title;
        (void)body;
    }

    namespace
    {
        void navIcon(ImDrawList *dl, int kind, ImVec2 c, ImU32 col)
        {
            const float t = 1.8f;
            switch (kind)
            {
            case 0:  // play
                dl->AddTriangleFilled({c.x - 5, c.y - 8}, {c.x - 5, c.y + 8}, {c.x + 8, c.y}, col);
                break;
            case 1:  // monitor
                dl->AddRect({c.x - 10, c.y - 8}, {c.x + 10, c.y + 5}, col, 3, 0, t);
                dl->AddLine({c.x - 5, c.y + 9}, {c.x + 5, c.y + 9}, col, t);
                break;
            case 2:  // gamepad
                dl->AddRect({c.x - 11, c.y - 6}, {c.x + 11, c.y + 6}, col, 6, 0, t);
                dl->AddLine({c.x - 6, c.y - 2}, {c.x - 6, c.y + 2}, col, t);
                dl->AddLine({c.x - 8, c.y}, {c.x - 4, c.y}, col, t);
                dl->AddCircleFilled({c.x + 5, c.y - 1.5f}, 1.8f, col);
                dl->AddCircleFilled({c.x + 8, c.y + 1.5f}, 1.8f, col);
                break;
            case 3:  // mods (blocks)
                dl->AddRect({c.x - 8, c.y - 8}, {c.x - 1, c.y - 1}, col, 2, 0, t);
                dl->AddRect({c.x + 1, c.y - 8}, {c.x + 8, c.y - 1}, col, 2, 0, t);
                dl->AddRect({c.x - 8, c.y + 1}, {c.x - 1, c.y + 8}, col, 2, 0, t);
                dl->AddRectFilled({c.x + 1, c.y + 1}, {c.x + 8, c.y + 8}, col, 2);
                break;
            case 5:  // info
                dl->AddCircle(c, 10, col, 0, t);
                dl->AddLine({c.x, c.y - 1}, {c.x, c.y + 5}, col, t);
                dl->AddCircleFilled({c.x, c.y - 5}, 1.5f, col);
                break;
            default:  // sliders
                for (int i = 0; i < 3; ++i)
                {
                    const float y = c.y - 7 + i * 7;
                    dl->AddLine({c.x - 10, y}, {c.x + 10, y}, col, t);
                    dl->AddCircleFilled({c.x - 4 + (i == 1 ? 8 : i * 2), y}, 3, col);
                }
            }
        }
    }

    // A font size that fits `text` in `width` (fonts and system scaling differ between machines; a fixed size could
    // overflow the rail or the play button).
    float fitSize(ImFont *font, float wanted, const char *text, float width)
    {
        ImGui::PushFont(font, wanted);
        const float w = ImGui::CalcTextSize(text).x;
        ImGui::PopFont();
        return w > width && w > 0.0f ? wanted * width / w : wanted;
    }

    void draw(App &app, State &st, float w, float h)
    {
        st.pageT += (1.0f - st.pageT) * (1.0f - std::exp(-9.0f * ImGui::GetIO().DeltaTime));
        if (st.pageT > 0.995f) st.pageT = 1.0f;
        ImGui::SetNextWindowPos({0, 0});
        ImGui::SetNextWindowSize({w, h});
        ImGui::Begin("root", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoSavedSettings);
        ImDrawList *dl = ImGui::GetWindowDrawList();

        const float rail = 252, pad = 14;
        dl->AddRectFilled({0, 0}, {rail, h}, IM_COL32(8, 8, 9, 255));
        dl->AddLine({rail, 0}, {rail, h}, kLine);
        dl->AddRectFilledMultiColor({0, 0}, {rail, 200}, IM_COL32(60, 14, 13, 255), IM_COL32(8, 8, 9, 255),
                                    IM_COL32(8, 8, 9, 255), IM_COL32(8, 8, 9, 255));

        // brand
        dl->AddRectFilled({26, 32}, {32, 76}, kAccent, 2);
        ImGui::SetCursorPos({48, 26});
        ImGui::PushFont(g_title, fitSize(g_title, 44, "SILENT HILL", 252 - 48 - 14));
        ImGui::TextUnformatted("SILENT HILL");
        ImGui::PopFont();
        ImGui::SetCursorPos({50, ImGui::GetCursorPosY() - 4});
        ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
        ImGui::PushFont(nullptr, fitSize(nullptr, 22, "O R I G I N S  ·  R E C O M P", 252 - 50 - 14));
        ImGui::TextUnformatted("O R I G I N S  ·  R E C O M P");
        ImGui::PopFont();
        ImGui::PopStyleColor();
        ImGui::SetCursorPos({50, ImGui::GetCursorPosY() + 3});
        ImGui::PushStyleColor(ImGuiCol_Text, C(IM_COL32(120, 120, 126, 255)));
        ImGui::PushFont(nullptr, 22);
        ImGui::TextUnformatted("por Pedro Braga");
        ImGui::PopFont();
        ImGui::PopStyleColor();

        static const char *pages[] = {"Jogar", "Vídeo", "Controles", "Mods", "Avançado", "Sobre"};
        const float rw = rail - pad * 2, rh = 44;
        auto itemY = [&](int i) { return 146.0f + i * (rh + 2) + (i >= 4 ? 14.0f : 0.0f); };
        {   // selection pill glides between items
            const float py = anim(ImGui::GetID("navpill"), itemY(st.page), 14.0f);
            dl->AddRectFilled({pad, py}, {pad + rw, py + rh}, IM_COL32(229, 50, 45, 38), 10);
            dl->AddRect({pad, py}, {pad + rw, py + rh}, IM_COL32(229, 50, 45, 90), 10);
            dl->AddRectFilled({0, py + 10}, {4, py + rh - 10}, kAccent, 2);
        }
        for (int i = 0; i < 6; ++i)
        {
            ImGui::SetCursorPos({pad, itemY(i)});
            ImGui::PushID(i);
            const ImVec2 p = ImGui::GetCursorScreenPos();
            const bool hit = ImGui::InvisibleButton("n", {rw, rh});
            const bool hov = ImGui::IsItemHovered();
            if (hit && st.page != i) { st.page = i; st.pageT = 0.0f; st.capAction = -1; }
            const float a = anim(ImGui::GetID("sel"), st.page == i ? 1.0f : 0.0f, 14.0f);
            const float hv = anim(ImGui::GetID("hov"), hov ? 1.0f : 0.0f, 20.0f);
            if (hv > 0.01f)
                dl->AddRectFilled(p, {p.x + rw, p.y + rh}, IM_COL32(255, 255, 255, (int)(12 * hv * (1.0f - a))), 10);
            const ImU32 rest = hov ? kText : kDim;
            navIcon(dl, i, {p.x + 28, p.y + rh / 2}, mix(rest, kAccent, a));
            const ImVec2 ts = ImGui::CalcTextSize(pages[i]);
            dl->AddText({p.x + 54, p.y + (rh - ts.y) / 2}, mix(rest, kText, a), pages[i]);
            ImGui::PopID();
        }

        // footer pinned to the bottom, same margin as the sides
        const bool running = app.running();
        const bool ready = app.runnerExists();
        const float btnH = 52, fy = h - pad - btnH;
        dl->AddRectFilled({0, fy - 58}, {rail, h}, IM_COL32(13, 13, 15, 255));
        dl->AddLine({0, fy - 58}, {rail, fy - 58}, kLine);
        const ImU32 sc = running ? kOk : (ready ? kDim : kWarn);
        const float dy = fy - 28;
        dl->AddCircleFilled({pad + 6, dy}, 4, sc);
        if (running)
            dl->AddCircle({pad + 6, dy}, 4 + 3 * (0.5f + 0.5f * std::sin((float)GetTime() * 4)), IM_COL32(86, 200, 120, 90), 0, 1.5f);
        const char *stxt = running ? "Jogo em execução" : (ready ? "Pronto para jogar" : "Motor não compilado");
        dl->AddText({pad + 20, dy - ImGui::GetTextLineHeight() / 2}, running ? kText : kDim, stxt);

        ImGui::SetCursorPos({pad, fy});
        ImGui::PushFont(g_big, fitSize(g_big, 38, "EXTRAINDO 100%", rail - pad * 2 - 24));
        ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 12);
        const float ph = anim(ImGui::GetID("playhov"), g_playHover ? 1.0f : 0.0f, 18.0f);
        const ImU32 playCol = running ? mix(kRaised, kLine, ph) : mix(kAccent, IM_COL32(245, 78, 72, 255), ph);
        ImGui::PushStyleColor(ImGuiCol_Button, ImGui::ColorConvertU32ToFloat4(playCol));
        ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImGui::ColorConvertU32ToFloat4(playCol));
        ImGui::PushStyleColor(ImGuiCol_ButtonActive, C(IM_COL32(190, 36, 32, 255)));
        // A recognised ISO that is not extracted yet is extracted right away (once per ISO; an error waits for
        // another ISO or for "Extrair de novo").
        {
            static std::string autoTried;
            if (!app.extracting && !app.s.iso.empty() && app.s.iso != autoTried && !app.discReady() && app.inspectIso(app.s.iso).recognised)
            {
                autoTried = app.s.iso;
                app.save();
                app.startExtract();
            }
        }
        if (g_launchAfterExtract && !app.extracting)
        {
            g_launchAfterExtract = false;
            if (app.extractError().empty()) app.launch();
        }
        char playLabel[32];
        if (app.extracting)
            std::snprintf(playLabel, sizeof playLabel, "EXTRAINDO %d%%", int(app.extractProgress.load() * 100.0));
        else
            std::snprintf(playLabel, sizeof playLabel, "%s", running ? "ENCERRAR" : "JOGAR");
        if (ImGui::Button(playLabel, {rail - pad * 2, btnH}) && !app.extracting)
        {
            if (running) app.stop();
            else if (!app.launch() && app.extracting) g_launchAfterExtract = true;
        }
        g_playHover = ImGui::IsItemHovered();
        ImGui::PopStyleColor(3);
        ImGui::PopStyleVar();
        ImGui::PopFont();

        // current configuration summary, anchored above the footer (hidden if the window is too short)
        if (fy - 58 - 16 - 168 > itemY(5) + rh + 12)
        {
            const Settings &s = app.s;
            const Resolution &r = kResolutions[s.resolution];
            const int rw = r.w ? r.w : s.customW, rh = r.h ? r.h : s.customH;
            int active = 0;
            for (const auto &m : app.mods) active += m.enabled;
            char v[5][64];
            std::snprintf(v[0], 64, "%d × %d%s", rw, rh, s.fullscreen ? " · cheia" : "");
            std::snprintf(v[1], 64, "%d fps", s.tickRate);
            std::snprintf(v[2], 64, "Nativo · %d×", s.internalScale);
            std::snprintf(v[3], 64, "%s", s.widescreen ? "16:9" : "4:3");
            std::snprintf(v[4], 64, "%d %s", active, active == 1 ? "ativo" : "ativos");
            static const char *keys[] = {"Janela", "Quadros", "Gráficos", "Proporção", "Mods"};
            const float ch = 168, cy = fy - 58 - 16 - ch;
            dl->AddRectFilled({pad, cy}, {rail - pad, cy + ch}, kPanel, 10);
            dl->AddRect({pad, cy}, {rail - pad, cy + ch}, kLine, 10);
            dl->AddText({pad + 14, cy + 12}, kAccent, "CONFIGURAÇÃO ATUAL");
            for (int i = 0; i < 5; ++i)
            {
                const float ty = cy + 42 + i * 24;
                dl->AddText({pad + 14, ty}, kDim, keys[i]);
                const ImVec2 ts = ImGui::CalcTextSize(v[i]);
                dl->AddText({rail - pad - 14 - ts.x, ty}, kText, v[i]);
            }
        }

        // content header band
        static const char *titles[] = {"Jogar", "Vídeo", "Controles", "Mods", "Avançado", "Sobre"};
        static const char *subs[] = {
            "Aponte para a imagem do disco e inicie.",
            "Janela, proporção e taxa de atualização do jogo.",
            "Escolha o dispositivo. No teclado, clique em uma tecla e pressione a nova.",
            "Pacotes em mods/<nome>/mod.ini: variáveis de ambiente e comandos de instalação.",
            "Diagnóstico e o ambiente que será passado ao jogo.",
            "Quem fez, versão e créditos."};
        const float hb = 100;
        dl->AddRectFilled({rail, 0}, {w, hb}, IM_COL32(14, 14, 16, 255));
        dl->AddLine({rail, hb}, {w, hb}, kLine);
        dl->AddRectFilled({rail + 18, hb - 2}, {rail + 18 + 48 * st.pageT, hb}, kAccent);
        ImGui::PushStyleVar(ImGuiStyleVar_Alpha, st.pageT);
        ImGui::SetCursorPos({rail + 18 - (1.0f - st.pageT) * 16, 20});
        ImGui::PushFont(g_title, 52);
        ImGui::TextUnformatted(titles[st.page]);
        ImGui::PopFont();
        ImGui::SetCursorPos({rail + 20, ImGui::GetCursorPosY() - 2});
        ImGui::PushStyleColor(ImGuiCol_Text, C(kDim));
        ImGui::TextUnformatted(subs[st.page]);
        ImGui::PopStyleColor();
        ImGui::PopStyleVar();
        if ((st.page == 2 && app.s.inputDevice == 0) || st.page == 3)
        {
            const char *label = st.page == 2 ? "Restaurar padrão" : "Recarregar";
            const float bw = 170;
            ImGui::SetCursorPos({w - 30 - bw, 34});
            ImGui::PushStyleColor(ImGuiCol_Button, C(kRaised));
            if (ImGui::Button(label, {bw, 40}))
            {
                if (st.page == 2) app.resetKeys(); else app.scanMods();
            }
            ImGui::PopStyleColor();
        }

        ImGui::SetCursorPos({rail, hb + 1});
        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, {18, 24});
        ImGui::BeginChild("content", {w - rail, h - hb - 1}, ImGuiChildFlags_AlwaysUseWindowPadding, ImGuiWindowFlags_NoBackground);
        ImGui::PopStyleVar();
        ImGui::PushID(st.page);  // each page keeps its own scroll position
        ImGui::PushStyleVar(ImGuiStyleVar_Alpha, st.pageT);
        ImGui::BeginChild("col", {ImGui::GetContentRegionAvail().x, 0}, ImGuiChildFlags_None, ImGuiWindowFlags_NoBackground);
        switch (st.page)
        {
        case 0: pagePlay(app, st); break;
        case 1: pageVideo(app, st); break;
        case 2: pageControls(app, st); break;
        case 3: pageMods(app, st); break;
        case 4: pageAdvanced(app, st); break;
        default: pageAbout(app); break;
        }
        ImGui::EndChild();
        ImGui::PopStyleVar();
        ImGui::PopID();
        ImGui::EndChild();
        ImGui::End();
    }
}
