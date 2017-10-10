//NOTE 
//it is expected there won't be troll test cases like:
//4 6 65ebisa5v5gaza + * = ) ii
#include<stdio.h>
int stack[1000];
int *sp=stack;
#define push(sp, n) (*((sp)++) = (n))
#define pop(sp) (*--(sp))
int main(int argc, char *argv[]){
    for(int i=1;i<argc;i++){
        //printf("arg is: (%s)\n", argv[i]);
        if(argv[i][0]=='*'){
            //printf("*\n");
            int b=sp[-1];pop(sp);
            int a=sp[-1];pop(sp);
            //printf("a=%d b=%d\n",a,b);
            push(sp,a*b);
        }
        else if(argv[i][0]=='/'){
            //printf("/\n");
            int b=sp[-1];pop(sp);
            int a=sp[-1];pop(sp);
            //printf("a=%d b=%d\n",a,b);
            push(sp,a/b);
        }
        else if(argv[i][0]=='-'){
            //printf("-\n");
            int b=sp[-1];pop(sp);
            int a=sp[-1];pop(sp);
            //printf("a=%d b=%d\n",a,b);
            push(sp,a-b);
        }
        else if(argv[i][0]=='+'){
            //printf("+\n");
            int b=sp[-1];pop(sp);
            int a=sp[-1];pop(sp);
            //printf("a=%d b=%d\n",a,b);
            push(sp,a+b);
        }
        else{
            int x;
            sscanf(argv[i],"%d",&x);
            push(sp,x);
        }
        //printf("i=%d stack:\n",i);
        for(int j=0;j<10;j++){
            //printf("%d\n",stack[j]);
        }
        //printf("--------\n");
    }
    printf("%d\n",sp[-1]);
}
//test case
//6 4 5 + * 25 2 3 + / -
