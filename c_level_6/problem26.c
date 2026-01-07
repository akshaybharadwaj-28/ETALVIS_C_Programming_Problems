//Question: Write a program to print biggest 4 digit number which is divisible by 7 and 9.
//Answer: 9954

//Code

#include <stdio.h>

int main() { 
    int num,i;
    num=1000;
    while(num<10000){
        if(num%7==0 && num%9==0){
            i=num;
        }
        num++;
    }
    printf("Biggest 4 digit no. divisible by 7 and 9 is %d", i);
}
