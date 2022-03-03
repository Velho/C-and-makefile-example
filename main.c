/****************************************************************************
    Created by: Petri Pihla
    Created on: 3.3.2020

    A simple program that uses the functions defined in my_strings.h

    Program is divided into two files:
    - main.c
    - my_strings.h

    main.c contains the display functions
    my_strings.h contains the function that manipulate strings

    there are two functions that define how user input is handled:
    - ask_command()
    - read_string_from_user()
    It should be noted that this could be combined into one function, but
    it was easier to separate them for the sake of clarity.
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include "MY_strings.h"


int main(void)
{
    char string[MAX_STRING_LENGTH] = "test";
    int command = 0;

    while (command != EXIT)
    {
        display_menu();
        command = ask_command();
        switch (command)
        {
        case COUNT_VOWELS:
            printf("%d\n", MY_count_vowels(string));
            break;
        case COUNT_CONSONANTS:
            printf("%d\n", MY_count_consonants(string));
            break;
        case CONVERT_TO_UPPERCASE:
            MY_convert_to_uppercase(string);
            break;
        case CONVERT_TO_LOWERCASE:
            MY_convert_to_lowercase(string);
            break;
        case DISPLAY_STRING:
            print_string(string);
            break;
        case ENTER_STRING:
            MY_read_string_from_user(string);
            break;
        case READ_STRING_FROM_FILE:
            MY_read_string_from_file(string, "log.txt");
            break;
        case WRITE_STRING_TO_FILE:
            MY_write_string_to_file(string, "log.txt");
            break;
        case EXIT:
            break;
        default:
            printf("Invalid command\n\n");
            break;
        };
    }
}

// TODO: I didn't do the research on what atoi() returns if the string is not a number.
// This works on this context, but it's not the best way to do it.
int ask_command()
{
    char input[MAX_USER_INPUT_LENGTH];
    printf("Enter command: ");
    fgets(input, MAX_USER_INPUT_LENGTH, stdin);
    return atoi(input);
}

void print_string(char *string)
{
    printf("%s\n", string);
}

void display_menu()
{
    printf("1. Count vowels\n");
    printf("2. Count consonants\n");
    printf("3. Convert to uppercase\n");
    printf("4. Convert to lowercase\n");
    printf("5. Display string\n");
    printf("6. Enter string\n");
    printf("7. Read string from file\n");
    printf("8. Write string to file\n");
    printf("9. Exit\n");
}

void display_string(char *string)
{
    printf("%s\n", string);
}
