//Question: Write a program to get a number from the user and if the first digit of the number is even, then print the same number. If the first digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit - MSB).
//Input:654324 Output:654324    Input:76895439  Output:66895439    Input:675  Output:575

//Function name : check_last_digit_odd

//Code

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int check_last_digit_odd();
int main(){
    check_last_digit_odd();
}

int check_last_digit_odd(){
    int num,digit,res=0,count=0,temp,multi;
    printf("Enter a number: ");
    scanf("%d", &num);
    digit=num%10;
    if(digit%2==0){
        printf("%d",num);
        exit(0);
    }
    temp=num;
    while(num!=0){
        digit=num%10;
        count++;
        num=num/10;
    }
    multi=pow(10,(count-1));
    digit=digit-1;
    res=res+(digit*multi);
    num=temp;
    multi=1;
    while(num>10){
        digit=num%10;
        res=res+(digit*multi);
        num=num/10;
        multi=multi*10;
    }
    printf("%d",res);
}
