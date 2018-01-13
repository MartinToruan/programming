#include <iostream>
#include <cmath>

using namespace std;

int close_value(int xi, int xj, int yi, int yj, int d){
   return (int)pow(abs(xj-xi),d)+(int)pow(abs(yj-yi),d);
}

int
main(){
   int n, d, min=9999999, max=-1, dekat;

   scanf("%d %d", &n, &d);
   int factor[n][2];

   for(int i=0;i<n;i++){
      scanf("%d %d", &factor[i][0], &factor[i][1]);
   }
   for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
         dekat = close_value(factor[i][0], factor[j][0], factor[i][1], factor[j][1], d);
         if(dekat > max) max = dekat;
         if(dekat < min) min = dekat;
      }
   }
   printf("%d %d\n", min, max);

   return 0;
}
