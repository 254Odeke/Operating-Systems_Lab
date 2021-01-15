#include<stdio.h>
#include<conio.h>
void main(){
int m=0,m1=0,m2=0,p,count=0,i; 
//clrscr();
printf("\nEnter the memory capacity:"); scanf("%d",&m);
printf("\nEnter the no of processes:"); scanf("%d",&p);
for(i=0;i<p;i++){
printf("\nEnter memory req for process%d: ",i+1); scanf("%d",&m1);
count=count+m1;
if(m1<=m){
if(count==m){
printf("\nThere is no further memory remaining:");
printf("\nThe memory allocated for process%d is: %d ",i+1,m);m2=m-m1;
printf("\nRemaining memory is: %d",m2); m=m2;
}
}
else
{
printf("\nMemory is not allocated for process%d",i+1);
}
printf("\nExternal fragmentation for this process is:%d",m2);
}
getch();
}
