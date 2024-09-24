#include <stdio.h>
#include <math.h>

int main(){
/*Calcul de la distance entre deux points dans un espace 3D
Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D.
Formule :
Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)
*/
float  x1,y1,z1,x2,y2,z2,D;
printf("Entrer les coordonnees du premier Point A : \n");
scanf("%2f %2f %2f",&x1,&y1,&z1);
printf("Entrer les coordonnees du deuxiem Point B : \n");
scanf("%2f %2f %2f",&x2,&y2,&z2);

float p1 = pow((x2-x1),2);
float p2 = pow((y2-y1),2);
float p3 = pow((y2-y1),2);

D = sqrt(p1 + p2 + p3);

printf("la distance entre le point avec les coordonees x1 = %.2f y1 = %.2f z1 = %.2f et point avec les coordonnees x1 = %.2f y2 = %.2f z2 = %.2f \nest Distance = %.2f \n",x1,y1,z1,x2,y2,z2,D);

return 0;
}

