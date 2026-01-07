//Question: Write a program to print total number of single digit prime numbers.
//Answer: 4

//Code

#include <stdio.h>
#include <stdlib.h>

int main() { 
    int num=2,i,flag,count=0;
    while(num<10){
        i=2;
        if(num==2){
            flag=0;
        }
        while(i<num){
            flag=0;
            if(num%i==0){
                flag=1;
                break;
            }
            i++;
        }
        if(flag==0){
            count++;
        }
        num++;
    }
    printf("Total no. of single digit prime nos: %d", count);
}
