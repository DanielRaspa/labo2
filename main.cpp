#include "ParticleType.h"
#include "ResonanceType.h"
#include "Particle.h"

int main () {

ParticleType* test [2];
test[0] = new ParticleType ("neutron", 32, 43);
test[1] = new ResonanceType ("photon", 12, 21, 212);

for (int i = 0; i != 2; i++){
  test[i]->print ();
}

}