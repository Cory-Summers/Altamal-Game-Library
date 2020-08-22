#include "pch.h"
#include "game-context.hpp"

Altamal::System::Context::Context(
  sf::RenderWindow& render_window, 
  Player& player, 
  Texture::Manager& texture_manager, 
  Fonts::Manager& font_manager)
  : render_window(&render_window)
  , player(&player)
  , texture_manager(&texture_manager)
  , font_manager(&font_manager)
{
}
