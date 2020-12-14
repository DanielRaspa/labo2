#ifndef PARTICLE_H
#define PARTICLE_H

#include "ParticleType.h"
#include "ResonanceType.h"

class Particle
{
  public:
    Particle (const char* name, double px = 0, double py = 0, double pz = 0);

    //Getters
    int GetfIParticle () const;
    double GetfPx () const;
    double GetfPy () const;
    double GetfPz () const;


    void SetfIParticle (int iParticle);
    void SetfIParticle (char* iName);

  private:
    double fPx = 0;
    double fPy = 0;
    double fPz = 0;
    int fIParticle; //array's index
    
    static const int fMaxNumParticleType = 10;
    static int fNParticleType; //number of generated particle
    static ParticleType* fParticleType[fMaxNumParticleType];
    
    static int FindParticle (const char* name);
    static void AddParticleType (const char* const name, double const mass, double const charge, double const width = 0);
};

#endif