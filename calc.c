#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "calc.h"
#include <math.h>
#include <unistd.h>
#include <ctype.h>

/* Fonction qui a pour but de vérifier la réponse entrée par l'utilisateur, selon le nombre entré*/ 
int checkAnswer() 
{
    int load = printRandoms(200000, 750000, 1);
    int rep=0, retValue = 0; //False, booléen
    char input[256];
    while (!(rep)) {
        //int answer=0; // Réinitialisation obligatoire de la variable pour redemander en cas d'erreur
        printf("\t \t| === Fartoc === |\n\n");
        printf("\t Menu principal \n\n");
        printf("(1) Calcul de la force d'une poussée\n");
        printf("(2) Conversion d'une température en farhenheit vers le celsius\n");
        printf("(3) Conversion d'une température en celsius vers le farhenheit\n");
        printf("(4) Calcul de l'énergie d'un corps\n\n");
        printf("\t \t| ============= |\n\n");
        printf("Veuillez choisir dans le menu en tapant le chiffre correspondant >> ");
        fgets(input, sizeof(input), stdin);
        int answer = atoi(input);
        if (answer != 0 || input[0] == '0') {
        switch (answer) {
            case 1:
                rep=1;
                retValue = 1; 
                printf("\n \n\t\t[");
                for (int i=0; i<15; i++) {
                    usleep(load);
                    printf("*");
                    fflush(stdout);
                }
                printf("]");
                break;
            case 2:
                rep=1;
                retValue = 2;
                printf("\n \n\t\t[");
                for (int i=0; i<15; i++) {
                    usleep(load);
                    printf("*");
                    fflush(stdout);
                }
                printf("]\n \n");
                break;
            case 3:
                rep=1;
                retValue = 3;
                printf("\n \n\t\t[");
                for (int i=0; i<15; i++) {
                    usleep(load);
                    printf("*");
                    fflush(stdout);
                }
                printf("]\n \n");
                break;
            case 4:
                rep=1;
                retValue = 4;
                printf("\n \n\t\t[");
                for (int i=0; i<15; i++) {
                    usleep(load);
                    printf("*");
                    fflush(stdout);
                }
                printf("]\n \n");
                break;
            default:
                rep=0;
                printf("\n Une erreur a été détectée. Veuillez réessayer. \n \n ");
        }
        } else {
            printf("\n \nDu texte a été tapé dans le champs. Veuillez réessayer\n \n ");
        }
    }
    return retValue;
}

/* Cette fonction va faire la conversion d'une température entrée, du Farhenheit au Celsius*/
double fToC(double fTemp) 
{
    return (fTemp - 32) * 5/9;
}

double cToF(double cTemp) 
{
    return cTemp * 9/5 + 32;
}

double getForce(double mass, double acceleration) 
{
    return mass * acceleration;
}

double getEnergy(double mass)
{
    double c = 3*10^8;
    return mass * c*c;
}

double getWork(double mass, double acceleration, double distance)
{
    return getForce(mass, acceleration) * distance;
}
/* Cette fonction va vérifier si l'utilisateur souhaite réutiliser le programme ou le quitter*/
int checkAgain()
{
    char answer;
    printf("Souhaitez vous calculer autre chose ? (y/n) >> ");
    scanf(" %c", &answer); // ajout d'un espace avant %c pour ignorer les caractères d'espacement
    getchar(); // ajouter cette ligne pour vider le buffer d'entrée
    if (answer==121) {
        return 1;
    } else if (answer==110) {
        return 0;
    } else {
        return -1;
    }
}


long printRandoms(int lower, int upper,int count) 
{
    return (rand() %(upper - lower + 1)) + lower;
}