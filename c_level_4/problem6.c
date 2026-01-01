//Question: Write a program to print the two digit odd numbers, below 20. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
/* Answer:  11
            13
            15
            17
            19
*/

//Code

#include <stdio.h>

int main() {
    int num=10;
    loop: if(num<20)
    {   
        if(num%2==1){
        printf("%d\n",num);
        }
        num=num+1;
        goto loop;
    }
}
