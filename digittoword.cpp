#include <iostream>
using namespace std;
string fun(int num)
{
    string str = "";
    string units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                      "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    if (num < 20)
    {
        str = units[num];
    }
    else if (num >= 20 && num <= 99)
    {
        str = tens[num / 10] + " " + units[num % 10];
    }
    return str;
}

string converttoword(int num)
{
    string ss = "";
    if (num < 100)
    {
        ss = fun(num);
    }
    else if (num >= 100 && num <= 999)
    {
        ss=fun(num/100)+" "+"Hundred"+" "+converttoword(num%100);
    }
    else if (num >= 1000 && num <= 99999)
    {
        ss=fun(num/1000)+" "+"Thousand"+" "+converttoword(num%1000);
    }
    else if (num >= 100000 && num <= 9999999)
    {
         ss=fun(num/100000)+" "+"Lakh"+" "+converttoword(num%100000);
    }
    else if (num >= 10000000 && num <= 999999999)
    {
         ss=fun(num/10000000)+" "+"Crore"+" "+converttoword(num%10000000);
    }
    return ss;
}

int main()
{
    int num;
    cout << "\n Enter any number=";
    cin >> num;
    string str = converttoword(num);
    cout <<"\n In Words : "<< str;
    return 0;
}