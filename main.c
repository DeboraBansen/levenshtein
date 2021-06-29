#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int a,int b,int c){
  int menor;
    if(a < b){
        if(a < c)
            menor = a;
        else
            menor = c;
    }
    else{
        if(b < c)
            menor = b;
        else
            menor = c;
    }

  return menor; 
}

int main(void) {
  int m,n,c;
  char str1[21];
  char str2[21];
  scanf("%s",str1);
  scanf("%s",str2);
  m=strlen(str1);
  n=strlen(str2);
  
  int M[m][n];
  

  for(int i=0;i<m;i++){
    M[i][0]=i;
  }
  for(int j=0;j<n;j++){
    M[j][0]=j;
  }

  for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
      if(str1[i]==str2[j]){
        c=0;
      }else{
        c=1;
      }
     
      M[i][j]=min((M[i-1][j-1]+c),(M[i-1][j]+1),(M[i][j-1]+1));
    }
  }
  printf("%d",M[m-1][n-1]);
  return 0;
}