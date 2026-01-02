//Question: Write a loop program to print two digit odd numbers, whose sum of digits are 7.
/* Answer:  25
            43
            61
*/

//Code

#include <stdio.h>

int main() {
    int i,d0,d1;
    for(i=10;i<100;i++){
        d0=i%10;
        d1=i/10;
        if(i%2==1 && d0+d1==7){
            printf("%d\n", i);
        }
    }
}
