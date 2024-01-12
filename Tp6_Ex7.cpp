//Ecrire un programme C permettant de découper un texte en mots en utilisant le mécanisme
//de pointeurs ; Chaque mot sera affiché sur une ligne à part.

#include<stdio.h>
#include<string.h>

int main(){
	char ch[50];
	char* p;
	char* p2;
	char mot[50];
	
	
	//saisie du texte
	printf("donner le texte a decouper: ");
	gets(ch);
	p= ch; // le pointeur p pointe sur le premier caractere de ch
	
	
	while (*p){ //tant que p non nul
		p2= mot; // initialisation du pointeur p2 pour construire chaque mot
		while (*p && *p != ' '){
			*p2 = *p; // Copie du caractère de p à p2
			p2++;
			p++;
		}
		*p2='\0';
		puts(mot);
		while (*p == ' '){
			p++; 
		}	
	}
	
	return 0;
}
