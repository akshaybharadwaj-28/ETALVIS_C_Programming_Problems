//Question: Write a program to print odd number between 1 and 9. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
/* Answer:  1
            2
            3
            4
            5
*/

//Code

#include <stdio.h>

int main() {
    int num=1;
    loop: if(num<=9)
    {   
        if(num%2==1){
        printf("%d\n",num);
        }
        num=num+1;
        goto loop;
    }
}
