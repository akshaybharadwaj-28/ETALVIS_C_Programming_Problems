//Question: Write a program to print total number of single digit prime numbers.
//Answer: 4

//Code

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,count,result=0,flag;
    for(i=2;i<10;i++){
        flag=0;
        for(count=2;count<i;count++){
            if(i%count==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            result++;
        }
    }
    printf("Total number of single digit prime numbers are %d",result);
}
