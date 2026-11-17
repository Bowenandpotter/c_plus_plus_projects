#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream fin("input.txt");
    if(!fin)
    {
        cout<<"unable to open"<<endl;
        return 1;
    }

    //n,m,录入s
    int n,m;
    fin>>n>>m;
    string *s=new string[m];
    for(int i=0;i<m;i++)
    {
        fin>>s[i];
    }

    //判断指令是否可用，从0-7分别是inbox-jumpifzero
    bool *appliable=new bool[8]();
    for(int i=0;i<m;i++)
    {
        if(s[i]=="inbox")appliable[0]=1;
        if(s[i]=="outbox")appliable[1]=1;
        if(s[i]=="add")appliable[2]=1;
        if(s[i]=="sub")appliable[3]=1;
        if(s[i]=="copyto")appliable[4]=1;
        if(s[i]=="copyfrom")appliable[5]=1;
        if(s[i]=="jump")appliable[6]=1;
        if(s[i]=="jumpifzero")appliable[7]=1;
    }

    //k行指令
    int k;
    fin>>k;
    char o;
    fin.get(o);//o用来带走k后面的换行符，从而getline从下一行开始
    string*command=new string[k];
    for(int i=0;i<k;i++)
    {
        getline(fin,command[i]);
    }
    fin.close();

    //采用correct数组表示每个指令的正确性,1正确,0错误
    int*correct=new int[k];
    for(int i=0;i<k;i++)
    {
        correct[i]=1;
    }

    for(int i=0;i<k;i++)
    {
        //inbox & outbox
        if(command[i].find("inbox")==0&&appliable[0])
        {
            if(command[i]!="inbox")
            {
                correct[i]=0;
            }
        }
        else if(command[i].find("outbox")==0&&appliable[1])
        {
            if(command[i]!="outbox")
            {
                correct[i]=0;
            }
        }

        //add,sub,copyto,copyfrom
        else if(command[i].find("add")==0&&appliable[2])
        {
            if(command[i]=="add")
            {
                correct[i]=0;
            }
            else
            {
                int num=0;
                string tem=command[i];
                tem.erase(0,4);
                for(int j=0;j<tem.size();j++)
                {
                    num=num*10+tem[j]-'0';
                }
                if(!(num>=0&&num<=n-1))
                {
                    correct[i]=0;
                }
            }
        }
        else if(command[i].find("sub")==0&&appliable[3])
        {
            if(command[i]=="sub")
            {
                correct[i]=0;
            }
            else
            {
                int num=0;
                string tem=command[i];
                tem.erase(0,4);
                for(int j=0;j<tem.size();j++)
                {
                    num=num*10+tem[j]-'0';
                }
                if(!(num>=0&&num<=n-1))
                {
                    correct[i]=0;
                }
            }
        }
        else if(command[i].find("copyto")==0&&appliable[4])
        {
            if(command[i]=="copyto")
            {
                correct[i]=0;
            }
            else
            {
                int num=0;
                string tem=command[i];
                tem.erase(0,7);
                for(int j=0;j<tem.size();j++)
                {
                    num=num*10+tem[j]-'0';
                }
                if(!(num>=0&&num<=n-1))
                {
                    correct[i]=0;
                }
            }
        }
        else if(command[i].find("copyfrom")==0&&appliable[5])
        {
            if(command[i]=="copyfrom")
            {
                correct[i]=0;
            }
            else
            {
                int num=0;
                string tem=command[i];
                tem.erase(0,9);
                for(int j=0;j<tem.size();j++)
                {
                    num=num*10+tem[j]-'0';
                }
                if(!(num>=0&&num<=n-1))
                {
                    correct[i]=0;
                }
            }
        }
        
        //jump,jumpifzero
        else if(command[i].find("jump")==0&&command[i].find("jumpifzero")!=0&&appliable[6])
        {
            if(command[i]=="jump")
            {
                correct[i]=0;
            }
            else
            {
                int num=0;
                string tem=command[i];
                tem.erase(0,5);
                for(int j=0;j<tem.size();j++)
                {
                    num=num*10+tem[j]-'0';
                }
                if(!(num>=1&&num<=k))
                {
                    correct[i]=0;
                }
            }
        }
        else if(command[i].find("jumpifzero")==0&&appliable[7])
        {
            if(command[i]=="jumpifzero")
            {
                correct[i]=0;
            }
            else
            {
                int num=0;
                string tem=command[i];
                tem.erase(0,11);
                for(int j=0;j<tem.size();j++)
                {
                    num=num*10+tem[j]-'0';
                }
                if(!(num>=0&&num<=k))
                {
                    correct[i]=0;
                }
            }
        }
        else
        {
            correct[i]=0;
        }
    }

    // for(int i=0;i<k;i++)
    // {
    //     cout<<command[i]<<endl;
    //     cout<<correct[i]<<endl;
    // }

    ofstream fout("output.txt");
    if(!fout)
    {
        cout<<"unable to open"<<endl;
        return 1;
    }
    for(int i=0;i<k;i++)
    {
        if(correct[i]==1)
        {
            fout<<"OK";
        }
        else if(correct[i]==0)
        {
            fout<<"Error";
        }
        if(i!=k-1)
        {
            fout<<endl;
        }
    }
    fout.close();

    //delete
    delete[] s;
    delete[] appliable;
    delete[] command;
    delete[] correct;
    return 0;
}