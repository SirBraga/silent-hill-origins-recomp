#include "runtime/platform_dl.h"

#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOGDI
#define NOUSER
#include <windows.h>

namespace ps2x
{
    void *dlOpen(const char *path) { return reinterpret_cast<void *>(LoadLibraryA(path)); }
    void *dlSym(void *library, const char *name) { return reinterpret_cast<void *>(GetProcAddress(static_cast<HMODULE>(library), name)); }
    void dlClose(void *library) { FreeLibrary(static_cast<HMODULE>(library)); }
    std::string dlError() { return "LoadLibrary/GetProcAddress failed, error " + std::to_string(GetLastError()); }
}
#else
#include <dlfcn.h>

namespace ps2x
{
    void *dlOpen(const char *path) { return dlopen(path, RTLD_NOW | RTLD_LOCAL); }
    void *dlSym(void *library, const char *name) { return dlsym(library, name); }
    void dlClose(void *library) { dlclose(library); }
    std::string dlError() { const char *e = dlerror(); return e ? e : "dlopen failed"; }
}
#endif
