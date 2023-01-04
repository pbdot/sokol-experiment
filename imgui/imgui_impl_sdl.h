// dear imgui: Platform Backend for SDL2
// This needs to be used along with a Renderer (e.g. DirectX11, OpenGL3, Vulkan..)
// (Info: SDL2 is a cross-platform general purpose library for handling windows, inputs, graphics context creation, etc.)

// Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Keyboard support. Since 1.87 we are using the io.AddKeyEvent() function. Pass ImGuiKey values to all key functions e.g. ImGui::IsKeyPressed(ImGuiKey_Space). [Legacy SDL_SCANCODE_* values will also be supported unless IMGUI_DISABLE_OBSOLETE_KEYIO is set]
//  [X] Platform: Gamepad support. Enabled with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [X] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'.
// Missing features:
//  [ ] Platform: SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.

// You can use unmodified imgui_impl_* files in your project. See examples/ folder for examples of using this.
// Prefer including the entire imgui/ repository into your project (either as a copy or as a submodule), and only build the backends you need.
// If you are new to Dear ImGui, read documentation from the docs/ folder + read the top of imgui.cpp.
// Read online: https://github.com/ocornut/imgui/tree/master/docs

#ifndef IMGUI_IMPL_SDL_H
#define IMGUI_IMPL_SDL_H

#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include <cimgui.h> // IMGUI_IMPL_API

typedef struct SDL_Window SDL_Window;
typedef struct SDL_Renderer SDL_Renderer;
typedef union SDL_Event SDL_Event;

CIMGUI_API bool     ImGui_ImplSDL2_InitForOpenGL(SDL_Window* window, void* sdl_gl_context);
CIMGUI_API bool     ImGui_ImplSDL2_InitForVulkan(SDL_Window* window);
CIMGUI_API bool     ImGui_ImplSDL2_InitForD3D(SDL_Window* window);
CIMGUI_API bool     ImGui_ImplSDL2_InitForMetal(SDL_Window* window);
CIMGUI_API bool     ImGui_ImplSDL2_InitForSDLRenderer(SDL_Window* window, SDL_Renderer* renderer);
CIMGUI_API void     ImGui_ImplSDL2_Shutdown();
CIMGUI_API void     ImGui_ImplSDL2_NewFrame();
CIMGUI_API bool     ImGui_ImplSDL2_ProcessEvent(const SDL_Event* event);

#ifndef IMGUI_DISABLE_OBSOLETE_FUNCTIONS
static inline void ImGui_ImplSDL2_NewFrame(SDL_Window*) { ImGui_ImplSDL2_NewFrame(); } // 1.84: removed unnecessary parameter
#endif

#endif // IMGUI_IMPL_SDL_H
