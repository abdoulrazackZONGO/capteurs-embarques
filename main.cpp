#include <iostream>
#include <string>
#include "Capteur.h"

using namespace std;


int main()
{
    Capteur monCapteur;

    moncapteur.setTemperature(37);
    cout<<"temperature actuelle :" <<monCapteur.getTemperature()  <<endl;
    


moncapteur.setTemperature(100);
cout<<"temperature actuelle :" <<monCapteur.getTemperature()  <<endl;



moncapteur.setTemperature(-50);
cout<<"temperature actuelle :" <<monCapteur.getTemperature()  <<endl;

return 0;

}

