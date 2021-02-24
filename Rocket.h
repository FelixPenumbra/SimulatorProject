#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

class Rocket
{
private:
    string rocketName = "Penumbra";
    double mass;
    vector<double> pos{ 0,0,0,0,0,0 };
    double time;
    double inertia_trans = 1;
    double inertia_rot = 2;
    double drag_coefficient = 0.3;
    double pos_cp_from_cm = 4;
public:
    Rocket(double mass1, vector<double> pos1, double time1)
    {
        mass = mass1;
        pos = pos1;
        time = time1;
    };
    double getMass();
    void setMass(double m);
    vector<double> getPos();
    void setPos(vector<double> pos);
    double getTime();
    void setTid(double t);
    string getName();
    void setName(string name);
    void setPosistionPlace(int place, double num);
};