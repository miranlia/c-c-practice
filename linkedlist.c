struct NODE{
  int data; //the data we want to store in the node
  struct NODE *next; //the pointer to the following node in the list 
};

struct NODE *aNode;
aNode=(struct NODE*)malloc(sizeof(struct NODE));
if (aNode==NULL)exit(1);

aNode->data=0; //initialize to zero
aNode->next=NULL; //the next pointer is not pointing to anything

//struct NODE *head; always points to the first node in a list
//the last node always points to NULL

creation of a List example

int main(){
  struct NODE*head=NULL;
  int x, newData;
  for (x=0;x<10;x++)head = addNode(head,newData);
 }
 
struct NODE *addNodes(struct NODE *ptr,int someData){
  struct NODE *temp=(struct NODE*)malloc(sizeof(struct NODE));
  if (temp==NULL)return NULL;
  temp->data=someData;
  
  if (ptr==NULL)
    temp->next=NUll;
  else
    temp->next=ptr;
  return temp;
}
}
