#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int map[1000001];

void generate_sieve(){
   for(int i=2;i<=1000000;i++){
      map[i]=1;
   }
   map[0] = 0;
   map[1] = 0;
   for (int i=2;i<=1000000;i++){
      if(map[i] == 1){
         for(int j=i+i;j<=1000000;j+=i){
            map[j] = 0;
         }
      }
   }
}

int
main(){
   generate_sieve();

   int n;
   scanf("%d", &n);
   while(n > 1){
      // Do Factorization
      for(int i=2;i<=n;i++){
         if(map[i] == 0) continue;
         if(n % i == 0 || n == i){
            map[i]++;
            // printf("%d %d\n", i, map[i]);
            n /= i;
            break;
         }
      }
   }

   bool isFirst = false;
   for(int i=2;i<=1000000;i++){
      if(map[i] > 1){
         if(!isFirst){
            isFirst = true;
         }else{
         	printf(" x ");
         }
         printf("%d", i);
         if(map[i] > 2){
            printf("\^%d", map[i]-1);
         }
      }
   }
   printf("\n");

   return 0;
}
