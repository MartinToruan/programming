#include <iostream>
#include <string>

using namespace std;

bool isCamel(string s){
   int len = s.size();
   for(int i=0;i<len;i++){
      if(s[i] == '_') return false;
   }
   return true;
}

string makeCamel(string s){
   int len = s.size();

   for(int i=0; i<len;i++){
      if(s[i] == '_'){
        s.erase(i, 1);
        s[i] -= 32;
      }
   }
   return s;
}

string makeSnake(string s){
   int i=0;
   do{
      if(s[i] >= 'A' && s[i] <= 'Z'){
         s[i] += 32;
         if(i>0) s.insert(i, "_");
      }
      i++;
   }while(i < s.size());
   return s;
}

int main() {
	int len;
	bool is_camel;
	string s;

	cin >> s;
	len = s.size();
	is_camel = isCamel(s);
	if(is_camel){
		cout << makeSnake(s) << endl;
	}else{
		cout << makeCamel(s) << endl;
	}

	return 0;
}
