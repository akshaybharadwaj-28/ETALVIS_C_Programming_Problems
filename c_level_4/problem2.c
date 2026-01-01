//Question: Write a program to print 5 to 1 one by one. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
/* Answer:  5
            4
            3
            2
            1
*/

//Code

#include <stdio.h>

int main() {
    int num=5;
    loop: if(num>0)
    {   printf("%d\n",num);
        num=num-1;
        goto loop;
    }
}
