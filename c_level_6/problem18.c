//Question: Write a program to get a number from the user, print whether that number's first two digits (ten's digit and one's digit) is prime.
//Input:359 Output:Prime    Input:3577  Output:Not Prime

//Code

#include <stdio.h>
#include <stdlib.h>

int main() { 
    int num,i,flag=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    num=num%100;
    i=2;
    while(i<num){
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
