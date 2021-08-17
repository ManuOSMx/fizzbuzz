#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);



/*
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void fizzBuzz(int n) {
    
    if (n%3 == 0 && n%5 == 0) {
        printf("FizzBuzz\n");
    } else if (n%3 ==0 && n%5 != 0) {
        printf("Fizz");
	} else if (n%5 == 0 && n%3 != 0) {
        printf("Buzz");
    } else {
    	printf("%d", n);
	}
}

int main()
{
    int n;
    scanf("%d", &n);

    fizzBuzz(n);

    return 0;
}


