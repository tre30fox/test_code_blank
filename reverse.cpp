#include <iostream>
#include <string>
#include <string.h>

using namespace std;

/*
입력받은 캐릭터 배열을 역순으로 뒤집어 반환한다.
1234 => 4321
1 => 1
zda => adz
*/
const char* reverse(char* data, int len)
{
    for(int i=0; i<len/2;++i)
    {
        char temp = data[i];
        data[i] = data[len-i-1];
        data[len-i-1] = temp;
    }
    return data;
}


int main()
{
    char test1[] = "1234";
    cout << (strcmp(reverse(test1, strlen(test1)), "4321") == 0 ? "PASS": "FAIL") << endl;

    char test2[] = "aBc";
    cout << (strcmp(reverse(test2, strlen(test2)), "cBa") == 0 ? "PASS": "FAIL") << endl;

    char test3[] = "z3";
    cout << (strcmp(reverse(test3, strlen(test3)), "3z") == 0 ? "PASS": "FAIL") << endl;

    char test4[] = "q";
    cout << (strcmp(reverse(test4, strlen(test4)), "q") == 0 ? "PASS": "FAIL") << endl;

    char test5[] = "vtdqj2";
    cout << (strcmp(reverse(test5, strlen(test5)), "2jqdtv") == 0 ? "PASS": "FAIL") << endl;
}