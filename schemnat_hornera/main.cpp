#include <iostream>
using namespace std;

int horner_iteracyjny(int tab[], int stopien, int x)
{
    int temp=tab[0];
    for(int i=0; i<stopien; i++)
    {
        temp*=x;
        temp+=tab[i+1];
    }
    return temp;
}

int horner_rekurencyjny(int tab[],int stopien, int x)
{
    if (stopien==0)
        return tab[0];
    else
        return x*horner_rekurencyjny(tab, stopien-1, x)+tab[stopien];
}

int main() {
    //2x^3-3x^2+6x-1
    //x*(x*(2x-3)+6)-1
    float x=7;
    int tab[]={2,-3,6,-1};
    int stopien=3;
    
    //int temp=tab[0];
    //for(int i=0; i<stopien; i++)
    //{
        //temp*=x;
        //temp+=tab[i+1];
    //}
    //cout << temp << endl;
    cout << horner_iteracyjny(tab, stopien, x)<<endl;
    cout << horner_rekurencyjny(tab, stopien, x) << endl;
    
    return 0;
}
