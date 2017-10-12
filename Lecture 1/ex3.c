#include<stdio.h>
int main(void){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                a[j]^=a[j+1]^=a[j]^=a[j+1];
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d",a[i]);
    printf("\n");

}
