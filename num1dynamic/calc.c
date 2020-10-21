/* dltest.c */
#include <stdio.h>
#include <dlfcn.h>
#include "./lib/add.h"
#include "./lib/sub.h"
#include "./lib/mul.h"
#include "./lib/div.h"
int main() {
   void *handle;
   int (*add)(int, int), (*sub)(int, int), (*mul)(int, int), (*div)(int, int);
   char *error;
   handle = dlopen ("./lib/libshared.so", RTLD_LAZY);
   if (!handle) {
      fputs (dlerror(), stderr);
      exit(1);
   }
   add = dlsym(handle, "add");
   if ((error = dlerror()) != NULL) {
      fprintf (stderr, "%s", error);
      exit(1);
   }
   sub = dlsym(handle, "sub");
   if ((error = dlerror()) != NULL) {
      fprintf (stderr, "%s", error);
      exit(1);
   }
   mul = dlsym(handle, "mul");
   if ((error = dlerror()) != NULL) {
      fprintf (stderr, "%s", error);
      exit(1);
   }
   div = dlsym(handle, "div");
   if ((error = dlerror()) != NULL) {
      fprintf (stderr, "%s", error);
      exit(1);
   }
   printf ("add(15,5)=%d\n", (*add)(15,5));
   printf ("sub(15,5)=%d\n", (*sub)(15,5));
   printf ("mul(15,5)=%d\n", (*mul)(15,5));
   printf ("div(15,5)=%d\n", (*div)(15,5));
   dlclose(handle);
}
