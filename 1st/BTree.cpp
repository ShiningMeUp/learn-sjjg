#include <stdio.h>
#include <stdlib.h> //A(B(D(,G)),C(E,F))
#define MaxSize 100
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
int main()
{
    BTNode *b;
    InitBTNode(b,"A(B(D(,G)),C(E,F))");
    DispBTree(b);
    return 0;
}