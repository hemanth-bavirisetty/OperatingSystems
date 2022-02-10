#include<stdio.h>
void main ()
{
    int bt[20],wt[20],tat[20],i,j,t,ct[10],n,max;
    float awt=0,att=0,temp=0;
    printf("enter the number of processes :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the burst time for the process %d :",i);
        scanf("%d",&bt[i]);
        ct[i]=bt[i];
    }
    printf("Enter the size of time slice :");
    scanf("%d",&t);
    max = bt[0];
    for(i=1;i<n;i++) {if(max<bt[i]){max=bt[i];}}
    for(j=0;j<(max/t)+1;j++){
        for(i=0;i<n;i++){
            if(bt[i]!=0){
                if(bt[i]<=t){
                    tat[i]=temp+bt[i];
                    temp=temp+bt[i];
                    bt[i]=0;
                }
                else {
                    bt[i]=bt[i]-t;
                    temp = temp+t;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        wt[i]=tat[i]-ct[i];
        att += tat[i];
        awt += wt[i];
    }
    printf("The average turn around time is %f\n",att);
    printf("the average waiting time is %f\n",awt);
    printf("\tprocess\t\tburst time\twaiting time\tturn around time");
    for(i=0;i<n;i++){printf("\n\t%d\t\t%d\t\t%d\t\t%d",i+1,ct[i],wt[i],tat[i]);}
    printf("\n");
}
