//Question: Write a loop program to print two digit odd numbers, below 20.
/* Answer:  11
            13
            15
            17
            19
*/

//Code

#include <stdio.h>

int main() {
    int i;
    i=10;
    while(i<20){
        if(i%2==1){
            printf("%d\n",i);
        }
        i++;
    }
}
