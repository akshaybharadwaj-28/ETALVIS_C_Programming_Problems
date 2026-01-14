//Question: Get a number as a string and print the integer value of the string

//Code

#include <stdio.h>
int main(){
    char a[10];
    int i,res=0;
    printf("Enter a number: ");
    scanf("%s",a);
    i=0;
    while(a[i]!='\0'){
        res=(res*10)+(a[i]-'0');
        i++;
    }
    printf("%d",res);
}
