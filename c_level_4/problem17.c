//Question: Write a program to get a number from the user and print whether that number is prime or not. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
//Input:31 Output:Prime    Input:27  Output:Not Prime

//Code

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num,count=2;
    printf("Enter a number: ");
    scanf("%d", &num);
    bigloop: if(count<num-1){
        loop: if(num%count==0){
        printf("%d is not a prime number", num);
        exit(0);
    }
        //printf("Count is %d\n", count);
        count=count+1;
        goto bigloop;
    }
    printf("%d is a prime number", num);
    
}
