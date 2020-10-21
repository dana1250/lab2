#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <errno.h> 

void my_perror(const char *msg){
   if (msg != NULL){
      printf(msg);
      printf(" : ");
      printf(strerror(errno));
      printf("\n");
   }
   else
      printf(strerror(errno));
   return 0;
}
 
main(int argc, char *argv[]) 
{ 
   FILE *f; 
 
   if (argc < 2) { 
      printf("Usage: perror_use nofilename\n"); 
      exit(1); 
   } 
 
   if ((f = fopen(argv[1], "r")) == NULL ) { 
      my_perror("fopen");
      exit(1); 
   } 
 
   printf("Open a file \"%s\".\n", argv[1]); 
 
   fclose(f);
   return 0;
}
