#include <stdio.h>
#include <main.h>

/**
 * _putchar - Write a character to stdout
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error (and errno is set)
 */
int _putchar(char c) {
    return write(STDOUT_FILENO, &c, 1);
}
