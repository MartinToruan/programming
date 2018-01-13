#include <iostream>
#include <string>

using namespace std;

int main() {
   int pos, len;
   string s, t;

   cin >> s >> t;

   len = t.size();

   pos = s.find(t);
   while(pos != -1){
      s.erase(pos, len);
      pos = s.find(t);
   }

   cout << s << endl;

   return 0;
}
