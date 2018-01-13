#include <iostream>
#include <cmath>

using namespace std;

int rev(int x){
   int res=0;

   while(x > 0){
      res = (res*10) + x%10;
      x /= 10;
   }

   return res;
}

int
main(){
   int a, b;
   scanf("%d %d", &a, &b);
   a = rev(a);
   b = rev(b);
   a += b;
   printf("%d\n", rev(a));

   return 0;
}
