#include <iostream>
using namespace std;

int partition(int a[], int s, int e)
{

	int p = a[s];

	int count = 0;
	for (int i = s + 1; i <= e; i++) {
		if (a[i] <= p)
			count++;
	}
	
	int Index = s + count;
	swap(a[Index], a[s]);

	int i = s, j = e;

	while (i < Index && j > Index) {

		while (a[i] <= p) {
			i++;
		}

		while (a[j] > p) {
			j--;
		}

		if (i < Index && j > Index) {
			swap(a[i++], a[j--]);
		}
	}

	return Index;
}

void QSort(int a[], int s, int e)
{

	if (s >= e)
		return;
	int d = partition(a, s, e);
	QSort(a, s, d - 1);
	QSort(a, d + 1, e);
}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int sum=x+y+z;
    int temp[sum];
    int i=0,k=0;
    int a[x],b[y],c[z];
    for(i=0;i<x;i++)
    {
        cin>>a[i];
        temp[k]=a[i];
        k++;
    }
    for(i=0;i<y;i++)
    {
        cin>>b[i];
        temp[k]=b[i];
        k++;
    }
    for(i=0;i<z;i++)
    {
        cin>>c[i];
        temp[k]=c[i];
        k++;
    }
    QSort(temp,0,k-1);
    int count=0;
    int result[sum];
    int m=0;
    for(i=0;i<k;)
    {
        int co=1;
        while(temp[i]==temp[i + 1])
        {
            co++;
            i++;
        }
        
        if(co>=2)
        {
            count++;
            result[m]=temp[i];
            m++;
        }
        i++;
    }
    cout<<count<<endl;;
    for(i=0;i<m;i++)
    {
        cout<<result[i]<<endl;
    }
    

	return 0;
}
