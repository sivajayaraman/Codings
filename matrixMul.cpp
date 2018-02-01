#include <iostream>
using namespace std;
int main()
{
	int row1,row2,column1,column2,i_index,j_index,k_index,sum=0;
	cout<<"Enter the number of Rows in First Matrix    :";
	cin>>row1;
	cout<<"Enter the number of Columns in First Matrix :";
	cin>>column1;
	cout<<"Enter the number of Rows in First Matrix    :";
	cin>>row2;
	cout<<"Enter the number of Columns in First Matrix :";
	cin>>column2;
	if(row2!=column1)
	{
		cout<<"Matrix Multiplication Not Possible!"<<endl;
	}
	else
	{
		int firstMatrix[row1][column1],secondMatrix[row2][column2],product[row1][column2];
        cout<<"Enter the First Matrix Elements of Order "<<row1<<" x "<<column1<<endl;
        for(i_index=0;i_index<row1;i_index++)
        {
        	for(j_index=0;j_index<column1;j_index++)
        	{
        		cin>>firstMatrix[i_index][j_index];
        	}
        }
        cout<<"The First Matrix ...."<<endl;
        for(i_index=0;i_index<row1;i_index++)
        {
        	for(j_index=0;j_index<column2;j_index++)
        	{
        		cout<<firstMatrix[i_index][j_index]<<"\t";
        	}
        	cout<<endl;
        }
        cout<<"Enter the Second Matrix Elements of Order "<<row2<<" x "<<column2<<endl;
        for(i_index=0;i_index<row2;i_index++)
        {
        	for(j_index=0;j_index<column2;j_index++)
        	{
        		cin>>secondMatrix[i_index][j_index];
        	}
        }
        cout<<"The Second Matrix ...."<<endl;
        for(i_index=0;i_index<row1;i_index++)
        {
        	for(j_index=0;j_index<column2;j_index++)
        	{
        		cout<<secondMatrix[i_index][j_index]<<"\t";
        	}
        	cout<<endl;
        }
        cout<<"The Product Matrix is of Order "<<row1<<" x "<<column2<<endl;
        for(i_index=0;i_index<row1;i_index++)
        {
        	for(j_index=0;j_index<column1;j_index++)
        	{
        		for(k_index=0;k_index<row2;k_index++)
        		{
        			sum=sum+firstMatrix[i_index][k_index]*secondMatrix[k_index][j_index];
        		}
        		product[i_index][j_index]=sum;
        		sum=0;
        	}
        }
        for(i_index=0;i_index<row1;i_index++)
        {
        	for(j_index=0;j_index<column2;j_index++)
        	{
        		cout<<product[i_index][j_index]<<"\t";
        	}
        	cout<<endl;
        }
	}
	return 0;
}