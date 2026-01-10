//Question: Write a program to print the sum of two digit odd numbers whose one's digit is 5.
//Answer: 495

//Function name : disp_2digit_ones5

//Code

#include <stdio.h>
int disp_2digit_ones5(int sum);
int main(){
    int y,sum=0;
    y=disp_2digit_ones5(sum);
    printf("%d",y);
}

int disp_2digit_ones5(int sum){
    int num,d0;
    for(num=10;num<100;num++){
        d0=num%10;
        if(d0==5){
            sum=sum+num;
        }
    }
    return sum;
}
