//Question: Write a program to get a number from the user and print the reverse of that number.
//Input:123456 Output:654321    Input:76895439  Output:93459867    Input:675  Output:576

//Function name : disp_reverse_number

//Code

#include <stdio.h>
#include <math.h>
int disp_reverse_number();
int main(){
    disp_reverse_number();
}

int disp_reverse_number(){
    int num,res,digit,count,multi,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    count=0;
    while(num!=0){
        digit=num%10;
        count++;
        num=num/10;
    }
    multi=pow(10,(count-1));
    num=temp;
    res=0;
    while(num!=0){
        digit=num%10;
        res=res+(digit*multi);
        multi=multi/10;
        num=num/10;
    }
    printf("%d",res);
}
