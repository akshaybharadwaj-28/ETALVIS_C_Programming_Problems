//Question: Write a program to print two digit even numbers, who's sum of digits are 6. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
/* Answer:  24
            42
            60
*/

//Code

#include <stdio.h>

int main() {
    int num=10,d0,d1;
    loop: if(num<100){
        d0=num%10;
        d1=num/10;
        if(num%2==0 && d0+d1==6){
            printf("%d\n",num);
        }
        num=num+1;
        goto loop;
    }
}
