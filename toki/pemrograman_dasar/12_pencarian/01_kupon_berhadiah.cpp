#include <iostream>
using namespace std;

int main() {
	int n, x, temp_delta=999999, pemenang, kupon;

	scanf("%d %d", &n, &x);
	for(int i=0;i<n;i++){
		scanf("%d", &kupon);
		int delta = abs(kupon-x);
		if(delta < temp_delta){
			temp_delta = delta;
			pemenang = kupon;
		}
		if(delta == temp_delta && kupon < pemenang) pemenang = kupon;
	}
	cout << pemenang << endl;

	return 0;
}
