// Loading a shared library and a symbol from it: dlopen on macOS/Linux, LoadLibrary on Windows. The Windows side
// lives in its own .cpp (src/lib/platform_dl.cpp) so windows.h never meets raylib's names.
#pragma once
#include <string>

namespace ps2x
{
    void *dlOpen(const char *path);
    void *dlSym(void *library, const char *name);
    void dlClose(void *library);
    std::string dlError();
}
