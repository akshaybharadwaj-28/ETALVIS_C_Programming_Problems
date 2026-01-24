//Question: Get two numbers of upto 50 digits and perform addition and print the result.

//Code

#include <stdio.h>
void getnumbers(int* a, int* b);
void addnumbers(int* a, int* b, int* c);
int main(){
    int a[50],b[50],c[51];
    getnumbers(a,b);
    addnumbers(a,b,c);
}

void getnumbers(int* a, int* b){
    int m,n;
    printf("Enter the no. of digits for 1st array: ");
    scanf("%d",&m);
    printf("Enter the no. of digits for 2nd array: ");
    scanf("%d",&n);
    printf("Enter elements for 1st array: ");
    for(int i=1;i<=m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements for 2nd array: ");
    for(int i=1;i<=n;i++){
        scanf("%d",&b[i]);
    }
    a[0]=0;
    b[0]=0;
    a[m+1]=-1;
    b[n+1]=-1;
}

void addnumbers(int* a, int* b, int* c){
    int i,j,size1,size2,temp,carry=0;
    i=1;
    while(a[i]!=-1){
        i++;
    }
    size1=i-1;
    j=1;
    while(b[j]!=-1){
        j++;
    }
    size2=j-1;
    if(size1>=size2){
        for(i=size1,j=size2;i>=size2;i--,j--){
            b[i]=b[j];
        }
        for(i=1;i<=size1-size2;i++){
            b[i]=0;
        }
        for(i=size1;i>=0;i--){
            c[i]=a[i]+b[i]+carry;
            carry=0;
            if(c[i]>9){
                temp=c[i];
                c[i]=temp%10;
                carry=temp/10;
            }
        }
        if(c[0]){
            for(i=0;i<=size1;i++){
            printf("%d ",c[i]);
        }
        }
        else{
            for(i=1;i<=size1;i++){
                printf("%d ",c[i]);
            }
        }
    }
    if(size1<size2){
        for(i=size2,j=size1;i>=size1;i--,j--){
            a[i]=a[j];
        }
        for(i=1;i<=size2-size1;i++){
            a[i]=0;
        }
        for(i=size2;i>=0;i--){
            c[i]=a[i]+b[i]+carry;
            carry=0;
            if(c[i]>9){
                temp=c[i];
                c[i]=temp%10;
                carry=temp/10;
            }
        }
        if(c[0]){
            for(i=0;i<=size2;i++){
            printf("%d ",c[i]);
        }
        }
        else{
            for(i=1;i<=size2;i++){
                printf("%d ",c[i]);
            }
        }
    }
}
