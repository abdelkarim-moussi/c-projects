#include <stdio.h>

int main(){

    
    /* Calcul et affichage des résultats
Deux nombres réels, a et b, sont saisis au clavier. Calculez et 
affichez a + b, a - b, a * b, et a / b avec précision décimale.*/

float a , b;
float somme = 0;
float soustraction = 0;
float multiplication = 0;
float division = 0;

printf("Entrer deux nombre a et b : \n");
scanf("%f %f ",&a,&b);
somme = a + b;
soustraction = a - b;
multiplication = a * b;
division = a / b;

printf("la somme de a et b egale %.2f \n la soustraction de a et b egale %.2f \n la multiplication de a et b egale %.2f \n la division de a et b egale %.2f",somme,multiplication,soustraction,division);

}