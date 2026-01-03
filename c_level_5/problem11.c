//Question: Write a program to get a number from user print the total number of digits in that number.
//Input: 123456 Output:6    Input:76895439 Output:8    Input:675 Output:3

//Code

#include <stdio.h>

int main() {
    int i,count,temp;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(count=0;i!=0;count++){
        temp=i%10;
        i=i/10;
    }
    printf("No. of digits: %d", count);
}
