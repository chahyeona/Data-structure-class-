#include<stdio.h>
int main(void)
{
    int i; // 변수
    int *ptr; // 포인터
    int **dptr; // 이중포인터

    i=1234;

    printf("------- CHAHYEONA 2020039009 -------\n");
    printf("\n");

    printf("[checking values before ptr = &i]\n");
    printf("value of i == %d\n",i); // i의 크기
    printf("address of i == %p\n",&i); // i의 주소값
    printf("value of ptr == %p\n", ptr); // 포인터의값
    printf("address of ptr == %p\n", &ptr); // 포인터의 주소값
    printf("\n");

    ptr=&i; // 포인터가 i를 가리키게함.

    printf("[checking values after ptr = &i]\n");
    printf("value of i == %d\n",i); // i의크기
    printf("address of i == %p\n",&i); //i의 주소값
    printf("value of ptr == %p\n", ptr); // 포인터 ptr의 값
    printf("address of ptr == %p\n", &ptr); // 포인터의 주소값
    printf("value of *ptr == %d\n", *ptr); // 포인터가 가리키는 곳(i)의 값
    printf("\n");

    dptr=&ptr; // dptr 포인터가 ptr포인터를 가리키게함. 

    printf("[checking values after dptr = &ptr]\n");
    printf("value of i == %d\n",i); //i의 값
    printf("address of i == %p\n",&i); //i의 주소값
    printf("value of ptr == %p\n", ptr); //포인터의 값
    printf("address of ptr == %p\n", &ptr); //포인터의 주소값
    printf("value of *ptr == %d\n", *ptr); // ptr 포인터가 가리키는 곳(i)의 값
    printf("value of dptr == %p\n",dptr); //이중포인터의 값 -> 포인터 ptr의 주소값
    printf("address of dptr == %p\n",&dptr); // 이중포인터의 주소값
    printf("value of *dptr == %p\n",*dptr); // 이중포인터가 가리키는 곳(포인터 ptr)의 값 = i의 주소값
    printf("value of **dptr == %d\n",**dptr); // *dptr이 가리키는 곳의 값 = i의 값
    printf("\n");

    *ptr = 7777; //ptr이 가리키는 곳의 값(i)을 변경
    printf("[after *ptr = 7777]\n");
    printf("value of i == %d\n",i);
    printf("value of *ptr == %d\n",*ptr);
    printf("value of **dptr == %d\n",**dptr);
    printf("\n");

    **dptr = 8888; // (*dptr이 가리키는 곳의 값 = i의 값) 을 변경

    printf("[after **dptr = 8888]\n");
    printf("value of i == %d\n",i);
    printf("value of *ptr == %d\n",*ptr);
    printf("value of **dptr == %d\n",**dptr);
    printf("\n");

    return 0;

}