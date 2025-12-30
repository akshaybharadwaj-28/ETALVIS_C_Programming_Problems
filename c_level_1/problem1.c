//Question:- Get a number from the user, add 2 to that number, and print the result
//Example:- Input:45 Output:47    Input:56789 Output:56791

//Code

#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    x=x+2;
    printf("Result = %d",x);
}
