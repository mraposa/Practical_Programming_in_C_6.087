#include <stdio.h>
#include <stdlib.h>

int ans_1_1(void) {
	puts("Answers 1.1");
	/*
	 Curly braces join a block of code together. They also define a scope
	 */
	/*
	 * 7 is a number
	 * "7" is a string or specifically an array of characters
	 * '7' is a single character
	 */
	double ans = 10.0+(2.0/((3.0-2.0)*2.0));
	printf("%f", ans);
	return EXIT_SUCCESS;
}

int ans_1_2(void) {
	puts("Answers 1.2");
	#define squared(x) x*x
	printf("%f\r\n", 18.0/squared(2+1));
	#define squared(x) (x*x)
	printf("%f\r\n", 18.0/squared(2+1));
	#define squared(x) (x)*(x)
	printf("%f\r\n", 18.0/squared(2+1));
	#define squared(x) ((x)*(x))
	printf("%f\r\n", 18.0/squared(2+1));

	return EXIT_SUCCESS;
}

int ans_1_4(void) {
	/*
	 * 6
	 * 4
	 * 5
	 * 2
	 * 7
	 * 1
	 * 3
	 */

	return EXIT_SUCCESS;
}

int ans_1_5(void){
	/*
	 * a. no semi-colon on #include
	 * b. arg1 is void. You can't subtract 1 from a void
	 * c. no equal sign on #define
	 */
	#define MESSAGE "Happy new year!"
	puts(MESSAGE);
	return 0;

}
