#include<iostream>
using namespace std;

int main()
{
    // int myarray[5][5];
    // int myarray1[2][2]={1,2,3,4};
    int myarray2[3][3]={{1,1,1},{2,2,2},{3,3,3}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<myarray2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
