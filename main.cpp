#include "Simulations.h"
#include <iostream>

int main() {
	Rocket Rocket(0.3, { 0,1,0,10,10,0 }, 0);
	Dynamics Roc_dynamics(Rocket);
	double d = 10;

	vector<double> G = { 0,-9.81 * Rocket.getMass() };
	vector<double> D = { -d * Roc_dynamics.getRocketPos()[0] * abs(Roc_dynamics.getRocketPos()[0]), -d * Roc_dynamics.getRocketPos()[1] * abs(Roc_dynamics.getRocketPos()[1]) };
	vector<double> Forcesum = { G[0] + D[0], G[1] + D[1] };
	// Rocket.applyForce(Forcesum)

	//while rocket above ground
		
		// sim.run()
	double y_max = 0;
	
	Simulation sim(Rocket);
	
	while (Roc_dynamics.getRocketPos()[1] > 0) {
		if (Roc_dynamics.getRocketPos()[1] > y_max) {
			y_max = Roc_dynamics.getRocketPos()[1];
		}
		Roc_dynamics.applyForce(Forcesum);
		cout << Roc_dynamics.getRocketPos()[0] << " " << Roc_dynamics.getRocketPos()[1] << endl;
	}

	cout << y_max << endl;
}