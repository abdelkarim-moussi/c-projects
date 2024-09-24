#include <stdio.h>
int main(){
      /*Affichage des valeurs binaire et hexadécimale équivalentes
Écrivez un programme C pour afficher la valeur équivalente en binaire 
et en hexadécimal. Entrez un nombre entier et affichez ses valeurs 
équivalentes en binaire et en hexadécimal.*/

int nombre,bin;
int exa;
printf("Entrer un nombre entier : ");
scanf("%d",&nombre);
/*while (nombre != 0)
{
  bin = nombre % 2;
  nombre = nombre / 2;
  printf("%d",bin);

}*/
printf("%x",nombre);

}