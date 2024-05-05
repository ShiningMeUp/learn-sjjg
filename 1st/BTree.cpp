//A(B(D(,G)),C(E,F))
#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <stdlib.h>
#define MaxSize 100
using namespace std;
typedef struct node
{
	char data;
	struct node *lchild;
	struct node *rchild;
}BTNode;
void InitBTNode(BTNode *&b,const string s)
{
	b=NULL;
	BTNode *p,*St[MaxSize];
	int j=0,top=-1,k;
	char ch=s[j];
	while(ch!='\0')
	{
		switch(ch)
		{
			case '(':top++;St[top]=p;k=1;break;
			case ',':k=2;break;
			case ')':top--;break;
			default:
				p=(BTNode *)malloc(sizeof(BTNode));
				p->data = ch;
				p->lchild  =NULL;
				p->rchild =NULL;
				if(b==NULL)
					b=p;
				else{
					switch(k)
					{
						case 1:St[top]->lchild=p;break;
						case 2:St[top]->rchild=p;break;
					}
				}
				
		}
		j++;
		ch=s[j];
	}
}
void DisplayNormal(BTNode *b)
{
	if(b!=NULL)
	{
		cout<<b->data ;
		if(b->lchild !=NULL || b->rchild !=NULL)
		{
			cout<<'(';
			if(b->lchild !=NULL)
			DisplayNormal(b->lchild );
			if(b->rchild !=NULL)
			{
				cout<<',';
				DisplayNormal(b->rchild );
			}
			cout<<')';
		}
	}
}
void Display(BTNode *b)//非递归 
{
	stack<BTNode *> st;
	BTNode *p;
	st.push(b);
	while(!st.empty())
	{
		p=st.top();
		cout<<p->data;
		st.pop();
		if(p->rchild !=NULL)  //栈先进后出，要想先遍历lchild，就要将rchild先进栈 
			st.push(p->rchild);
		if(p->lchild !=NULL)
			st.push(p->lchild);
	}
}
void LevelOrder(BTNode *b)
{
	queue<BTNode *> qu;
	BTNode *p;
	qu.push(b);
	while(!qu.empty())
	{
		p=qu.front();
		cout<<p->data;
		qu.pop();
		if(p->lchild !=NULL)
		qu.push(p->lchild);
		if(p->rchild !=NULL)
		qu.push(p->rchild);
	}
}
void Destroy(BTNode *&b)
{
	if(b!=NULL)
	{
		free(b->lchild);
		free(b->rchild);
		free(b);
		cout<<endl<<"Freed";
	}	
}
int main()
{
	BTNode *b;
	InitBTNode(b,"A(B(D(,G)),C(E,F))");
	DisplayNormal(b);
		cout<<endl;
	Display(b);
		cout<<endl;
	LevelOrder(b);
	Destroy(b);
}
