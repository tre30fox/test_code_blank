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
    // implement hero
    char* tmp = new char[len * 3 +1];
    tmp[len*3] = '\0';
    
    for (int i = 0; i < 3; ++i) {
        strcpy(tmp + (len * i) , data);
    }
    
    int offset = 0;
    

    for (int i = 0; i <= strlen(tmp) ; ++i) {
        if ( *(tmp+i) ==  *(data+offset)  ) {
            
            if (offset++ == len) {
                
                return true;
            }
            continue;
        } 
        
        //if (offset != 0) return false;
    }
    
    
    return false;
}

int main()
{
    cout << (rotate("abc", "cab", 3) == true ? "PASS": "FAIL!!!") << endl;
    cout << (rotate("abc", "bca", 3) == true ? "PASS": "FAIL!!!") << endl;
    cout << (rotate("abc", "abc", 3) == true ? "PASS": "FAIL!!!") << endl;
    cout << (rotate("abc", "bac", 3) == false ? "PASS": "FAIL!!!") << endl;
    cout << (rotate("abc", "acb", 3) == false ? "PASS": "FAIL!!!") << endl;

    cout << (rotate("1324", "1324", 4) == true ? "PASS": "FAIL!!!") << endl;
    cout << (rotate("1324", "4132", 4) == true ? "PASS": "FAIL!!!") << endl;
    cout << (rotate("1324", "2413", 4) == true ? "PASS": "FAIL!!!") << endl;
    cout << (rotate("1324", "3241", 4) == true ? "PASS": "FAIL!!!") << endl;
    cout << (rotate("1324", "1234", 4) == false ? "PASS": "FAIL!!!") << endl;
    cout << (rotate("1324", "2314", 4) == false ? "PASS": "FAIL!!!") << endl;
}

