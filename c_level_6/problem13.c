//Question: Write a program to get a number from the user and print the reverse of that number.
//Input:123456 Output:654321    Input:76895439  Output:93459867    Input:675  Output:576

//Code

#include <stdio.h>
#include <math.h>

int main() {
    int i,digit,res=0,multi,count,temp;
    printf("Enter a number: ");
    scanf("%d", &i);
    temp=i;
    count=0;
    while(i!=0){
        digit=i%10;
        count++;
        i=i/10;
    }
    i=temp;
    multi=pow(10,(count-1));
    while(i!=0){
        digit=i%10;
        res=res+(digit*multi);
        multi=multi/10;
        i=i/10;
    }
    printf("Reversed number: %d",res);
}
