//Question: Write a program to print sum of 6 to 1.
//Answer: 21

//Code

#include <stdio.h>

int main() {
    int i,sum=0;
    i=6;
    while(i>0){
        sum=sum+i;
        i--;
    }
    printf("Sum is %d",sum);
}
