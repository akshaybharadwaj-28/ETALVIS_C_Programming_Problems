//Question: Write a program to print the sum of two digit odd numbers whose one's digit is 5.
//Answer: 495

//Code

#include <stdio.h>

int main() {
    int i,sum=0,d0;
    for(i=10;i<100;i++){
        d0=i%10;
        if(d0==5){
            sum=sum+i;
        }
    }
    printf("Sum is %d", sum);
}
