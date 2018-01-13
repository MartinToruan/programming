#include <iostream>
#include <cmath>

using namespace std;

int compose(int a, int x, int b, int k){
   k--;
   if(k == 0) return abs((a*x)+b);
   return abs((a*(compose(a,x,b,k)))+b);
}

int
main(){
   int a, b, k, x;
   scanf("%d %d %d %d", &a, &b, &k, &x);
   printf("%d\n", compose(a,x,b,k));

   return 0;
}
