#pragma once
#include "pch.h"
#include <SFML/Window/Event.hpp>

namespace Altamal{
  namespace ETS {
    class ALTAMAL_API IEntity;
    class ALTAMAL_API IComponent
    {
    public:
      IComponent();
      virtual void Initialize() = 0;
      virtual void Update() = 0;
      virtual void Draw() = 0;
      virtual std::uint64_t HandleEvent(sf::Event const& ev) = 0;

      constexpr inline IEntity* GetEntity() { return m_entity; }
    private:
      IEntity* m_entity;
    };
  }
}

