//Question: Write a program to get a number from the user and print the reverse of that number.
//Input:123456 Output:654321    Input:76895439  Output:93459867    Input:675  Output:576

//Code

#include <stdio.h>
#include <math.h>

int main() {
    int i,res=0,digit,temp,count,multi;
    printf("Enter a number: ");
    scanf("%d", &i);
    temp=i;
    for(count=0;i!=0;count++){
        digit=i%10;
        i=i/10;
    }
    multi=pow(10, (count-1));
    i=temp;
    for(res=0;i!=0;){
        digit=i%10;
        i=i/10;
        res=res+(digit*multi);
        multi=multi/10;
    }
    printf("Reverse no. is %d", res);
}
