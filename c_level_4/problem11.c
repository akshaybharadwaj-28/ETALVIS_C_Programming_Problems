//Question: Write a program to get a number from user print the total digits in that number. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
//Input: 123456 Output:6    Input:76895439 Output:8    Input:675 Output:3

//Code

#include <stdio.h>

int main() {
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    loop: if(num!=0){
        num=num/10;
        count=count+1;
        goto loop;
    }
    printf("No. of digits is %d",count);
}
