#ifndef PS2_PAD_H
#define PS2_PAD_H

#include <cstddef>
#include <cstdint>
#include <functional>
#include <utility>

class PSPadBackend
{
public:
    PSPadBackend() = default;
    ~PSPadBackend() = default;

    bool readState(int port, int slot, uint8_t *data, size_t size);
    // Called by the window loop on the main thread after the host input events were polled: mouse capture and
    // the mouse movement since the previous call (see ps2xTakeMouseLook()).
    static void pollHostInput();
    // Clock (seconds) used by PS2X_PAD_SCRIPT timings.
    static void setGuestClock(std::function<double()> clock) { s_guestClock = std::move(clock); }
    static double guestSeconds() { return s_guestClock ? s_guestClock() : 0.0; }

private:
    static uint16_t scriptedButtons(uint8_t *data);
    static std::function<double()> s_guestClock;
};

// Mouse look: the mouse movement (host points) accumulated since the previous call, while the mouse is captured by
// the game window (a click in the window captures it; F1 or leaving the window releases it). False when the mouse
// is not captured or did not move. Game code hooks turn it into camera angles.
bool ps2xTakeMouseLook(float &dx, float &dy);
// True while the mouse is captured (mouse buttons then act as pad buttons).
bool ps2xMouseCaptured();

#endif
