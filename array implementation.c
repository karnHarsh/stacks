#include<stdio.h>

#define N 5
int stack[N];
int top = -1;

void push(int x){
	if(top==N-1)
		printf("Overflow\n");
	else{
		top++;
		stack[top]=x;
	}
}

int pop(){
	int item;
	if(top==-1){
		printf("Underflow\n");
		return -1;
	}
	else{
		item=stack[top];
		top--;
		return item;
	}
}

int peek(){
	if(top==-1){
		printf("Stack is empty\n");
		return -1;
	}
	else{
		return stack[top];
	}
}

void display(){
	for(int i=top;i>-1;i--)
		printf("%d ",stack[i]);
	printf("\n");
}

void main(){
	int ch,n;
	printf("press 1 for push\npress 2 for pop\npress 3 for seek\npress 4 for display\npress 0 to exit\n");
	scanf("%d",&ch);
	do{
		switch(ch){
			case 1:
				printf("Enter the value: ");
				scanf("%d",&n);
				push(n);
				break;
			case 2:
				n = pop();
				printf("Popped value is: %d\n",n);
				break;
			case 3:
				n = peek();
				printf("Top of the stack value is: %d\n",n);
				break;
			case 4:
				display();
				break;
			default:
				printf("Wrong input\n");
		}
		printf("press 1 for push\npress 2 for pop\npress 3 for seek\npress 4 for display\npress 0 to exit\n");
		scanf("%d",&ch);
	}while(ch!=0);
}

