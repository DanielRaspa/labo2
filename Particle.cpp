#include "Particle.h"
#include <iostream>

int Particle::fNParticleType;
ParticleType* Particle::fParticleType[fMaxNumParticleType];

//Getters
int Particle::GetfIParticle () const {
  return fIParticle;
}
double Particle::GetfPx () const{
  return fPx;
}
double Particle::GetfPy () const{
  return fPy;
}
double Particle::GetfPz () const{
  return fPz;
}

void Particle::SetfIParticle(int iParticle){
  if (iParticle < fNParticleType){
    fIParticle = iParticle;
  }
}

void Particle::SetfIParticle (char* iName){
  int iParticle = FindParticle(iName);
  if (iParticle == fNParticleType){
    std::cout << "The particle doesn't exist" << '\n';
  }
}

Particle::Particle (const char* name, double px, double py, double pz) 
  : fPx{px}, fPy{py}, fPz{pz} {
    fIParticle = FindParticle(name);
    if (fIParticle == fNParticleType){
      std::cout << "Particle " << name << " does not match the list." << '\n';
    }
  }

int Particle::FindParticle (const char* name) {
  for (int i = 0; i != fNParticleType; i++){
    if (name == fParticleType[i]->GetName()){
      return i;
    }
  }
return fNParticleType;
}

void Particle::AddParticleType (const char* const name, double const mass, double const charge, double const width){
  if (Particle::FindParticle(name) != fNParticleType){
    std::cout << "The particle already exist" << '\n';   
  } else if (fNParticleType == fMaxNumParticleType){
    std::cout << "ParticleType is full" << '\n';
  } else if (width == 0) {
    fParticleType[fNParticleType] = new ParticleType (name, mass, charge); 
    fNParticleType++;
  } else {
    fParticleType[fNParticleType] = new ResonanceType (name, mass, charge, width); 
    fNParticleType++;
  }
}