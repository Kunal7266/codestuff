#include <iostream>
using namespace std;

int main(){
   #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
   #endif
   
   int row,col;
   cin>>row>>col;

   for(int i=1;i<=row;i++){
      for(int j=1;j<=col;j++){
         if((i==1)||(j==1)||(i==row)||(j==col)){
            cout<<"* ";
         }
         else{
             cout<<"  ";
         }

      }
      cout<<endl;
   }
 
}