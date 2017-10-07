#include<stdio.h>
// NOTE
// it does not work for arr[idx++]
// because idx is incremented several times
// e.g.
// arr[idx++]^=y y^=arr[idx++] arr[idx++]^=y
// (3 times overal)
// also does not work if you call SWAP(a,a)
// bcs it gets preprocessed as a^=a (a becoming 0 from now on)
#define SWAP(x, y) (x)^=(y), (y)^=(x), (x)^=(y)
int main(void){
    int a=9,b=9;
    int arr[2]={5,4};
    int idx=0;
    SWAP(a, a);
    printf("%d %d\n",a,b);
}
