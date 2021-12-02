#include<stdlib.h>

int main(void){
  int *array;
  int n;
  
  
  scanf("%d",&n);
  array=(int*)calloc(n,sizeof(int));
  
  if (array==NULL)exit(1);
  
  *(array+2)=5;
  printf("%d",*(array+2));
  free(array);
  return 0;
}
