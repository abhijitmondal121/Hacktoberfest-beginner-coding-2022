#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int c = 0;
struct node
{
    node *next, *prev, *top;
    int data;
}*head = NULL, *tail = NULL, *p = NULL, *r = NULL, *np = NULL, *q = NULL;

void create(int x)
{
    np = new node;
    np->data = x;
    np->next = NULL;
    np->prev = NULL;
    np->top = NULL;
    if (c == 0)
    {
        tail = np;
        head = np;
        p = head;
        p->next = NULL;
        p->prev = NULL;
        p->top = NULL;
        c++;
    }
    else
    {
        p = head;
        r = p;
        if (np->data < p->data)
        {
            np->next = p;
            p->prev = np;
            np->prev = NULL;
            head = np;
            p = head;
            do
            {
                p = p->next;
            }
            while (p->next != NULL);
            tail = p;
        }
        else if (np->data > p->data)
        {
            while (p != NULL && np->data > p->data)
            {
                r = p;
                p = p->next;
                if (p == NULL)
                {
                    r->next = np;
                    np->prev = r;
                    np->next = NULL;
                    tail = np;
                    break;
                }   
                else if (np->data <= p->data)
                {
                    if (np->data < p->data)
                    { 
                        r->next = np;
                        np->prev = r;
                        np->next = p;
                        p->prev = np;
                        if (p->next != NULL)
                        {
                            do
                            {
                                p = p->next;
                            }
                        while (p->next !=NULL);
                    }
                    tail = p;
                    break;
                    }
                    else if (p->data == np->data)
                    {
                        q = p;
                        while (q->top != NULL)
                        {
                           q = q->top;
                        }
                        q->top = np;
                        np->top = NULL;
                        break;
                    }
                }
            }
        }        
    }
}

void traverse_tail()
{
    node *t = tail;
    //cout<<"\n\nlinear display of nodes currently present in linked list....\n\n";
    while (t != NULL)
    {
        cout<<t->data<<"\t";
        q = t;
        while (q->top != NULL)
        {
              q = q->top;
              cout<<"top->"<<q->data<<"\t";
        }
        t = t->prev;
    }
    cout<<endl;
}

void traverse_head()
{
    node *t = head;
    while (t != NULL)
    {
        cout<<t->data<<"\t";
        q = t;
        while (q->top != NULL)
        {
            q = q->top; 
            cout<<"top->"<<q->data<<"\t";
        }
        t = t->next;
    }
    cout<<endl;
}

int main()
{
    int i = 0, n, x, ch;
    cout<<"enter the no of nodes\n";
    cin>>n;
    while (i < n)
    {
        cout<<"\nenter value of node\n";
        cin>>x;
        create(x);
        i++;
    }
    cout<<"\nTraversing Doubly Linked List head first\n";
    traverse_head();
    cout<<"\nTraversing Doubly Linked List tail first\n";
    traverse_tail();
    getch();
}
