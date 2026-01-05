//Question: Write a loop program to print odd number between 1 and 9.
/* Answer:  1
            3
            5
            7
            9
*/

//Code

#include <stdio.h>

int main() {
    int i;
    i=0;
    while(i<10){
        if(i%2==1){
            printf("%d\n",i);
        }
        i++;
    }
}
