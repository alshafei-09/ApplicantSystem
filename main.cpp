#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class clsPerson
{
private:
    string _FirstName = "-";
    string _LastName = "-";
    int _Age = 0;
    string _PhoneNumber = "-";
    string _Address = "-";
    string _ReadString(string Text)
    {
        string str;
        cout << Text;
        getline(cin, str);
        return str;
    }
    bool _CheckIfStringIsDigit(string str)
    {
        for (char C : str)
        {
            if (!isdigit(C))
                return 0;
        }

        return !str.empty();
    }

public:
    void setFirstName(string FirstName = "")
    {
        _FirstName = FirstName.empty() ? _ReadString("Enter your First Name: ") : FirstName;
    }
    string getFirstName()
    {
        return _FirstName;
    }
    void PrintFirstName()
    {
        cout << "\nFirst Name: " << _FirstName;
    }

    void setLastName(string LastName = "")
    {
        _LastName = LastName.empty() ? _ReadString("Enter your Last Name: ") : LastName;
    }
    string getLastName()
    {
        return _LastName;
    }
    void PrintLastName()
    {
        cout << "\nLast Name: " << _LastName;
    }

    void setAge(int Age = 0)
    {
        string tempAge = "";
        if (Age == 0)
        {
            do
            {
                tempAge = _ReadString("Enter your Age: ");
                if (_CheckIfStringIsDigit(tempAge))
                {
                    _Age = stoi(tempAge);
                    break;
                }
                else
                    cout << "Must be a NUMBER!..\n";
            } while (1);
        }
        else if (Age > 0)
            _Age = Age;
    }
    int getAge()
    {
        return _Age;
    }
    void PrintAge()
    {
        cout << "\nAge: ";
        if (_Age == 0)
            cout << "-";
        else
            cout << _Age;
    }

    void setPhoneNumber(string PhoneNumber = "")
    {
        if (PhoneNumber.empty())
        {
            do
            {
                _PhoneNumber = _ReadString("Enter your Phone Number: ");
                if (_CheckIfStringIsDigit(_PhoneNumber))
                    break;
                else
                    cout << "Must be a NUMBER!..\n";
            } while (1);
        }
        else if (_CheckIfStringIsDigit(PhoneNumber))
            _PhoneNumber = PhoneNumber;
    }
    string getPhoneNumber()
    {
        return _PhoneNumber;
    }
    void PrintPhoneNumber()
    {
        cout << "\nPhone Number: " << _PhoneNumber;
    }

    void setAddress(string Address = "")
    {
        _Address = Address.empty() ? _ReadString("Enter your Address: ") : Address;
    }
    string getAddress()
    {
        return _Address;
    }
    void PrintAddress()
    {
        cout << "\nAddress: " << _Address;
    }

    void PrintInformationCard()
    {
        cout << "-------------------------------------";
        cout << "\n  First Name  : " << _FirstName;
        cout << "\n  Last Name   : " << _LastName;
        cout << "\n  Full Name   : " << _FirstName;
        if (_LastName != "-")
            cout << " " << _LastName;
        cout << "\n  Age         : ";
        if (_Age == 0)
            cout << "-";
        else
            cout << _Age;
        cout << "\n  Phone Number: " << _PhoneNumber;
        cout << "\n  Address     : " << _Address;
        cout << "\n-------------------------------------\n";
    }

    void VerifyingAcceptance()
    {
        cout << "\n\nWelcome " << _FirstName << " " << _LastName << endl;
        if (_Age < 18)
        {
            cout << "Sorry you are rejected.\n";
            cout << "If we need you, we will contact you...";
            PrintPhoneNumber();
        }
        else
        {
            cout << "Congratulations!, You are accepted.\n";
            cout << "We will send you a gift in you Address.";
            PrintAddress();
        }
    }
};

int main()
{
    clsPerson P1, P2;

    P1.setFirstName("Ahmed");
    P1.setLastName("Ali");
    P1.setAge(21);
    P1.setPhoneNumber("01273243445");
    P1.setAddress("Egypt, Cairo, 134st");

    P1.PrintInformationCard();
    P1.VerifyingAcceptance();

    cout << "\n\n";
    system("pause");
    system("cls");
    P2.setFirstName();
    P2.setLastName();
    P2.setAge();
    P2.setPhoneNumber();
    P2.setAddress();

    cout << "\n\n";
    P2.PrintInformationCard();
    P2.VerifyingAcceptance();

    system("pause>0");
}