//Question: Get a number from user and print the same. Change the value without directly changing it and print the same.

//Code

#include <stdio.h>
int main(){
    int a, *ptr;
    printf("Enter a number: ");
    scanf("%d",&a);
    ptr=&a;
    printf("Value before changing: %d\n",*ptr);
    *ptr=10;
    printf("Value after changing: %d",*ptr);
}
