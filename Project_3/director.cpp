#include "director.h"

// ���� ������ ��� ����
Vacation* Director::vacation = 0;
// Ŭ���̾�Ʈ�� ȣ���� ���� ��� �Լ� ����
void Director::book(int packageType)
{
    if (packageType == 1)
    {
        vacation = new Package1();
    }
    else if (packageType == 2)
    {
        vacation = new Package2();
    }
    else if (packageType == 3)
    {
        vacation = new Package3();
    }
    cout << "This is information about your vacation:" << endl;
    vacation->bookHotels();
    vacation->bookFlights();
    vacation->bookTours();
}