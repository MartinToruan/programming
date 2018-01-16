#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;

	cin >> n >> k;
	vector<int> tinggi(n);
	for(int i=0;i<n;i++){
	   cin >> tinggi[i];
	}
	int i;
	for(i=0;i<k;i++){
	   for(int j=i+1;j<n;j++){
	      if(tinggi[j] < tinggi[i]){
	         // swap
	         int temp = tinggi[j];
	         tinggi[j] = tinggi[i];
	         tinggi[i] = temp;
	      }
	   }
	}
	cout << tinggi[i-1] << endl;

	return 0;
}
