#include <iostream>
#include <string>
#include "Capteur.h"

using namespace std;


int main()
{
    Capteur moncapteur;

    moncapteur.setTemperature(37);
    cout<<"temperature actuelle :\n" <<moncapteur.getTemperature()  <<endl;
    


moncapteur.setTemperature(100);
cout<<"temperature actuelle :\n" <<moncapteur.getTemperature()  <<endl;



moncapteur.setTemperature(-50);
cout<<"temperature actuelle :\n" <<moncapteur.getTemperature()  <<endl;

return 0;

}

