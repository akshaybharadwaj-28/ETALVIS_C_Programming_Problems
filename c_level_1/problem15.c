//Question:- Get a four digit number from the user and only reverse the first two digits of the number, then print the number.
//Example:- Input:9561 Output:9516    Input:3859 Output:3895

//Code

#include <stdio.h>

int main() {
    int x,res=0,num1=0,num2=0,num3=0;
    printf("Enter Number: ");
    scanf("%d",&x);
    num1=x%10;
    res=num1*10;
    x=x/10;
    num2=x%10;
    res=res+num2;
    x=x/10;
    num3=x%10;
    res=res+(num3*100);
    x=x/10;
    res=res+(x*1000);
    printf("Result = %d",res);
}
