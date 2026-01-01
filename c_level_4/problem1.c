//Question: Write a program to print 1 to 5 one by one. Use only "if/else" and "goto" statements. Don't use "for" or "while" loops.
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
    loop: if(num<6)
    {   printf("%d\n",num);
        num=num+1;
        goto loop;
    }
}
