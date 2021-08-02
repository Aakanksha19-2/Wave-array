#include<iostream>
using namespace std;

class wave_array{
	
	public:
		int n;
		int a[];
		int get_array(int arr[],int n1){
			
			n=n1;
			a[n] = arr[n1];
			cout<<"enter the size of the array"<<endl;
			cin>>n;
			cout<<"Now insert the array"<<endl;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		
		int convt_to_wave()
		{
			int temp;
			for(int i=0;i<n-1; i+=2)
			{
				temp = a[i];
				a[i]= a[i+1];
				a[i+1] = temp;
			}
			cout<<"And the wave array is : ";
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
		}
};

int main()
{
	wave_array w;
	int n;
	int array[n];
	w.get_array(array, n);
	w.convt_to_wave();
	
	return 0;
}

