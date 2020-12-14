#ifndef PARTICLETYPE_H
#define PARTICLETYPE_H

#include <iostream>
#include <string>

class ParticleType {
  public:
    ParticleType (const char* const name, double const mass, int const charge); 
    
    //Getters
    const char* GetName () const;
    double GetMass () const;
    int GetCharge () const;

    virtual void print();

  private:
    const char* const fName;
    double const fMass;
    int const fCharge;
};

#endif