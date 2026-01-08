//Question: Write a program to print total number of single digit prime numbers.
//Answer: 4

//Function name : disp_total_1digit_prime

//Code

#include <stdio.h>
int disp_total_1digit_prime();
int main(){
    int num;
    disp_total_1digit_prime();
}

int disp_total_1digit_prime(){
    int num,i,count=0,flag;
    for(num=1;num<9;num++){
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
    printf("%d",count);
}
