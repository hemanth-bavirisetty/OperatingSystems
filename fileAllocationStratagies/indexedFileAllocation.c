#include<stdio.h>
#include<stdlib.h>
int f[50],i,k,j,inde[50],n,c,count=0,p;
void main() {
    for(i=0;i<50;i++)
        f[i]=0;
    X:
    printf("enter index block:");
    scanf("%d",&p);
    if(f[p]==0){
        f[p]=1;
        printf("enter the no of files on index\t");
        scanf("%d",&n);
    }
    else{
        printf("Block is already allocated");
        goto X;
    }
    for(i=0;i<n;i++)
        scanf("%d",&inde[i]);
    for(i=0;i<n;i++){
        if(f[inde[i]]==1){
            printf("Block is already allocated");
            goto X;
        }
    }
    for(j=0;j<n;j++){
        f[inde[j]]=1;
    }
    printf("\nallocated");
    printf("|N File indexed");
    for(k=0;k<n;k++){
        printf("\n%d->%d:%d",p,inde[k],f[inde[k]]);
    }
    printf("enter 1 to enter more files or 0 to exit\t");
    scanf("%d",&c);
    if(c==1)
    goto X;
    else
    exit(1);

}