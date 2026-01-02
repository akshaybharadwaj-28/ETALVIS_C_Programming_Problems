//Question: Write a program to print sum of 6 to 1.
//Answer: 21

//Code

#include <stdio.h>

int main() {
    int i,sum=0;
    for(i=6;i>0;i--){
        sum=sum+i;
    }
    printf("Sum is %d", sum);
}
