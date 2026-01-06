//Question: Write a program to get a number from the user and if the first digit of the number is even, then print the same number. If the first digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit - MSB).
//Input:654324 Output:654324    Input:76895439  Output:66895439    Input:675  Output:575

//Code

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,temp,digit,count,multi,res=0;
    printf("Enter a number: ");
    scanf("%d", &i);
    temp=i;
    count=0;
    digit=i%10;
    if(digit%2==0){
        printf("%d",i);
        exit(0);
    }
    while(i!=0){
        digit=i%10;
        count++;
        i=i/10;
    }
    i=temp;
    multi=pow(10,(count-1));
    digit=digit-1;
    res=res+(digit*multi);
    multi=1;
    while(i>10){
        digit=i%10;
        res=res+(digit*multi);
        i=i/10;
        multi=multi*10;
    }
    printf("New number is %d", res);
}
