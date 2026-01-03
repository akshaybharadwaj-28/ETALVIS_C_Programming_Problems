//Question: Write a program to print biggest 4 digit number which is divisible by 7 and 9.
//Answer: 9954

//Code

#include <stdio.h>

int main() {
    int i,num;
    for(i=1000;i<10000;i++){
        if(i%7==0 && i%9==0){
            num=i;
        }
    }
    printf("Biggest 4 digit number divisible by 7 and 9 is %d", num);
}
