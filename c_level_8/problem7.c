//Question: Write a program to get a number from the user and print the reverse of that number.
//Input:123456 Output:654321    Input:76895439  Output:93459867    Input:675  Output:576

//Function name : disp_reverse_number

//Code

#include <stdio.h>
#include <math.h>
int disp_reverse_number(int);
int main(){
    int y,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=disp_reverse_number(num);
    printf("%d",y);
}

int disp_reverse_number(int a){
    int res=0,digit,multi,count=0,temp;
    temp=a;
    while(a!=0){
        digit=a%10;
        count++;
        a/=10;
    }
    multi=pow(10,(count-1));
    a=temp;
    while(a!=0){
        digit=a%10;
        res=res+(digit*multi);
        multi/=10;
        a/=10;
    }
    return res;
}
