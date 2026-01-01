//Question: Write a program to print sum of two digit odd numbers, whose ten's digit is 7. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
//Answer: 375

//Code

#include <stdio.h>

int main() {
    int num=10,d1,sum=0;
    loop: if(num<100){
        d1=num/10;
        if(num%2==1 && d1==7){
            sum=sum+num;
        }
        num=num+1;
        goto loop;
    }
    printf("Sum is %d",sum);
}
