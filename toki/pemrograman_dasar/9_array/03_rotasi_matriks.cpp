#include <iostream>

using namespace std;

int
main(){
   int n, m;

   scanf("%d %d", &n, &m);
   int matriks[n][m];

   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         scanf("%d", &matriks[i][j]);
      }
   }

   for(int i=0;i<m;i++){
      for(int j=n-1;j>=0;j--){
         printf("%d", matriks[j][i]);
         if(j > 0) printf(" ");
      }
      printf("\n");
   }

   return 0;
}
