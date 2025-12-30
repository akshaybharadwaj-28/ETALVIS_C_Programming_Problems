//Question:- Get a three digit number from the user and subtract 5 from that number if one's digit number and hundred's digit number are odd, then print the result. Do not use "if".
//Example:- Input:695 Output:605    Input:182 Output:102

//Code

#include <stdio.h>

int main() {
    int x,num,temp;
    printf("Enter Number: ");
    scanf("%d",&x);
    num=x%10;
    temp=x/100;
    num=num%2;
    temp=temp%2;
    switch(num & temp){
        case 0 : printf("Result = %d",x);
                 break;
        default: printf("Result = %d",x-5);
    }
}
