#include <iostream>
using namespace std;
 
class Queue {
    public:
        Queue(int nSpace)
        {
        }
         
        bool EnQueue(int v)
        {
            // return if succeed
            return true;
        }
         
        int DeQueue()
        {
            // return -1 if no more data
        }
};
 
int main()
{
    int nSize = 10;
    Queue *queue = new Queue(nSize);
     
    int nSum = 0;
     
    // queue 에는 양수만 입력
    for (int i = 1; i < nSize + 1; i++)
    {
        if (true == queue->EnQueue(i))
        {
            nSum += i;
        }
    }
     
    for (int i = 0; i < nSize + 1; i++)
    {
        int nRet = queue->DeQueue();
         
        if (nRet == -1) {
            break;
        }
         
        cout << nRet << endl;
         
        nSum -= nRet;
    }
     
    cout << (nSum == 0 ? "PASS" : "FAIL!!!") << endl;
 
    return 0;
}
