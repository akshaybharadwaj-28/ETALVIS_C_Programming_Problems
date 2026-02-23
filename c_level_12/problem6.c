// Question: Write a C program that simulates a calculator for large numbers (50 digits).
// Supported commands: Addition, Subtraction, Multiplication, and Division.
// Constraints: Use functions, minimize execution speed, and reject invalid inputs.

//Code

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void addition(int* num1,int* num2);
void subtraction(int* num1,int* num2);
void multiplication(int* num1,int* num2);
void division(int* num1,int* num2);
int main(){
    char sign,inputcommand[105];
    int i,j,signcount,num1[55],num2[55];
    while(1){
        printf("Calc> ");
        if(scanf("%s",inputcommand)==EOF){
            break;
        }
        if(strcmp(inputcommand,"Exit")==0){
            break;
        }
        int len=strlen(inputcommand);
        int opIndex=-1,isValid=1;
        signcount=0;
        for(i=0;i<len;i++){
            if(inputcommand[i]=='+' || inputcommand[i]=='-' || inputcommand[i]=='*' || inputcommand[i]=='/'){
                sign=inputcommand[i];
                signcount++;
                opIndex=i;
            }else if(inputcommand[i]<'0'||inputcommand[i]>'9'){
                isValid=0;
            }
        }
        if(signcount!=1 || opIndex==0 || opIndex==len-1 || !isValid){
            printf("Invalid input. Please try again.\n");
            continue;
        }
        for(j=1;j<=opIndex;j++){
            num1[j]=inputcommand[j-1]-'0';
        }
        num1[j]=-1;
        int k=1;
        for(j=opIndex+1;j<len;j++){
            num2[k++]=inputcommand[j]-'0';
        }
        num2[k]=-1;
        num1[0]=0;
        num2[0]=0;
        if(sign=='+'){
            addition(num1,num2);
        }
        else if(sign=='-'){
            subtraction(num1,num2);
        }
        else if(sign=='*'){
            multiplication(num1,num2);
        }
        else if(sign=='/'){
            division(num1,num2);
        }
        printf("\n");
    }
    return 0;
}

void addition(int* num1,int* num2){
    int i,j,sum[105],m,n,k,temp,carry=0;
    i=1;
    while(num1[i]!=-1){
        i++;
    }
    j=1;
    while(num2[j]!=-1){
        j++;
    }
    m=i-1;
    n=j-1;
    if(m>n){
        k=m;
        for(i=n;i>=0;i--){
            num2[i+m-n]=num2[i];
        }
        for(i=1;i<=m-n;i++){
            num2[i]=0;
        }
    }
    else if(m<n){
        k=n;
        for(i=m;i>=0;i--){
            num1[i+n-m]=num1[i];
        }
        for(i=1;i<=n-m;i++){
            num1[i]=0;
        }
    }
    else{
        k=m;
    }
    for(i=n;i>=0;i--){
        sum[i]=num1[i]+num2[i]+carry;
        carry=0;
        if(sum[i]>9){
            temp=sum[i];
            sum[i]=temp%10;
            carry=temp/10;
        }
    }
    if(sum[0]){
        for(i=0;i<=k;i++){
            printf("%d",sum[i]);
        }
        printf(" - Addition");
    }
    else{
        for(i=1;i<=k;i++){
            printf("%d",sum[i]);
        }
        printf(" - Addition");
    }
}

void subtraction(int* num1,int* num2){
    int i,j,k,m,n,x,diff[105],temp,flag,borrow=0;
    i=1;
    while(num1[i]!=-1){
        i++;
    }
    j=1;
    while(num2[j]!=-1){
        j++;
    }
    m=i-1;
    n=j-1;
    if(m>n){
        k=m;
        for(i=n;i>=0;i--){
            num2[i+m-n]=num2[i];
        }
        for(i=1;i<=m-n;i++){
            num2[i]=0;
        }
    }
    else if(m<n){
        k=n;
        for(i=m;i>=0;i--){
            num1[i+n-m]=num1[i];
        }
        for(i=1;i<=n-m;i++){
            num1[i]=0;
        }
        printf("-");
    }
    else{
        k=m;
        for(i=1;i<=k;i++){
            if(num1[i]>num2[i]){
                flag=1;
                break;
            }
            else if(num1[i]<num2[i]){
                flag=2;
                printf("-");
                break;
            }
            else{
                flag=0;
            }
        }
    }
    x=0;
    if(m>n){
        for(i=k;i>=0;i--){
            if(num1[i]<num2[i]){
                num1[i]=num1[i]+10;
                num1[i-1]=num1[i-1]-1;
                diff[i]=num1[i]-num2[i];
            }
            else if(num1[i]>=num2[i]){
                diff[i]=num1[i]-num2[i];
            }
        }
    }
    else if(m<n){
        for(i=k;i>=0;i--){
            if(num2[i]<num1[i]){
                num2[i]=num2[i]+10;
                num2[i-1]=num2[i-1]-1;
                diff[i]=num2[i]-num1[i];
            }
            else if(num2[i]>=num1[i]){
                diff[i]=num2[i]-num1[i];
            }
        }
    }
    else{
        if(flag==1){
            for(i=k;i>=0;i--){
                if(num1[i]<num2[i]){
                    num1[i]=num1[i]+10;
                    num1[i-1]=num1[i-1]-1;
                    diff[i]=num1[i]-num2[i];
                }
                else if(num1[i]>=num2[i]){
                    diff[i]=num1[i]-num2[i];
                }
            }
        }
        if(flag==2){
            for(i=k;i>=0;i--){
                if(num2[i]<num1[i]){
                    num2[i]=num2[i]+10;
                    num2[i-1]=num2[i-1]-1;
                    diff[i]=num2[i]-num1[i];
                }
                else if(num2[i]>=num1[i]){
                    diff[i]=num2[i]-num1[i];
                }
            }
        }
        if(flag==0){
            for(i=k;i>=0;i--){
                diff[i]=num1[i]-num2[i];
            }
        }
    }
    flag=0;
    int isallzero=1;
    for(i=1;i<=k;i++){
        if(diff[i]!=0){
            flag=1;
            isallzero=0;
            printf("%d",diff[i]);
        }
        if(diff[i]==0 && isallzero==0){
            printf("%d",diff[i]);
        }
    }
    if(flag==0 && isallzero==1){
        printf("0");
        //printf(" - Subtraction");
    }
    printf(" - Subtraction");
}

void multiplication(int* num1,int* num2){
    int m,n,o=1,i,j,x,temp,carry=0,p[105],flag;
    for(m=0;num1[m]!=-1;m++){
        
    }
    for(n=0;num2[n]!=-1;n++){
        
    }
    int r=0,c=0,arr[m+n][n],tra[n][m+n];
    for(i=m+1;i<50;i++){
        num1[i]=0;
    }
    for(j=n+1;j<50;j++){
        num2[j]=0;
    }
    for(x=0;x<100;x++){
        p[x]=0;
    }
    x=m+n-o;
    for(j=n-1;j>=0;j--){
        for(i=m-1;i>=0;i--,x--){
            p[x]=(num1[i]*num2[j])+carry;
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
    flag=0;
    for(i=0;i<r;i++){
        if(p[i]!=0){
            flag=i;
            break;
        }
    }
    if(flag!=0){
        for(i=flag;i<r;i++){
            printf("%d",p[i]);
        }
        
    }
    else{
        printf("0");
    }
    printf(" - Multiplication");
}

void division(int *num1,int *num2)
{
    int dividend[300],divisor[300];
    int rem[300]={0},temp[300],quo[300];
    int i,j;
    int m=0;
    for(i=1;num1[i]!=-1;i++){
        dividend[i]=num1[i];
    }
    m=i-1;
    int n=0;
    for(i=1;num2[i]!=-1;i++){
        divisor[i]=num2[i];
    }
    n=i-1;
    int zero=1;
    for(i=1;i<=n;i++){
        if(divisor[i]!=0)zero=0;
    }
    if(zero){
        printf("Undefined\n");
        return;
    }
    int rsize=0;
    int qpos=1;
    int dpos=1;
    while(dpos<=m){
        rem[++rsize]=dividend[dpos++];
        while(rsize>1&&rem[1]==0){
            for(i=1;i<rsize;i++){
                rem[i]=rem[i+1];
            }
            rsize--;
        }
        int qdigit=0;
        for(int k=9;k>=1;k--){
            int carry=0;
            int tsize=n;
            for(i=n;i>=1;i--){
                int val=divisor[i]*k+carry;
                temp[i]=val%10;
                carry=val/10;
            }
            if(carry){
                for(i=tsize;i>=1;i--){
                    temp[i+1]=temp[i];
                }
                temp[1]=carry;
                tsize++;
            }
            int ok=0;
            if(tsize<rsize){
                ok=1;
            }
            else if(tsize==rsize){
                ok=1;
                for(i=1;i<=rsize;i++)
                {
                    if(temp[i]<rem[i]){ok=1;break;}
                    if(temp[i]>rem[i]){ok=0;break;}
                }
            }
            if(ok){
                qdigit=k;
                int borrow=0;
                for(i=0;i<tsize;i++){
                    int r_idx=rsize-i;
                    int t_idx=tsize-i;
                    rem[r_idx]=rem[r_idx]-temp[t_idx]-borrow;
                    if(rem[r_idx]<0){
                        rem[r_idx]+=10;
                        borrow=1;
                    }
                    else 
                    {
                        borrow=0;
                    }
                }
                for(i=rsize-tsize;i>=1;i--){
                    rem[i]-=borrow;
                    if(rem[i]<0)
                    {
                        rem[i]+=10;
                        borrow=1;
                    }
                    else 
                    {
                        borrow=0;
                    }
                }
                break;
            }
        }
        quo[qpos++]=qdigit;
        while(rsize>1&&rem[1]==0){
            for(i=1;i<rsize;i++){
                rem[i]=rem[i+1];
            }
            rsize--;
        }
    }
    int start=1;
    while(start<qpos-1&&quo[start]==0){
        start++;
    }
    printf("Division\n");
    printf("Quotient: ");
    for(i=start;i<qpos;i++)printf("%d",quo[i]);
    printf("\nRemainder: ");
    if(rsize==1&&rem[1]==0)printf("0");
    else
    {
        for(i=1;i<=rsize;i++)printf("%d",rem[i]);
    }
    printf("\n");
}
