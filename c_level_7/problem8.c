//Question: Write a loop program to print two digit even numbers, whose sum of digits are 6.
/* Answer:  24
            42
            60
*/

//Function name : disp_2digit_even_sum6

//Code

#include <stdio.h>
int disp_2digit_even_sum6();
int main(){
    disp_2digit_even_sum6();
}

int disp_2digit_even_sum6(){
    int i,d0,d1;
    for(i=10;i<100;i++){
        d0=i%10;
        d1=i/10;
        if(i%2==0 && d0+d1==6){
            printf("%d\n",i);
        }
    }
}
