#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdint.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct specifier - Structure to hold specifier and function pair
 * @str: The specifier string
 * @fct_op: Pointer to the corresponding printing function
 */
typedef struct specifier
{
	char str;
	int (*fct_op)(va_list);
} specifier_t;

int check_specifier(const char f, va_list);
int _puts(char *s);
int _strlen(char *s);
int _check_valid_format(const char f);
int checkPercentageAfter(const char *f);
int _putint(int n);
int _putint_uns(unsigned int n);


int print_single_char_c(va_list args);
int print_string_s(va_list args);
int print_pourcen(va_list args);
int _printint(va_list args);
int print_bin(va_list args);
void _strrev(char *f);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_lower_hexa(va_list args);
int print_lower_hexa_uint(uintptr_t n);
int print_upper_hexa(va_list args);
int print_upper_hexa_char(unsigned char c);
int print_string_S(va_list args);
int print_pointer(va_list args);
int _print_rev(va_list args);
void _put_rev(char *f);
void _custom_str(char *custom_f);


#endif
