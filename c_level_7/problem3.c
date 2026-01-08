//Question: Write a program to print sum of 1 to 5.
//Answer: 15

//Function name : disp_sum

//Code

#include <stdio.h>
int disp_add();
int main(){
    disp_add();
}

int disp_add(){
    int i,sum=0;
    for(i=1;i<6;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}
