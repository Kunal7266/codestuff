#include <iostream>
using namespace std;

int main(){
   int arr[3]={10,20,30};
   int*ptr= arr;

   /*for(int i=0;i<3;i++){
      cout<<*ptr<<endl;
      ptr++;
   }*/

   for(int i=0;i<3;i++){
      cout<<*(arr+i)<<endl;
      ptr++;
   }
   return 0;
}