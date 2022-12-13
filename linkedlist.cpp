#include <iostream>
using namespace std;
class node
{
    public:
    node(){next=NULL;}
    public:
    int data;
    node* next;
};

class linkedlist
{
public:
node* top ;
linkedlist(){top=NULL;}
     
     
     bool isempty ()
    {
        return(top==NULL);
    }
    
     void push(int value)
    {
        node*newnode=new node;
        newnode->data=value;

            if (isempty())
            {
                
                newnode->next=NULL;
            top=newnode;

            }
            else
            {
                newnode->next=top;
                top=newnode;
            }
        
    }
    void pop()
    {
        if (isempty())
        {
            cout<<"no items to pop "<<endl;
            
        }
        else 
        {   
            node*pointer = top;
            top=top->next;
           
            delete pointer;
            
        }
        
    }
    void peek() 
    {
        if (isempty())
        {
            cout<<"no items to print "<<endl;
            
        }
        else{
                cout<<top->data;
            }
    }
   
    void print()
    { node*temp=top;
    if (isempty()) {cout<<"nothing here"<<endl;}
    else 
    {       
            while (temp!=NULL)
            {
                 cout<<temp->data<<endl;
                temp=temp->next;

            }

    }

    
    
        
    }


};





int main ()
{
    linkedlist* nums = new linkedlist();
    int op;
    int value;
    int on = 1 ;

    while (on == 1)
    {
      
        cout<<endl<<"Enter operation code"<<endl<<"0 for push"<<endl<<"1 for pop"<<endl<<"2 peek"
        <<endl<<"3 for print ";
        cin>>op;
        cout<<endl;
        switch (op)
        {
            case 0: 
                cout<<"enter the value you want to push ";
                cin>> value;
                nums->push(value);
                nums->print();
               break;
            case 1 :
            nums->pop();
            nums->print();
                break;
            case 2:
            nums->peek();
            break;
            case 3:
                nums->print();
                break;  

            default:
                break;
        }
      on =0 ;
      cout<< " enter 1 to continue or 0 to exit";
      cin>>on;
    
      if (on!=1)
    {break;}
      
    }

    
   
          
  

}

