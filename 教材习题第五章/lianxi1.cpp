#include <iostream>
using namespace std;

int find_max(int s[], int n);
int find_min(int s[], int n);

int main(){
    int score[10]={0};
    int average,total = 0;
    for(int i = 0 ; i < 10 ; i++)
    {
        cout << "the score of the "<<i+1 <<"th judge" ;
        cin >> score[i];
        total=total+score[i];
    }
    average = (total - find_max(score,10) - find_min(score,10))/8;
    cout << average << endl;
}

int find_max(int s[],int n)
{
    int max = s[0];
    for(int i=0;i<n;i++)
    {
        if(max<s[i])
        {
            max = s[i];
        }
    }
    return max;
}
int find_min(int s[],int n)
{
    int min = s[0];
    for(int i=0;i<n;i++)
    {
        if(min>s[i])
        {
            min = s[i];
        }
    }
    return min;
}