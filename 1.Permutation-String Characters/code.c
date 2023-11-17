#include<stdio.h>
#include<stdlib.h>
int main(){
  char str[50];
  int len;
  scanf("%s",str);
  len=strlen(str);
  permute(str,0,len-1);
  return 0;
}
void permute(char str[],int l,int r){
  if (l==r)
    printf("%s\n",str);
  else{
    for(int i= l;i<=r;i++){
      swap(str,l,r);
      permute(str,l+1,r);
      swap(str,l,r); //backtracking
    }
  }
}
void swap(char str[],int x,int y){
  char temp;
  temp=str[x];
  str[x]=str[y];
  str[y]=temp;
}
