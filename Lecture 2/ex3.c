#include<stdio.h>
#define SWAP(t, x, y){\
    t z=(x);\
    (x) = (y);\
    (y)=z;\
}
int main(void){
    int a=2,b=9;
    int arr[2]={5,4};
    int idx=0;
    SWAP(int, arr[idx++], b);
    printf("%d %d\n",arr[idx-1],b);
}
