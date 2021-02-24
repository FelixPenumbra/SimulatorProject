//
//  Dynamics.h
//  Dynamics
//
//  Created by F B on 04.10.2020.
//  Copyright © 2020 Felix Berg. All rights reserved.
//

#include "Rocket.h"

class Dynamics {
private:
    Rocket Roc;
public:
    Dynamics(Rocket Roc);
    
    void applyForce(vector<double> Force);
    vector<double> getRocketPos();
};


