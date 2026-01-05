//Question: Write a program to print sum of 1 to 5.
//Answer: 15

//Code

#include <stdio.h>

int main() {
    int i,sum=0;
    i=1;
    while(i<6){
        sum=sum+i;
        i++;
    }
    printf("Sum is %d", sum);
}
