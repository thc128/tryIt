#pragma once
class AccountManage
{
protected:
    //Attributes
    int Revenues[20];
    int RevenuesNum;
    int Expenses[20];
    int ExpensesNum;
    int Donate;
    int Free;
public:
    //Accessors
    AccountManage();
    bool addRevenue(int r);
    int getRevenues();
    bool addExpense(int e);
    int getExpenses();
    int getDonate();
    int getFree();
};
