# Windows x64 with llvm-mingw (clang + mingw-w64, UCRT), the same compiler from macOS (cross) or on Windows itself:
#   cmake -S <dir> -B <dir>/build-win -G Ninja -DCMAKE_TOOLCHAIN_FILE=<repo>/cmake/windows-x64.cmake
# LLVM_MINGW (or the environment variable) points at the toolchain. Defaults: on macOS
# ~/Documents/toolchains/llvm-mingw-20261006-ucrt-macos-universal; on Windows C:/llvm-mingw (the ucrt-x86_64 release
# of https://github.com/mstorsjo/llvm-mingw, unpacked there).
set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_SYSTEM_PROCESSOR x86_64)
if(NOT DEFINED LLVM_MINGW)
    if(DEFINED ENV{LLVM_MINGW})
        file(TO_CMAKE_PATH "$ENV{LLVM_MINGW}" LLVM_MINGW)
    elseif(CMAKE_HOST_WIN32)
        set(LLVM_MINGW "C:/llvm-mingw")
    else()
        set(LLVM_MINGW "$ENV{HOME}/Documents/toolchains/llvm-mingw-20261006-ucrt-macos-universal")
    endif()
endif()
set(_triple x86_64-w64-mingw32)
if(CMAKE_HOST_WIN32)
    set(_exe ".exe")
else()
    set(_exe "")
endif()
set(CMAKE_C_COMPILER   "${LLVM_MINGW}/bin/${_triple}-clang${_exe}")
set(CMAKE_CXX_COMPILER "${LLVM_MINGW}/bin/${_triple}-clang++${_exe}")
set(CMAKE_RC_COMPILER  "${LLVM_MINGW}/bin/${_triple}-windres${_exe}")
set(CMAKE_AR           "${LLVM_MINGW}/bin/llvm-ar${_exe}")
set(CMAKE_RANLIB       "${LLVM_MINGW}/bin/llvm-ranlib${_exe}")
set(CMAKE_FIND_ROOT_PATH "${LLVM_MINGW}/${_triple}")
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
# x86-64-v2 (SSE4.2, POPCNT; every x86-64 PC since about 2009): the generated code uses SSE4.1 intrinsics.
set(CMAKE_C_FLAGS_INIT "-march=x86-64-v2")
set(CMAKE_CXX_FLAGS_INIT "-march=x86-64-v2")
# A self-contained .exe: the C++ runtime and winpthreads linked in.
set(CMAKE_EXE_LINKER_FLAGS_INIT "-static")
set(CMAKE_SHARED_LINKER_FLAGS_INIT "-static")
