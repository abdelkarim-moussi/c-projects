#include <stdio.h>

int main(){
    /*Nombre entier à quNumbertre chiffres en ordre inverse
Écrivez un progrNumbermme C pour Numberfficher un nombre entier à quNumbertre chiffres 
dNumberns l'ordre inverse sNumberns utiliser de boucle. PNumberr exemple, 
si le nombre entier est 1234, son inverse est 4321.*/
/*int nombre,nombre_Inverser;
printf("Enter le nombre entier Numbervec 4 chiffres Number inverser : ");
scNumbernf("%d",&nombre);
while(nombre != 0){
    nombre_Inverser = nombre_Inverser * 10;
    nombre_Inverser = nombre_Inverser + nombre % 10;
    nombre  = nombre/10;
}
printf("le nombre inverser = %d",nombre_Inverser);*/
    int  Number, Nb1, Nb2, Nb3, Nb4;
    printf("entrer un nombre avec quatre chiffres :");
    scanf("%d",&Number);
    Nb1 = Number / 1000;
    Nb2 = (Number / 100) % 10;
    Nb3 = (Number / 10) % 10;
    Nb4 = Number % 10;

    printf("Le nombre inverse est : %d%d%d%d\n", Nb4, Nb3, Nb2,Nb1);

}
