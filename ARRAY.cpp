#include <iostream>
using namespace std;

void printarr(int arr[],int elements)
{
    for (int i = 0; i < elements; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return;

}
void insert(int index , int value,int arr[],int elements) 
{
    string choice;
cout<< "index "<<index<<" contains "<<arr[index]<<" do you want to replce it with "<< value << " y/n ? ";
cin>>choice;
if (choice == "y" || choice == "yes")
{
    arr[index]= value;
    cout<< "done .. updated array :"<<endl;
    printarr(arr,elements);
    
    

}

return;
}
void searchby(int key, int elements,int arr[])
{
    int y =0; 
    for(int i =0 ;i < elements ; i++)
    {
        if (arr[i]==key)
        {
            cout<<key<<" index is "<<i<<endl;
            break;
        }

        y++;
        
    }
    if (y==elements)
    {
      cout<<"Ops that was out of the box !"<<endl;
    }
    
    
    
    return;
}
void deleteby(int arr[],int index,int elements)
{
        string choice;
cout<< "index "<<index<<" contains "<<arr[index]<<" do you want to delete it  y/n ? ";
cin>>choice;
if (choice == "y" || choice== "yes")
{
    arr[index]= 0;
    cout<< "done .. updated array :"<<endl;
    printarr(arr,elements);
    
    

}
return;
}
int main ()
{
    int op;
    int index;
    int value;
    int searchkey;
    int numArr[7]={0,0,0,0,0,0,0};
    int on = 1 ;

    while (on == 1)
    {
      
        cout<<"enter operation code"<<endl<<"0 for insertion"<<endl<<"1 for deletion"<<endl<<"2 for search"
        <<endl<<"3 for print "<<endl;
        cin>>op;
        switch (op)
        {
            case 0: 
                cout<<"enter the index you want to insert at ";
                cin>> index;
                cout<<"enter the number you want to insert ";
                cin>> value;
                insert(index,value,numArr,7);
             
               break;
            case 1 :
            cout<<"enter the index you want to delete ";
                cin>> index;
                deleteby(numArr,index,7);
                break;
            case 2:
                
                cout<< "enter the number you want to search for "<<endl;
                cin>> searchkey;
                searchby(searchkey,7,numArr);
                break;
            case 3:
                printarr(numArr,7)  ;
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

