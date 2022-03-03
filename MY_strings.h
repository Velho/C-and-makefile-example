/****************************************************************************
    Created by: Petri Pihla
    Created on: 3.3.2020

    Doxygen-style comments are used for documentation.
    At this level of coding it's a bit overkill, but it is a demonstration.
    Function names are self-explanatory.

    Using MY as a prefix to "declare" namespaces.
    This seems to be a common practice in C.
 ****************************************************************************/
#ifndef MY_STRINGS_H
#define MY_STRINGS_H

/**
 * @brief Counts the number of vowels in the given string.
 * @return The number of vowels.
 */
int MY_count_vowels(char *string);

/**
 * @brief Counts the number of consonants in the given string.
 * @return The number of consonants.
 */
int MY_count_consonants(char *string);

/**
 * @brief Converts the given string to uppercase.
 */
void MY_convert_to_uppercase(char *string);

/**
 * @brief Converts the given string to lowercase.
 */
void MY_convert_to_lowercase(char *string);

/**
 * @brief Reads a string from the user.
 */
void MY_read_string_from_user(char *string);

/**
 * @brief Reads a string from a file.
 */
void MY_read_string_from_file(char *string, char *filename);

/**
 * @brief Writes a string to a file.
 */
void MY_write_string_to_file(char *string, char *filename);

#endif
