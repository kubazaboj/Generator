#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
const int pocet_cisel = 10;
int cisla [pocet_cisel];
void generator()
{

    srand( (unsigned) time(NULL));
    for(int i = 0; i<= pocet_cisel; i++){

        cisla[i] = rand() % 100 + 1;

    }
}
void vypis()
{

    for(int i=0; i<= pocet_cisel; i++){

        cout << cisla[i] << "  ";

    }

    cout << endl;
    cout << endl;
}
void bubble_sort()
{
    int p;
    for(int i = 0; i<= pocet_cisel; i++){
        for(int j = 0; j<= pocet_cisel; j++){
            if(cisla[j] > cisla[j+1]){
                p = cisla[j+1];
                cisla[j+1] = cisla[j];
                cisla[j] = p;
            }
        }
    }
}
int main()
{
    generator();
    vypis();
    bubble_sort();
    vypis();
    return 0;
}
