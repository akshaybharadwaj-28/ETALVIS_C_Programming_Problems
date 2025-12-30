//Question: Get a number from the user, divide the number by 6, and print the result.
//Example: Input:45 Output:7    Input:143 Output:23

//Code

#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    x=x/6;
    printf("Result = %d",x);
}
