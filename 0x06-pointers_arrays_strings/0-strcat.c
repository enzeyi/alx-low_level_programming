/*
 * File: 0-strcat.c
 * Auth: enzeyi
 */

#include "main.h"

/**
 * strcat - concatenates/links together the string pointed to by src, including the terminating
 *          null byte, to the end of the string pointed to by dest.
 * dest: A pointer to the string to be concatenated upon.
 * src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string dest.
 */

char *strcat(char *dest, const char *src)
{

	/*declare two variables: index and dest_len. index is an int (integer) type variable and dest_len is also an int type variable. initialize both variables to 0. */

	int index = 0, dest_len = 0;

	/*while loop to iterate/repeat over the characters in a string stored in the dest array. The loop will continue to execute as long as the value at the current index of the dest array is not \0, which is the null character that marks the end of a string in C.
	 *
	 * The loop also increments the value of index at the end of each iteration using the ++ operator. This operator increments the value of the variable by 1. So, at the end of each iteration, index will be incremented by 1.
	 *
	 * Inside the loop, the value of dest_len is also incremented by 1 using the ++ operator. This is done to keep track of the length of the dest string.
	 *
	 * At the end of the loop, dest_len will contain the length of the dest string. The index variable will contain the index of the null character that marks the end of the string. */

	while (dest[index++])
		dest_len++;

	/*s code is using a for loop to iterate over the characters in a string stored in the src array. The loop will continue to execute as long as the value at the current index of the src array is not \0, which is the null character that marks the end of a string in C.
	 *
	 * The loop also increments the value of index at the end of each iteration using the ++ operator. This operator increments the value of the variable by 1. So, at the end of each iteration, index will be incremented by 1.
	 *
	 * Inside the loop, the character at the current index of the src array is copied to the dest array. The dest array is indexed using the dest_len variable, which is also incremented by 1 at the end of each iteration using the ++ operator. This is done to ensure that the characters from the src array are appended to the end of the dest array.
	 *
	 * At the end of the loop, the dest array will contain a copy of the src array with all of its characters appended to the end. The dest_len variable will contain the new length of the dest array, which is the length of the original dest array plus the length of the src array. The index variable will contain the index of the null character that marks the end of the src array. */

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

/*This line of code is returning the dest array from the function in which it appears. The return statement is used to specify a value that a function should return to the caller when it finishes executing.
 *
 * In this case, the function is returning the dest array, which is a character array that contains a string. The type of the returned value is char *, which is a pointer to a character.
 *
 * When the function is called, the caller can use the returned value as follows:
 *
 * Copy code
 * char *result = my_function(arg1, arg2, ...);
 * Here, result will be a pointer to a character that points to the first element of the dest array returned by the function. The caller can then use this pointer to access the characters in the dest array.
 *
 * For example, the caller could access the first character of the dest array using result[0], the second character using result[1], and so on.
 *
 *
 *
 *
 **/
	
	return (dest);
}

