#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
};
class link_list
{
public:
    int sz;
    node* head;
    link_list()
    {
        head=NULL;
        sz=0;
    }
    node* creat_new_node(int vlue)
    {
        node* newnode=new node;
        newnode->data=vlue;
        newnode->next=NULL;
        return newnode;
    }
    void insertAthead(int valu)
    {
        sz++;
        node* a =creat_new_node(valu);
        if(head==NULL)
        {
            head=a;
            return ;
        }
        a->next=head;
        head=a;
    }
    void travers()
    {
        node* a1=head;
        while(a1!=NULL)
        {
            cout<<a1->data<<"\n";
            a1=a1->next;
        }
    }
    int search_for_a_single_value(int num)
    {
        node* a1=head;
        int index=0;
        while(a1!=NULL)
        {
            if(a1->data==num)return index;
            a1=a1->next;
            index++;
        }
        return -1;
    }

    int get_sizeOf_linklist1()
    {
        return sz;
    }
    int get_value(int n)
    {
        if(n<0 || n>sz)
        {
            cout<<" worng index input error";
            return-1;
        }
        node* a=head;
        int crindx=0;
        while(crindx!=n)
        {
            a=a->next;
            crindx++;
        }
        return a->data;
    } void reverse_print2(node* a)
    {
        if(a==NULL)return;
        reverse_print2(a->next);
        cout<<a->data<<" ";
    }
    void reverse_print()
    {
        reverse_print2(head);
        cout<<"\n";
    }
    void swap_first()
    {
        if(sz<2)return;
        node* a=head;
        node* b=a->next;
        int temp;
        temp=a->data;
        a->data=b->data;
        b->data=temp;
    }
};
int main()
{
    link_list l;
    cout<<l. get_sizeOf_linklist1()<<"\n";
    l.insertAthead(11);
    l.insertAthead(22);
    l.insertAthead(22);
    l.reverse_print();
    l.insertAthead(33);
    l.insertAthead(63);
    l.insertAthead(83);
    cout<<l. get_sizeOf_linklist1()<<"\n";
    cout<< l.get_value(2)<<"\n";
    l.travers();
    l.reverse_print();
    l.swap_first();
    l.travers();
    return 0;
}
