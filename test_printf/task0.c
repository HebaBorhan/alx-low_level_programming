#include "main.h"
#include <stddef.h>
#include <unistd.h>
/**
* _printf - Custom printf function
* @format: Format specifier string
* Return: Number of char printed excluding null byte
*/
int _printf(const char *format, ...)
{
va_list args;
int i, j, counter = 0;
char d;
spec_t sps[] = {
{"c", print_char}, {"s", print_string}, {"%", print_per},
{"d", print_int}, {"i", print_int}, {'\0', NULL}
};
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
{
return (-1);
}
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
char a = format[i];
write(1, &a, 1);
}
else if (format[i] == '%')
{
i++;
while (format[i] == ' ')
{
i++;
}
for (j = 0; sps[j].spec; j++)
{
if (format[i] == sps[j].spec[0])
{
counter += sps[j].f(args);
break;
}
else if (sps[j].spec[0] == '\0')
{
d = format[i] + '0';
write(1, &d, 1);
}
}
}
}
va_end(args);
return (i + counter);
}

