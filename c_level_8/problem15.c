//Question: Write a program to get a number from the user, print the total number of single digit prime numbers in the number.
//Input:163496481 Output:1    Input:364925  Output:3

//Function name : disp_single_digit_prime

//Code

#include <stdio.h>
int disp_single_digit_prime(int);
int main(){
    int y,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=disp_single_digit_prime(num);
    printf("%d",y);
}

int disp_single_digit_prime(int num){
    int count=0,digit,i,flag;
    while(num!=0){
        digit=num%10;
        for(i=2;i<digit;i++){
            flag=0;
            if(digit==1){
                flag=1;
            }
            if(digit%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
        num/=10;
    }
    return count;
}
