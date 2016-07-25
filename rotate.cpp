#include <iostream>
#include <string>
#include <string.h>

using namespace std;

/*
주어진 data 와 rotated 가 circular rotate(순환 회전) 관계인지 여부 반환
ex)
  data == "abc" and rotated == "cab"  => true
  data == "abc" and rotated == "acb"  => false
*/
bool rotate(const char* data, const char* rotated, int len)
{
    for(int shift=0; shift<len; ++shift)
    {
        bool result = true;
        for(int col=0; col<len; ++col)
        {
            if(data[col] != rotated[(col + shift) % len])
            {
                result = false;
                break;
            }
        }
        if (result)
            return true;
    }
    
    return false;
}

int main()
{
    cout << (rotate("abc", "cab", 3) == true ? "PASS": "FAIL") << endl;
    cout << (rotate("abc", "bca", 3) == true ? "PASS": "FAIL") << endl;
    cout << (rotate("abc", "abc", 3) == true ? "PASS": "FAIL") << endl;
    cout << (rotate("abc", "bac", 3) == false ? "PASS": "FAIL") << endl;
    cout << (rotate("abc", "acb", 3) == false ? "PASS": "FAIL") << endl;

    cout << (rotate("1324", "1324", 4) == true ? "PASS": "FAIL") << endl;
    cout << (rotate("1324", "4132", 4) == true ? "PASS": "FAIL") << endl;
    cout << (rotate("1324", "2413", 4) == true ? "PASS": "FAIL") << endl;
    cout << (rotate("1324", "3241", 4) == true ? "PASS": "FAIL") << endl;
    cout << (rotate("1324", "1234", 4) == false ? "PASS": "FAIL") << endl;
    cout << (rotate("1324", "2314", 4) == false ? "PASS": "FAIL") << endl;
}

