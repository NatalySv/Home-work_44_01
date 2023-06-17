#include <QCoreApplication>
#include <iostream>
#include <windows.h>
#include <vector>
#include <QMetaMethod>
using namespace std;


void rand_num(std::array<int, 10> &mymass)
{
    for (int i = 0; i < 10; i++)
    {
        mymass[i] = rand () %20;
        cout << mymass[i] << " ";
    }
    cout << std::endl;
    return;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 10;
    srand(time(NULL));
    qDebug() << "Вхідний масив 1: \n";
    array<int, size> m1;
    rand_num(m1);

    qDebug() << "Вхідний масив 2: \n";
    array<int, size> m2;
    rand_num(m2);
    
    qDebug() << "\nСпільні елементи масивів 1 і 2: \n";
    vector<int> v12;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ( *(m1.begin()+i) == *(m2.begin()+j) )
            {
                cout << *(m1.begin()+i) << " ";
                v12.push_back( *(m1.begin()+i));
                break;

            }

        }

    }

    return a.exec();
}
