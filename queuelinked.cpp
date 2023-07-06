#include <iostream>
using namespace std;


class node
{
    int data;
    node *next;
public:
    node *r=NULL;
    node *f=NULL;
    void enqueue(int d){
    node *current=new node();
    current->data=d;
    current->next=NULL;
    if(r==NULL)
        {
            r= current;
            f=current;
        }
    else{
        r->next=current;
        r=current;
    }
    }
    int dequeue(){
    if(r==NULL){
        cout<<"Empty queue";
        return 99999999;
        }

    else{
        int x=f->data;
        node *temp=f;
        f=f->next;
        delete(temp);
        cout<<x;
    }
}

    void display()
    {
        node *temp=f;
        while(temp!=NULL)
        {
            cout<<temp->data;
            temp=temp->next;
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
        cout<<"\n1 to enqueue\n";
        cout<<"2 to dequeue\n";
        cout<<"3 to display\n";
        cout<<"4 to exit\n";
        cin>>n;


            switch(n){
                case 1:
                    cout<<"Enter data - ";
                    cin>>data;
                    b.enqueue(data);
                    break;
                case 2:
                    cout<<"Popped element is - ";
                    b.dequeue();
                    break;
                case 3:
                    cout<<"Queue is - ";
                    b.display();
                    break;
                case 4:
                    cout<<"Exiting...";
                    g=0;
                    break;
                default:
                    cout<<"WRONG INPUT";

        }
    }
}



