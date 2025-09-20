
#include "imgui.h"
#include "imgui_impl_bgfx.h"

void render_imgui_layer() {
    ImGui_Implbgfx_NewFrame();
    ImGui::NewFrame();

    ImGui::Begin("Debug Window");
    ImGui::Text("Hello from Dear ImGui!");
    ImGui::End();

    ImGui::Render();
    ImGui_Implbgfx_RenderDrawData(ImGui::GetDrawData());
}
