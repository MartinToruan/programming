#include <iostream>
#include <cstdio>

using namespace std;

int
main(){
    int n;

    scanf("%d", &n);

    printf("%d\n", n);
    for(int i=n/2;i>=1;i--){
        if(n%i == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}