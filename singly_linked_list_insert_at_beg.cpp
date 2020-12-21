#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* insert_at_beg(struct node* head, int num)
{
    struct node* temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=num;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    temp->next=head;
    head=temp;
    return head;

}
struct node* display(struct node* head)
{

    if(head==NULL)
        cout<<"Empty list- "<<endl;
    else
       {

        struct node* curr=head;
        while(curr->next!=NULL)
       {
           cout<<curr->data<<"  ";
           curr=curr->next;
        }cout<<curr->data<<endl;
       }
}
int main()
{
    cout<<"Hello there ---------------- "<<endl;
    char ch ;

    struct node* head=NULL;
    cout<<"Do want to make a linked list (Y/N): "<<endl;
    cin>>(ch);
    while(ch=='Y'||ch=='y')
    {
        int n;
        cout<<"Enter the data -"<<endl;
        cin>>n;
        head=insert_at_beg(head,n);
        cout<<"Do u want to continue? "<<endl;
        cin>>(ch);
    }

    display(head);
    return 0;


}
