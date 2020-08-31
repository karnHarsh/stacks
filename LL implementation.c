#include<stdio.h>

struct node{
	int data;
	struct node * next;
};

struct node *top= NULL ;

void push(int x){
	struct node *nnode;
	nnode = (struct node*)malloc(sizeof(struct node));
	nnode->data=x;
	nnode->next=top;
	top=nnode;
}

void pop(){
	struct node *temp;
	temp=top;
	if(top==NULL){
		printf("Underflow\n");
	}
	else{
		temp=top;
		printf("The popped element is: %d\n",top->data);
		top=top->next;
		free(temp);
	}
}

void peek(){
	if(top==NULL){
		printf("The stack is empty\n");
	}
	else{
		printf("The top element is: %d\n",top->data);
	}
}

void display(){
	struct node * temp;
	temp=top;
	if(top==NULL){
		printf("The stack is empty\n");
	}
	else{
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}

void main(){
	int n;
	printf("Press 1 for push\nPress 2 for pop\nPress 3 for peek\nPress 4 for display\nPress 0 to exit\n");
	scanf("%d",&n);
	int x;
	while(n!=0){
		switch(n){
			case 1:
				printf("Enter the number\n");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			default:
				printf("Wrong Input\n");
		}
		printf("Press 1 for push\nPress 2 for pop\nPress 3 for peek\nPress 4 for display\nPress 0 to exit\n");
		scanf("%d",&n);
	}
}
