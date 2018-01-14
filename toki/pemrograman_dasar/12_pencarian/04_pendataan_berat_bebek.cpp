#include <iostream>
#include <vector>

using namespace std;

int n, q;
vector<int> data(100000);

int lowerbound(int x){
   int l = 0, r=n-1, m;

   while(l <= r){
      m = (l+r)/2;
      if(data[m] > x) r=m-1;
      else l=m+1;
   }
   for(int i=l;i>0;i--){
      if(data[i-1] <= x) break;
      l--;
   }
   return l;
}

int upperbound(int x){
   int l = 0, r=n-1, m;

   while(l <= r){
      m = (l+r)/2;
      if(data[m] <= x) l=m+1;
      else r=m-1;
   }
   for(int i=r;i<n-1;i++){
      if(data[i+1] > x) break;
      r++;
   }
   return r;
}

int
main(){
   int x, y;
   cin >> n;
   for(int i=0;i<n;i++){
      cin >> data[i];
   }
   cin >> q;
   for(int i=0;i<q;i++){
      cin >> x >> y;
      cout << upperbound(y)-lowerbound(x)+1 << endl;
   }

   return 0;
}
