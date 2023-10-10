#include "./imgui/imgui_internal.h"
#include "cimgui_bonfire.h"

CIMGUI_API bool igButtonXY(const char* label,float x, float y)
{
    return ImGui::Button(label,ImVec2(x,y));
}

CIMGUI_API bool igBeginTableXY(const char* str_id,int column,ImGuiTableFlags flags,float outer_size_x, float outer_size_y,float inner_width)
{
    return ImGui::BeginTable(str_id,column,flags,ImVec2(outer_size_x, outer_size_y),inner_width);
}

CIMGUI_API void igSetNextWindowContentSizeXY(float sizeX, float sizeY)
{
    return ImGui::SetNextWindowContentSize(ImVec2(sizeX, sizeY));
}

CIMGUI_API void igSetNextWindowSizeXY(float sizeX, float sizeY, ImGuiCond cond)
{
    return ImGui::SetNextWindowSize(ImVec2(sizeX, sizeY),cond);
}

CIMGUI_API void igSetWindowSizeXY(float sizeX, float sizeY, ImGuiCond cond)
{
    return ImGui::SetWindowSize(ImVec2(sizeX, sizeY),cond);
}

CIMGUI_API void igSetNextWindowPosXY(float posX, float posY, ImGuiCond cond, float pivotX, float pivotY)
{
    return ImGui::SetNextWindowPos(ImVec2(posX, posY),cond,ImVec2(pivotX, pivotY));
}

CIMGUI_API void igTextColoredRGBA(float r, float g, float b, float a,const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::TextColoredV(ImVec4(r, g, b, a),fmt,args);
    va_end(args);
}

CIMGUI_API bool igInputTextBurst(const char* label, char* text, size_t capacity, ImGuiInputTextFlags flags)
{
    return ImGui::InputText(label, text, capacity, flags, 0x0, 0x0);
}

CIMGUI_API bool igSelectable_BoolXY(const char* label, bool selected, ImGuiSelectableFlags flags, float x, float y)
{
    return igSelectable_Bool(label, selected, flags, ImVec2(x, y));
}

CIMGUI_API bool igBeginChild_StrXY(const char* label, float x, float y, bool border, ImGuiSelectableFlags flags)
{
    return igBeginChild_Str(label, ImVec2(x, y), border, flags);
}