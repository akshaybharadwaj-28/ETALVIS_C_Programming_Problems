//Question: Write a program to get a number from the user and print whether that number is prime or not.
//Input:31 Output:Prime    Input:27  Output:Not Prime

//Code

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,count;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(count=2;count<i;count++){
        if(i%count==0){
            printf("Not a prime number");
            exit(0);
        }
    }
    printf("Prime number");
}
