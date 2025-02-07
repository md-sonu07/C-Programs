// Program 11: ASCII Value of a Character
#include <stdio.h>
#include <conio.h>

int main() 
{
    char character;
    int ascii;
    clrscr();
    printf("Find ASCII value of any character or number");
    printf("\n\nEnter a character or number: ");
    scanf("%c", &character);
    ascii = (int)character;
    printf("\nThe ASCII value of '%c' is: %d", character, ascii);

    if (ascii >= 48 && ascii <= 57)
        printf("\nThe character is a Number.");
    else if (ascii >= 65 && ascii <= 90)
        printf("\nThe character is an Uppercase Letter.");
    else if (ascii >= 97 && ascii <= 122)
        printf("\nThe character is a Lowercase Letter.");
    else if (ascii >= 32 && ascii <= 126)
        printf("\nThe character is a Special Character.");
    else
        printf("\nThe character is a Special Character.");
    getch();
    return 0;
}
