#include <iostream>

using namespace std;
struct node{
    int data;
    node* next;

};

class sll{
    node *head;

public:
    sll(){
        head=NULL;
    }
    void insert_beg(int d)
    {
        node *n1=new node();
        n1->data=d;

        if(head==NULL)
            {
                head=n1;
                n1->next=head;
            }
        else
        {
            n1->next=head;
            head=n1;
        }
    }
    void insert_end(int d)
    {
        node *n1=new node();
        n1->data=d;

        if(head==NULL)
            {
                n1->next=head;
                head=n1;
            }
        else{
                node *travel=head;
                    do{
                    travel=travel->next;
                    }while(travel->next!=head);

                 n1->next=head;
                travel->next=n1;


            }
    }
    void insert_pos(int d,int pos)
    {
        node *n1=new node();
        n1->data=d;
        n1->next=head;
        if(head==NULL)
            head=n1;
        else
        {
        node *travel=head;
        int c=0;
        node *temp;
        while(c!=pos-1)
        {
            temp=travel;
            travel=travel->next;
            c++;
        }
        node *prevnext=temp->next;
        temp->next=n1;
        n1->next=prevnext;
        }

    }
    void search_node(int d)
    {
        node *visit=head;
        int flag=0;
        if(head==NULL)
            cout<<"Not Found\n";
        else{
            while( visit!= NULL)
            {
                if(visit->data==d)
                    {flag=1;
                    break;}
                visit=visit->next;
            }
            if(flag==1)
                cout<<"Found\n";
            else{
                cout<<"Not Found\n";
            }
        }
    }
    void display()
    {
        node *temp=head;
            if(temp!=NULL)
            {
                do{
                cout<<temp->data<<" ";
                temp=temp->next;
                }while(temp!=head);
            }
            cout<<"\n";
    }
    void modify(int old,int newd)
    {
        node *visit=head;
        while(visit->data!=old || visit!=NULL)
        {
            if(visit->data==old)
                break;
            visit=visit->next;

        }
        if(visit==NULL)
            return;
        visit->data=newd;
    }
    void delete_node(int d)
    {
        node *temp=head;
        node *prev;
        do
        {
            prev=temp;
            temp=temp->next;
            if(temp->data==d)
                break;

        }while(temp->data !=d || temp!=head);
        if(temp==head)
            return;
        prev->next=temp->next;
        delete temp;
    }


}s1;
int main()
{
    cout<<"------MENU--------\n";
    cout<<"1.insert begin\n";
    cout<<"2.insert end\n";
    cout<<"3.insert pos\n";
    cout<<"4.display\n";
    cout<<"5.search\n";
    cout<<"6.modify\n";
    cout<<"7.delete\n";
    while (true)
    {
        int ch;
        cin>>ch;
        if(ch==0)
            break;
         switch(ch)
        {
            case 1:{
                int d;
                cout<<"enter data";
                cin>>d;
                s1.insert_beg(d);
                break;
                }
            case 2:{
                int d;
                cout<<"enter data";
                cin>>d;
                s1.insert_end( d);
                break;
                }
            case 3:{
                int p,d;
                cout<<"enter data";
                cin>>d;
                cout<<"enter position";
                cin>>p;
                s1.insert_pos(d,p);
                break;
                }
             case 4:{
               s1.display();
                break;
                }
            case 5:{
                int d;
                cout<<"enter data";
                cin>>d;
                s1.search_node(d);
                break;
                }
            case 6:{
                int newone,oldone;
                cout<<"enter data to be modified\n";
                cin>>oldone;
                cout<<"enter new data\n";
                cin>>newone;
                s1.modify(oldone,newone);
                break;
            }
            case 7:{
                int d;
                cout<<"enter the data to be deleted"<<"\n";
                cin>>d;
                s1.
                delete_node(d);
                break;
            }
        }
    }

    return 0;
}
