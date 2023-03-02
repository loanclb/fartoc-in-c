#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "title.h"
#include "calc.h"


int main () {
    int quest, again=1;
    printTitre();
    double mass, acceleration, distance,force, fTemp, cTemp;

    while (again) {
        quest = checkAnswer();
        printf("\n");
        switch (quest) {
            case 1:
                printf("Veuillez écrire la masse >> ");
                scanf("%lf", &mass);
                printf("\nVeuillez écrire la vitesse d'accelération >> ");
                scanf("%lf", &acceleration);
                printf("\n \n\t\t[");
                int load1 = printRandoms(20000, 75000, 1);
                for (int i=0; i<15; i++) {
                    usleep(load1);
                    printf("*");
                    fflush(stdout);
                }    
                printf("]\n\n");
                printf("\nLa force de poussée est de %lf\n\n", getForce(mass, acceleration));
                break;
            case 2:
                printf("Veuillez écrire la température en farhenheit à convertir >> ");
                scanf("%lf", &fTemp);
                printf("\n \n\t\t[");
                int load2 = printRandoms(20000, 75000, 1);
                for (int i=0; i<15; i++) {
                    usleep(load2);
                    printf("*");
                    fflush(stdout);
                }    
                printf("]\n\n");
                printf("\n%lf en degré farhenheit vaut %lf degrés celsius.\n\n", fTemp, fToC(fTemp));
                break;
            case 3:
                printf("Veuillez écrire la température en celsius à convertir >> ");
                scanf("%lf", &cTemp);
                printf("\n \n\t\t[");
                int load3 = printRandoms(20000, 75000, 1);
                for (int i=0; i<15; i++) {
                    usleep(load3);
                    printf("*");
                    fflush(stdout);
                }    
                printf("]\n\n");
                printf("\n%lf en degré celsius vaut %lf degrés farhenheit.\n\n", cTemp, cToF(cTemp));
                break;
            case 4:
                printf("Veuillez écrire la masse >> ");
                scanf("%lf", &mass);
                printf("\nVeuillez écrire la vitesse d'accelération >> ");
                scanf("%lf", &acceleration);
                printf("\nVeuillez écrire la distance >> ");
                scanf("%lf", &distance);
                printf("\n \n\t\t[");
                int load4 = printRandoms(100000, 275000, 1);
                for (int i=0; i<15; i++) {
                    usleep(load4);
                    printf("*");
                    fflush(stdout);
                }    
                printf("]\n\n");
                printf("\nL'énergie générée d'un corps de %lf kilos, à une vitesse de %lf sur %lf mètres est de %lf\n\n", mass, acceleration, distance, getWork(mass, acceleration, distance));
                break;
            default:
                printf("Il y a une erreur, veuillez réessayer.");
        }
        again = checkAgain();
        if (again == -1) {
            int load = printRandoms(200000, 750000, 1);
            printf("\n\nUne erreur a été détectée. Fermeture automatique du programme.\n \n");
            printf("\t\t[");
            for (int i=0; i<15; i++) {
                        usleep(load);
                        printf("*");
                        fflush(stdout);
                    }
            printf("]");
            again=0;
        }
        printf("\n \n");
    }
    printf("Merci d'avoir utilisé fartoc.\n\n\t\t[");
    int load = printRandoms(200000, 750000, 1);
    for (int i=0; i<15; i++) {
        usleep(load);
        printf("*");
        fflush(stdout);
    }      
    printf("]\n \n");
    return 0;
    }