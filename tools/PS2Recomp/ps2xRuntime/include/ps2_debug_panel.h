#ifndef PS2_DEBUG_PANEL_H
#define PS2_DEBUG_PANEL_H

class PS2Runtime;

class PS2DebugPanel
{
public:
    void initialize();
    void shutdown();
    void draw(PS2Runtime &runtime);

    bool isVisible() const { return m_visible; }
    void setVisible(bool visible) { m_visible = visible; }
    void toggleVisible() { m_visible = !m_visible; }

private:
    bool m_initialized = false;
    // The in-game menu (Escape): pauses the game, hides the native picture and offers display options and quitting.
    bool m_menuOpen = false;
    bool m_menuTestShot = false;
    float m_menuGamma = 1.15f, m_menuBrightness = 1.0f;
    int m_menuAa = 1; // edge smoothing: 0 off, 1 FXAA, 2 SMAA
    float m_menuSharpen = 0.5f;
    bool m_menuSharpenOn = false;
    float m_menuAo = 0.6f;
    bool m_menuAoOn = false;
    float m_menuSoft = 0.6f;
    bool m_menuSoftOn = false;
    int m_menuScale = 0; // internal resolution for the next start (launcher.ini), 0 = not changed
    void setMenuOpen(PS2Runtime &runtime, bool open);
    bool drawMenu(PS2Runtime &runtime); // false when the game should close
    bool m_visible = false; // F1; drawn every frame when shown, which costs the game time
    bool m_showRegisters = true;
    unsigned int m_memoryAddress = 0x00100000u;
    unsigned int m_memoryBytes = 0x100u;
};

#endif // PS2_DEBUG_PANEL_H
