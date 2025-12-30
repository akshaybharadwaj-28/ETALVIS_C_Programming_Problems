//Question:- Get a two digit number from the user, make the ten's digit one, then print it.
//Example:- Input:95 Output:15    Input:82 Output:12

//Code

#include <stdio.h>

int main() {
    int x,res=0,num=0;
    printf("Enter Number: ");
    scanf("%d",&x);
    num=x%10;
    x=x/10;
    x=x/x;
    res=(x*10)+num;
    printf("Result = %d",res);
}
