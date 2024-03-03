// write direct into file
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char array_1[50];
    int variable;

    ofstream object_1;

    object_1.open("File_17.txt");

    object_1<<"Program"<<endl;
    object_1<<"1000"<<endl;

    object_1.close();

    ifstream object_2;

    object_2.open("File_17.txt");

    object_2>>array_1;
    object_2>>variable;

    cout<<"String : "<<array_1<<endl;
    cout<<"variable : "<<variable<<endl;

    object_2.close();

    return 0;
}
