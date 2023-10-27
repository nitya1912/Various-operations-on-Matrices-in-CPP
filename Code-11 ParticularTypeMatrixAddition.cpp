#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    int matrix1[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    int matrix2[4][3]={{12,11,10},{9,8,7},{6,5,4},{3,2,1}};

    int add[4][3];

    //For addition of matrix
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
          add[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<add[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}


