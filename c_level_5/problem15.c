//Question: Write a program to get a number from the user and if the first digit of the number is even, then print the same number. If the first digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit - MSB).
//Input:654324 Output:654324    Input:76895439  Output:66895439    Input:675  Output:575

//Code

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i,res=0,temp,firstdigit,digit,count,multi;
    printf("Enter a number: ");
    scanf("%d", &i);
    temp=i;
    firstdigit=i%10;
    if(firstdigit%2==0){
        printf("%d\n", i);
        exit(0);
    }
    for(count=0;i!=0;count++){
        digit=i%10;
        i=i/10;
    }
    multi=pow(10,(count-1));
    digit=digit-1;
    res=res+(digit*multi);
    multi=1;
    i=temp;
    for(;i>10;){
        digit=i%10;
        i=i/10;
        res=res+(digit*multi);
        multi=multi*10;
    }
    printf("Number is %d", res);
}
