//Question: Write a program to print total number of single digit prime numbers.
//Answer: 4

//Function name : disp_total_1digit_prime

//Code

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int disp_total_1digit_prime(int);
int main(){
    int y,count=0;
    y=disp_total_1digit_prime(count);
    printf("%d",y);
}

int disp_total_1digit_prime(int count){
    int num,i,flag;
    for(num=1;num<10;num++){
        flag=0;
        if(num==1){
            flag=1;
        }
        for(i=2;i<num;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
    }
    return count;
}
