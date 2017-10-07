#include<stdio.h>
int lexVal(char c){
    int v=-1;
    if(c>='a'&&c<='z'){
        v=c-'a';
    }
    if(c>='A'&&c<='Z'){
        v=c-'A';
    }
    return v;
}
int main(void){
    char a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%c",&a[i]);
    for(int i=0;i<n;i++)
        printf("%c",a[i]);
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            int v1=lexVal(a[j]),v2=lexVal(a[j+1]);
            if(v1>v2){
                a[j]^=a[j+1]^=a[j]^=a[j+1];
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%c",a[i]);
    printf("\n");

}
