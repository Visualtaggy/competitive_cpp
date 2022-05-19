    #include <iostream>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int data;
        cin >> data;

        // write your code here

        int low = 0;
        int high = n - 1;
        int firstIndex = -1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (arr[mid] > data)
            {
                high = mid - 1;
            }
            else if (arr[mid] < data)
            {
                low = mid + 1;
            }
            else
            {
                firstIndex = mid;
                high = mid - 1;
            }
        }
        cout<<firstIndex<<endl;
        low = 0;
        high = n - 1;
        int lastIndex = -1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (arr[mid] > data)
            {
                high = mid - 1;
            }
            else if (arr[mid] < data)
            {
                low = mid + 1;
            }
            else
            {
                lastIndex = mid;
                low = mid + 1;
            }
        }
        cout<<lastIndex<<endl;
    }