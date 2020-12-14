#include "ParticleType.h"
#include <iostream>
#include <string>

ParticleType::ParticleType (const char* const name, double const mass, int const charge) 
  : fName{name}, fMass{mass}, fCharge{charge} {}

//Getters
const char* ParticleType::GetName () const{
  return fName;
}
double ParticleType::GetMass () const{
  return fMass;
}
int ParticleType::GetCharge () const{
  return fCharge;
}

void ParticleType::print(){
  std::cout << "Particle: " << fName << '\n' << "Mass: " << fMass << '\n' << "Charge: " << fCharge << '\n';    
}

