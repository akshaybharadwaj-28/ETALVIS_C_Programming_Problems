//Question: Write a program to get a number from the user, print the total number of two digit perfect square numbers in the number.
//Input:163496481 Output:4    Input:364925  Output:4

//Function name : disp_two_digit_square

//Code

#include <stdio.h>
int disp_two_digit_square(int);
int main(){
    int num,y;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=disp_two_digit_square(num);
    printf("%d",y);
}

int disp_two_digit_square(int num){
    int i,digit,count=0;
    while(num>10){
        digit=num%100;
        for(i=0;i<=digit;i++){
            if(i*i==digit){
                count++;
            }
        }
        num/=10;
    }
    return count;
}
