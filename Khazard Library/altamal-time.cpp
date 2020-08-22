#include "pch.h"
#include "altamal-time.hpp"

using TimeDelta = std::chrono::duration<float, std::milli>;
TimeDelta const& Altamal::Time::Stop()
{
  this->stop = std::chrono::high_resolution_clock::now();
  this->delta_t = stop - start;
  return delta_t;
}
