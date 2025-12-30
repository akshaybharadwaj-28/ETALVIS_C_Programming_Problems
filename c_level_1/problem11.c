//Question:- Get a two digit number from the user and print the sum of the digits.
//Example:- Input:56 Output:11    Input:69 Output:15

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
