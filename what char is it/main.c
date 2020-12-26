/*
 Any character is entered through the keyboard, write a
program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for
various characters.
Characters ASCII Values

A – Z                   65 – 90
a – z                   97 – 122
0 – 9                   48 – 57
special symbols         0 - 47, 58 - 64, 91 - 96, 123 - 127
Author Majid Mujahid Hussain Dated 25/December/2020.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Hello world!\n");
    printf("Please enter a character: \n");
    scanf("%c", &ch);

    //checking if the character is UPPERCASE character

    if (ch >= 'A' && ch <= 'Z') //if (ch >= 65 && ch <= 90)
    {
        printf("The Character '%c' is an UPPERCASE CHARACTER. \n", ch);
    }
    else if( ch >= 'a' && ch <= 'z')  //else if(ch >= 97 && ch <= 122)
    {
        printf("The Character '%c' is a SMALLCASE CHARACTER. \n", ch);
    }
    else if( ch >= '0' && ch <= '9') //else if(ch >= 48 && ch <= 57)
    {
        printf("The Character '%c' is a DIGIT. \n", ch);
    }
    else if( ch >= 0 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 127)
    {
        printf("The Character '%c' is a SPECIAL CHARACTER. \n",ch);
    }
    else
    {
        printf("Wrong Entry");
    }
    return 0;
}
