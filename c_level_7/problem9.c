//Question: Write a program to print the sum of two digit odd numbers whose one's digit is 5.
//Answer: 495

//Function name : disp_2digit_ones5

//Code

#include <stdio.h>
int disp_2digit_ones5();
int main(){
    disp_2digit_ones5();
}

int disp_2digit_ones5(){
    int i,digit,sum=0;
    for(i=10;i<100;i++){
        digit=i%10;
        if(digit==5){
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
