//Question:- Get a three digit number from the user and print the ten's digit.
//Example:- Input:456 Output:5    Input:569 Output:6

//Code

#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    x=x/10;
    x=x%10;
    printf("Result = %d",x);
}
