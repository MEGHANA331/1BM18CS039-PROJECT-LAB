#include <stdio.h>
void push(struct stack *st,int ele);
void display(struct stack st);
int pop(struct stack *st);
struct stack
{
    int s[100];
    int top;
};
struct stack st;
void main()
{
    int x;
    st.top=-1;
    push(&st,1);
    push(&st,2);
    display(st);
    x=pop(&st);
    if(x!=-9999);
    {
        printf("popped element is %d\n",x);
    }
    display(st);
}
void push(struct stack *st,int ele)
{
    if(st->top==99)
    {
        printf("stack is overflow\n");
        return;
    }
    st->top=st->top+1;
    st->[st->top]=ele;
}
void display(struct stack st)
{
    int i;
    if(st.top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    for(i=st.top;i>=0;i--)
    {
        printf("%d\n",st.s[i]);
    }
}
int pop(struct stack *st)
{
    int ele;
    if(st->top==-1)
    {
        printf("stack is underflow\n");
        return -9999;
    }
    ele=st->s[st->top];
    st->top=st->top-1;
    return ele;
}
