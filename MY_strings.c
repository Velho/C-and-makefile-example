/****************************************************************************
    Created by: Petri Pihla
    Created on: 3.3.2020
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include "my_strings.h"

int MY_count_vowels(char *string)
{
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int MY_count_consonants(char *string)
{
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u')
        {
            count++;
        }
    }
    return count;
}

void MY_convert_to_uppercase(char *string)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - 32;
        }
    }
}

void MY_convert_to_lowercase(char *string)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] + 32;
        }
    }
}

void MY_read_string_from_user(char *string)
{
    printf("Enter a string: ");
    fgets(string, MAX_STRING_LENGTH, stdin);
}

void MY_read_string_from_file(char *string, char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return;
    }
    fscanf(file, "%s", string);
    fclose(file);
}

void MY_write_string_to_file(char *string, char *filename)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return;
    }
    fprintf(file, "%s", string);
    fclose(file);
}
