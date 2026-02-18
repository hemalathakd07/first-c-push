#include<stdio.h>
int main(){
  int a=0,b=5,cnt=0;
  int v=(a&&++cnt)||(b&&++cnt);
  printf("%d %d %d",a,b,cnt);
  return 0;
}