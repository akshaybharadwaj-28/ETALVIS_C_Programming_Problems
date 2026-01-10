//Question: Write a program to get a number from the user and interchange the first and last digits and print the result.
//Input:123456 Output:623451    Input:76895439  Output:96895437    Input:675  Output:576

//Function name : disp_interchange_first_last_digit

//Code

#include <stdio.h>
#include <math.h>
int disp_interchange_first_last_digit(int);
int main(){
    int num,y;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=disp_interchange_first_last_digit(num);
    printf("%d",y);
}

int disp_interchange_first_last_digit(int a){
    int res=0,count=0,temp,digit,multi,firstdigit;
    firstdigit=a%10;
    temp=a;
    while(a!=0){
        digit=a%10;
        count++;
        a/=10;
    }
    multi=pow(10,(count-1));
    res=res+(firstdigit*multi);
    multi=10;
    a=temp/10;
    while(a>10){
        digit=a%10;
        res=res+(digit*multi);
        multi*=10;
        a/=10;
    }
    res=res+a;
    return res;
}
