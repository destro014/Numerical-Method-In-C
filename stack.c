#include<stdio.h>
#include<conio.h>
#define size 5
struct stack {
    int s[size];
    int top;
}st;
int stfull()
{
   if (st.top==st.size-1)
   {
       return 1;
   }
   else
    return 0;
}
int push(int item)
{
    if (stfull())
    {printf("Stack is full");l
    }
    else
        top=top+1;
        st.s[st.top]=item;
}
int stempty()
{
    if (st.top==-1)
    {
       return 1;
    }
    else
        return 0;
}
int pop()
{
    int item;
    if (stempty())
    {
        printf("Stack underflow");
    }
    else
    item=st.s[st.top];
       st.top--;
       return item;
}
