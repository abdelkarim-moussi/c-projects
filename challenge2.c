#include <stdio.h>

int main()
{
    

/*Conversion de la température
Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin.
Formule :
K = C + 273.15*/

double C,K;
printf("veuillez entrer une temperature en Celsius:");
scanf("%lf",&C);
K = C + 273.15;
printf("la temperature en Kelvin est %lf ",K);

}