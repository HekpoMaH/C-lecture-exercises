#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
char *unary(unsigned short s) {
    char *local=malloc(s+1);
    int i;
    for (i=0;i<s;i++) local[i]='1';
    local[s]='\0';
    assert(local!=NULL);
    return &local[0];
}
int main(void) {
    assert(unary(6)!=NULL);
    printf("%s\n",unary(6)); //What does this print?
    return 0;
}
