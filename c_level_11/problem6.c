//Question: Write a function to copy a string to another.

//Code

#include <stdio.h>
void strcopy(char* a, char* b);
int main(){
    char a[20],b[20];
    printf("Enter a string: ");
    scanf("%s",a);
    strcopy(a,b);
    printf("%s",b);
}

void strcopy(char* a, char* b){
    int i=0;
    while(a[i]!='\0'){
        b[i]=a[i];
        i++;
    }
}
