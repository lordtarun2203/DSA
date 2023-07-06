#include <iostream>
using namespace std;

class node
{
    int data;
    node *next;
public:
    node *top=NULL;
    void push(int d){
    node *current=new node();
    current->data=d;
    current->next=NULL;
    if(top==NULL){
        top=current;}
    else{
        current->next=top;
        top=current;
    }

    }
    void pop()
    {
        if(top==NULL)
            cout<<"Underflow";
        else{
        node *temp=top;
        cout<<top->data;
        top=top->next;
        delete(temp);}
    }

    void display()
    {
        if(top==NULL){
            cout<<"Underflow";

        }
        else{
            node *temp=top;
            while(temp!=NULL){
                cout<<temp->data;
                temp=temp->next;
            }}}
};


int main()

{
    int n;
    int g=1;
    node b;
    int data;
    while(g>0){
        cout<<"\n1 to push\n";
        cout<<"2 to pop\n";
        cout<<"3 to display\n";
        cout<<"4 to exit\n";
        cin>>n;


            switch(n){
                case 1:
                    cout<<"Enter data - ";
                    cin>>data;
                    b.push(data);
                    break;
                case 2:
                    cout<<"Popped element is - ";
                    b.pop();
                    break;
                case 3:
                    cout<<"Stack is - ";
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



