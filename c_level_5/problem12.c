//Question: Write a program to get a number from user print the sum of all digits.
//Input: 123456 Output:21    Input:76895439 Output:51    Input:675 Output:18

//Code

#include <stdio.h>

int main() {
    int i,sum,temp;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(sum=0;i!=0;sum=sum+temp){
        temp=i%10;
        i=i/10;
    }
    printf("Sum is %d", sum);
}
