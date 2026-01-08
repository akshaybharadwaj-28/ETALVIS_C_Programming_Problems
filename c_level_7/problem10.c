//Question: Write a program to print the sum of two digit odd numbers whose ten's digit is 7.
//Answer: 375

//Function name : disp_2digit_odd_sum_tens7

//Code

#include <stdio.h>
int disp_2digit_odd_sum_tens7();
int main(){
    disp_2digit_odd_sum_tens7();
}

int disp_2digit_odd_sum_tens7(){
    int i,sum=0,digit;
    for(i=10;i<100;i++){
        digit=i/10;
        if(i%2==1 && digit==7){
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
