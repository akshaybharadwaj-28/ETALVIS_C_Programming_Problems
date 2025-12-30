//Question: Get a number from the user, multiply 3 by that number, and print the result.
//Example: Input:45 Output:135    Input:1200 Output:3600

//Code

#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    x=x*3;
    printf("Result = %d",x);
}
