#include<stdio.h>
#include<string.h>
char s[]="UNIBJIJZjrieikmsfk";
int main(void){
    char c;
    int i,j;
    for(i=0,j=strlen(s)-1;i<j;i++,j--)
        s[i]^=s[j]^=s[i]^=s[j];
    printf("%s\n",s);
    return 0;
}
