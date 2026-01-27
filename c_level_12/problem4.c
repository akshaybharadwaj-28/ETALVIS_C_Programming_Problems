//Question: Get a string using gets function and count all the words in it.

/* Example: string: Welcome to Etalvis Learning
            Answer: 4  */

//Code

#include <stdio.h>
int countwords(char *a);
int main(){
    char a[50];
    int n=50,result;
    printf("Enter a string: ");
    fgets(a,n,stdin);
    result=countwords(a);
    printf("%d",result);
}

int countwords(char* a){
    int i=0,count=1;
    while(a[i]!='\0'){
        if(a[i]==' '){
            count++;
        }
        i++;
    }
    return count;
}
