//Question: Write a program to get a number from the user, print the total number of two digit odd numbers in the number.
//Input:12345678 Output:3    Input:987531  Output:4

//Function name : disp_total_2digit_odd

//Code

#include <stdio.h>
int disp_total_2digit_odd(int);
int main(){
    int y,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=disp_total_2digit_odd(num);
    printf("%d",y);
}

int disp_total_2digit_odd(int num){
    int digit,count=0;
    while(num>10){
        digit=num%100;
        if(digit%2==1){
            count++;
        }
        num/=10;
    }
    return count;
}
