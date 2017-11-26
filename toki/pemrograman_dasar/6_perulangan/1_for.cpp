#include <iostream>
#include <cstdio>

using namespace std;

int
main(){
    int n, total=0, temp;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d", &temp);
        total+=temp;
    }
    printf("%d\n", total);

    return 0;
}