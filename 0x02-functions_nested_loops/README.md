ALX -0x02-functions_nested_loops
Started DEC,13,2022 and ended DEC,16,2022
Tutor:Julien Barbier
Resources 
Nested While Loops: https://alx-intranet.hbtn.io/rltoken/_4aLZ5nW24njUT2VbSZdQQ
C-Functions: https://alx-intranet.hbtn.io/rltoken/Vg1zzzrxLhPh71405uggSg
Learning To Programin C PART 06: https://alx-intranet.hbtn.io/rltoken/jveXtnJII2S0z7a06c7-JA
What is the purpose of a function prototype https://alx-intranet.hbtn.io/rltoken/XZ--UJZO76ZoUWNA9bTmbg
CXC-header files: https://alx-intranet.hbtn.io/rltoken/AS8JW4ObD5gmyX2mgtqV0A
LEARNING OBJECTIVES
What are nested loops and how to use them
What is a function and how do you use functions
What is the difference between a declaration and a definition of a function
What is a prototype
Scope of variables
What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
What are header files and how to to use them with #include
EDITORS I USED: vi editor
REQUIREMENTS:
All files should end with a new line
Codes should use the Betty Style.
Don't use any global variables.
No more than 5 Functions per line.
Not allowed to use the standard library, any use of functions like printf , puts, etc. is forbidden.
Allowed to use _putchar
The prototypes of all your functions and the prototypw of the function _putchar should be included in your header file called main.h
Don't forget to push your header file.
LIST OF TASKS THE CONDITIONS/REQUIREMENTS AND WHAT THEY DO:
All these files are created under:
GitHub repository: alx-low_level_programming
Directory: 0x02-functions_nested_loops
For all these files You can only use _putchar twice in your code
1.  0._putchar
Prints _putchar , followed by a new line
Program should return 0
2. 1-alphabet.c
A function that prints the alphabet, in lowercase, followed by a new line
Prototype: void print_alphabet(void);
3. 2-print_alphabet_x10.c
A function that prints 10 times the alphabet, in lowercase, followed by a new line.
Prototype: void print_alphabet_x10(void);
4. 3-islower.c
A function that checks for lowercase character.
Prototype: int _islower(int c);
Returns 1 if c is lowercase
Returns 0 otherwise
FYI: The standard library provides a similar function: islower. Run man islower to learn more.
5. 4-isalpha.c
A function that checks for alphabetic character.
Prototype: int _isalpha(int c);
Returns 1 if c is a letter, lowercase or uppercase
Returns 0 otherwise
6. 5-sign.c
A function that prints the sign of a number.
Prototype: int print_sign(int n);
Returns 1 and prints + if n is greater than zero
Returns 0 and prints 0 if n is zero
Returns -1 and prints - if n is less than zero
7. 6-abs.c
A funtion that computes the absolute value of an integer.
Prototype: int _abs(int);
FYI: The standard library provides a similar function: abs. Run man abs to learn more.
8. 7-print_last_digit.c
A function that prints the last digit of a number.
Prototype: int print_last_digit(int);
Returns the value of the last digit
9. 8-24_hours.c
A function that prints every minute of the dat of Jack Bauer, starting from 00:00 to 23:59
Prototype: void jack_bauer(void);
10. 9-times_table.c
A function that prints 9 times table, starting with 0.
Prototype: void times_table(void);
11. 10-add.c
A function that adds two integers and returns the result.
Prototype: int add(int, int);
12. 11-print_to_98.c
A function that prints all natural numbers from n to 98 , followed by a new line.
Prototype: void print_to_98(int n);
Numbers must be separated by a comma, followed by a space
Numbers should be printed in order
The first printed number should be the number passed to your function
The last printed number should be 98
You are allowed to use the standard library
