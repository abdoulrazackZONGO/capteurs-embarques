#pragma once
#include <string>

class Capteur{

private: 
double temperature;

public:
Capteur () : temperature(0) {}
void setTemperature(double t);
double getTemperature() const;

};