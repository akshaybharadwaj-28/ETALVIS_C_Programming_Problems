//Question:- Get a three digit number from the user, make the one's digit two, then print it.
//Example:- Input:695 Output:692    Input:181 Output:182

//Code

#include <stdio.h>

int main() {
    int x,res=0,num=0;
    printf("Enter Number: ");
    scanf("%d",&x);
    num=x%10;
    num=(num*2)/num;
    x=x/10;
    res=(x*10)+num;
    printf("Result = %d",res);
}
