//Question:- Get a two digit number from the user and print the reverse of the number.
//Example:- Input:56 Output:65    Input:59 Output:95

//Code

#include <stdio.h>

int main() {
    int x,res=0,num=0;
    printf("Enter Number: ");
    scanf("%d",&x);
    num=x%10;
    x=x/10;
    res=(num*10)+x;
    printf("Result = %d",res);
}
