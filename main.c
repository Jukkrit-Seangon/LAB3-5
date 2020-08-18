#include <stdio.h>
int main(void) {
    float high,base,ans;
  printf("Enter High : ");
  scanf("%f", &high);
  printf("Enter Base : ");
  scanf("%f", &base);
  ans = 0.5*high*base;
  printf("Answer is %0.2f",ans);
  return 0;

}