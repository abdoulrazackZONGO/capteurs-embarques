#include <iostream>
#include <string>
#include <vector>
#include "Capteur.h"

using namespace std;


int main()
{
//     Capteur monCapteur;

// monCapteur.setTemperature(37);
// monCapteur.afficherInfo();
    

// monCapteur.setTemperature(100);
// monCapteur.afficherInfo();


// monCapteur.setTemperature(-50);
// monCapteur.afficherInfo();


vector<Capteur> capteurs;
capteurs.push_back(Capteur("celsius"));
capteurs.push_back(Capteur("celsius"));
capteurs.push_back(Capteur("fahrenheit"));

capteurs[0].setTemperature(-50);
capteurs[1].setTemperature(37);
capteurs[2].setTemperature(100);
capteurs[2].setTemperature(25);
capteurs[0].setTemperature(-2);


for (auto& c : capteurs) {         
    c.afficherInfo();
}


return 0;

}

