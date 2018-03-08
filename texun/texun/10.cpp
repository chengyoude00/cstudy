#include <iostream>
#include <fstream>
using namespace std;
void Matrix(double *A,double*B,double *C,int m,int k,int n)
{
	//C[m][n] = A[m][k] * B[k][n];
	for (int i = 0; i < m; i++)
	{


		for (int j = 0, sum; j < m; j++)
		{
			sum = i*n + j;
			C[sum] = 0.0;
			for (int t = 0; t < k; t++)
			{
				C[sum] += A[i*k + t] * B[t*n + j];

			}

		}
	}
}
void Showmatrix(double *M,int row,int col)
{
	for (int i = 0; i < row*col; i++)
	{
		cout << *M<< "";
		M++;
		if ((i+1)%col==0)
		{
			cout << endl;

		}

	}
}
void ReadMatrix(double *M, int row, int col, ifstream&infile)
{
	for (int i = 0; i < row*col; i++)
	{
		infile >> *M++;}

}

int main()
{
	cout << "矩阵乘法C=AB"<< endl;
	int m, k, n;
	double *A,*B,*C;
	ifstream in("矩阵数据.txt");
	if (in)//有问题
	{
		cout << "打开文件失败，返回..."<< endl;
		return 0;

	}
	in >>m >>k ;
	A = new double[m*k];
	ReadMatrix(A, m, k, in);
	int temp = k;
	in >>k >>n ;
	B = new double[k*n];
	cout <<"矩阵A：" << endl;
	Showmatrix(A,m,k);
	cout << "矩阵B："<< endl;
	Showmatrix(B,k,n);
	in.close();
	if (k==temp)
	{
		C = new double[m*n];
		Matrix(A,B,C,m,k,n);
		cout << "矩阵C："<< endl;
		Showmatrix(C,m,n);
		delete[]C;

	}
	else
	{
		cout << "不满足乘法条件\n";
	}
	delete[]A;
	delete[]B;

	system("pause");
	return 0;
}