//Question: Write a program to get a number from the user and if the first digit of the number is even, then print the same number. If the first digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit - MSB). Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
//Input:654324 Output:654324    Input:76895439  Output:66895439    Input:675  Output:575

//Code

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num,digit,firstdigit,count=0,multi,temp,res=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    firstdigit=num%10;
    if(firstdigit%2==0){
        printf("Number is %d", num);
        exit(0);
    }
    loop: if(num!=0){
        digit=num%10;
        num=num/10;
        count=count+1;
        goto loop;
    }
    digit=digit-1;
    num=temp;
    multi=pow(10,(count-1));
    res=res+(digit*multi);
    multi=1;
    loop2: if(num>10){
        digit=num%10;
        num=num/10;
        res=res+(digit*multi);
        multi=multi*10;
        goto loop2;
    }
    printf("New number is %d", res);
}
