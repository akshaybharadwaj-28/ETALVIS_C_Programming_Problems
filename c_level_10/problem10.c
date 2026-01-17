//Question: Get a number up to 50 digits and reverse it

//Code

#include <stdio.h>
int main(){
    char a[50],res[50];
    int i,j,count;
    printf("Enter a number: ");
    scanf("%s",a);
    i=0;
    count=0;
    while(a[i]!='\0'){
        count++;
        i++;
    }
    res[0]=0;
    for(i=count-1,j=0;i>=0;i--,j++){
        res[j]=(res[j]*10)+a[i];
    }
    res[j]='\0';
    printf("%s",res);
}
