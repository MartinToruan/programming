#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int
main(){
    float n;
    scanf("%f", &n);

    printf("%d %d\n", (int)floor(n), (int)ceil(n));

    return 0;
}