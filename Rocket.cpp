#include "Rocket.h"
using namespace std;

//Masse
double Rocket::getMass() {
    return mass;
}

void Rocket::setMass(double m)
{
    mass = m;
}

//Posisjon
vector<double> Rocket::getPos()
{
    return pos;
}

void Rocket::setPos(vector<double> Pos)
{
    pos = Pos;
}

//Tid
double Rocket::getTime()
{
    return time;
}

void Rocket::setTid(double t)
{
    time = t;
}

//Navn
void Rocket::setName(string name)
{
    rocketName = name;
}

string Rocket::getName()
{
    return rocketName;
}

void Rocket::setPosistionPlace(int place, double num)
{
    vector<double> pos = getPos();
    pos[place] = num;
    Rocket::setPos(pos); //finn roc sin greie
}