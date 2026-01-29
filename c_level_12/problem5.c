//Question: Write a program to multiply up to 50-digit numbers.

//Code

#include <stdio.h>
void getnumbers(int* a, int* b);
void multiplynumbers(int* a, int* b, int* p);
int main(){
    int a[50],b[50],p[100];
    getnumbers(a,b);
    multiplynumbers(a,b,p);
}

void getnumbers(int* a, int* b){
    int m,n,i,j;
    printf("Enter the no. of elements in 1st array: ");
    scanf("%d",&m);
    printf("Enter the no. of elements in 2nd array: ");
    scanf("%d",&n);
    printf("Enter the digits of 1st number: ");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the digits of 2nd number: ");
    for(j=0;j<n;j++){
        scanf("%d",&b[j]);
    }
    a[i]=-1;
    b[j]=-1;
}

void multiplynumbers(int* a, int* b, int* p){
    int m,n,o=1,i,j,x,temp,carry=0;
    for(m=0;a[m]!=-1;m++){
        
    }
    for(n=0;b[n]!=-1;n++){
        
    }
    int r=0,c=0,arr[m+n][n],tra[n][m+n];
    for(i=m+1;i<50;i++){
        a[i]=0;
    }
    for(j=n+1;j<50;j++){
        b[j]=0;
    }
    for(x=0;x<100;x++){
        p[x]=0;
    }
    x=m+n-o;
    for(j=n-1;j>=0;j--){
        for(i=m-1;i>=0;i--,x--){
            p[x]=(a[i]*b[j])+carry;
            carry=0;
            temp=p[x];
            if(i==0){
                p[x-1]=temp/10;
                p[x]=temp%10;
            }
            if(p[x]>9){
                p[x]=temp%10;
                carry=temp/10;
            }
        }
        for(x=0,r=0;x<m+n;x++,r++){
            arr[r][c]=p[x];
        }
        for(x=0;x<m+n;x++){
            p[x]=0;
        }
        c++;
        o++;
        x=m+n-o;
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            tra[i][j]=arr[j][i];
        }
    }
    for(j=r;j>=0;j--){
        for(i=0;i<c;i++){
            p[j]=p[j]+tra[i][j]+carry;
            carry=0;
        }
        if(p[j]>9){
            temp=p[j];
            p[j]=temp%10;
            carry=temp/10;
        }
    }
    for(i=0;i<r;i++){
        printf("%d ",p[i]);
    }
}
