#include <stdio.h>
int main(){
      /*Affichage des valeurs binaire et hexadécimale équivalentes
Écrivez un programme C pour afficher la valeur équivalente en binaire 
et en hexadécimal. Entrez un nombre entier et affichez ses valeurs 
équivalentes en binaire et en hexadécimal.*/

//conversion decimal en binaire
  
    //Demander à l'utilisateur d'entrer un nombre décimal
    int nombre;

    printf("Entrez un nombre decimal: ");
    scanf("%d", &nombre);
    int original_Number = nombre;
    int binaire[32]; 
    int i = 0;
    char hexadecimale[32];
    int z = 0;
   // Tableau pour stocker les bits
    

    // Boucle pour extraire les bits
    while (nombre > 0) {
        binaire[i] = nombre % 2; // Récupère le bit
        nombre = nombre / 2;      // Divise par 2
        i++;
    }
    printf("\n");
    printf("Valeur binaire : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d",binaire[j]);
    }
    printf("\n");
//conversion decimal ver exadecimal

    // Tableau pour stocker les chiffres hexadécimaux

    // Boucle pour extraire les chiffres hexadécimaux
    while (original_Number > 0) {
        int reste = original_Number % 16; // Récupère le reste
        if (reste < 10) {
            hexadecimale[z] = reste + '0'; // Convertit en caractère
        } else {
            hexadecimale[z] = reste - 10 + 'A'; // A-F pour 10-15
        }
        original_Number = original_Number / 16; // Divise par 16
        z++;
    }

    // Afficher les chiffres hexadécimaux en ordre inverse
    printf("Valeur hexadecimale : ");
    for (int j = z - 1; j >= 0; j--) {
      printf("%c", hexadecimale[j]);
    }
    printf("\n");

    return 0;
}