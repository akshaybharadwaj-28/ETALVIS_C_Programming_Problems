//Question:- Get a three digit number from the user and print the sum of the digits.
//Example:- Input:562 Output:13    Input:469 Output:19

//Code

#include <stdio.h>

int main() {
    int x,sum=0,num=0;
    printf("Enter Number: ");
    scanf("%d",&x);
    while(x!=0){
    num=x%10;
    x=x/10;
    sum=sum+num;
    }
    printf("Result = %d",sum);
}
