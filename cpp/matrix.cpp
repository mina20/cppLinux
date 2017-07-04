#include<iostream>
using namespace std;
class Cmatrix
{ 
  int i,j,c,r;
  public:
  int a[4][4];
  
};
int main()
  {
    int i,j,r,c;
    int a[4][4];
    cout<<"Enter tne number of rows and colume"<<endl;
    cin>>r>>c;
    cout<<"Enter element of matrix"<<endl;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
    
    cout<< a[i][j]<<"\t";
    }
    cout<<endl;
    }
    return 0;
 }

