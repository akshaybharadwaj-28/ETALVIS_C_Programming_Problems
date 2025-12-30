//Question:- Get a three digit number from the user and print the hundred's digit.
//Example:- Input:456 Output:4    Input:569 Output:5

//Code

#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    x=x/100;
    printf("Result = %d",x);
}
