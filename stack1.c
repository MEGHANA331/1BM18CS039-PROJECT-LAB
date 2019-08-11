#include <stdio.h>
int stack [100];
int top=-1;
void push(int ele);
int pop ();
void display ();
int main()
{
    int e;
    push(1);
    push(2);
    push(3);
    display();
    e=pop();
    printf("popped element is %d\n",e);
    display();
    return 0;
}
void push(int ele)
{
    if(top==99)
    {
        printf("stack is overflow\n");
        return;
    }
top=top+1;
stack[top]=ele;
return;
}
int pop()
{
    if(top==-1)
    {
        printf("stack is underflow\n");
        return-9999;
    }
    return stack[top--];
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("contents of the stack %d\n",i);
    for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);
}
