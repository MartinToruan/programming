#include <iostream>
#include <cstdio>

using namespace std;

int
main(){
    int n, t, max = -100001, min=1000001;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &t);
        if(t > max) max=t;
        if(t < min) min=t;
    }
    printf("%d %d\n", max, min);

    return 0;
}