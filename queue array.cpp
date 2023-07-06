#include <iostream>
using namespace std;

#define MAX 10
class queue{
public:
int a[MAX];
int r=-1,f=-1;
void enqueue(int data){
if(r==MAX-1){
    cout<<"queue is full";
    return;}
else{
    r++;
    a[r]=data;
}
}
int dequeue()
{
    if(r==f){
        cout<<"empty queue";

        return 99999999;

    }
    else{
        f++;
        return a[f];
    }

}
void display()
{
    for(int i=f+1;i<=r;i++)
        cout<<a[i];
}

};

int main()

{
    int n;
    int g=1;
    queue b;
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
