#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    using namespace std;

    const int n = 7;
    int a[n];
    int temp;
    int k;

    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 101 - 50;
        cout << a[i] << " ";
    }

    cout << endl;
    cout << "Введите число k: ";
    cin >> k;

    for (int i = 0; i < k; ++i) //сдвиг массива влево k раз
    {
        temp = a[0];
        for (int j = 0; j < (n - 1); j++)
        {
            a[j] = a[j + 1];
        }
        a[n - 1] = temp; 
    }

    for (int i = 0; i < n; i++) //вывод массива
    {
        cout << a[i] << " ";
    }
}
