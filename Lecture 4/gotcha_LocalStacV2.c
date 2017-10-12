#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
char global[10];
char *unary(unsigned short s) {
    char local[s+1];
    char *p = s%2 ? global : local;
    int i;
    for (i=0;i<s;i++) p[i]='1';
    p[s]='\0';
    return &p[0];
}
int main(void) {
    //assert(unary(6)!=NULL);
    printf("%s\n",unary(5)); //What does this print?
    return 0;
}
