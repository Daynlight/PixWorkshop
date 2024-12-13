#pragma once
#include "../Settings.h"
#include "../PixCore/PixCore.h"
#include "../vendor/Data/Data.h"
#include "../vendor/ImGui/imgui.h"
#include "../vendor/ImGui/imgui_impl_sdl2.h"

namespace PC{
class Editor{
  private:
    Window *window;
    Data::BaseHash hash = Data::BaseHash(HASHKEY);
    Data::File game = Data::File("game.bin");
    Data::File settings = Data::File("settings.bin");
    Data::File saves = Data::File("saves.bin");
  public:
    Editor(Window *window);
    ~Editor();
    void run();
};

}