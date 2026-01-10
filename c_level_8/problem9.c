//Question: Write a program to get a number from the user and if the first digit of the number is even, then print the same number. If the first digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit - MSB).
//Input:654324 Output:654324    Input:76895439  Output:66895439    Input:675  Output:575

//Function name : check_last_digit_odd

//Code

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int check_last_digit_odd(int);
int main(){
    int num,y;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=check_last_digit_odd(num);
    printf("%d",y);
}

int check_last_digit_odd(int a){
    int temp,multi,digit,count=0,res=0;
    temp=a;
    digit=a%10;
    if(digit%2==0){
        printf("%d",a);
        exit(0);
    }
    while(a!=0){
        digit=a%10;
        count++;
        a/=10;
    }
    digit=digit-1;
    multi=pow(10,(count-1));
    res=res+(digit*multi);
    multi=1;
    a=temp;
    while(a>10){
        digit=a%10;
        res=res+(digit*multi);
        multi*=10;
        a/=10;
    }
    return res;
}
