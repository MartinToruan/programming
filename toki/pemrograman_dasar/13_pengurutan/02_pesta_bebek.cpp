#include <iostream>
#include <vector>

using namespace std;

int main() {
   int n;

   cin >> n;
   vector<string> name(n);
   vector<int> urut(n);

   for(int i=0;i<n;i++){
      cin >> name[i];

      int j=i;
      while(j>0 && name[j] < name[j-1]){
         // swap
         string temp = name[j];
         name[j] = name[j-1];
         name[j-1] = temp;
         j--;
      }
      urut[i] = j+1;
   }
   for(int i=0;i<n;i++){
      cout << urut[i] << endl;
   }

   // your code goes here
   return 0;
}
