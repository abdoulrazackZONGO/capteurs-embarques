#include <iostream>
#include <string>
#include "Capteur.h"

using namespace std;



Capteur :: Capteur (string u): temperature(0), unite (u) {}


void Capteur:: setTemperature(double t){
    if (t >= -40 && t <=85)
        {
      
             temperature=t;
            
    }
    else{  cout<<"Temperature invalide"<<endl;}
}

double Capteur:: getTemperature() const
{
     return temperature;

}

void Capteur:: afficherInfo() const{
cout<<"Temperature actuelle : "<<temperature<<" "<<unite<<endl;
    
}

