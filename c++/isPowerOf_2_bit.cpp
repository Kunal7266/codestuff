#include <iostream>
using namespace std;
bool isPowerOf_2(int n){
   return (n && !(n & n-1));
}
int main(){
   cout<<isPowerOf_2(32)<<endl;
   return 0;
}