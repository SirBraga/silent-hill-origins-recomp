cmake_minimum_required(VERSION 3.18)
project(black_gpu_bridge LANGUAGES C CXX)
if(APPLE)
 enable_language(OBJCXX)
 add_compile_definitions(VK_USE_PLATFORM_METAL_EXT)
endif()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
# The runtime's headers (the module ABI, the GS memory layout): this repository's by default.
if(NOT RUNTIME_INCLUDE)
 set(RUNTIME_INCLUDE "${CMAKE_CURRENT_LIST_DIR}/../../tools/PS2Recomp/ps2xRuntime/include")
endif()
get_filename_component(RUNTIME_INCLUDE "${RUNTIME_INCLUDE}" ABSOLUTE)

# Replays a GS dump through any renderer module with this ABI and compares the frames (diagnostics/gs_replay.cpp).
add_executable(gs-replay ../diagnostics/gs_replay.cpp)
target_include_directories(gs-replay PRIVATE "${RUNTIME_INCLUDE}")

# Native renderer: GS draw state translated to Metal draw calls (native/native_gs_module.mm). Same module ABI.
if(APPLE)
 add_library(black-native-gs MODULE native/native_gs_module.mm native/gpu_metal.mm "${RUNTIME_INCLUDE}/../src/lib/gs/ps2_gs_memory.cpp")
 target_include_directories(black-native-gs PRIVATE "${RUNTIME_INCLUDE}" native)
 target_compile_options(black-native-gs PRIVATE -fobjc-arc -march=armv8-a+crc)
 set_property(TARGET black-native-gs PROPERTY CXX_STANDARD 20)
 set_property(TARGET black-native-gs PROPERTY OBJCXX_STANDARD 20)
 set_target_properties(black-native-gs PROPERTIES PREFIX "lib" SUFFIX ".so")
 target_link_libraries(black-native-gs PRIVATE "-framework Metal" "-framework Cocoa" "-framework QuartzCore")
endif()

# The same renderer on Vulkan (native/gpu_vulkan.cpp): the Windows build, and on macOS a test build through MoltenVK
# (black-native-gs-vk, headless with gs-replay). Shaders: native/gs_shaders.glsl -> native/compile_shaders.sh ->
# native/gs_shaders_spv.inc (without it the module builds but reports that it has no shaders).
# volk (MIT) and the Vulkan C headers (Apache-2.0) are in third_party/.
set(GS_VOLK "${CMAKE_CURRENT_LIST_DIR}/third_party/volk")
set(GS_VULKAN_HEADERS "${CMAKE_CURRENT_LIST_DIR}/third_party/vulkan-headers/include")
function(add_native_gs_vulkan target)
 add_library(${target} ${ARGN} native/native_gs_module.mm native/gpu_vulkan.cpp "${GS_VOLK}/volk.c" "${RUNTIME_INCLUDE}/../src/lib/gs/ps2_gs_memory.cpp")
 target_include_directories(${target} PRIVATE "${RUNTIME_INCLUDE}" native "${GS_VOLK}" "${GS_VULKAN_HEADERS}")
 target_compile_definitions(${target} PRIVATE GS_BACKEND_VULKAN)
 set_property(TARGET ${target} PROPERTY CXX_STANDARD 20)
 set_target_properties(${target} PROPERTIES PREFIX "lib")
endfunction()
if(APPLE)
 add_native_gs_vulkan(black-native-gs-vk MODULE)
 set_property(TARGET black-native-gs-vk PROPERTY OBJCXX_STANDARD 20)
 target_compile_options(black-native-gs-vk PRIVATE $<$<COMPILE_LANGUAGE:OBJCXX>:-fobjc-arc> -march=armv8-a+crc)
 set_target_properties(black-native-gs-vk PROPERTIES SUFFIX ".so")
 target_link_libraries(black-native-gs-vk PRIVATE "-framework CoreFoundation" "-framework CoreGraphics" "-framework ImageIO")
elseif(WIN32)
 # The .mm file is plain C++ outside macOS.
 set_source_files_properties(native/native_gs_module.mm PROPERTIES LANGUAGE CXX COMPILE_OPTIONS "-xc++")
 add_native_gs_vulkan(black-native-gs SHARED)
 target_compile_definitions(black-native-gs PRIVATE VK_USE_PLATFORM_WIN32_KHR)
 set_source_files_properties("${GS_VOLK}/volk.c" PROPERTIES COMPILE_DEFINITIONS VK_USE_PLATFORM_WIN32_KHR)
endif()
