#include <iostream>
#include <vector>

using namespace std;

int
main(){
   int n, x;
   cin >> n >> x;
   vector<pair<int, int>> beras(n);
   for(int i=0;i<n;i++){
      cin >> beras[i].first;
   }
   for(int i=0;i<n;i++){
      cin >> beras[i].second;
   }

   double total=0;
   int max_pos;
   // Sort
   for(int i=0;i<n;i++){
      max_pos = i;
      for(int j=i+1;j<n;j++){
         if((double)beras[max_pos].second/beras[max_pos].first < (double)beras[j].second/beras[j].first){
         	max_pos = j;
         }
      }
      // Swap
      pair<int, int> temp = beras[i];
      beras[i] = beras[max_pos];
      beras[max_pos] = temp;

      if(x > 0){
         if(x >= beras[i].first){
            total += beras[i].second;
         }else{
            double harga = (double)beras[i].second / beras[i].first;
            total += x*harga;
         }
      }else{
         break;
      }
      x -= beras[i].first;
   }

   printf("%.5lf\n", total);

   return 0;
}
