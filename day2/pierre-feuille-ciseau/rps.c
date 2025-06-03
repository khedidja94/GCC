#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main () {
  int joueur, ordi;
  int manche = 1, scoreJoueur = 0, scoreOrdi = 0, egalite = 0 ;
  int totalManches = 5;
  srand(time(NULL));

  printf("Bienvenue dans le jeu Pierre - Feuille - Ciseaux !\n");

  while (manche <= totalManches) {
    printf("\nManche %d/%d\n");
    printf("1 → Pierre\n");
    printf("2 → Feuille\n");
    printf("3 → Ciseaux \n");
    printf("1 → votre choix : ");
    scanf("%d", &joueur);

    if (joueur <1 || joueur > 3) {
      printf("choix invalide. essayez encore.\n");
      continue;
 }
    ordi = rand() % 3+1;


    printf("L'ordinteur a choisi : ");
    if (ordi == 1 ) printf("Pierre\n");
    else if (ordi == 2) printf("Feuille\n");
    else printf("Ciseaux\n");

    if (joueur == ordi ) {
      printf("Egalité !\n");
      egalite++;
    } else if ((joueur == 1 && ordi ==3) || (joueur == 2 && ordi == 1) || (joueur == 3 && ordi == 2)) {
         printf("vous gagnez cette manche !\n");
         scoreJoueur++;
    } else { 
       printf("l'ordinateur gagne cette manche. \n");
         scoreOrdi++;
    }
    manche++;
  }
  printf("\n score final après %d manches :\n",totalManches);
  printf("vous : %d victoire (s)\n ", scoreJoueur);
  printf("ordinateur : %d Victoire(s)\n", scoreOrdi);
  printf("egalité :%d\n",egalite);

  if (scoreJoueur > scoreOrdi ) {
     printf("BRAVO, vous avez gagné la partie !\n");
  }  else if (scoreOrdi < scoreJoueur ) { 
     printf("L'ordinateur a gagné la partie. Bonne chance la prochaine fois !\n");
  } else { 
     printf("match nul !\n");
  }

 
   return 0 ;

 }

 
