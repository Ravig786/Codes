#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        b[0] = 1;
        c[n - 1] = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= a[i - 1] && i > 0)
            {
                b[i] = b[i - 1] + 1;
            }
            else
            {
                b[i] = 1;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] >= a[i + 1] && i < n - 1)
            {
                c[i] = c[i + 1] + 1;
            }
            else
            {
                c[i] = 1;
            }
        }
        int ch = 0;
        for (int i = 0; i < n; i++)
        {
            //   ch = b[i] + c[i] -1;
            if (b[i] + c[i] - 1 >= ch)
            {
                ch = b[i] + c[i] - 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << "     " << c[i] << endl;
        }
        //   cout << ch << endl;

        //        for(int i=0; i<n; i++)
        //        {
        //            cout<<c[i]<<" ";
        //        }
    }
    return 0;
}
