#include <iostream>
#include <string>
#include "Capteur.h"

using namespace std;


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


