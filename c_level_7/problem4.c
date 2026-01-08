//Question: Write a program to print sum of 6 to 1.
//Answer: 21

//Function name : disp_rsum

//Code

#include <stdio.h>
int disp_rsum();
int main(){
    disp_rsum();
}

int disp_rsum(){
    int i,sum=0;
    for(i=6;i>0;i--){
        sum=sum+i;
    }
    printf("%d",sum);
}
