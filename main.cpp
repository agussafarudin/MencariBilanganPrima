#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    cout << "____Menampilkan Bilangan Prima dari 1 s/d 100_____ \n \n";
    for (i=1;i<=100;i++)
    {
        k=0;
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                k+=1;
            }
        }
        if (k==2)
        {
            cout << i << " ";
        }
    }
    cout <<"\n \n";
    return 0;
}
