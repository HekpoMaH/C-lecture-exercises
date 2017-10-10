#include<stdio.h>
#include<string.h>
char *strfind(const char *s,const char *f){
    for(int i=0;i<strlen(s)-strlen(f)+1;i++){
        int fl=1;
        for(int j=0;j<strlen(f);j++){
            if(s[i+j]!=f[j]){
                fl=0;
                break;
            }
        }
        if(fl==1){
            return &s[i];
        }
    }
    return NULL;
}
int main(void){
    char *p=strfind("QJhuI KURVO","pedal"); //change to huI for positive answer
    if(p==NULL){
        printf("NULL\n");
        return 0;
    }
    printf("%c\n",p[0]);
}
