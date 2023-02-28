#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

void welcome_screen()
{
    /*
    *
    * @author SD
    *
    */
    system("Color B0");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY| FOREGROUND_RED | FOREGROUND_BLUE| FOREGROUND_INTENSITY);

    printf("\n\t\t\t\t\t\t\t\t\t\t\t<[-Created By Shourav Deb-]>");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_INTENSITY);

    printf("\n\n\t\t\t\t\t   (^_^) Welcome to Guess Bass (*.*)");
    printf("\n\t\t\t\t\t======================================");
    printf("\n\t\t\t\t\t  ---> show your guessing power <---\n\n\n");

}
