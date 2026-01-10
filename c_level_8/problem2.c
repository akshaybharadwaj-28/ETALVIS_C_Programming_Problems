//Question: Write a program to print sum of 6 to 1.
//Answer: 21

//Function name : disp_rsum

//Code

#include <stdio.h>
int disp_rsum(int sum);
int main(){
    int y,sum=0;
    y=disp_rsum(sum);
    printf("%d",y);
}
int disp_rsum(int sum){
    int num;
    for(num=6;num>0;num--){
        sum=sum+num;
    }
    return sum;
}
