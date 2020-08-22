#pragma once
#include <chrono>

#include <SFML/System/Time.hpp>
#include "export.hpp"

namespace Altamal {
  class ALTAMAL_API Time
  {
    using TimeDelta = std::chrono::duration<float, std::milli>;
    using TimePoint = std::chrono::time_point<std::chrono::high_resolution_clock>;
  public:
    Time();
    virtual void Start() { start = std::chrono::high_resolution_clock::now(); }
    virtual TimeDelta const& Stop();
    float   Count() const { return delta_t.count(); }
  private:
    TimePoint start;
    TimePoint stop;
    TimeDelta delta_t;

  };
}

