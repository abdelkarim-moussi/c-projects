#include <stdio.h>

int main(){

/*Challenge 3 : Conversion de la distance
Écrivez un programme qui demande la distance en kilomètres et la transforme en yards.
Formule :
Yards = Km * 1093.61*/
float Km , Yard;
printf("Enter la distance en km: ");
scanf("%f",&Km);
Yard = Km * 1093.61;
printf("La distance %.2f km en Yard = %.2f",Km,Yard);

}