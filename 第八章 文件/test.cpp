#include <iostream>
#include <fstream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
    ifstream fin("input.csv");
    if(!fin)
    {
        cout<<"unable to open";
        return 1;
    }

    //计算行列数
    char ch;
    int num=0,col,row=0,comma=0;
    while(fin.get(ch))
    {
        if(ch==',')
        {
            comma++;
        }
        if(ch=='\n')
        {
            row++;
        }
    }
    row++;
    col=comma/row+1;
    cout<<"col:"<<col<<" row:"<<row<<endl;
    fin.clear();
    fin.seekg(0,ios::beg);

    //将test录入a
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

    // //cout a
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //         cout<<a[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }

    //转置a to b
    int **b=new int*[col];
    for(int i=0;i<col;i++)
    {
        b[i]=new int[row];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(int i=0;i<col;i++)
    {
        sort(b[i],b[i]+row);
    }

    //average
    double*average=new double[col];
    for(int i=0;i<col;i++)
    {
        int sum=0;
        for(int j=0;j<row;j++)
        {
            sum=sum+b[i][j];
        }
        average[i]=(double)sum/row;
    }

    //zhongweihsu
    double*zhongweishu=new double[col];
    for(int i=0;i<col;i++)
    {
        if(row%2==0)
        {
            zhongweishu[i]=(b[i][row/2-1]+b[i][row/2])/2.0;
        }
        if(row%2==1)
        {
            zhongweishu[i]=b[i][row/2];
        }
    }

    //max,min
    double*max=new double[col];
    double*min=new double[col];
    for(int i=0;i<col;i++)
    {
        max[i]=b[i][row-1];
        min[i]=b[i][0];
    }

    //方差
    double*fangcha=new double[col];
    for(int i=0;i<col;i++)
    {
        double sum=0;
        for(int j=0;j<row;j++)
        {
            sum=sum+(b[i][j]-average[i])*(b[i][j]-average[i]);
        }
        fangcha[i]=(double)sum/row;
    }

    // //cout b
    // for(int i=0;i<col;i++)
    // {
    //     for(int j=0;j<row;j++)
    //     {
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //cout ans
    // for(int i=0;i<col;i++)
    // {
    //     cout<<fixed<<setprecision(2)<<average[i]<<',';
    //     cout<<fixed<<setprecision(2)<<zhongweishu[i]<<',';
    //     cout<<fixed<<setprecision(2)<<max[i]<<',';
    //     cout<<fixed<<setprecision(2)<<min[i]<<',';
    //     cout<<fixed<<setprecision(2)<<fangcha[i];
    //     if(i<col-1)
    //     {
    //         cout<<endl;
    //     }
    // }

    //fout
    ofstream fout("output.csv");
    if(!fout)
    {
        cout<<"unable to open"<<endl;
        return 1;
    }
    for(int i=0;i<col;i++)
    {
        fout<<fixed<<setprecision(2)<<average[i]<<',';
        fout<<fixed<<setprecision(2)<<zhongweishu[i]<<',';
        fout<<fixed<<setprecision(2)<<max[i]<<',';
        fout<<fixed<<setprecision(2)<<min[i]<<',';
        fout<<fixed<<setprecision(2)<<fangcha[i];
        if(i<col-1)
        {
            fout<<endl;
        }
    }
    fout.close();

    //delete
    for(int i=0;i<row;i++)
    delete[] a[i];
    delete[] a;
    for(int i=0;i<col;i++)
    delete[] b[i];
    delete[] b;

    delete[] average;
    delete[] zhongweishu;
    delete[] max;
    delete[] min;
    delete[] fangcha;
    return 0;
}