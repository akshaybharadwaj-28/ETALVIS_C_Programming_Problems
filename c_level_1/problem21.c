//Question:- Get a number from the user and subtract 5 from that number if te number is odd, then print the result. Do not use "if".
//Example:- Input:695 Output:690    Input:182 Output:182

//Code

#include <stdio.h>

int main() {
    int x,num;
    printf("Enter Number: ");
    scanf("%d",&x);
    num=x%2;
    switch(num){
        case 0 : printf("Result = %d", x);
                 break;
        default : printf("Result = %d", x-5);
    }
}
