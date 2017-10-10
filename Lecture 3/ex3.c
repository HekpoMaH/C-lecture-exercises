#include<stdio.h>
struct strangeStruct{
    int i;
};

struct strangeStruct2{
    int *i;
};
struct strangeStruct arr[10];
struct strangeStruct2 arr2;
int main(void){
    int somehelparr[10];
    arr2.i=somehelparr;
    for(int j=0;j<10;j++){
        arr[j].i=j;
        (arr2.i)[j]=j;
    }
    struct strangeStruct ibasi;
    struct strangeStruct *p=&arr[0];
    struct strangeStruct2 *pp=&arr2;
    ++p->i;//increments the value pointed by p
    for(int j=0;j<10;j++){
        printf("%d ",arr[j].i);
    }
    printf("\n");
    for(int j=0;j<10;j++){
        printf("%d ",arr2.i[j]);
    }
    printf("\n-------------\n");
    p++->i;//increments the pointer and prints value pointed 
    for(int j=0;j<10;j++){
        printf("%d ",arr[j].i);
    }
    printf("\n");
    for(int j=0;j<10;j++){
        printf("%d ",arr2.i[j]);
    }
    printf("\n-------------\n");
    printf("%d\n-------------\n",*pp->i);//dereferences pp and prints i value of the element pointed by p
    *pp->i++;
    printf("%d\n-------------\n",*pp->i);//same as above but increased by 1
    (*pp->i)++;
    printf("%d\n-------------\n",*pp->i);//same as above but increased by 1
    *pp++->i;//moves the pointer and prints value pointed.
    for(int j=0;j<10;j++){
        printf("%d ",arr[j].i);
    }
    printf("\n");
    for(int j=0;j<9;j++){
        printf("%d ",arr2.i[j]);
    }
    printf("\n-------------\n");

}
/*
when executred the above program prints

1 1 2 3 4 5 6 7 8 9 
0 1 2 3 4 5 6 7 8 9 
-------------
1 1 2 3 4 5 6 7 8 9 
0 1 2 3 4 5 6 7 8 9 
-------------
0
-------------
1
-------------
2
-------------
1 1 2 3 4 5 6 7 8 9 
2 2 3 4 5 6 7 8 9 
-------------
 */
