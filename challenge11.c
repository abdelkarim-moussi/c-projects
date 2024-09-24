#include <stdio.h>
#include <math.h>

int main(){

    /*Surface d'un rectangle
Écrivez un programme pour trouver la surface d'un rectangle. Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur.
Formule pour la surface d'un rectangle :
Surface = longueur * largeur*/
float Longueur, Largeur, Surface;
printf("Enter la longueur et la largeur du rectangle : ");
scanf("%f %f",&Longueur,&Largeur);

Surface = Longueur * Largeur;

printf("la surface du rectangle de Longueur %.2f et Largeur %.2f est Surface = %.2f",Longueur,Largeur,Surface);

}