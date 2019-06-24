#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
  int count = 0;
  int sum = 0;
for (int i = 0; i < n - 1  ; i++){
  sum = sum + A[i];
if (A[i] > x) {return 0;}
else if (sum == x) {sum = 0; count = count + 1;

}
else if (sum > x) {return 0 ;
}


}
if (A[n - 1] > x) {return 0;}
return count + 1 <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 10000;
  while (ub - lb > 1) {
  int m = (ub + lb) / 2 ;
  if (p(m)) {ub = m;
  }
  else {lb = m;
  }
}
printf("%d\n", ub) ;
  return 0;
}
