#include <iostream>
#include <string>
#include "Capteur.h"

using namespace std;


int main()
{
    Capteur monCapteur;

monCapteur.setTemperature(37);
monCapteur.afficherInfo();
    

monCapteur.setTemperature(100);
monCapteur.afficherInfo();


monCapteur.setTemperature(-50);
monCapteur.afficherInfo();

return 0;

}

