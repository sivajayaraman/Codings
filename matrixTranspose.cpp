#include <iostream>
using namespace std;
int main()
{
	int row,column,i_index,j_index;
	cout<<"Enter the number of Rows in Matrix    :";
	cin>>row;
	cout<<"Enter the number of Columns in Matrix :";
	cin>>column;
        int firstMatrix[row][column],transposeMatrix[column][row];
        cout<<"Enter the Matrix Elements of Order "<<row<<" x "<<column<<" to find Transpose."<<endl;
        for(i_index=0;i_index<row;i_index++)
        {
        	for(j_index=0;j_index<column;j_index++)
        	{
        		cin>>firstMatrix[i_index][j_index];
        	}
        }
        cout<<"The Given Matrix...."<<endl;
        for(i_index=0;i_index<row;i_index++)
        {
                for(j_index=0;j_index<column;j_index++)
                {
                        cout<<firstMatrix[i_index][j_index]<<"\t";
                }
                cout<<endl;
        }
        cout<<"The Transpose Matrix is of Order "<<column<<" x "<<row<<endl;
        for(i_index=0;i_index<row;i_index++)
        {
        	for(j_index=0;j_index<column;j_index++)
        	{
                        transposeMatrix[j_index][i_index]=firstMatrix[i_index][j_index];
        	}
        }
        for(i_index=0;i_index<column;i_index++)
        {
        	for(j_index=0;j_index<row;j_index++)
        	{
        		cout<<transposeMatrix[i_index][j_index]<<"\t";
        	}
        	cout<<endl;
        }
	return 0;
}