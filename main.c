#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
    printf("Hello, World, mi nombre es %d\n", argc);
    printf("Hello, World, mi nombre es %s\n", argv[0]);
    printf("Hello, World, mi nombre es %s\n", argv[1]);
    float a, b, c;
    a = 1.5;
    b = -3 * 2e-2;
    c = a + b;
    printf("Esta cuenta es %g mas %g igual %g\n", a, b, c);
    int k;
    k = 3;
    double mean;
    mean = 3.5;
    void declarar(void);
    declarar();
}

void declarar(void)
{

    printf("Ï'm ready\n");

}
/*
int power(void)(int base, int exp) {
        if (exp == 0)
            return 1;
        else if (exp % 2)
            return base * power(base, exp - 1);
        else {
            int temp = power(base, exp / 2);
            return temp * temp;
        }
    }


}*/
