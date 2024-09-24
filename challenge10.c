#include <stdio.h>
#include <math.h>



int main(){
    /*Challenge 10 : Volume d'une sphère
Écrivez un programme pour trouver le volume d'une sphère. Prenez le rayon de la sphère en entrée de l'utilisateur.
Formule pour le volume d'une sphère :
Volume = (4/3) * π * r³*/

double R, Volume;
const float PI = 3.14;
printf("Enter la valeur de rayon de la sphere : ");
scanf("%lf",&R);
Volume = 4/3 * PI * pow(R,2);
printf("le volume de la sphere de rayon R = %.2lf est Volume = %.2lf",R,Volume);
}