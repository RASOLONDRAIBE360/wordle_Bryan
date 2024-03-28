#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define taille 2500

int main(){
	FILE* contenu=NULL;
	char saisie;
	char line; 
	char str[35];
	char tab[taille][6];
	char TAB[taille];
	contenu = fopen("/home/bryan/Téléchargements/bdd_wordle.txt", "r"); 
	if (contenu == NULL) {
		printf("Une erreur est survenu lors de l'ouverture du fichier.");
		exit(0);
	}
	for (char letter ='A'; letter<='Z'; letter++){
			sprintf(str,"Wordle Words List Starting With %c\n", letter);
	while (fgets(TAB, taille, contenu)!=NULL){
		
			printf("%s\n",str);
			if(!strcmp(TAB,str))
			{
				printf("trouve\n");	
			}
			fgets(TAB, taille, contenu);
			
			//printf("%s\n",TAB);
			/*if(strcmp(line, str) == 0 ){
				strcpy(tab, line);
			}*/
		}
	}
					
	srand(time(NULL));
	int m = rand()% taille;
	printf("Devinez les mots parmis les lettres qui vous sont affichés:\n\n");
	printf("\t\t%s", tab[m]); 
	scanf("\t%s", &saisie);
	printf("Fin du programme");
	
	fclose(contenu);
	return 0;
}
