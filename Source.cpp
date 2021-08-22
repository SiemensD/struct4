#include <iostream>
#include<string>
#include<string.h>

using namespace std;


struct Car 
{
    string color;
    string model;
    string number;

    Car()
    {
        cout << "********************" << endl;
        cout << "Модель : ";
        getline(cin, model);
        cout << "\nЦвет : ";
        getline(cin, color);
        cout << "\nНомер : ";
        getline(cin, number);
        
    }
    void Print()
    {
        
        cout << "Модель : " << model;
        cout << "\nЦвет : " << color;
        cout << "\nНомер : " << number;
        
    }
    void Edit()
    {
        system("cls");
        cin.ignore();
        cout << "********************" << endl;
        cout << "Модель : ";
        getline(cin, model);
        cout << "\nЦвет : ";
        getline(cin, color);
        cout << "\nНомер : ";
        getline(cin, number);
    }

};

struct CarGarag
{
private:
    int size = 3;
    Car* ArrGarag = new Car[size];

public:
    CarGarag()
    {
        for (int i = 0; i < size; i++)
        {
            ArrGarag[i];
        }
    }

    void Print()
    {
        system("cls");
        cout << "\t\t<<Список машин в гараже>>";
        for (int i = 0; i < size; i++)
        {
            cout << endl;
            cout << "#>-------------<Automobile #" << i + 1 << ">-------------<#";
            cout << endl;
            ArrGarag[i].Print();
        }

        cout << endl;
        cout << endl;
    }

    void Search()
    {
        string temp;
        cout << "Введите номер авто которую хотите найти : ";
        cin>>temp;
       
        for (int i = 0; i < size; i++)
        {
            if (ArrGarag[i].number == temp)
            {
                cout << endl;
                cout << "#>-------------<Automobile #" << i+1 << ">-------------<#" << endl;;
                ArrGarag[i].Print();
            }
        }
        cout << endl;
        cout << endl;
    }
    void Edit()
    {
        int i;
        system("cls");
        cout << "Введите номер авто которую хотите редактировать : ";
        cin>>i;
        ArrGarag[i-1].Edit();
        cout << "#>-------------<Automobile #" << i  << ">-------------<#"<<endl;
        ArrGarag[i - 1].Print();

    }
       
};


void main()
{
    setlocale(0, "");
   
    int num; 
    
    CarGarag a;
    
    cout << endl << endl << "Выбрать действие" << endl << "==========" <<
        endl << endl <<
        "Выйти - 0" << endl << "Редактировать машину - 1" << endl <<
        "Вывод машин - 2" << endl << "Искать по номеру - 3" << endl;
    cin >> num;
    

    switch (num)
    {
    case 0:
        cout << "ВЫХОД" << endl;
        break;
    case 1:
        a.Edit(); 
        break;
    case 2:
        a.Print();
        break;
    case 3:
        a.Search();
        break;
    default:
        cout << "значение не верное!";
        break;
    }


}

/*Задание 4:
Реализовать структуру «Машина» (цвет, модель, номер). Номер машины может представлять из себя или пятизначный номер или слово до 8 символов.
Рекомендации: номер реализовать как объединение.
Создать экземпляр структуры «Машина» и реализовать для него следующие функции:
Заполнение машины
Печать машины
Создать массив из 10 экземпляров структуры «Машина» и реализовать для него следующие функции:
Редактировать машину
Печать всех машин
Поиск машины по номеру*/