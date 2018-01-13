#include <iostream>
#include <math.h>

using namespace std;

bool check_agak_prima(int n){
   if (n == 1) return true;
   if (n == 2) return true;
   int count = 0;
   for(int i=2;i<=n/2;i++){
      if(count == 3) break;
      if(n%i==0) count++;
   }
   return (count <= 2)?true:false;
}

int
main(){
   int t, n;
   scanf("%d", &t);
   for(int i=0;i<t;i++){
      scanf("%d", &n);
      printf("%s\n", check_agak_prima(n)?"YA":"BUKAN");
   }

   return 0;
}
