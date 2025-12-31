//Question:- Get a two digit number from the user and check if the digit 0 is less than digit 1. If yes, then print 1; otherwise print 0.
//Example:- Input:54 Output:1    Input:45 Output:0

//Code

#include <stdio.h>

int main() {
    int num,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num%10;
    num=num/10;
    switch (temp<num){
        case 1 : printf("Result is 1");
                  break;
        default : printf("Result is 0");
    }
}
