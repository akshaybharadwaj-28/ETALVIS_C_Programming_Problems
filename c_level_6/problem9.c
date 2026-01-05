//Question: Write a program to print the sum of two digit odd numbers whose one's digit is 5.
//Answer: 495

//Code

#include <stdio.h>

int main() {
    int i,d0,sum=0;
    i=10;
    while(i<100){
        d0=i%10;
        if(d0==5){
            sum=sum+i;
        }
        i++;
    }
    printf("Sum is %d", sum);
}
