/* Filename: main.cpp
 * Developer: Jeremy Vigil
 * Email: Vigilj128906@student.vvc.edu
 * Description: This program gathers input(date, transaction amount, and Description)
 *   and prints a bank statement.
 */ 

#include <iostream>
#include <string>
#include <vector>

const int MAX_DAY = 30;
class Transaction
{
public:
   Transaction();
   void read();
   int get_day();
   double get_amount();
   void print() const;
private:
   int day;
   double amount;
   std::string description;
};

Transaction::Transaction()
{
   day = 0;
   amount = 0.0;
}

void Transaction::read()
{
    std::cout << "What day did you make this transaction?";
    std::cin >> day;
    std::cout << "what was the amount?";
    std::cin >> amount;
    std::cin.ignore();
    std::cout << "what was it for?";
    std::getline(std::cin,description);
}
int Transaction::get_day()
{
   
}
double Transaction::get_amount()
{
  
}
void Transaction::print() const
{
    std::cout << "day:" << day << std::endl;
    std::cout << "amount:" << amount << std::endl;
    std::cout << "description:" << description << std::endl;
}
void print_transactions(const std::vector<Transaction> t)
{
    for(int i=0;i<t.size();i++)
        t[i].print();
}
// the Statement class starts here.------------------------------------------.
class Statement
{
public:
   Statement();
   void read();
   void compute_balances();
   void print();
   double get_average_daily_balance();
   double get_minimum_daily_balance();
private:
   std::vector<Transaction> transactions;
   std::vector<double> daily_balances;
};
Statement::Statement()
{
  std::vector<double> daily_balances(30);
}
void Statement::read()
{
  std::vector <Transaction> transaction;
   bool more = true;
   while(more)
   {
       //Statement stat;
       Transaction t;
       t.read();
       transaction.push_back(t);
       std::cout << "Enter another (Y/N)";
       char response;
       std::cin >> response;
       if(response != 'y' && response != 'Y')
         more = false;
   }
}
double Statement::get_average_daily_balance(const std::vector<double>& vec)
{
    double sum = 0.0;
    for(int i=0;i < vec.size();i++)
        sum += vec[i];
    return sum / vec.size();
}
double Statement::get_minimum_daily_balance()
{
  
}
int main()
{
   std::vector<double> v;
   print_transactions(transaction);
   std::cout << get_average_daily_balance(v)
   return 0;
}
