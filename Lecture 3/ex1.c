#include<stdio.h>
int main(void){
    int a[5]={1,2,3,4,5};
    int *p=&a[3];

    //p[-2] gives 2 positions before
    printf("%d\n",p[-2]);
}
