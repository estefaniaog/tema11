#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("Hello, World, mi nombre es %d\n",argc);
    printf("Hello, World, mi nombre es %s\n",argv[0]);
    printf("Hello, World, mi nombre es %s\n",argv[1]);
    float a,b,c;
    a=1.5;
    b=-3*2e-2;
    c=a+b;
    printf("Esta cuenta es %g mas %g igual %g\n",a,b,c);
    return 0;
}
