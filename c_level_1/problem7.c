//Question:- Get a two digit number from the user and print the ten's digit.
//Example:- Input:45 Output:5    Input:56 Output:6

//Code

#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    x=x/10;
    printf("Result = %d",x);
}
