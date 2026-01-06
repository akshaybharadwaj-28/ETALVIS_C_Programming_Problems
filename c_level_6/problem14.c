//Question: Write a program to get a number from the user and interchange the first and last digits and print the result.
//Input:123456 Output:623451    Input:76895439  Output:96895437    Input:675  Output:576

//Code

#include <stdio.h>
#include <math.h>

int main() {
    int i,res=0,count,firstdigit,digit,multi,temp;
    printf("Enter a number: ");
    scanf("%d", &i);
    temp=i;
    firstdigit=i%10;
    count=0;
    while(i!=0){
        digit=i%10;
        count++;
        i=i/10;
    }
    i=temp/10;
    multi=pow(10,(count-1));
    res=res+(firstdigit*multi);
    multi=10;
    while(i>10){
        digit=i%10;
        res=res+(digit*multi);
        i=i/10;
        multi=multi*10;
    }
    res=res+i;
    printf("New number: %d", res);
}
