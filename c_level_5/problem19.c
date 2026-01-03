//Question: Write a program to get a 4 digit number from the user, print whether that number's middle two digits (hundred's digit and ten's digit) is prime.
//Input:6359 Output:Not Prime    Input:3537  Output:Prime

//Code

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,count;
    printf("Enter a number: ");
    scanf("%d", &i);
    i=i/10;
    i=i%100;
    for(count=2;count<i;count++){
        if(i%count==0){
            printf("Not prime");
            exit(0);
        }
    }
    printf("Prime");
}
