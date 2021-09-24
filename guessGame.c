/*Number Guessing Game
create an variable of type int for the main menu
create another variable of type int for the actual game
create an if else statement that will grab the user's input and act accordingly
implement a random number generator, store the random number on a variable of type int
compare the user's guess to the random number generator
the most important thing in this program is going to be if statements
if the user chooses option 2, simply prompt the user change the variable that is responsible for the max number of choices*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int firstThree;
int guess;
time_t t;
int randInt;
int max;
char quit;



int main(){
    max=11;
    mainMenu();
    return 0;
}

int mainMenu(){
    srand((unsigned) time(&t));
    randInt = rand() % max;
    if(randInt==0){
        randInt++;
    }
    printf("Welcome to the guessing game!\nPress 1 to play a game\nPress 2 to change the max number\nPress 3 to quit ");
scanf("%d", &firstThree);
if (firstThree==1){
    gameActual();
}else if(firstThree==2){
    changeMax();
}else if(firstThree==3){
    printf("Thank you for playing!");
}else{
    printf("Invalid number, please try again. ");
    mainMenu();
}
return 0;
}

int userGuess(){
    if (guess>randInt){
        printf("You guessed too high! The number is smaller. ");
        scanf("%d", &guess);
        scanf("%c", quit);
         if (quit == 'q'){
             printf("mode");
         }
        userGuess();
    }else if(guess<randInt){
        printf("You guessed to low! The number is higher. ");
        scanf("%d", &guess);
         scanf("%c", quit);
        if (quit == 'q'){
             printf("mode");
         }
        userGuess();
    }else if(guess==randInt){
        printf("You guessed the right number! \n");
        mainMenu();
    }
}

int gameActual(){
    if(max==11){
        printf("\nGuess an integer 1-10");
    }else{
    printf("\nGuess an integer 1-%d: ", max);
    }scanf("%d", &guess);
    userGuess();
}

int changeMax(){
printf("What do you want the max number to be?");
scanf("%d", &max);
if(max<1 || max>2147483647){
    printf("This is an invalid max number, please try again! ");
    scanf("%d", &max);
}
mainMenu();

}