
#include <stdio.h>
int main(){

    /*Conversion de la vitesse
Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s).
Formule :
m/s = km/h * 0.27778*/

double m,km;
printf("entrer la vitesse en kilometre par heure( km/h) : ");
scanf("%lf",&km);
m = km * 0.27778;
printf("la vitesse %.2lf km/s en m/s est %.2lf m/s ",km,m);

}
