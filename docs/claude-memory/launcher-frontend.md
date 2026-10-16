---
name: launcher-frontend
description: ImGui+raylib launcher in launcher/ (ISO, video, keymap, mods); how it talks to the runtime
metadata:
  type: project
---

launcher/ is a standalone cross-platform ImGui+raylib app (reuses deps from tools/PS2Recomp/out/rt/_deps). It writes launcher.ini + keymap.ini at the repo root and spawns ps2EntryRunner with env vars (same as JogarBlack.command). Runtime reads PS2X_KEYMAP (ps2_pad.cpp) and PS2X_FULLSCREEN (ps2_runtime.cpp) — edited in-tree, not yet in ps2recomp/patches. Mods live in mods/<id>/mod.ini ([mod], [env], [hooks]). Build: cmake -S launcher -B launcher/build -G Ninja. N64 reference project (RmlUi-based) is ~/Documents/ChatGPT/n64Recomp, not reusable. See [[goal-120fps-native]].

Controls page shows PlayStation button icons from Kenney Input Prompts 1.5 (CC0, https://kenney.nl/assets/input-prompts), copied to launcher/assets/icons/<action-id>.png (128px "Double" set) with the license file. Test hook: LAUNCHER_PAGE=0..4 opens a given page. `timeout` does not exist on this Mac: run GUI tests with `( cmd & ); sleep N; pkill`.
