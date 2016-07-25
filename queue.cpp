#include <iostream>
using namespace std;
 
class Queue {
    const int MAX_SPACE;
    int front;
    int rear;
    int *space;
     
    public:
        Queue(int nSpace) :MAX_SPACE(nSpace)
        {
            front = 0;
            rear = 0;
             
            space = new int[nSpace];
        }
         
        bool EnQueue(int v)
        {
            if (rear == MAX_SPACE)
            {
                return false;
            }
            space[rear++] = v;
             
            return true;
        }
         
        int DeQueue()
        {
            ///////////////// 여기 부터
            if (front == rear)
            {
                return -1;
            }
         
            int temp = space[front];
            space[front++] = -1;
             
            return temp;
            //////////////// 여기 까지
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
     
    cout << (nSum == 0 ? "pass" : "fail") << endl;
 
    return 0;
}
