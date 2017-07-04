#include<iostream>
using namespace std;

 Cmatrix::Cmatrix(int row, int col)
  {
    m=row;
    n=col;
    p=new int*[m];
    for(int i=0;i<m;i++)
     {
        p[i]=new int[n];
        for(int j=0;j<n;j++)
         p[i][j]=0;
    }
 } 
  void Cmatrix::accept()
  {
    cout<<"Enter matrix elements: ";
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        cin>>p[i][j];
      }
    }
 }
  void Cmatrix::display()
 {
   cout<<"The matrix is:\n ";
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
     {
       cout<<p[i][j]<<" ";
     }
       cout<<endl;
  }    
}


