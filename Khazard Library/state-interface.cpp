#include "state-interface.hpp"
#include "state-stack.hpp"
Altamal::System::State::State(StateStack& stack, Context context)
  : m_stack(&stack)
  , m_context(context)
{
}

void Altamal::System::State::RequestStackPush(StateID state_id)
{
  m_stack->Push(state_id);
}

void Altamal::System::State::RequestStackPop()
{
}

void Altamal::System::State::RequestStateClear()
{
}
