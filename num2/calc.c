#include <stdio.h>

#include "./lib/add.h"
#include "./lib/sub.h"
#include "./lib/mul.h"
#include "./lib/div.h"

int main() {
	int (*add)(int, int), (*sub)(int, int), (*mul)(int, int), (*div)(int, int);
	printf ("add(4,2)=%d\n", (*add)(4,2));
	printf ("sub(4,2)=%d\n", (*sub)(4,2));
	printf ("mul(4,2)=%d\n", (*mul)(4,2));
	printf ("div(4,2)=%d\n", (*div)(4,2));

}
