#include <iostream>
#include <vector>

using namespace std;


int main() {
   int n;

   cin >> n;
   vector<string> name(n);

   for(int i=0;i<n;i++){
      cin >> name[i];
      int j=i;
      while(j>0 && name[j].size() <= name[j-1].size()){
         if(name[j].size() == name[j-1].size() && name[j] > name[j-1]) break;

         // Swap
         string temp = name[j];
         name[j] = name[j-1];
         name[j-1] = temp;

         // decrement
         j--;
       }
   }
   for(int i=0;i<n;i++){
      cout << name[i] << endl;
   }

   // your code goes here
   return 0;
}
