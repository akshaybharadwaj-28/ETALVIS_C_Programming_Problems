//Question: Write a program to print the sum of two digit odd numbers whose ten's digit is 7.
//Answer: 375

//Code

#include <stdio.h>

int main() {
    int i,d1,sum=0;
    i=10;
    while(i<100){
        d1=i/10;
        if(i%2==1 && d1==7){
            sum=sum+i;
        }
        i++;
    }
    printf("Sum is %d",sum);
}
