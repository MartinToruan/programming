#include <iostream>
#include <vector>

using namespace std;

int counting[101];

int
main(){
   // Using Counting Sort
   int n, hi, med, j;
   cin >> n;
   for(int i=0;i<n;i++){
      cin >> hi;
      counting[hi]++;
   }

   vector<int> data;
   for(int i=1;i<=100;i++){
      for(int j=counting[i];j>0;j--){
         data.push_back(i);
      }
   }

   med = (n/2);
   if(n%2==1){
      printf("%.1f\n", (float)data[med]);
   }else{
      printf("%.1f\n", (float)(data[med]+data[med-1])/2);
   }

   return 0;
}
