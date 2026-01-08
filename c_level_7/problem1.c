//Question: Write a program to print 1 to 5 one by one.
/* Answer:  1
            2
            3
            4
            5
*/

//Function name : disp_ascend

//Code

#include <stdio.h>
int disp_ascend();
int main() { 
    disp_ascend();
}

int disp_ascend(){
    int i;
    for(i=1;i<6;i++){
        printf("%d\n",i);
    }
}
