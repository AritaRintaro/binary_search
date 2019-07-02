#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
  int count = 1;
  int sum = 0;
for (int i = 0; i < n   ; i++){
if (A[i] > x) {return 0;}
if (sum + A[i] <= x) {sum = sum + A[i];

}
else  {count = count + 1 ; sum = A[i];
}


}

return count  <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  int maxi = 0;
  for (int i = 0; i < n; i++){
    if (A[i] >= maxi) maxi = A[i];
}
  lb = maxi - 1;
  ub = 1000000000;
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
