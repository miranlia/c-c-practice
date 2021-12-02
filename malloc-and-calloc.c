#include<stdlib.h>

int main(void){
  int *array;
  int n; 
  
  scanf("%d",&n);
  array = (int*)calloc(n,sizeof(int));
  //good programming habit to stick with sizeof
  
  if (array==NULL)exit(1);
  
  *(array+2)=5;
  printf("%d",*(array+2));
  free(array);
  
  return 0;
}


//an example
struct STUDENT{
    int age;
    float GPA;
};

struct STUDENT*X;

x=(struct STUDENT *)malloc(sizeof(struct STUDENT));
if (x==NULL)exit(1);

(*x).age=5;
x->age=5;



struct STUDENT *students,*aStudent;
int n,x;

scanf("%d",&n);
students=(struct STUDENT*)calloc(n,sizeof(struct STUDENT));
if(students==NULL)exit(1);

for (x=0;x<n;x++){
    aStudent = students+x;
    scanf("%d %f",&(aStudent->age),&(aStudent->GPA));
}

//or:&((students+x)->age)






  
