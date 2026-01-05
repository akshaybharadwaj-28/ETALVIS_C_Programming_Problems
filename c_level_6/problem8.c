//Question: Write a loop program to print two digit even numbers, whose sum of digits are 6.
/* Answer:  24
            42
            60
*/

//Code

#include <stdio.h>

int main() {
    int i,d0,d1;
    i=10;
    while(i<100){
        d0=i%10;
        d1=i/10;
        if(i%2==0 && d0+d1==6){
            printf("%d\n",i);
        }
        i++;
    }
}
