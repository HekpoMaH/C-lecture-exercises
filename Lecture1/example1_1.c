#include<stdio.h>
int a;
unsigned char b='a';
extern int alpha;
int main(void){
    extern unsigned char b;
    double a=3.4;
    {
        extern a;
        printf("%d %d\n",b,a+1);
    }
}
