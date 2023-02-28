#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include"welcome_screen.h"


/*
*
* @author SD
*
*/


int main()
{


    welcome_screen();



    //random number generates                                                                                                                                                                                                                                                    Copyright © 2022 by Shourav Dev. All Rights Reserved.

    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1;

    do
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY| 0);
        printf("Guess the number between 1 to 100: ");
        guess = numcheak();

        if(guess>number)
        {

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY| FOREGROUND_RED |FOREGROUND_GREEN);
            printf("Lower number please!\n\n");
        }
        else if(guess<number)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY| FOREGROUND_RED |FOREGROUND_GREEN);
            printf("Higher number please!\n\n");
        }
        else
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY|FOREGROUND_GREEN);
            printf("\n\n\n\n\n\t\t\t\t\t    You guessed it in %d attempts", nguesses);
        }
        nguesses++;
    }
    while(guess!=number);

    if(nguesses <4)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY| FOREGROUND_RED |FOREGROUND_BLUE|FOREGROUND_INTENSITY);
        printf("\n\t\t\t\t\t(^_^) Well Done, You are Genius. (^_^)\n\n\n\n");
    }
    else if(nguesses <8)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY| FOREGROUND_RED |FOREGROUND_BLUE|FOREGROUND_INTENSITY);
        printf("\n\t\t\t\t\t (\"_^) Congo, on level  Gold. (\"_^)\n\n\n\n");
    }
    else if(nguesses <12)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY| FOREGROUND_RED |FOREGROUND_BLUE);
        printf("\n\t\t\t\t   (\"-\") Keep trying, climbed on level Silver. (\"-\")\n\n\n\n");
    }
    else if(nguesses <17)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY| FOREGROUND_RED |FOREGROUND_BLUE);
        printf("\n\t\t\t\t(*_*) Never leave trying, still on level Bronze. (*_*)\n\n\n\n");
    }
    else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_INTENSITY);
        printf("\n\t\t\t\t\t(-_-) Sorry, But You Are Trash. (-_-)\n\n\n\n");

    }

    getch();

}

// check if input is a number
int numcheak()
{
    int cheaked;
    while(scanf("%d",&cheaked) != 1)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_INTENSITY);
        printf("\n|(*.*) Sorry, Incorrect Entry Found! Please Input Only Numbers (*.*)| \n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY| 0);
        printf("Guess the number between 1 to 100: ");
        while(getchar() != '\n');
    }

    return cheaked;
}
