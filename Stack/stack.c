#include<stdio.h>
int stack[100], i, j, n, choice=0, top=-1;
void push();
void display();
void pop();
void isEmpty();
void main(){
    printf("\nEnter the number of element in the stack: \n");
    scanf("%d",&n);
    while (choice!=4){
        printf("\n1. PUSH \n2.POP \n3. Display \n 4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: printf("Exiting....\n");
            break;
            default: printf("Invalid Choice...\n");
        }
    }
}
void push(){
    int val;
    if(top==n-1){
        printf("Stack Overflow\n");
    } else{
        printf("Enter the Value to push:\n");
        scanf("%d",&val);
        top++;
        stack[top]=val;
    }
}
void display(){
    if (top==-1){
        isEmpty();
    }else{
        printf("\n Stack Elements are: \n");
        for(i=0;i<=top;i++){
            printf(" %d ",stack[i]);
        }
    }
    printf("\n\n");
}
void pop(){
    if(top==-1){
        isEmpty();
    }else{
        top--;
    }
}

void isEmpty(){
    if(top==-1){
        printf("Stack is empty!!\n");
    }
}