#pragma once
#ifndef _IMGUI_AUTO_GLM_
#define _IMGUI_AUTO_GLM_

#include "../auto.h"
#include "core.h"
#include "impl_base.h"
#include <glm/glm.hpp>

//		SPECIALIZATIONS
//		===============

#pragma region [I]VECN

IMGUI_AUTO_DEFINE_INLINE(template<>, glm::vec2, IMGUI_AUTO_INPUT_FLOAT2(name.c_str(), &var.x);)
IMGUI_AUTO_DEFINE_INLINE(template<>, glm::vec3, IMGUI_AUTO_INPUT_FLOAT3(name.c_str(), &var.x);)
IMGUI_AUTO_DEFINE_INLINE(template<>, glm::vec4, IMGUI_AUTO_INPUT_FLOAT4(name.c_str(), &var.x);)

IMGUI_AUTO_DEFINE_INLINE(template<>, const glm::vec2, ImGui::Text("%s=(%f,%f)", name.c_str(), var.x, var.y);)
IMGUI_AUTO_DEFINE_INLINE(template<>, const glm::vec3, ImGui::Text("%s=(%f,%f,%f)", name.c_str(), var.x, var.y, var.z);)
IMGUI_AUTO_DEFINE_INLINE(template<>, const glm::vec4, ImGui::Text("%s=(%f,%f,%f,%f)", name.c_str(), var.x, var.y, var.z, var.w);)


IMGUI_AUTO_DEFINE_INLINE(template<>, glm::ivec2, IMGUI_AUTO_INPUT_INT2(name.c_str(), &var.x);)
IMGUI_AUTO_DEFINE_INLINE(template<>, glm::ivec3, IMGUI_AUTO_INPUT_INT3(name.c_str(), &var.x);)
IMGUI_AUTO_DEFINE_INLINE(template<>, glm::ivec4, IMGUI_AUTO_INPUT_INT4(name.c_str(), &var.x);)

IMGUI_AUTO_DEFINE_INLINE(template<>, const glm::ivec2, ImGui::Text("%s=(%d,%d)", name.c_str(), var.x, var.y);)
IMGUI_AUTO_DEFINE_INLINE(template<>, const glm::ivec3, ImGui::Text("%s=(%d,%d,%d)", name.c_str(), var.x, var.y, var.z);)
IMGUI_AUTO_DEFINE_INLINE(template<>, const glm::ivec4, ImGui::Text("%s=(%d,%d,%d,%d)", name.c_str(), var.x, var.y, var.z, var.w);)

#pragma endregion

#pragma region MATNxN

IMGUI_AUTO_DEFINE_BEGIN(template<>, glm::mat2)
	var = glm::transpose(var);
	ImGui::TextUnformatted(("Matrix 2x2 "+name).c_str());
	ImGui::PushID(name.c_str());
	IMGUI_AUTO_INPUT_FLOAT2("row 0", &var[0].x);
	IMGUI_AUTO_INPUT_FLOAT2("row 1", &var[1].x);
	ImGui::PopID();
	var = glm::transpose(var);
IMGUI_AUTO_DEFINE_END

IMGUI_AUTO_DEFINE_BEGIN(template<>, glm::mat3)
	var = glm::transpose(var);
	ImGui::TextUnformatted(("Matrix 3x3 "+name).c_str());
	ImGui::PushID(name.c_str());
	IMGUI_AUTO_INPUT_FLOAT3("row 0", &var[0].x);
	IMGUI_AUTO_INPUT_FLOAT3("row 1", &var[1].x);
	IMGUI_AUTO_INPUT_FLOAT3("row 2", &var[2].x);
	ImGui::PopID();
	var = glm::transpose(var);
IMGUI_AUTO_DEFINE_END

IMGUI_AUTO_DEFINE_BEGIN(template<>, glm::mat4)
	var = glm::transpose(var);
	ImGui::TextUnformatted(("Matrix "+name).c_str());
	ImGui::PushID(name.c_str());
	IMGUI_AUTO_INPUT_FLOAT4("row 0", &var[0].x);
	IMGUI_AUTO_INPUT_FLOAT4("row 1", &var[1].x);
	IMGUI_AUTO_INPUT_FLOAT4("row 2", &var[2].x);
	IMGUI_AUTO_INPUT_FLOAT4("row 3", &var[3].x);
	ImGui::PopID();
	var = glm::transpose(var);
IMGUI_AUTO_DEFINE_END

IMGUI_AUTO_DEFINE_BEGIN(template<>, const glm::mat2)
	ImGui::TextUnformatted(("Matrix "+name).c_str());
	ImGui::Text("%f\t%f", var[0][0], var[1][0]);
	ImGui::Text("%f\t%f", var[0][1], var[1][1]);
IMGUI_AUTO_DEFINE_END

IMGUI_AUTO_DEFINE_BEGIN(template<>, const glm::mat3)
	ImGui::TextUnformatted(("Matrix "+name).c_str());
	ImGui::Text("%f\t%f\t%f", var[0][0], var[1][0], var[2][0]);
	ImGui::Text("%f\t%f\t%f", var[0][1], var[1][1], var[2][1]);
	ImGui::Text("%f\t%f\t%f", var[0][2], var[1][2], var[2][2]);
IMGUI_AUTO_DEFINE_END

IMGUI_AUTO_DEFINE_BEGIN(template<>, const glm::mat4)
	ImGui::TextUnformatted(("Matrix "+name).c_str());
	ImGui::Text("%f\t%f\t%f\t%f", var[0][0], var[1][0], var[2][0], var[3][0]);
	ImGui::Text("%f\t%f\t%f\t%f", var[0][1], var[1][1], var[2][1], var[3][1]);
	ImGui::Text("%f\t%f\t%f\t%f", var[0][2], var[1][2], var[2][2], var[3][2]);
	ImGui::Text("%f\t%f\t%f\t%f", var[0][3], var[1][3], var[2][3], var[3][3]);
IMGUI_AUTO_DEFINE_END

#pragma endregion

#endif // !_IMGUI_AUTO_GLM_