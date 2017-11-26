#include <iostream>
#include <cstdio>

using namespace std;

int
main(){
    int n, total=0;

    while(scanf("%d", &n) != EOF){
        total += n;
    }
    printf("%d\n", total);

    return 0;
}