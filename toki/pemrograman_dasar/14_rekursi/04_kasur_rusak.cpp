#include <iostream>
#include <string>

using namespace std;

bool check_palindrom(int idx, string s){
   int len = s.size();
   if(s[idx] != s[len-idx-1]) return false;
   if(idx == len/2) return true;
   idx++;
   return check_palindrom(idx, s);
}

int
main(){
   string s;
   cin >> s;
   printf("%s\n", (check_palindrom(0,s))?"YA":"BUKAN");

   return 0;
}
