#include<string.h>
#include<stdio.h>
int cntlower(char str[], unsigned int len){
    int cnt=0;
    for(int i=0;i<len;i++){
        if(str[i]>='a'&&str[i]<='z')
            cnt++;
    }
    return cnt;
}
int main(void){
    printf("%d\n",cntlower("IeAEeiaoE",8));
}
