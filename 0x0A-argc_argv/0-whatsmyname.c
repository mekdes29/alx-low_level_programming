#include "main.h"
#include <stdio.h>
#include <stlib.h>

/**
 * main-program that prints its name, followedby new line
 * 
 * @argc: argument count for main
 * @argv: vector to the arguments
 * *
 * *Return: void
 */
int main(int argc,char **argv)
{
	if (argc >=1)
		printf("%s\n", argv[0]);
	return(0);
}
