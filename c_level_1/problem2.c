//Question:- Get a number from the user, subtract 5 from that number, and print the result
//Example:- Input: 45 Output:40    Input:56789 Output:56784

//Code

#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    x=x-5;
    printf("Result = %d",x);
}
