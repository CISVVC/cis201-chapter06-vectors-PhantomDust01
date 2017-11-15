/* Filename: main.cpp
 * Developer: Jeremy Vigil
 * Email: Vigilj128906@student.vvc.edu
 * Description: this is a program that reads in a set of countries and prints: 
 *   country with the largest area
 *   country with the largest population
 *   country with thelargest population density(people per square kilometer)
 */ 

#include <iostream>
#include <string>
#include <vector>


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

const int MAX_DAY = 30;

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

int main()
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
   
   print_transactions(transaction);
   //stat.print();
   return 0;
}
