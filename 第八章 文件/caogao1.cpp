#include<iostream>
using namespace std;

struct student
{
    string name;
    char sex;
    int birthday;
    float height;
    float weight;
};

int main(){
    cout<<"name:";
    student zepher;
    cin>>zepher.name;
    cout<<"sex(M/W):";
    cin>>zepher.sex;
    cout<<"hi!"<<zepher.name<<endl;
    if(zepher.sex=='M'){
        cout<<"if u'r gay,u like boys"<<endl;
    }
    else if(zepher.sex=='W')cout<<"if u'r gay,u like girls"<<endl;
    else cout<<"u'r not human"<<endl;
    return 0;
}
