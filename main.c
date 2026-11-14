#include <stdio.h>
#include "cs50.h"
#define _DEFAULT_SOURCE
#include <stdlib.h>


int main(void){
int Guesses = 1;
int RandomNumber = rand() % 1 + 1;
int Choice = get_int("Choose a Random Number: ");



while(Choice != RandomNumber){
        printf("You Failed! \n");

    Choice = get_int("Choose a Random Number: ");
        Guesses++;
        if(Guesses == 5 && Choice != RandomNumber){
            printf("You Failed the game. \n");
                break;
        }

}
 while(Choice == RandomNumber){
    printf("You are the GOAT! \n");
    break;


}


}


