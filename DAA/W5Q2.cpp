#include<iostream>
#include<algorithm>
using namespace std;

void solve(int a[], int n,int key)
{
    sort(a,a+n);

     int left = 0;
    int right = n - 1;
    bool found = false;

    while (left < right) {
        int sum = a[left] + a[right];

        if (sum == key) {
            cout << a[left] << " " << a[right] << endl;
            found = true;
            break;
        } else if (sum < key) {
            left++;
        } else {
            right--;
        }
    }

    if (!found) {
        cout << "No Such Elements Exist" << endl;
    }

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int key;
        cin>>key;

        solve(a,n,key);
    }

    return 0;
}