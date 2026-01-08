//Question: Write a program to get three numbers from user print the LCM of those numbers.
//Input: 8 12 18 Output: 72 

//Function name : disp_LCM3

//Code

#include <stdio.h>
int disp_LCM3(int num1, int num2, int num3);
int main(){
    int num1,num2,num3;
    printf("Enter 3 nos: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    disp_LCM3(num1, num2, num3);
}

int disp_LCM3(int num1, int num2, int num3){
    int i,lcm;
    for(i=num1;i>=num1;i++){
        if(i%num1==0 && i%num2==0 && i%num3==0){
            lcm=i;
            break;
        }
    }
    printf("%d",lcm);
}
