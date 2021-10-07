int length(Node *head){
    if(head==NULL){
        return 0;
    }
    Node *temp=head;
  	int size = 1 + length(temp->next);
    return size;
}
Node *bubbleSort(Node *head)
{
    if(head==NULL){
        return head;
    }
    for(int i=0;i<length(head);i++){
        Node *prev=NULL;
        Node *current=head;
        while(current->next!=NULL){
        	if(current->data <= current->next->data){
            	 prev=current;
                current=current->next;
        }
            else{
                if(prev==NULL){
                    Node *next1=current->next;
                    current->next=next1->next;
                    next1->next=current;
                    prev=prev->next;
                    head=prev;
                    }
                else{
                   Node *next1=current->next;
                    prev->next=next1;
                    current->next=next1->next;
                    next1->next=current;
                    prev=prev->next;
                }
            }
        }
    }
    return head;
}
