#include<stdio.h>
int main(void)
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("------- CHAHYEONA 2020039009 ---------------\n");
    printf("\n");

    printf("Size of char : %ld byte\n",sizeof(charType)); // 선언된 변수의 크기 
    printf("Size of int : %ld bytes\n",sizeof(integerType));
    printf("Size of float : %ld bytes\n",sizeof(floatType));
    printf("Size of double : %ld bytes\n",sizeof(doubleType));

    printf("--------------------------------------------\n");

    printf("Size of char : %ld byte\n",sizeof(char)); // 자료형의 크기 
    printf("Size of int : %ld bytes\n",sizeof(int));
    printf("Size of float : %ld bytes\n",sizeof(float));
    printf("Size of double : %ld bytes\n",sizeof(double));

    printf("--------------------------------------------\n");

    printf("Size of char* : %ld byte\n",sizeof(char*)); // 포인터의 크기 
    printf("Size of int* : %ld bytes\n",sizeof(int*));
    printf("Size of float* : %ld bytes\n",sizeof(float*));
    printf("Size of double* : %ld bytes\n",sizeof(double*));

}
