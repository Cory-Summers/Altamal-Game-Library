#pragma once
#include <algorithm>
#include <array>
#include <bitset>
#include <cstdint>
#include <memory>
#include <vector>

#include "export.hpp"

namespace Altamal {
  namespace ETS
  {
    class ALTAMAL_API IComponent;
    class ALTAMAL_API IEntity;
    constexpr std::uint64_t k_max_components = 64ull;
    using ComponentID = std::uint64_t;
    using ComponentBitset = std::bitset<max_components>;
    using ComponentArray = std::array<IComponent*, max_components>;

    inline ComponentID GetComponentID()
    {
      static ComponentID last_id = 0;
      return last_id++;
    }
    template<typename T>
    inline ComponentID GetComponentTypeID() noexcept
    {
      static ComponentID type_id = GetComponentID();
      return type_id;
    }

  }
}