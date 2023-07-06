#include <iostream>
using namespace std;

class node
{
    int data;
    node *next;
public:
    node *first=NULL;

    void f_insert(int d)
    {
        node *current=new node();
        current->data=d;
        current->next=NULL;
        if(first==NULL)
        {
            first=current;

        }
        else
        {
            current->next=first;
            first=current;
        }
    }


    int f_delete()
    {
        if(first==NULL)
        {
            cout<<"Empty list";
            return 99999;
        }
        else
        {
            int x=first->data;
            node *temp=first;
            first=first->next;
            delete(temp);
            cout<<"Deleted item is - "<<x;
            return x;
        }
    }

    void display()
    {
        node *temp=first;
        while(temp!=NULL)
        {
            cout<<temp->data;
            temp=temp->next;
        }
    }

    void b_insert(int d)
    {
        node *current=new node();
        current->data=d;
        current->next=NULL;
        node *temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=current;
        }

    int b_delete()
    {
        node *temp=first;
        node *prev=NULL;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        int x=temp->data;
        delete(temp);
        cout<<"Deleted item is - "<<x;
        return x;
    }
    void m_insert(int d)
    {
        int n;
        cout<<"After how many nodes you want to insert? - ";
        cin>>n;
        node *current=new node();
        current->data=d;
        current->next=NULL;
        int j=1;
        node *temp=first;
        while(j<n)
        {
            temp=temp->next;
            j++;
        }
        current->next=temp->next;
        temp->next=current;
    }
    int m_delete()
    {
        int x;
        node *prev=NULL;
        cout<<"What do you want to delete? -";
        cin>>x;
        node *temp=first;
        while(temp->data!=x&&temp!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp->data==x)
        {
            prev->next=temp->next;
            delete(temp);
            cout<<"Deleted item is - "<<x;
            return x;
        }
    }
};

int main()

{
    int n;
    int g=1;
    node b;
    int data;
    while(g>0){
        cout<<"\n1 to forward insert\n";
        cout<<"2 to forward delete\n";
        cout<<"3 to display\n";
        cout<<"4 to back insert\n";
        cout<<"5 to back delete\n";
        cout<<"6 to middle insert\n";
        cout<<"7 to middle delete\n";
        cout<<"8 to exit\n";
        cin>>n;


            switch(n){
                case 1:
                    cout<<"Enter data - ";
                    cin>>data;
                    b.f_insert(data);
                    break;
                case 2:
                    b.f_delete();
                    break;
                case 3:
                    cout<<"Stack is - ";
                    b.display();
                    break;
                case 4:
                    cout<<"Enter data- ";
                    cin>>data;
                    b.b_insert(data);
                    break;
                case 5:
                    b.b_delete();
                    break;
                case 6:
                    cout<<"Enter data - ";
                    cin>>data;
                    b.m_insert(data);
                    break;
                case 7:
                    b.m_delete();
                    break;
                case 8:
                    cout<<"Exiting...";
                    g=0;
                    break;
                default:
                    cout<<"WRONG INPUT";

        }
    }
}

