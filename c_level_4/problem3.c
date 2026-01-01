//Question: Write a program to print sum of 1 to 5. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
//Answer: 15

//Code

#include <stdio.h>

int main() {
    int num=1,sum=0;
    loop: if(num<6)
    {   
        sum=sum+num;
        num=num+1;
        goto loop;
    }
    printf("Sum is %d",sum);
}
