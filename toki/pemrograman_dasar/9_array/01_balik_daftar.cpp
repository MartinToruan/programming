#include <iostream>
#include <vector>
using namespace std;

int main() {
   int el;
   vector<int> n;
   while(scanf("%d", &el) != EOF){
      n.push_back(el);
   }

   for(int i=n.size()-1;i>=0;i--){
      printf("%d\n", n[i]);
   }

   return 0;
}
