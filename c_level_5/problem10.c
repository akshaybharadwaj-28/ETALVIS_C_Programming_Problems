//Question: Write a program to print the sum of two digit odd numbers whose ten's digit is 7.
//Answer: 375

//Code

#include <stdio.h>

int main() {
    int i,sum=0,d1;
    for(i=10;i<100;i++){
        d1=i/10;
        if(i%2==1 && d1==7){
            sum=sum+i;
        }
    }
    printf("Sum is %d", sum);
}
