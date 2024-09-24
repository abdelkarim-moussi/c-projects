#include <stdio.h>
#include <stdlib.h>


int main(){
    
    /*Challenge 1 : Affichage Informations
Écrivez un programme en C qui va permettre d'afficher 
vos informations personnelles : nom, prénom, âge, sexe, et adresse email.
 Les données sont saisies à partir du clavier.*/

 char nom[10];
 char prenom[10];
 char sexe[10];
 char email[30];
 int age;
  printf("Entrer votre nom : ");
  scanf("%s",nom);
  printf("Entrer votre prenom : ");
  scanf("%s",prenom);
  printf("Entrer votre age : ");
  scanf("%d",&age);
  printf("Entrer votre sexe : ");
  scanf("%s",sexe);
  printf("Entrer votre email(ex: exemple@gmail.com) : ");
  scanf("%s",email);

  printf("nom : %s \nprenom : %s \nage : %d \nsexe : %s \nemail : %s",nom,prenom,age,sexe,email);

}