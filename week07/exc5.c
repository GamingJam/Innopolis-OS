#include <stdio.h>
#include <stdlib.h>

int main() {
    char **s = malloc(sizeof(char*));
    char *foo = "Hello World";
    *s = foo;
    printf("s is %s\n", *s);
    s[0] = foo;
    printf("s[0] is %s\n",s[0]);
    return(0);
}

/*

              _=,_
           o_/6 /#\
           \__ |##/
            ='|--\
              /   #'-.
              \#|_   _'-. /
               |/ \_( # |" 
      lab7    C/ ,--___/
 
 Henlo!
You've been visited by the OS-dog
This doggo appears only every 1000labs
YOU'LL BE SAFE FROM DANGEROUS C CODES FOR 24 HOURS

*/