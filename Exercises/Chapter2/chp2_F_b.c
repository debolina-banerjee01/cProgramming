/*
Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a small case letter,
a digit or a special symbol. The following table shows the range of ASCII values for various characters.
Characters ASCII Values
A – Z
a – z
0 – 9
special symbols
65 – 90
97 – 122
48 – 57
0 - 47, 58 - 64, 91 - 96, 123 - 127

How this problem has been solved:
____________________________________________

Step 1: Accept character input from keyboard.
Step 2: Cast the character as an integer.
Step 3: a) The first 'if' statement is written which has the ASCII values between 65 and 90. It will print capital letter character.
        b) The second 'if' statement is written which has the ASCII values between 97 and 90. It will print small case letter.
        c) The third 'if' statement is written which has the ASCII values between 48 and 57. It will print digit.
        d) The last 'if' statement is written which has the ASCII value between the ranges of 0 - 47, 58 - 64, 91 - 96 and 123 - 127. It will print
           a special symbol.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inp_char;
    printf("\nPlease enter a character: ");
    scanf("%c",&inp_char);
    int int_inp_char = (int)inp_char;

    if ((int_inp_char >= 65) && (int_inp_char <= 90))
        printf ("\ncharacter is a capital letter");

    else if ((int_inp_char >= 97) && (int_inp_char <= 122))
        printf("\ncharacter is a small letter");

    else if ((int_inp_char >= 48) && (int_inp_char <= 57))
    {
        printf("\ncharacter is a digit");
    }
    else if (
                (int_inp_char >= 0) && (int_inp_char <= 47) ||
                (int_inp_char >= 58) && (int_inp_char <= 64) ||
                (int_inp_char >= 91) && (int_inp_char <= 96) ||
                (int_inp_char >= 123 && int_inp_char <= 127)
            )
    {
        printf("\ncharacter is a special symbol");
    }


    return 0;
}
