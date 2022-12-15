/*The ifndef directive checks whether a macro is not defined*/
/*If the identifier specified is not defined as a macro, the lines of code immediately follow the condition are passed on to the compiler*/
/*THE ifndef SYNTAX: #ifndef identifier_here*/

#ifndef main.h

/*#define creates a macro, wich is the association of an identifier or parameterized identifier with a token string*/
/*#define directive is used to define constants or an expression in our c program*/
/*The #include is used to include the contents of header files in our C program.*/

#define main.h

/*
 * File:0-putchar.c
 * Auth:Emmanuel Enzeyi
 * Desc:My header file that contains all the declarations/prototypes for all the functions I used in the 0x02-functions_nested_loops directory
 */

int _putchar(char);
void print_alphabet(void)
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);

/*endif (plural endifs) (computing) A directive, in several programming languages, that marks the end of an if statement, especially one containing multiple if ... then ... else statements.*/

#endif
