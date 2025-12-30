//Question:- Get a number from the user and subtract 5 from that number's ten's position digit is odd, then print the result. Do not use "if".
//Example:- Input:685 Output:685    Input:89172 Output:89167

//Code

#include <stdio.h>

int main() {
    int x,num,temp;
    printf("Enter Number: ");
    scanf("%d",&x);
    temp=x/10;
    num=temp%10;
    num=num%2;
    switch(num){
        case 0 : printf("Result = %d", x);
                 break;
        default : printf("Result = %d", x-5);
    }
}
