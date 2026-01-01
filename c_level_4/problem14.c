//Question: Write a program to get a number from the user and interchange the first and last digits and print the result. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
//Input:123456 Output:623451    Input:76895439  Output:96895437    Input:675  Output:576

//Code

#include <stdio.h>
#include <math.h>

int main() {
    int num,res=0,temp,digit,count=0,multi,firstdigit;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    firstdigit=num%10;
    loop1: if(num!=0){
        digit=num%10;
        num=num/10;
        count=count+1;
        goto loop1;
    }
    num=temp/10;
    multi=pow(10,(count-1));
    res=res+(firstdigit*multi);
    multi=10;
    loop2: if(num>10){
        digit=num%10;
        num=num/10;
        res=res+(digit*multi);
        multi=multi*10;
        goto loop2;
    }
    res=res+(num*1);
    printf("New number is %d", res);
}
