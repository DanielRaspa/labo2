#ifndef RESONANCETYPE_H
#define RESONANCETYPE_H

#include "ParticleType.h"
#include <iostream>

class ResonanceType: public ParticleType{
  public:
    ResonanceType (const char* name, double const mass, int const charge, double const width);

    //Getters
    double GetWidth () const;
    
    void print() override;

  private:
    double const fWidth;
};

#endif