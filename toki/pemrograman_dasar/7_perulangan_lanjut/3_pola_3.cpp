#include <iostream>

using namespace std;

int
main(){
  int n;

  scanf("%d", &n);

  int count=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      if(count==10) count=0;
      printf("%d", count);
      count++;
    }
    printf("\n");
  }

  return 0;
}
