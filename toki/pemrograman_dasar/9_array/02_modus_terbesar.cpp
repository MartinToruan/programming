#include <iostream>
#include <vector>

using namespace std;

int
main(){
   vector<int> el(1001);
   int t, n;

   scanf("%d", &t);
   for(int i=0;i<t;i++){
      scanf("%d", &n);
      el[n]++;
   }
   int max=-1, max_el=0;
   for(int i=1;i<=1000;i++){
      if(el[i] >= max){
         max = el[i];
         max_el = i;
      }
   }

   printf("%d\n", max_el);

   return 0;
}
