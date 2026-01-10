//Question: Write a program to get a number from the user, print the total number digits which are odd in number.
//Input:12345678 Output:4    Input:987531  Output:5

//Function name : disp_total_odd_digits

//Code

#include <stdio.h>
int disp_total_odd_digits(int);
int main(){
    int y,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=disp_total_odd_digits(num);
    printf("%d",y);
}

int disp_total_odd_digits(int num){
    int digit,count=0;
    while(num!=0){
        digit=num%10;
        if(digit%2==1){
            count++;
        }
        num/=10;
    }
    return count;
}
