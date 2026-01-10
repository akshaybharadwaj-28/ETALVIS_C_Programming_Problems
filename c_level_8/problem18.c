//Question: Write a program to get two numbers from user print the LCM of those numbers.
//Input: 54 72 Output: 216

//Function name : disp_LCM2

//Code

#include <stdio.h>
int disp_LCM2(int, int);
int main(){
    int num1,num2,y;
    printf("Enter 2 nos: ");
    scanf("%d %d", &num1, &num2);
    y=disp_LCM2(num1, num2);
    printf("%d",y);
}

int disp_LCM2(int num1, int num2){
    int lcm,i;
    for(i=num1;i>=num1;i++){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
    }
    return lcm;
}
