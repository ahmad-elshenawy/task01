#include <iostream>
using namespace std;
bool isempty(int arr[],int maxsize)
{
    return(arr[maxsize-1]==0);
    
}
bool isfull (int arr[ ])
{
return(arr[0]!=0);
}
void enqueue(int arr[],int value,int maxsize)
{
    int temp=arr[0];
    if (isempty(arr,maxsize)==true)
    {
       arr[maxsize-1]=value;
    }
    else if (isfull(arr))
    {
        cout<<"queue max is 7 only";
    }
    else
    {
        while (arr[temp+1]==0)
        {
            temp ++;
        }

        arr[temp]=value;
    }
    return;
    
}
void dequeue(int arr[],int maxsize)
{   
   
    if (isempty(arr,maxsize)==true)
    {
       cout<<endl<<"queue is empty"<<endl;

    }
    else 
    {
        while (maxsize-1!=0)
        {
            arr[maxsize]=arr[maxsize-1];
            arr[maxsize-1]=0;
            maxsize=maxsize-1;
        }
        
        

    }
    return;
    
     
}
void peek (int arr[],int maxsize)
{
    if(isempty(arr,maxsize)==true)cout<<"queue is empty"<<endl;
    else cout<<arr[maxsize-1]<<endl;
    return;

}
void print(int arr[],int maxsize)
{
    if(isempty(arr,maxsize)==true)cout<<"queue is empty"<<endl;
   else{ int temp =0 ;
    while (temp!=maxsize)
    {   if (arr[temp]!=0)
        {cout<<arr[temp]<<",";}
        temp++;

    }}
    cout<<endl;
    return;

    

}
int main()
{
    int op;
    int value;
    
    int numArr[7]={0,0,0,0,0,0,0};
    int on = 1 ;

    while (on == 1)
    {
      
        cout<<"enter operation code"<<endl<<"1 for enqueue"<<endl<<"2 for dequeue"
        <<endl<<"3 peek"<<endl<<"4 for print"<<endl;
        cin>>op;
        switch (op)
        {
          
            case 1 :
            cout<<"enter the number you want to enqueue ";
                cin>> value;
                enqueue(numArr,value,7);
                cout<<"done here is the queue updated"<<endl;
                print(numArr,7);
                break;
            case 2:
            cout<<numArr[6]<<" dequeued ";
            cout<<"done here is the queue updated"<<endl;
                dequeue(numArr,7);
                print(numArr,7);
                
                break;
            case 3:
                peek(numArr,7)  ;
                break;  
            case 4 : 
                print(numArr,7);
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


