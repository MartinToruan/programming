#include <iostream>
#include <string>

using namespace std;

int main() {
   string s;
   int k, len;


   cin >> s >> k;
   len = s.size();

   for(int i=0;i<len;i++){
      int val = s[i];
      val += k;
      if (val > 122) val -= 26;
      s[i] = val;
   }
   cout << s << endl;

   return 0;
}
