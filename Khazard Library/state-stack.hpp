#pragma once
#include <stack>

#include "export.hpp"
#include "game-context.hpp"
#include "state-interface.hpp"
namespace Altamal{
  namespace System {
    class ALTAMAL_API StateStack
    {
    public:
      explicit StateStack(Context context);
      template<typename T>
      void     RegisterState(StateID state_id);
      void     Update(Time);
      void     Draw();
      void     HandleEvent(sf::Event const& ev);

      void     PushState();
      void     PopState();
      void     Clear();
      bool     IsEmpty() const;
    private:
    };
  }
}