#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

    _printf("This is a first string: %s\n", NULL);
    printf("first string: %s\n", NULL);
   
    _printf("This is a second string: %  s\n");
    printf("second string: %  s\n");
   
    _printf("This is a third string: %  s\n", "abc");
    printf("third string: %  s\n", "abc");

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

     printf("Unknown:[%k] abc\n", "I am a string !");
     printf("Unknown: %k abc\n", "I am a string !");
     printf("Unknown: %kabc\n", "I am a string !");
    _printf("Unknown:[%k]\n", "I am a string !");
  
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
  
    return (0);
}
