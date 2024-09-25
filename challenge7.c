#include <stdio.h>

int main()
{
    /* Moyenne pondérée de trois nombres
Écrivez un programme en C pour calculer la moyenne
 pondérée de trois nombres donnés par l'utilisateur 
 avec les pondérations suivantes :*/
    int Number1 , Number2 , Number3 , Moyenne_ponderee;
    printf("entrer le nomber a : ");
    scanf("%d",&Number1);
    printf("entrer le nomber b : ");
    scanf("%d",&Number2);
    printf("entrer le nomber c : ");
    scanf("%d",&Number3);

    Moyenne_ponderee = ((Number1*2)+(Number2*3)+(Number3*5))/10 ;
    printf("la moyenne ponderee des trois nombres entrer : %d",Moyenne_ponderee);

    return 0;
}