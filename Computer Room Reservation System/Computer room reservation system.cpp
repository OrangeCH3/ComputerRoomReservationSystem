#include <iostream>
using namespace std;


int main()
{
    int select = 0;

    while (true)
    {
        // cout << "======================  ��ӭ�������ǲ��ͻ���ԤԼϵͳ  =====================" << endl;
        cout << endl << "������������ݣ�" << endl;
        cout << "\t\t -------------------------------\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          1.ѧ������           |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          2.��    ʦ           |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          3.�� �� Ա           |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          0.��    ��           |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t -------------------------------\n";
        cout << "����������ѡ��: ";

        cin >> select;  // �����û���ѡ��

        switch (select)
        {
        case 1:  // ѧ�����

            break;
        case 2:  // ��ʦ���

            break;
        case 3:  // ����Ա���

            break;
        case 0:  // �˳�ϵͳ
            cout << "��ӭ�´�ʹ�ã�" << endl;
            system("pause");
            return 0;
            break;
        default:
            cout << "�����������������룡" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
    

	system("pause");

	return 0;

}