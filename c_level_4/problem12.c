//Question: Write a program to get a number from user print the sum of all digits. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
//Input: 123456 Output:21    Input:76895439 Output:51    Input:675 Output:18

//Code

#include <stdio.h>

int main() {
    int num,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    loop: if(num!=0){
        temp=num%10;
        num=num/10;
        sum=sum+temp;
        goto loop;
    }
    printf("Sum of digits is %d", sum);
}
