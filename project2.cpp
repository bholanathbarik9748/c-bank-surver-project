#include <iostream> //header file//
#include <conio.h>  //header file//
#include <fstream>  //header file//

class account //class declaretion//
{
    int acno, i, y, j, p;
    int name[50];
    int deposit;
    char type;
    char e;

public:
    void create_accout();       //function to get data from user//
    void get_look_of_account(); //function to show data on screen//
    void modify_your_accoumt(); //function to add new data//
    void dep(int x);            //function to accept amount and add to balance amount//
    void wid();                 //function to accept amount and subtract from balance amount//
    void report();              //function to show data in tabular format//
    void retacno();             //function to return account number//
    void retdepno();            //function to return balance amount//
    void rettpye();             //function to return type of account//
};                              //function end//

void account::create_accout()

{
    std::cout << "ENTER your account number:---->";
    std::cin >> acno;

    std::cout << "ENTER your name register by name:---->";
    std::cin >> name[i];

    std::cout << "ENTER your type of account:---->";
    std::cin >> type;

    std::cout << "ENTER your last time deposite ammount(1:-->current account,2:-->saving account";
    std::cin >> deposit;

    std::cout << "input your account balance(for verification yourself):---->";
    std::cin >> p;

    std::cout << "processing your account details.........";
}
void account::get_look_of_account()
{
    std::cout << "Your account number:---->";
    std::cout << acno;

    std::cout << "Account holder name:---->";
    std::cout << name[i];

    std::cout << "Type of account:---->";
    std::cout << type;

    std::cout << "Your Balence right now:---->";
    std::cout << deposit;
}
void account::modify_your_accoumt()
{
    std::cout << "Your acount number:---->";
    std::cout << acno;

    std::cout << "Account holder name:---->";
    std::cout << name[i];

    std::cout << "type of account:---->";
    std::cout << type;

    std::cout << "your modifyed balance:---->";
    std::cout << deposit;
}
void account::dep(int x)
{
    deposit = deposit + x;
}

void account::wid()
{
    std::cout << "input amount you need to widrow:---->";
    std::cin >> y;
    j = p - y;
    std::cout << "now your account balance is:---->" << j << '\n';
}

void account::report()
{
    std::cout << acno << name[i] << "if it is correct then plz you proceed:---->";
    std::cin >> e;
    std::cout << "your report is successfuly placeed";
}

void account::retacno()
{
    std::cout << acno;
}

void account::retdepno()
{
    std::cout << deposit;
}

void account::rettpye()
{
    std::cout << type;
}
//function declaration//
 void write_account();
 void new_acc();
 void display_dp();
 void display_wp();
 void balance_iq();
 void all_account_list();
 void close_acc();
 void mod_acc();
 void exit();
 void intro();


int main()
{
   char ch,b,c;
   int no,a,d,e,f,g;
   intro();

   do
   {
       std::cout << "\n\n\twelcome to B.B BANK OF INDIA\n\n\t";
       std::cout << "\n\n\tall instraction is in following\n\n\t";
       std::cout <<"--------------------------------------------";
       system("cla");
       std::cout <<"01.zero account:---->1";
       std::cout << "02.NEW ACCOUNT:---->2";
       std::cout << "03.DEPOSITE AMOUNT:---->3";
       std::cout << "04.BALANCE ENQUARY:---->4";
       std::cout << "05.ALL ACOUNT HOLDER LIST:---->5";
       std::cout << "06.CLOSE AN ACCOUNT:---->6";
       std::cout << "07.MODIFY AN ACCOUNT:---->7";
       std::cout << "08.EXIT:---->8";
       std::cout <<"to proceed nest step plzz enter above number:---->";
       std::cin >> ch;



       switch (ch)
       {
       case 1:
           write_account();
           {
           std::cout<<"are you sure ! if it is press any key" ;
           }
           std::cout<<"your account amount is:---->0";
           break;

       case 2:
           new_acc();
           std::cout<<"enter your phone number(witch is link by your adhar):---->";
           std::cout<< a;
           std::cout <<"enter your name:---->";
           std::cin>>b;
           std::cout<<"input your address:---->";
           std::cin>>c;
           std::cout<<"your accout no is:---->";
           std::cout<<"3456789456789" ;
           std::cout << "your account is successfuly created";
           break;

        case 3:
          display_dp();
            std::cout<<"enter your total amount in this account:---->";
            std::cin >> e;
            std::cout<<"enter how many amount you need to deposite(for accout verification):---->";
            std::cin >>f;
            g=e+f;
            std::cout<<"now your amount is:---->" << g;
            break;

        case 4:
            display_wp();
            std::cout << "enter how many amount need to you widrow:---->";
            std::cin >> f;
            g = e - f;
            std::cout << "now your amount is:---->" << g;
            break;

        case 6:
              balance_iq();
              std::cout<<"processing....";
              std::cout<<"this fill is does't open ! SORRY FOsR THIS";
              break;

        case 5:
             all_account_list();
             std::cout << "processing....";
             std::cout << "this fill is does't open ! SORRY FOsR THIS";
             break;

        case 7:
             close_acc();
             {
                 std::cout << "are you sure ! if it is press any key";
             }
             std::cout <<"this account is close";
             break;

        case 8:
            exit();
              std::cout<<"processing....";
              std::cout<<"your exited to this process";
              std::cout<<"THANK YOU FOR COMING";
              break;


               default :
               std::cout<<"you enter a invalid input";
               break;
       }
       }
       while(ch != '8');
       return 0;

}
