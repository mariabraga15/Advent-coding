#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int conver(char c){
    int dif,ply;
if((c>='a')&& (c<='z'))
{dif=c-'a';
ply=1+dif;}
else if((c>='A')&& (c<='Z'))
 {dif=c-'A';
 ply=27+dif;}
return ply;
}
char left_side[100],right_side[100];
int main(){
    char string[100][100]; char com[100][100]={0};//2D array for storing strings
	 int i, n,j,mid,k,len,a,sum=0,term,m,z;
   printf("Hello! Today we will reorganize the ruksacks of the elves\n");
	//Get the maximum number of strings
	printf("Enter number of ruksacks:");
	scanf("%d", &n);
    printf("\n");
	//Read the string from user
	printf("Enter items one by one: \n");
	for(i=0; i< n ; i++) {
        printf("Elf number %d:",i+1);
		scanf("%s",string[i]);
	}

	int valid_data=valid(string,n);
        if(valid_data==0) printf("Invalid input!Try another strings only with lowercases and uppercases\n");
     else
         {printf("Now we will split our items in 2 big pockets...\n");
           //we gonna contruct the halves
           for(i=0;i<n;i++){
           printf("For the ruksack %d\n",i+1);
           split(string[i]);
           int z=-1;
          
           
           for(j=0;j<strlen(string[i])/2;j++)
              for(k=strlen(string[i])/2;k<strlen(string[i]);k++)
                 if(string[i][j]==string[i][k])
                  {z++;
                  com[i][z]=string[i][j];
                  } 
            
           }
           for(i=0;i<n;i++)
            printf("%s\n",com[i]);
          
         //lines without duplicates
         for(i=0;i<n;i++){
         
         m=strlen(com[i]);
            for(j=0;j<m-1;j++)
              for(z=j+1;z<m;z++)
                 if(com[i][j]==com[i][z])
                  {  for(int k=z;k<m;k++)
                       com[i][k]=com[i][k+1];
                       m=m-1;
                       z-=1;}

         }
         printf("Compacted array:");
         for(i=0;i<n;i++)
         printf("%s\n",com[i]);
         
         for(i=0;i<n;i++)
           for(j=0;j<strlen(com[i]);j++)
           { term=conver(com[i][j]);
             sum+=term;}

         printf("\n The sum of priorities for the common characters is:%d ",sum);
         }//end else

return 0;

 }

int valid(char string[100][100],int n){
for(int i=0;i<n;i++) 
        for( unsigned int j=0;j<strlen(string[i]);j++)
          if(!(islower(string[i][j])||isupper(string[i][j])) )
           return 0;

return 1;

}//to verify if the strings are valid (a-z or A-Z)

void split(char string[100]){
 int length, mid, i, k;
  /* Find length of string using strlen function */
    length = strlen(string);
  
    mid = length/2;
    /* Copy left half of inputString to leftHalf */
    for(i = 0; i < mid; i++) {
        left_side[i]= string[i];
    }
    left_side[i] = '\0';
  
    /* Copy right half of inputString to rightHalf  */
    for(i = mid, k = 0; i <= length; i++, k++) {
 right_side[k]= string[i];
    }
  
    /* Printing left and right half of string */
    printf("Left half : %s\t",left_side);
    printf("Right half : %s\n",right_side);
 

}

