cmake_minimum_required(VERSION 3.20)
project(sho_launcher CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

include(FetchContent)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(BUILD_GAMES OFF CACHE BOOL "" FORCE)

# Reuse the sources the runtime build already downloaded, when present (saves a clone).
set(_deps "${CMAKE_CURRENT_LIST_DIR}/../tools/PS2Recomp/out/rt/_deps")
foreach(dep raylib imgui rlimgui)
    if(EXISTS "${_deps}/${dep}-src" AND NOT FETCHCONTENT_SOURCE_DIR_${dep})
        string(TOUPPER ${dep} up)
        set(FETCHCONTENT_SOURCE_DIR_${up} "${_deps}/${dep}-src" CACHE PATH "" FORCE)
    endif()
endforeach()

FetchContent_Declare(raylib GIT_REPOSITORY https://github.com/raysan5/raylib.git GIT_TAG 5.5 GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(raylib)
FetchContent_Declare(imgui GIT_REPOSITORY https://github.com/ocornut/imgui.git GIT_TAG v1.92.7-docking GIT_SHALLOW TRUE)
FetchContent_Declare(rlImGui GIT_REPOSITORY https://github.com/raylib-extras/rlImGui.git GIT_TAG Raylib_5_5 GIT_SHALLOW TRUE)
foreach(d imgui rlImGui)
    FetchContent_GetProperties(${d})
    string(TOLOWER ${d} dl)
    if(NOT ${dl}_POPULATED)
        FetchContent_Populate(${d})
    endif()
endforeach()

add_library(imgui_lib STATIC
    ${imgui_SOURCE_DIR}/imgui.cpp ${imgui_SOURCE_DIR}/imgui_draw.cpp
    ${imgui_SOURCE_DIR}/imgui_tables.cpp ${imgui_SOURCE_DIR}/imgui_widgets.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/third_party/rlImGui.cpp)
target_include_directories(imgui_lib PUBLIC ${imgui_SOURCE_DIR} ${rlimgui_SOURCE_DIR})
target_link_libraries(imgui_lib PUBLIC raylib)

add_executable(sho_launcher src/main.cpp src/launcher.cpp src/ui.cpp)
target_link_libraries(sho_launcher PRIVATE imgui_lib)
