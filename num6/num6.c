#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


#define my_assert(expr) \
if(!expr) { printf(" %s: :%d :%s :Assertion ", __FILE__, __LINE__, __func__); \
printf(#expr); \
printf(" failed.\n"); \
exit(1);}

void foo(int num){
  my_assert(((num >= 0) && (num <= 100)));
  printf("foo : num = %d\n", num);
  
}

void main(int argc, char *argv[]){
  int num;

  if (argc > 1) {
    fprintf(stderr, " Usage : assert_test aNumber\n(0 <= aNumber <= 100)\n");
  }

  num = atoi(argv[1]);
  foo(num);
}
