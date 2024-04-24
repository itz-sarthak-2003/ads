#include<iostream>
using namespace std;
class node
{
    string data;
    int fuel;
    node *next;
    public:
    int v,e;
    void create();
    void display();
    void edge();
}*Head[10];
void node::create()
{
    cout<<"enter how many cities u want to insert"<<endl;
    cin>>v;
    cout<<"enter name of city"<<endl;
    for(int i=0;i<v;i++){
        Head[i]=new node;
        cin>>Head[i]->data;
        Head[i]->next=NULL;
    }
}
void node::display()
{
    node *n2;
    for(int i=0;i<v;i++)
    {
        cout<<"\nSource :"<<Head[i]->data;
        n2=Head[i]->next;
        while(n2!=NULL){
            cout<<"Dest "<<n2->data;
            cout<<"fuel required "<<n2->fuel;
            n2=n2->next;
        }
    }
}
void node::edge()
{
    int i,j;
    string s,d;
    node *n1,*temp;
    cout<<"how many edges : ";
    cin>>e;
    for(i=0;i<e;i++){
        cout<<"enter source n dest : ";
        cin>>s>>d;
        for(j=0;j<v;j++){
            if(s==Head[j]->data)
            break;
        }
        n1=new node;
        n1->data=d;
        cout<<"\n Enter fuel requird :";
        cin>>n1->fuel;
        n1->next=NULL;
        temp=Head[j];
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n1;
    }
}
int main()
{
    node g1;
    g1.create();
    g1.edge();
    g1.display();
return 0;
}