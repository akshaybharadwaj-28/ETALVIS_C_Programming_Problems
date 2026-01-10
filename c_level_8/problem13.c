//Question: Write a program to get a number from the user, print the total number of single digit perfect square numbers in the number.
//Input:123456789 Output:3    Input:987531  Output:2

//Function name : disp_single_digit_square

//Code

#include <stdio.h>
int disp_single_digit_square(int);
int main(){
    int y,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=disp_single_digit_square(num);
    printf("%d",y);
}

int disp_single_digit_square(int num){
    int i,digit,count=0;
    while(num!=0){
        digit=num%10;
        for(i=0;i<=digit;i++){
            if(i*i==digit){
                count++;
            }
        }
        num/=10;
    }
    return count;
}
