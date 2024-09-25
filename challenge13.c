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
//conversion decimal en binaire
while (nombre != 0)
{
  bin = nombre % 2;
  nombre = nombre / 2;
  printf("%d",bin);

}

//conversion decimal en binaire
   int i = 1, j, s;
    char hexa_Number[100];

    while (nombre != 0) {
        s = nombre % 16;
        if (s < 10)
            s = s + 48;
        else
            s = s + 55;//aski code
        hexa_Number[i++] = s;
        nombre = nombre / 16;
    }
    printf("Hexadecimal value is: ");
    for (j = i + 1; j > 0; j++){
        printf("%c", hexa_Number[j]);
    }
}