//Question: Write a loop program to print odd number between 1 and 9.
/* Answer:  1
            3
            5
            7
            9
*/

//Function name : disp_odd

//Code

#include <stdio.h>
int disp_odd();
int main(){
    disp_odd();
}

int disp_odd(){
    int i;
    for(i=1;i<10;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }
}
