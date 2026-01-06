//Question: Write a program to get a number from user print the sum of all digits.
//Input: 123456 Output:21    Input:76895439 Output:51    Input:675 Output:18

//Code

#include <stdio.h>

int main() {
    int i,sum=0,digit;
    printf("Enter a number: ");
    scanf("%d", &i);
    while(i!=0){
        digit=i%10;
        sum=sum+digit;
        i=i/10;
    }
    printf("%d",sum);
}
