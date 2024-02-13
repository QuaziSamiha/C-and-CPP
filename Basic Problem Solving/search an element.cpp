// searching an element in an array ( linear search )
#include<iostream>

using namespace std;

int main()
{
    int a[100], n, search_element, position = -1;

    cout<<"Enter how many elements : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements for an array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<endl<<"Enter an element for searching : ";
    cin>>search_element;
    for(int i = 0; i < n; i++)
    {
       if(search_element == a[i])
       {
          position = i+1;
          break;
       }
    }

    cout<<endl;
    if(position == -1)
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"The position of searching element is "<<position<<endl;
    }
}

