#include <iostream>
#include <string>
#include "Capteur.h"

using namespace std;


int main()
{
    Capteur monCapteur;

    monCapteur.setTemperature(37);
    cout<<"temperature actuelle : " <<monCapteur.getTemperature()  <<endl;
    


monCapteur.setTemperature(100);
cout<<"temperature actuelle : " <<monCapteur.getTemperature()  <<endl;



monCapteur.setTemperature(-50);
cout<<"temperature actuelle : " <<monCapteur.getTemperature()  <<endl;

return 0;

}

