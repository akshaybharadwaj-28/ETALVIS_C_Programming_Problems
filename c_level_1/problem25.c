//Question:- Get a three digit number from the user. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum.  If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum, then print the sum, otherwise add the digits of the sum and print the sum. Note:- The result should always be a single digit only. Do not use "if".
//Example:- Input:123 Output:6    Input:149 Output:5 (149:1+4+9=14; 14:1+4=5)    Input:991  Output:1 (991:9+9+1=19; 19:1+9=10; 10:1+0=1)

//Code

#include <stdio.h>

int main() {
    int x,num,sum=0;
    printf("Enter Number: ");
    scanf("%d",&x);
    while(x!=0){
        num=x%10;
        sum=sum+num;
        x=x/10;
    }
    while(sum>=10){
        x=sum;
        sum=0;
        while(x!=0){
            num=x%10;
            sum=sum+num;
            x=x/10;
        }
    }
    printf("Sum is %d",sum);
}
