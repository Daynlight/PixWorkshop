#include "PixCore.h"

PC::Window::Window(const char* title)
  :title(title) {
  if(!SDL_Init(SDL_INIT_EVERYTHING)) throw std::runtime_error("SDL Init Error");
}