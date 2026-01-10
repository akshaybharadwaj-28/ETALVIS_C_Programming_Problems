//Question: Write a program to print the sum of two digit odd numbers whose ten's digit is 7.
//Answer: 375

//Function name : disp_2digit_odd_sum_tens7

//Code

#include <stdio.h>
int disp_2digit_odd_sum_tens7(int sum);
int main(){
    int y,sum=0;
    y=disp_2digit_odd_sum_tens7(sum);
    printf("%d",y);
}

int disp_2digit_odd_sum_tens7(int sum){
    int num,d1;
    for(num=10;num<100;num++){
        d1=num/10;
        if(num%2==1 && d1==7){
            sum=sum+num;
        }
    }
    return sum;
}
