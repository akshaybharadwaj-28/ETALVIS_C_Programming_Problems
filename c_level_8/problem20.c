//Question: Write a program to get two numbers from user print the HCF of those numbers.
//Input: 36 48 Output: 12 

//Function name : disp_count_HCF2

//Code

#include <stdio.h>
int disp_count_HCF2(int, int);
int main(){
    int num1,num2,y;
    printf("Enter 2 nos: ");
    scanf("%d %d", &num1, &num2);
    y=disp_count_HCF2(num1, num2);
    printf("%d",y);
}

int disp_count_HCF2(int num1, int num2){
    int hcf,i;
    for(i=num1;i<=num1;i--){
        if(num1%i==0 && num2%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
