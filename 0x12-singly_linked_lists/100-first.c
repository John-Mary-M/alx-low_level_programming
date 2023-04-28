#include <stdio.h>

/**
 * before_main - automatically prints the desired message before main.
 * before the main function is executed.
 * Return: void.
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
/*
 * This function uses the __attribute__((constructor)) function attribute to
 * specify that it should be executed before the main function. When the
 * program starts up, the before_main function is called automatically,
 * and it prints the desired message using printf.
 */
