#include "Dynamics.h"
#include "RK4.h"
//#include "Rocket.hpp"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//Hente informasjon fra raketten:
// .getPosisjon(); er vektoren med fart og pos
// Penumbra


//double getFromVec(Rocket roc, int num){ // Rocket ekvivalent med feks int
 //   vector<double> vec = roc.getPosisjon();
//  return vec[num];
//}

int f(float v){
    return 5*pow(v, 2);
}

Dynamics::Dynamics(Rocket Roc) : Roc{ Roc }{};

void Dynamics::applyForce(vector<double> Force) {
    
    for (int i = 0; i < Force.size(); i++) {
        Force[i] = Force[i] / Roc.getMass();
    }

    vector<double> result = rungeKutta(Roc.getPos(), Force);
    Roc.setPos(result);

    /*for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }*/
}

vector <double> Dynamics::getRocketPos() {
    return Roc.getPos();
}