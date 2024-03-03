// opening file using open function
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char array_1[50];
    int variable_1, variable_2;

    ofstream object_1; // creating output stream

    object_1.open("File_16_1.txt"); // connecting 1st file to output stream

    cout<<"Enter a string : ";
    cin>>array_1;
    cout<<"Enter an integer : ";
    cin>>variable_1;

    object_1<<array_1<<endl; // write to file  File_16_1
    object_1<<variable_1<<endl; // write to file File_16_1

    object_1.close(); // disconnect file from stream

    object_1.open("File_16_2.txt"); // connecting 2nd file to output stream

    cout<<"Enter a string : ";
    cin>>array_1;
    cout<<"Enter an integer_1 : ";
    cin>>variable_1;
    cout<<"Enter an integer_2 : ";
    cin>>variable_2;

    object_1<<array_1<<endl; //  write to file  File_16_2
    object_1<<variable_1<<endl; //  write to file  File_16_2
    object_1<<variable_2<<endl; //  write to file  File_16_2

    object_1.close(); // disconnect file from stream

    ifstream object_2; // creating input stream

    object_2.open("File_16_1.txt"); // connecting 1st file to input stream

    object_2>>array_1; // read from file  File_16_1
    object_2>>variable_1; // read from file File_16_1

    cout<<"String : "<<array_1<<endl;
    cout<<"Integer : "<<variable_1<<endl;

    object_2.close(); // disconnect file from stream

    object_2.open("File_16_2.txt"); // connecting 2nd file to input stream

    object_2>>array_1; // read from file  File_16_2
    object_2>>variable_1; // read from to file  File_16_2
    object_2>>variable_2; // read from file  File_16_2

    cout<<"String : "<<array_1<<endl;
    cout<<"Integer_1 : "<<variable_1<<endl;
    cout<<"Integer_2 : "<<variable_2<<endl;

    object_2.close(); // disconnect file from stream

    return 0;
}
