#include <iostream>
using namespace std;
#define MAX 10

 class node
 {
     int arr[MAX];
     int top=-1;

 public:

     int data;

    void push(int data)
    {
        if(top==MAX-1)
            cout<<"OVERFLOW";
        else

            arr[++top]=data;

    }
    int pop()
    {
        if (top!=-1){
            return arr[top--];}
        else
            cout<<"Underflow";

        }
    void display(){
    for(int i=0;i<=top;i++)
        cout<<arr[i];
    }
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
