#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("input.csv");
    if(!fin)
    {
        return 1;
    }
    char ch;
    int num=0,douhao=0,col=0,row=0;
    while (fin.get(ch))
    {
        if(ch=='\n')
        row++;
        else if(ch==',')
        douhao++;
    }
    row++;
    col=douhao/row+1;
    fin.clear();
    fin.seekg(0,ios::beg);
    int **a=new int*[row];
    for(int i=0;i<row;i++)
    {
        a[i]=new int[col];
    }
    int rowrow=0,colcol=0;
    while(fin.get(ch))
    {
        if(ch>='0'&&ch<='9')
        {
            num=num*10+(ch-'0');
        }
        else if(ch==','||ch=='\n')
        {
            a[rowrow][colcol]=num;
            num=0;
            if(ch==',')colcol++;
            else
            {
                rowrow++;
                colcol=0;
            }
        }
    }
    a[rowrow][colcol]=num;
    fin.close();
    ofstream fout("output.csv");
    if(!fout)
    {
        return 1;
    }
    for(int i=0;i<col;i++)
    {
        double mean=0;
    }
    for(int i=0;i<row;i++)
    delete[] a[i];
    delete[] a;
    return 0;
}