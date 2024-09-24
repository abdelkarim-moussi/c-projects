#include <stdio.h>
#include <math.h>

int main(){

/* Calcul de la moyenne géométrique
Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur.
Formule :
Moyenne géométrique = (a * b * c)^(1/3)*/


double Nb1, Nb2,Nb3, MG;

printf("Entrer Troi Nombre : ");
scanf("%2lf %2lf %2lf",&Nb1,&Nb2,&Nb3);

MG = pow(Nb1*Nb2*Nb3,(1.0/3.0));
printf("La moyenne Geometrique des nombre Nb1 = %.2lf Nb2  = %.2lf Nb3 = %.2lf est GM = %.2lf \n",Nb1,Nb2,Nb3,MG);


}