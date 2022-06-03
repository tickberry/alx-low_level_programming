#include <stdio.h>
#include <conio.h>
/**
 * main - prints size of various types
 * descrition compiling
 * return: with the value size of types
 */
int main(void){
	printf("size of %2d: bytes\n"sizeof (char));
	printf("size of %2d: bytes\n"sizeof(int));
	printf("size of %2d: bytes\n"sizeof(long int));
	printf("size of %2d: bytes\n"sizeof(float));
	return (0);
