#include <stdio.h>
#include <stdlib.h> //A(B(D(,G)),C(E,F))
#include <iostream>
#include <stack>
#define MaxSize 100
using namespace std;
typedef struct node
{
    char data;
    struct node *lchild;
    struct node *rchild;
}BTNode;
void InitBTNode(BTNode *&b,const char *str)
{
    BTNode *Sta[MaxSize],*p;  //p->now node
    int top=-1,k=0,j=0;
    char ch;
    ch=str[j];
    b=NULL;
    while(ch!='\0')
    {
        switch(ch)
        {
            case '(':top++;k=1;Sta[top]=p;break;    //lchild
            case ')':top--;break;
            case ',':k=2;break;
            default:
                p=(BTNode *)malloc(sizeof(BTNode));
                p->data=ch;
                p->lchild=p->rchild=NULL;
                if(b==NULL)
                    b=p;
                else{
                    switch(k)
                    {
                        case 1:Sta[top]->lchild=p;break;
                        case 2:Sta[top]->rchild=p;break;
                    }
                }
        }
        j++;
        ch=str[j];
    }
}
void DispBTree(BTNode *b)
{
    if(b!=NULL)
    {
        printf("%c",b->data );
        if(b->lchild!=NULL || b->rchild!=NULL)
        {
            printf("(");
            DispBTree(b->lchild);
            if(b->rchild!=NULL)
                printf(",");
            DispBTree(b->rchild);
            printf(")");
        }
    }
}
void DisplayOut(BTNode *b)//非递归
{
    BTNode *p;
    std::stack<BTNode *> st;
    if(b!=NULL)
    {
        st.push(b);
        while (!st.empty())
        {
            p=st.top();
            cout<<p->data;
            st.pop();
            if(p->rchild!=NULL)   //先右子树，再左子树 栈先进后出
                st.push(p->rchild); //p->rchild 不能用b->rchild 因为会一直对同一个点操作
            if(p->lchild!=NULL)
                st.push(p->lchild);
        }
    }
}
int main()
{
    BTNode *b;
    InitBTNode(b,"A(B(D(,G)),C(E,F))");
    DispBTree(b);
    printf("\n");
    DisplayOut(b);
    return 0;
}
