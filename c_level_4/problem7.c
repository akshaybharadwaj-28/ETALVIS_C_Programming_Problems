//Question: Write a program to print odd numbers, who's sum of digits are 7. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
/* Answer:  25
            43
            61
*/

//Code

#include <stdio.h>

int main() {
    int num=10,d0,d1;
    loop: if(num<100)
    {   
        d0=num%10;
        d1=num/10;
        if(num%2==1 && d0+d1==7){
        printf("%d\n",num);
        }
        num=num+1;
        goto loop;
    }
}
