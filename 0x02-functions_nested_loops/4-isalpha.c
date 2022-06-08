#include "main.h"
/***
 * isalpha  - checks  for alphabetic char
 * @c: the char to be checked
 * Return: if c is the letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >='A' && c <= 'Z'));
}
