#include<stdio.h>
#include<conio.h>
int main(){
   float mat[100][100];
 int i,j,m,n;
 printf("Give the number of elves and the maximum amount of items they can carry:\n");
 scanf("%d %d",&m,&n);
 printf("There are %d elves and the maximum number of items they can carry is %d\n",m,n);
 for(i=0;i<m;i++){
 printf("For the elf %d :",i+1);
   for(j=0;j<n;j++)
   {
  
    scanf("%f",&mat[i][j]);
    printf("\n");
   }
   printf("\n");
    printf("\n");}
    maxrowsum(mat,m,n);
        
return 0;
}

void maxrowsum( float cal[100][100],int m, int n){
float sum[100],max=0;
int poz;
for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
        sum[i]+=cal[i][j];

for(int i=0;i<m;i++)
if(sum[i]>max)
{max=sum[i];
poz=i;}

printf("\n");

printf("The maximum amount of calories is detained by the elf %d and it is %6.2f",poz+1,max);


}