#include<stdio.h>
void display(int s[100],int t);
void push(int ele,int s[100],int *t);
int pop(int s[100],int *t);
int main()
{
    int stack[100],top=-1,x;
    push(1,stack,&top);
    push(2,stack,&top);
    display(stack,top);
    x=pop(stack,&top);
    if(x!=-9999)
    {
        printf("popped element is %d\n",x);
    }
    display(stack,top);
}
void push(int ele,int s[100],int *t)
{
    if(*t==99)
    {
        printf("stack is overflow\n");
        return;
    }
       *t=*t +1;
       s[*t]=ele;
}
void display(int s[100],int t)
{
    int i;
    if(t==-1)
    {
        printf("stack is empty\n");
        return;
    }
    for(i=t;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }
    int pop(int s[100],int *t)
    {
        int ele;
        if(*t==-1)
        {
            printf("stack is underflow\n");
            return -9999;
        }
        ele=s[*t];
        *t=*t-1;
        return ele;
    }
}
