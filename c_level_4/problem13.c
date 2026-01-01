//Question: Write a program to get a number from the user and print the reverse of that number. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
//Input:123456 Output:654321    Input:76895439  Output:93459867    Input:675  Output:576

//Code

#include <stdio.h>
#include <math.h>

int main() {
    int num,res=0,temp,digit,count=0,multi;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    loop1: if(num!=0){
        digit=num%10;
        num=num/10;
        count=count+1;
        goto loop1;
    }
    multi=pow(10,(count-1));
    num=temp;
    loop2: if(num!=0){
        digit=num%10;
        num=num/10;
        res=res+(digit*multi);
        multi=multi/10;
        goto loop2;
    }
    printf("Reversed number is %d\n",res);
}
