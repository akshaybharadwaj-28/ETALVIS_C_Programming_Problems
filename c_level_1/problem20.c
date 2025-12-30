//Question:- Get a three digit number from the user, make the ten's digit zero, then print it.
//Example:- Input:695 Output:605    Input:182 Output:102

//Code

#include <stdio.h>

int main() {
    int x,res=0,num1=0,num2=0;
    printf("Enter Number: ");
    scanf("%d",&x);
    num1=x%10;
    x=x/10;
    num2=x%10;
    num2=num2*0;
    x=x/10;
    res=(x*100)+(num2*10)+num1;
    printf("Result = %d",res);
}
