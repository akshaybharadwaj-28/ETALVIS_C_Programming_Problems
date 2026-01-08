//Question: Write a program to get a number from the user and interchange the first and last digits and print the result.
//Input:123456 Output:623451    Input:76895439  Output:96895437    Input:675  Output:576

//Function name : disp_interchange_first_last_digit

//Code

#include <stdio.h>
#include <math.h>
int disp_interchange_first_last_digit();
int main(){
    disp_interchange_first_last_digit();
}

int disp_interchange_first_last_digit(){
    int num,digit,firstdigit,count,multi,temp,res;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    firstdigit=num%10;
    count=0;
    while(num!=0){
        digit=num%10;
        count++;
        num=num/10;
    }
    num=temp/10;
    res=0;
    multi=pow(10,(count-1));
    res=res+(firstdigit*multi);
    multi=10;
    while(num>10){
        digit=num%10;
        res=res+(digit*multi);
        multi=multi*10;
        num=num/10;
    }
    res=res+num;
    printf("%d",res);
}
