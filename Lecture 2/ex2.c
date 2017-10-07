#include<stdio.h>
void merge(int a[], int l, int r){
    int arr[r-l+1];
    int p1=l,p2=(l+r)/2,pArr=0;
    while(p1<(l+r)/2&&p2<r){
        if(a[p1]<=a[p2]){
            arr[pArr]=a[p1];
            pArr++;p1++;
        }
        else{
            arr[pArr]=a[p2];
            pArr++;p2++;
        }
    }
    for(;p1<(l+r)/2;p1++,pArr++)arr[pArr]=a[p1];
    for(;p2<r;p2++,pArr++)arr[pArr]=a[p2];
    for(int i=l, pArr=0; i<r; i++, pArr++)a[i]=arr[pArr];
}
void mergesort(int a[], int l, int r){
    if(l+1>=r)
        return;
    mergesort(a, l, (l+r)/2);
    mergesort(a, (l+r)/2, r);
    merge(a,l,r);
}
int main(void){
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
