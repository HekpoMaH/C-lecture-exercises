#include <stdio.h>
struct values { int a; int b; };
int main(void) {
    struct values  test2 = {2,3};
    struct values  test1 = {0,1};
    //NOTE
    //memory is structured like
    //test2.a|test2.b|test1.a|test1.b
    printf("%d %d %d %d\n",&test1.a,&test1.b,&test2.a,&test2.b);
    int *pi = &(test1.a);
    pi += 1; //Is this sensible? yes, this is
    printf("%d\n",pi);
    pi += 2; //What could this point at? but this is undefined behaviour?
    printf("%d\n",pi);
    return 0;
}
