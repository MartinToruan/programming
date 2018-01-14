#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

vector<string> name(100000);
vector<string> phone_num(100000);
int n, q;

void find_person(string s){
   int idx = -1, kiri=0, kanan=n-1;
   while(kiri <= kanan && idx == -1){
      int tengah = (kiri+kanan)/2;
      if(s > name[tengah]) kiri = tengah+1;
      else if(s < name[tengah]) kanan = tengah-1;
      else idx = tengah;
   }
   if(idx == -1) printf("NIHIL\n");
   else cout << phone_num[idx] << endl;
}

int
main(){
   string person;

   scanf("%d %d", &n, &q);

   for(int i=0;i<n;i++){
      cin >> name[i] >> phone_num[i];
   }

   for(int i=0;i<q;i++){
      cin >> person;
      find_person(person);
   }

   return 0;
}
