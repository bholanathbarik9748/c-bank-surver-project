#include<iostream>
#include<conio.h>
#include<stdio.h>

class bank
{
    char a,d,f;
    int b,c,e,h,i;
   public:
       void new_account();            //function to write record in binary file
       void display_sp();            //function to display account details given by user
       void modify_account();        //function to modify record of file
       void delete_account();        //function to delete record of file
       void display_all();              //function to display all account details
       void withdraw();        // function to desposit/withdraw amount for given account
       void deposit();
       void intro();           //introductory screen function
       void exit();            //exit                  

};

void bank :: new_account()
{
    std::cout << "enter your name:---> " << '\n';
    std::cin >> a;

    std::cout << "enter your phone number:---->" << '\n';
    std::cin >> b;

    std::cout << "which type of account you have(press saving acc:-->s , current acc:-->c):---->"<< '\n';
    std::cin >> f;

    std::cout << "processing:---->"<< '\n';
    std::cout << "your account creater" << '\n';
}

void bank ::modify_account()
{
    std::cout << "enter your account number:---->" << '\n';
    std::cin >> c;
    std::cout << "enter card holder name:---->" << '\n';
    std::cin >> a;
    std::cout << "which type of modification you need:---->" << '\n';
    std::cin >> d;
    std::cout << "which type of account you have(press saving acc:-->s , current acc:-->c):---->" << '\n';
    std::cin >> f;

    std::cout << "your modification is succussfly completed" << '\n';
}

void bank::display_sp()
{
    std::cout << "now your account balnce is(for account verification):---->" << '\n';
    std::cin >> e;
    std::cout << "enter your account number:---->" << '\n';
    std::cin >> c;
    std::cout << "enter card holder name:---->" << '\n';
    std::cin >> a;
    std::cout << "which type of account you have(press saving acc:-->s , current acc:-->c):---->" << '\n';
    std::cin >> f;
    std::cout << "your account detail is in given:---->" << '\n';
    std::cout << "name:---->" << a;
    std::cout <<"account no:---->" << c;
    std::cout <<"now your account balnce is:---->" << e;
    std::cout <<"your ex date is:---->";
    std::cout <<"2/2/2070";

}

void bank::delete_account()
{
    std::cout << "now your account balnce is(for account verification):---->" << '\n';
    std::cin >> e;
    std::cout << "enter your account number:---->" << '\n';
    std::cin >> c;
    std::cout << "enter card holder name:---->" << '\n';
    std::cin >> a;
    std::cout << "which type of account you have(press saving acc:-->s , current acc:-->c):---->" << '\n';
    std::cin >> f;
    std::cout << "your account is succussfly deleted" << '\n';
}

void bank::display_all()
{
    std::cout << "sorry this page is not fount!" << '\n';
}

void bank::withdraw()
{
    std::cout << "now your account balnce is(for account verification):---->" << '\n';
    std::cin >> e;
    std::cout << "enter your account number:---->" << '\n';
    std::cin >> c;
    std::cout << "enter card holder name:---->" << '\n';
    std::cin >> a;
    std::cout << "which type of account you have(press saving acc:-->s , current acc:-->c):---->" << '\n';
    std::cin >> f;
    std::cout << "enter amount of money you need to withdraw" << '\n';
    std::cin >> h;

    e=e+h;
    std::cout << "now your account balance is:---->" << '\n';
    std::cout << e;
}

void bank::deposit()
{
    std::cout << "now your account balnce is(for account verification):---->" << '\n';
    std::cin >> e;
    std::cout << "enter your account number:---->" << '\n';
    std::cin >> c;
    std::cout << "enter card holder name:---->" << '\n';
    std::cin >> a;
    std::cout << "which type of account you have(press saving acc:-->s , current acc:-->c):---->" << '\n';
    std::cin >> f;
    std::cout << "enter amount of money you need to deposite:---->" << '\n';
    std::cin >> i;

    e = e - i;
    std::cout << "now your account balance is:---->" << '\n';
    std::cout << i;
}
void bank::intro()
{
   std::cout <<"qwertyuiopogfdxzxcvbnmlkuytrewazxcvbjkiuytrdsxcvbnmkliuytrszxvbnkliuytresaqwertyuiasdfghjklzxcvbnmasedfghjkasdfghjkaszdxcfgbhnjasd";
}

void bank:: exit()
{
    std::cout << "thank you for comeing" << '\n';
}

int main()
{
 int choice;
     do
     {
         std::cout << "\n\n\t|____________________________________________________________|\n\n\t";
         std::cout << "\n\n\t|____________________________________________________________|\n\n\t";
         std::cout <<"-----------------------\n\n\t BB BANK OF INDIA \n\n\t----------------";
         std::cout << "\n\n\t|______________---------------------------------_____________| \n\n\t";
         std::cout << "\n\n\t|____________________________________________________________|  \n\n\t";

        std::cout<<"\n\n\twelcome\n\n\t";

        std::cout << "choice following list" << '\n';

        std::cout << "01.create a new account:--->" << '\n';
        std::cout << "02.display my account:---->" << '\n';
        std::cout << "03.modify your account:---->" << '\n';
        std::cout << "04.delete my account:---->" << '\n';
        std::cout << "05.display your account:---->" << '\n';
        std::cout << "06.widrow money:---->" << '\n';
        std::cout << "07.deposite money:---->" << '\n';
        std::cout << "08.intro your account:---->" << '\n';
        std::cout << "EXIT:---->" << '\n';

        std::cout << "enter your choice:---->" << '\n';
        std::cin >> choice;

        switch (choice)
        {
        case 1:
           bank new_account();
             break;
    
        case 2:
            bank display_sp();
                default : break;
        
        case 3:
            bank modify_account();
            break;

        case 4:
            bank delete_account();
            break;
        case 5:
            bank display_all();
            break;

        case 6:
            bank withdraw();
            break;

        case 7:
            bank deposit();
            break;

        case 8:
            bank intro();
            break;

        case 9:
             bank exit();
        }

     } while (1);
     std::cout <<'\n';
}