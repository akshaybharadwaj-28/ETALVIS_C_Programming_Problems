//Question: Get a string and find the length of he string

//Code

#include <stdio.h>
int main(){
    char a[20];
    int i,count;
    printf("Enter a string: ");
    scanf("%s",a);
    i=0;
    count=0;
    while(a[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
}
