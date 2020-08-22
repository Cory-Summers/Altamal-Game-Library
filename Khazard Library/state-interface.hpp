#pragma once
#include <SFML/Window/Event.hpp>
#include "game-context.hpp"
#include "state-identifiers.hpp"
namespace Altamal {
  class ALTAMAL_API Player;
  namespace System {
    class ALTAMAL_API StateStack;
    class ALTAMAL_API Time;
    /// <summary>
    /// Interface Class
    /// </summary>
    class ALTAMAL_API State
    {
    public:
      State(StateStack&, Context);
      Context const& GetContext() const { return m_context; }
      virtual void Draw() = 0;
      virtual bool Update(System::Time) = 0;
      virtual bool HandleEvent(sf::Event const&) = 0;
      ~State() {};
    protected:
      void RequestStackPush(StateID state_id);
      void RequestStackPop();
      void RequestStateClear();
    private:
      Context m_context;
      StateStack* m_stack;
    };
  };
}
