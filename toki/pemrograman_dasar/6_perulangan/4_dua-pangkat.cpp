#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int
main(){
    int n;
    scanf("%d", &n);

    bool isTrue = false;
    for(int i=0;i<=16;i++){
        if(n == pow(2,i)){
            isTrue = true;
            break;
        }
    }
    if(isTrue) printf("ya\n");
    else printf("bukan\n");

    return 0;
}