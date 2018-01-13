#include <iostream>
#include <cstring>
using namespace std;

int map[1000001];

void generate_sieve(){
   map[0] = 1;
   map[1] = 1;
   for (int i=2;i<=1000000;i++){
      if(map[i] == 0){
         for(int j=i+i;j<=1000000;j+=i){
            map[j] = 1;
         }
      }
   }
}

void check_prima(int n){
   printf("%s\n", map[n]?"BUKAN":"YA");
}

int main() {
   generate_sieve();
   int t, n;
   scanf("%d", &t);
   for(int i=0;i<t;i++){
      scanf("%d", &n);
      check_prima(n);
   }
   return 0;
}
