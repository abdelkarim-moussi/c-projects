#include <stdio.h>
#include <math.h>

int main(){
    /*Nombre entier à quatre chiffres en ordre inverse
Écrivez un programme C pour afficher un nombre entier à quatre chiffres 
dans l'ordre inverse sans utiliser de boucle. Par exemple, 
si le nombre entier est 1234, son inverse est 4321.*/
int nombre,nombre_Inverser;
printf("Enter le nombre entier avec 4 chiffres a inverser : ");
scanf("%d",&nombre);
while(nombre != 0){
    nombre_Inverser = nombre_Inverser * 10;
    nombre_Inverser = nombre_Inverser + nombre % 10;
    nombre  = nombre/10;
}
printf("le nombre inverser = %d",nombre_Inverser);

}
