#include "ResonanceType.h"
#include <iostream>

ResonanceType::ResonanceType (const char* name, double const mass, int const charge, double const width) 
  : ParticleType (name, mass, charge), fWidth{width} {}
  
//Getters
double ResonanceType::GetWidth () const{
  return fWidth;
}

void ResonanceType::print() {
  ParticleType::print();
  std::cout << "Width: " << fWidth << '\n';
}

