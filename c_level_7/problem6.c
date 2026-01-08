//Question: Write a loop program to print two digit odd numbers, below 20.
/* Answer:  11
            13
            15
            17
            19
*/

//Function name : disp_2digit_odd_below20

//Code

#include <stdio.h>
int disp_2digit_odd_below20();
int main(){
    disp_2digit_odd_below20();
}

int disp_2digit_odd_below20(){
    int i;
    for(i=10;i<20;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }
}
