// opening file use constructor
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char array_1[50];
    int variable;

    // for writing
    ofstream object_1 ("File_15.txt"); // connect File_15 file to stream

    cout<<"Enter a string : ";
    cin>>array_1;
    cout<<"Enter an integer : ";
    cin>>variable;

    object_1<<array_1<<endl; //write to file File_15 using object.
    object_1<<variable<<endl; // write to file File_15 using object

    object_1.close(); // disconnect file from stream

    // for reading
    ifstream object_2 ("File_15.txt");  // connect File_15 file to stream

    object_2>>array_1; // read from file
    object_2>>variable; // read from file

    cout<<"String : "<<array_1<<endl;
    cout<<"Integer : "<<variable;

    object_2.close();  // disconnect file from stream

    return 0;
}
