//Question: Write a program to print biggest 4 digit number which is divisible by 7 and 9.
//Answer: 9954

//Function name : disp_biggest_4digit_div7_9

//Code

#include <stdio.h>
int disp_biggest_4digit_div7_9();
int main(){
    disp_biggest_4digit_div7_9();
}

int disp_biggest_4digit_div7_9(){
    int i,num;
    for(i=1000;i<10000;i++){
        if(i%7==0 && i%9==0){
            num=i;
        }
    }
    printf("%d",num);
}
