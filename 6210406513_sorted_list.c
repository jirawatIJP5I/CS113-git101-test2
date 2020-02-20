// 6210406513 Jirawat Leelanapakaas
#include <stdio.h>
#include <stdlib.h> 

struct node { 
   int data; 
   struct node *next; 
}; 
void sort_list(struct node **head, struct node **tail, int input, int n)
{  
   
     
       if (*head == NULL){
         *head = *tail = (struct node *)malloc(sizeof(struct node));
        (*tail)->data = input;
        (*tail)->next = NULL;
      }
      else {
        struct node* tmp = *tail;
        *tail = (struct node *)malloc(sizeof(struct node));
        (*tail)->data = input;
        (*tail)->next = NULL;
        
        if (tmp->data < input) {
         
            while (tmp->data < input) {
              (*tail)->next = tmp->next;
              tmp->next = *tail;
              tmp = tmp->next;
      }
        }
       
      else if(tmp->data > input) {
        (*tail)->next = (*head);
         *head = (*tail);
      
      }
       
  }
  }
    
void print_list(struct node *head){ 
  struct node *tmp;
  for (tmp=head; tmp; tmp = tmp->next)
      printf("%d\n", tmp->data);
}


int main()
{
  int n,i=1;
  
  struct node *head=NULL,*tail=NULL,*tmp;
  while (1)
  {
    scanf("%d",&n);
    if (n < 0)
      break;
  sort_list(&head, &tail, n, i);
  
  }
  print_list(head);
}
