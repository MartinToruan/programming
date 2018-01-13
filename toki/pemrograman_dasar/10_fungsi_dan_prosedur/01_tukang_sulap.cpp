#include <iostream>
using namespace std;

int bola[2][1001];

int change_baris(char ch){
   return (ch=='A')?0:1;
}

void tukar(int idx_x, int x, int idx_y, int y){
   x--;
   y--;
   int temp = bola[idx_x][x];
   bola[idx_x][x] = bola[idx_y][y];
   bola[idx_y][y] = temp;
}

int main() {
   int n, q;

   scanf("%d", &n);
   for(int i=0;i<n;i++){
      scanf("%d", &bola[0][i]);
   }
   for(int i=0;i<n;i++){
      scanf("%d", &bola[1][i]);
   }

   char p1, p2, temp;
   int x, y, idx_x, idx_y;
   scanf("%d", &q);
   scanf("%c", &temp);
   for(int i=0;i<q;i++){
      //cin >> p1 >> x >> p2 >> y;
      scanf("%c %d %c %d", &p1, &x, &p2, &y);
      scanf("%c", &temp);
      idx_x = change_baris(p1);
      idx_y = change_baris(p2);
      tukar(idx_x, x, idx_y, y);
   }

   for(int i=0;i<2;i++){
      for(int j=0;j<n;j++){
         printf("%d", bola[i][j]);
         if(j < n-1) printf(" ");
      }
      printf("\n");
   }

   return 0;
}
