//Question: Get a number string up to 50 digits and convert it to an integer array

//Code

#include <stdio.h>
int main(){
    char a[50];
    int i,temp;
    printf("Enter a number: ");
    scanf("%s",a);
    i=0;
    while(a[i]!='\0'){
        a[i]=a[i]-'0';
        i++;
    }
    temp=i;
    for(i=0;i<temp;i++){
        printf("%d",a[i]);
    }
}
