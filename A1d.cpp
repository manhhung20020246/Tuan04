#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;
void initRandomArray(int *A, int n, int k) {
    srand(time(NULL));
    int randNum = 0;
    for (int i = 0; i < n; i++) {
        randNum = rand() % k;
        A[i] = randNum;
    }
}
int main (){
	 int *A, temp;
    int n = 100; /* so luong phan tu cua mang */
    int k = 10000; /* moi phan tu co gia tri ngau nhien nam tu 0-k */
    A = new int[n]; // cap phat bo nho cho mang A
    initRandomArray(A, n, k);
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i] > A[j])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
    for (int i = 0; i < n; i++) {
        cout << A[i] <<" ";
    }
    cout << endl;
    delete[]A; // xoa bo nho 
    return 0;
}
