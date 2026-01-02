//Question: Write a program to print sum of 1 to 5.
//Answer: 15

//Code

#include <stdio.h>

int main() {
    int i,sum=0;
    for(i=1;i<=5;i++){
        sum=sum+i;
    }
    printf("Sum is %d", sum);
}
