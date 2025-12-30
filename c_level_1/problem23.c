//Question:- Get a two digit number from the user and subtract 5 from that number if the sum of the digits of the number is odd, then print the result. Do not use "if".
//Example:- Input:685 Output:685    Input:89172 Output:89167

//Code

#include <stdio.h>

int main() {
    int x,num,temp,sum=0;
    printf("Enter Number: ");
    scanf("%d",&x);
    num=x%10;
    temp=x/10;
    sum=num+temp;
    num=sum%2;
    switch (num){
        case 0 : printf("Result = %d",x);
                 break;
        default : printf("Result = %d",x-5);
    }
}
