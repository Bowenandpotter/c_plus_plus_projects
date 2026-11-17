#include<iostream>
#include<fstream>
#include<string>
#include <limits>
using namespace std;

int main()
{
    ifstream fin("clues_and_plays.txt");
    if(!fin)
    {
        cout<<"unable to open"<<endl;
        return 1;
    }

    int num;//num表示总共录入多少单词
    fin>>num;

    int*m=new int[num];
    int*n=new int[num];
    int*k=new int[num];
    //代表在整个文件的第m行，从第n列开始的k个字符

    //录入
    for(int i=0;i<num;i++)
    {
        fin>>m[i]>>n[i]>>k[i];
    }

    //录入文件
    //去掉\n换行符
    // char ch;
    // fin.get(ch);
    fin.ignore(numeric_limits<streamsize>::max(), '\n');
    string*text=new string[1000];
    int t=0;
    while(t<999&&getline(fin,text[t]))
    {
        if(!text[t].empty() && text[t].back() == '\r')
        {
            text[t].pop_back();
        }
        t++;
    }

    //新建一个叫words字符串数组储存每次找到的单词
    string*word=new string[num];
    for(int i=0;i<num;i++)
    {
        // //word全部在字符串外面
        // if(n[i]-1>text[m[i]-num-2].size()-1)
        // {
        //     word[i]="";
        //     for(int j=0;j<k[i];j++)
        //     {
        //         word[i]=word[i]+"*";
        //     }
        // }
        // //word部分在字符串外面
        // else if(n[i]-1<text[m[i]-num-2].size()-1&&n[i]-1+k[i]-1>text[m[i]-num-2].size()-1)
        // {
        //     word[i]=text[m[i]-num-2].substr(n[i]-1);
        //     for(int j=0;j<k[i]-text[m[i]-num-2].size()+n[i]-1;j++)
        //     {
        //         word[i]=word[i]+"*";
        //     }
        // }
        // //word全部在字符串里面
        // else
        // {
        //     word[i]=text[m[i]-num-2].substr(n[i]-1,k[i]);
        // }
        // // cout<<word[i]<<endl;
        int start=n[i]-1,line=m[i]-num-2;
        word[i]="";
        for(int j=0;j<k[i];j++)
        {
            int pos=start+j;
            if(line >= 0 && line < t &&
               pos >= 0 && pos < (int)text[line].size())
            {
                word[i]=word[i]+text[line][pos];
            }
            else{
                word[i]=word[i]+"*";
            }
        }
    }
    
    fin.close();

    ofstream fout("secret_message.txt");
    if(!fout)
    {
        cout<<"unable to open"<<endl;
        delete[] m;
        delete[] n;
        delete[] k;
        delete[] text;
        delete[] word;
        return 1;
    }
    for(int i=0;i<num;i++)
    {
        fout<<word[i];
        if(i!=num-1)
        {
            fout<<' ';
        }
    }
    fout.close();

    //delete
    delete[] m;
    delete[] n;
    delete[] k;
    delete[] text;
    delete[] word;
    return 0;
}