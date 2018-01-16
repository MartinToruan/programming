#include <iostream>

using namespace std;

int fac(int n){
   if(n == 1) return 1;

   int temp=n;
   if(n%2 == 0) temp = n/2;
   return temp*fac(n-1);
}

int
main(){
   int n;

   cin >> n;
   cout << fac(n) << endl;

   return 0;
}
