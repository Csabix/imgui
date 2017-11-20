// Dock From LumixEngine
// https://github.com/nem0/LumixEngine/blob/master/external/imgui/imgui_dock.h
// https://github.com/ocornut/imgui/issues/351

#include "imconfig.h"
#include "imgui.h"

namespace ImGui
{
	IMGUI_API void ShutdownDock();
	IMGUI_API void RootDock(const ImVec2& pos, const ImVec2& size);
	IMGUI_API bool BeginDock(const char* label, bool* opened = nullptr, ImGuiWindowFlags extra_flags = 0);
	IMGUI_API void EndDock();
	IMGUI_API void SetDockActive();
}