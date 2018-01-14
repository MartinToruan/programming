#include <iostream>

using namespace std;

int petak_papan[100][100];
int n, m, k;

int idx_x[4] = {-1, 0, 1, 0};
int idx_y[4] = {0, 1, 0, -1};
int hitungKemenarikan(int x, int y){
   int res = 1;

   for(int i=0;i<4;i++){
      int tempX = x + idx_x[i];
      int tempY = y + idx_y[i];
      if(tempX < 0 || tempX == n || tempY < 0 || tempY == m) continue;

      res *= petak_papan[tempX][tempY];
   }
   return res;
}

int
main(){
   int menarik, res_i=-1, res_j=-1;

   scanf("%d %d %d", &n, &m, &k);
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         scanf("%d", &petak_papan[i][j]);
      }
   }
   for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
         menarik = hitungKemenarikan(j, i);
         if(menarik == k){
            res_i = j; res_j = i;
            break;
         }
      }
      if(res_i != -1) break;
   }

   printf("%d %d\n", res_i+1, res_j+1);

   return 0;
}
