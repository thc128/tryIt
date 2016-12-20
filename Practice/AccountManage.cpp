#include <iostream>
#include "AccountManage.h"
using namespace std;

AccountManage::AccountManage()
{
    for (int i=0;i<20;i++)
    {
        Revenues[i]=0;
        Expenses[i]=0;
    }
    RevenuesNum=0;
    ExpensesNum=0;
}

bool AccountManage::addRevenue(int r)
{
    if (RevenuesNum>=20)
        return false;
    Revenues[RevenuesNum++]=r;
    return true;
}
int AccountManage::getRevenues()
{
    int sum=0;
    for (int i=0;i++; i<RevenuesNum) sum+=Revenues[i];
    return sum;
}

bool AccountManage::addExpense(int e)
{
    if (ExpensesNum>=20)
        return false;
    Expenses[ExpensesNum++]=e;
    return true;
}

int AccountManage::getExpenses()
{
    int sum=0;
    for (int i=0;i++; i<ExpensesNum) sum+=Expenses[i];
    return sum;
}

int AccountManage::getDonate()
{
    return getRevenues()/10;
}

int AccountManage::getFree()
{
    return getRevenues()-getExpenses();
}
