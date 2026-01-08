//Question: Write a program to print 5 to 1 one by one.
/* Answer:  5
            4
            3
            2
            1
*/

//Function name : disp_descend

//Code

#include <stdio.h>
int disp_descend();
int main(){
    disp_descend();
}

int disp_descend(){
    int i;
    for(i=5;i>0;i--){
        printf("%d\n",i);
    }
}
