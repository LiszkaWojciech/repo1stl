// kolo2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<iostream>
using namespace std;
void sortowanie(int n, int tab[])
{
    int min = 0;
    int max = n-1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-i; j++)
        {
            if (tab[i]>tab[max])
            {
                max = i;
            }
            if (tab[i]<tab[min])
            {
                min = i;
            }
        }
        swap(tab, i, min);
        swap(tab , n - 1 - i, max);
    }
}

void swap(int tab[], int a, int b) 
{
    int temp = tab[a];
    tab[a] = tab[b];
    tab[b] = temp;
}



int main()
{
   
    int tab[10];


    for (int i = 0; i < 10; i++)
    {
        cout << "Podaj element: \n ";
        cin >> tab[i];
    }
    sortowanie(10, tab);
 
 
    return 0;
}