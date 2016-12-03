/*
 Problem 12
 The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

 Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
 10: 1,2,5,10
 15: 1,3,5,15
 21: 1,3,7,21
 28: 1,2,4,7,14,28

 We can see that 28 is the first triangle number to have over five divisors.

 What is the value of the first triangle number to have over five hundred divisors?
*/

/* ATTENTION Compile with divisors.c -lm */

#include <stdio.h>
#include "divisors.h"

int main() {
	unsigned i, k = 2;

	for (i = 1; div_num(i) <= 500; i += k, k++)
		;

	printf("%u\n", i);

	return 0;
}

/*
 Solution:
 76576500

 real 0m0.224s
 user 0m0.216s
 sys  0m0.004s
*/
