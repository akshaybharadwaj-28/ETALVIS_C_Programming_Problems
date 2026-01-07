//Question: Write a program to get a number from the user and print whether that number is prime or not.
//Input:31 Output:Prime    Input:27  Output:Not Prime

//Code

#include <stdio.h>
#include <stdlib.h>

int main() { 
    int num,i,flag;
    printf("Enter a number: ");
    scanf("%d", &num);
    i=2;
    while(i<num){
        flag=0;
        if(num%i==0){
            flag=1;
            printf("Not prime");
            exit(0);
        }
        i++;
    }
    if(flag==0){
        printf("Prime");
    }
}
