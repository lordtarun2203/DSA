#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class cnode{
    public:
    int data;
    cnode *next;
    public:
    cnode *head;
    cnode(){
        head=NULL;
        next=NULL;

    }
    void insertathead(int val)
    {
        cnode *temp=head;//!temp variable is used to traverse so the head value dont change
        cnode *cur=new cnode();
        cur->data=val;
        if(head==NULL)
        {
            cur->next=cur;
            head=cur;
            return;
        }
        while (temp->next!=head) temp=temp->next;//!now temp is seconf last cnode
        temp->next=cur;
        cur->next=head;
        head=cur;
    }



    void insertatend(int val){
        if(head==NULL){//!if the list is empty
            insertathead(val);
            return;
        }

        cnode*temp=head;
        cnode *cur=new cnode();
        cur->data=val;
        while(temp->next!=head) temp=temp->next;
        temp->next=cur;
        cur->next=head;
    }

    void insertanywhere(int val,int pos){
        if(head==NULL || pos==1)
        {
            insertathead(val);
            return;
        }
        cnode *temp=head;
        cnode *cur=new cnode();
        cur->data=val;
        int j=1;

        while(j!=pos-1){
            temp=temp->next;
            j++;
        }

        cur->next=(temp->next);//!NEED TO UNDERSTAND
        temp->next=cur;

    }
    void deleteAtHead(){
    cnode* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }

    cnode* todelete=head;
    temp->next=head->next;
    head=head->next;

    delete todelete;
    }
    void deletion( int pos){

    if(pos==1){
        deleteAtHead();
        return;
    }
      cnode* temp=head;
      int count=1;

      while(count!=pos-1){
          temp=temp->next;
          count++;
      }

      cnode* todelete=temp->next;
      temp->next=temp->next->next;

      delete (todelete);
}

void display(){
        cnode *temp=head;
        do{//?can not use while loop with(temp->next=head) because at last iteration the condition is true so the last element will not be printed.
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=head);
        cout<<endl;

    }


};

int main(){
    cnode l;
    l.insertathead(7);

    l.insertatend(6);
    l.insertathead(5);
    l.insertathead(4);
    l.insertathead(3);
    l.insertathead(2);
    l.insertathead(1);

    l.insertatend(9);
    l.insertanywhere(8,8);

    l.display();

}
