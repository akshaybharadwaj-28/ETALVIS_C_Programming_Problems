//Question:- Get a number from the user, divide the number by 8, and print the remainder
//Example:- Input:45 Output:5    Input:143 Output:7

//Code

#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    x=x%8;
    printf("Result = %d",x);
}
