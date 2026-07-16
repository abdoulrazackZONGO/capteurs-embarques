#pragma once
#include <string>



class Capteur{

private: 
double temperature;
std :: string unite;

public:

Capteur(std :: string u = "celsius") ;
void setTemperature(double t);
double getTemperature() const;
void afficherInfo() const;

};