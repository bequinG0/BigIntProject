#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>
#include <unistd.h>

using namespace std;

class BigInt
{
private:
    vector <int> man;
    bool _is_negative=false;
public:
    BigInt(){}

    BigInt(long long val) {
        *this = BigInt(to_string(val));
    }

    BigInt(string data)
    {
        int c=0;
        if(data[0]=='-') { c++; _is_negative=true; }
        for(int i=c; i<data.size(); i++)
        {
            man.push_back(data[i]-'0');
        }
    }

    BigInt(vector <int> data)
    {
        for(int i=0; i<data.size(); i++)
        {
            man.push_back(data[i]);
        }
    }

    BigInt& operator= (const BigInt &val2)
    {
        while(man.size()!=0)
        {
            man.pop_back();
        }
        for(int i=0; i<val2.man.size(); i++)
        {
            man.push_back(val2.man[i]);
        }
        _is_negative=val2._is_negative;
        return *this;
    }//*/

    friend vector <int> input(BigInt &val1){return val1.man;}

    friend BigInt operator+(const BigInt &val1, const BigInt &val2);
    friend BigInt operator*(const BigInt &val1, const BigInt &val2);
    friend BigInt operator-(const BigInt &val1, const BigInt &val2);
    friend BigInt operator/(const BigInt &val1, const BigInt &val2);

    friend BigInt operator+=(BigInt &val1, const BigInt &val2);
    friend BigInt operator-=(BigInt &val1, const BigInt &val2);
    friend BigInt operator*=(BigInt &val1, const BigInt &val2);
    friend BigInt operator/=(BigInt &val1, const BigInt &val2);

    BigInt operator++(); BigInt operator++(int);
    BigInt operator--(); BigInt operator--(int);

    friend bool operator>(const BigInt &val1, const BigInt &val2);
    friend bool operator<(const BigInt &val1, const BigInt &val2);
    friend bool operator==(const BigInt &val1, const BigInt &val2);
    friend bool operator>=(const BigInt &val1, const BigInt &val2);
    friend bool operator<=(const BigInt &val1, const BigInt &val2);
    friend bool operator!=(const BigInt &val1, const  BigInt &val2);

    friend ostream& operator<<(ostream &out, BigInt val1);
    friend istream& operator>>(istream &in, BigInt& val1);
};

