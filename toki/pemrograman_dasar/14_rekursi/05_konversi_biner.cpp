#include <iostream>
#include <string>

using namespace std;

void binary(int n, string x){
   if(n == 1){
      x.insert(0, "1");
      cout << x << endl;
      return;
   }

   if(n % 2 == 0) x.insert(0, "0");
   else x.insert(0,"1");
   binary(n/2, x);
}

int
main(){
   int n;

   cin >> n;
   binary(n, "");

   return 0;
}
