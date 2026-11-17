#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("student.txt");
    if(!fout)
    {
        cout<<"unable to open\n";
        return 1;
    }
    fout<<"hi,student"<<endl;
    fout.close();
    ifstream fin ("student.txt");
    if(!fin)
    {
        cout<<"unable to open\n";
        return 1;
    }
    string a;
    while(fin>>a)
    {
        cout<<a<<endl;
    }
    fin.close();
    return 0;
}