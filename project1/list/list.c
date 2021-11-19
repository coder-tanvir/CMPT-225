
#include"list.h"
#include<stdlib.h>

struct nodeStruct* List_createNode(int item)
{
    struct nodeStruct* node= malloc(sizeof (struct nodeStruct));
    node->item=item;
    node->next=NULL;
	return node;
}

void List_insertHead (struct nodeStruct **headRef, struct nodeStruct *node)
{
      node->next=*headRef;
      *headRef=node;
      

}



int List_countNodes (struct nodeStruct *head)
{    
     struct nodeStruct *temp;
     temp=head;
	int count=0;
    if(temp==NULL)
     { return count;}
     
     else
   {
     while(temp!=NULL)
    {    
	   count++;
     temp=temp->next;
    
    
    }
    return count;
   }
}



struct nodeStruct* List_findNode(struct nodeStruct *head, int item)
{
     
     
     	struct nodeStruct *node=head;
        
              
	
     
		while(node!= NULL)
		{
		
		   
    		   if(node->item==item)
     			return node;

		   node=node->next;
		}
   		return NULL;

	
}



void List_insertTail (struct nodeStruct **headRef, struct nodeStruct *node)
{   
     struct nodeStruct *mmmm;
      mmmm=*headRef;

 /*    if((*mmmm)==NULL)
    {
      (*mmmm)=node;
      (*mmmm)->next=NULL;
    }
      

    else{

      while((*mmmm)!=NULL)
    {
        if((*mmmm)->next==NULL)
       {
       	(*mmmm)->next=node;
       	*mmmm=(*mmmm)->next;
       	(*mmmm)->next=NULL;
       }

        *mmmm=(*mmmm)->next;
    }
        }

}

*/



 while(mmmm->next !=NULL)
 {
 	// if((*mmmm)->next ==NULL)
 	// {
 	// 	lala=mmmm;
 	// 	(*lala)->next=node;
 	// 	*mmmm=(*lala)->next;
 	// 	(*mmmm)->next=NULL;
 	// }


 	mmmm=mmmm->next;
 }
 mmmm->next=node;
 node->next=NULL;
}



void List_deleteNode (struct nodeStruct **headRef, struct nodeStruct *node)
{
	struct nodeStruct* pt1;
	pt1=*headRef;
	if(node==pt1)
	{
		*headRef=(*headRef)->next;
		free(pt1);
		
	}

    else if (List_countNodes(*headRef)==1)
    {    free(node);
    	*headRef=NULL;
    }
    else
    {
    struct nodeStruct* pt2;
    pt2=pt1->next;

    while(pt1->next !=node)
    {
    	pt1=pt1->next;
    	pt2=pt2->next;
    }
     // if(pt2==NULL)
    	// {
    	// 	pt1->next=NULL;
    	// 	free(pt2);
    	// }
    	pt1->next=pt2->next;
    	free(pt2);   


}



}


void List_sort (struct nodeStruct **headRef)
{
	struct nodeStruct* pt1;
	pt1=*headRef;
	int n=List_countNodes(*headRef);
	int arr[n];

	for(int i=0;i<n;i++)
	{
		arr[i]=pt1->item;
		pt1=pt1->next;
	}

    
   int i, j;
   for (i = 0; i < n-1; i++)         
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              {
              	int temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
              }


     struct nodeStruct* pt2;
     pt2=*headRef;
      for(int k=0;k<n;k++)
      {
      	pt2->item=arr[k];
      	pt2=pt2->next;
      }


}













































