#include <iostream>
using namespace std;

int main() {
   int len;
   string s;

   cin >> s;
   len = s.size();

   for(int i=0;i<len;i++){
      if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
      else s[i] += 32;
   }
   cout << s << endl;

   return 0;
}
