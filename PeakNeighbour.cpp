#include<iostream>
using namespace std;

int main()
{
    cout << "Number of inputs in the array: "<<endl;
    int num;
    cin >> num;
    int arr[num];
    int count =0;
    for(int i = 0; i<num; i++)
    {
        cin >> arr[i];
    }

    //We have to find the numbers of Peak Neighbour from the array
    if(num == 1)
    {
        cout << "Number of Peak value is : 1 at 0 Index"<< endl;
        return 0;
    }
  

    

    for(int i = 0; i<num; i++)
    {
        if(i==0)
        {
            if(arr[i]>arr[i+1])
            {
                count++;
                cout << "Number of Peak Value is : " << count << " at index : "<< i << endl;
            }
            
        }
        else if(i == num-1)
        {
            if(arr[num-1]>arr[num-2])
            {
                count++;
                cout << "Number of Peak Value is : " << count << " at index : "<< i << endl;
            }
        }
        else 
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                count++;
                cout << "Number of Peak Value is : " << count << " at index : "<< i << endl;
            }
        }

    }

}