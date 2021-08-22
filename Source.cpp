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
        cout << "������ : ";
        getline(cin, model);
        cout << "\n���� : ";
        getline(cin, color);
        cout << "\n����� : ";
        getline(cin, number);
        
    }
    void Print()
    {
        
        cout << "������ : " << model;
        cout << "\n���� : " << color;
        cout << "\n����� : " << number;
        
    }
    void Edit()
    {
        system("cls");
        cin.ignore();
        cout << "********************" << endl;
        cout << "������ : ";
        getline(cin, model);
        cout << "\n���� : ";
        getline(cin, color);
        cout << "\n����� : ";
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
        cout << "\t\t<<������ ����� � ������>>";
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
        cout << "������� ����� ���� ������� ������ ����� : ";
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
        cout << "������� ����� ���� ������� ������ ������������� : ";
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
    
    cout << endl << endl << "������� ��������" << endl << "==========" <<
        endl << endl <<
        "����� - 0" << endl << "������������� ������ - 1" << endl <<
        "����� ����� - 2" << endl << "������ �� ������ - 3" << endl;
    cin >> num;
    

    switch (num)
    {
    case 0:
        cout << "�����" << endl;
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
        cout << "�������� �� ������!";
        break;
    }


}

/*������� 4:
����������� ��������� ������� (����, ������, �����). ����� ������ ����� ������������ �� ���� ��� ����������� ����� ��� ����� �� 8 ��������.
������������: ����� ����������� ��� �����������.
������� ��������� ��������� ������� � ����������� ��� ���� ��������� �������:
���������� ������
������ ������
������� ������ �� 10 ����������� ��������� ������� � ����������� ��� ���� ��������� �������:
������������� ������
������ ���� �����
����� ������ �� ������*/