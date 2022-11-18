#include <iostream>
using namespace std;
int nhappt(int &n, int a[100])
{
    cout << "so phan tu can nhap : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "nhap vao phan tu " << i + 1 << ":";
        cin >> a[i];
    }
    return 0;
}
int ppchon(int n, int a[100])
{
    for (int i = 0; i < n; i++)
    {
        int max = a[i];
        int vtrimax = i;
        int traodoi = a[i];
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
                vtrimax = j;
            }
        }
        a[i] = a[vtrimax];
        a[vtrimax] = traodoi;
    }
    return 0;
}
int noibot(int n, int a[100])
{
    for (int i = n - 1; i >= 0; i--)
    {
        int max = a[i];
        int vtrimax = i;
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[i])
            {
                int traodoi = a[i];
                max = a[j];
                vtrimax = j;
                a[i] = max;
                a[vtrimax] = traodoi;
            }
        }
    }
    return 0;
}
int main()
{
    int a[100], n, chonchucnang;
    nhappt(n, a);
    cout << "Nhan Phim 1 de sap xep kieu chon\nNhan phim 2 de sap xep kieu noi bot : ";
    cin >> chonchucnang;
    switch (chonchucnang)
    {
    case (1):
        ppchon(n, a);
        break;
    case (2):
        noibot(n, a);
        break;
    default:
        cout << "nhap sai chuc nang";
        break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << " | "<< a[i] << " | ";
    }
    return 0;
}
