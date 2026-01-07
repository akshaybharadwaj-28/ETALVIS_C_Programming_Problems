//Question: Write a program to get a 4 digit number from the user, print whether that number's middle two digits (hundred's digit and ten's digit) is prime.
//Input:6359 Output:Not Prime    Input:3537  Output:Prime

//Code

#include <stdio.h>
#include <stdlib.h>

int main() { 
    int i,num,flag=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    num=num/10;
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
