//Question: Write a program to print 5 to 1 one by one.
/* Answer:  5
            4
            3
            2
            1
*/

//Code

#include <stdio.h>

int main() {
    int i=5;
    while(i>0){
        printf("%d\n", i);
        i--;
    }
}
