#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include "export.hpp"
namespace Altamal {
  class ALTAMAL_API Player;
  namespace Texture{
    class ALTAMAL_API Manager;
  }
  namespace Fonts {
    class ALTAMAL_API Manager;
  }
  namespace System {
    class ALTAMAL_API Context
    {
    public:
      Context(sf::RenderWindow&, Player&, Texture::Manager&, Fonts::Manager&);
      sf::RenderWindow* render_window;
      Player* player;
      Texture::Manager* texture_manager;
      Fonts::Manager* font_manager;
    };
  }
}

