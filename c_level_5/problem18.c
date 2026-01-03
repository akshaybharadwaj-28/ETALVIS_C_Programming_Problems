//Question: Write a program to get a number from the user, print whether that number's first two digits (ten's digit and one's digit) is prime.
//Input:359 Output:Prime    Input:3577  Output:Not Prime

//Code

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,count;
    printf("Enter a number: ");
    scanf("%d", &i);
    if(i>99){
        i=i%100;
        for(count=2;count<i;count++){
            if(i%count==0){
                printf("Not a Prime number");
                exit(0);
            }
        }
        printf("Prime number");
    }
    else{
        for(count=2;count<i;count++){
            if(i%count==0){
                printf("Not a Prime number");
                exit(0);
            }
        }
        printf("Prime number");
    }
}
