//Question: Write a program to print sum of 6 to 1. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
//Answer: 21

//Code

#include <stdio.h>

int main() {
    int num=6,sum=0;
    loop: if(num>0)
    {   
        sum=sum+num;
        num=num-1;
        goto loop;
    }
    printf("Sum is %d",sum);
}
