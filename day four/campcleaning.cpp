#include<iostream>
#include<algorithm>
using namespace std;
int max(int a,int b){
  if(a>=b)return a;
  else return b;
}
int min(int a,int b){
  if(a<=b)return a;
  else return b;
}


int main(){
int i,x,y,z,w,n,count=0,total=0;
bool valid=true;
cout<<"Hello!It's another day helping our elves!"<<endl;
cout<<"This time we have to help them cleaning their tasks"<<endl;
cout<<"Give the number of the pairs:";
cin>>n;
for(i=0;i<n&&(valid==true);i++){
  cin>>x>>y>>z>>w;
  
  if((x>y)&&(z>w))
   
  {
    valid=false;
  cout<<"Put another intervals they aren't valid"<<endl;}
  else
  {
   if(max(x,z)<=min(y,w))
   total++;//incremets operlapping intervals

      
  if(((x>=z)&&(x<=w)&&(y>=z)&&(y<=w))||((z>=x)&&(w>=x)&&(z<=y)&&(w<=y)))
    count++;}//increments included intervals
    
    
     
}
if(valid==true)
cout<<"The number of pairs with the entire common interval is: "<<count<<endl;
cout<<"Number of assignments: "<<total;

return 0;
}

//overfuckingoverlapping function