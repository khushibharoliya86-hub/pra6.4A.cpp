#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{

   short int i=0,j=0,k=0,a=3,b=3,c=3;
   int M1[3][3], M2[3][3], M3[3][3];


    cout<<"****************************************************\n";
    cout<<"MATRIX MULTIPLICATION\n";
    cout<<"****************************************************\n";
    cout<<endl;

        // INPUT FIRST MATRIX
    cout<<"First Matrix\n";

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout<<"Enter Ele"<<i<<j<<":";
            cin>>M1[i][j];
        }

    }

         // INPUT SECOND MATRIX
    cout<<"Second Matrix\n";

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout<<"Enter Ele"<<i<<j<<":";
            cin>>M2[i][j];
        }

    }
    cout<<"----------------------------------\n";
    cout<<"----------------------------------\n";
    cout<<"----------------------------------\n";
    // DISPLAY FIRST MATRIX
    cout<<"First Matrix\n";

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout<<M1[i][j]<<" ";
        }
        cout<<endl;

    }
    // DISPLAY SECOND MATRIX
    cout<<"Second Matrix\n";

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout<<M2[i][j]<<" ";
        }
        cout<<endl;

    }



       //RESULTANT MATRIX
    cout<<"Resultant Matrix\n";

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<c; j++)
        {
            M3[i][j]=0;
            for(int k=0; k<b; k++)
            {
                M3[i][j]+=M1[i][k]*M2[k][j];
            }
        }
    }

    //DISPLAY RESULTANT MATRIX
    for(int i=0; i<a; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<M3[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
