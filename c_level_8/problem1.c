//Question: Write a program to print sum of 1 to 5.
//Answer: 15

//Function name : disp_sum

//Code

#include <stdio.h>
int disp_sum(int sum);
int main() {
    int y,sum=0;
    y=disp_sum(sum);
    printf("%d",y);
}

int disp_sum(int sum){
    int num;
    for(num=1;num<6;num++){
        sum=sum+num;
    }
    return sum;
}
