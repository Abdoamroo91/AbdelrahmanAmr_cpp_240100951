#include <iostream>;
using namespace std;

class queue{
    public:
    int head;
    int tail;
    int size;
    int *arr;
    int counter;
    queue(int s){
        arr = new int[s];
        this->size = s;
        head = 0;
        tail = 0;
        counter = 0;
    }
    void enqueue(int num){
        if(isFull()){
            cout << "The queue is full" <<endl;
        }else{
            if(tail == size){
                tail = 0;
            }
            arr[tail++] = num;
            cout << "added to queue "<< num <<endl;
            counter++;
            
        }
    }
    int dequeue(){
        if(isEmpty()){
            cout << "The queue is empty" <<endl;
            return -1;
        }else{
            if(head == size){
                head = 0;
            }
            int temp = arr[head++];
            counter--;
            cout << "deleted to queue "<< temp <<endl;
            return temp;
            
        }
    }
    bool isFull(){
        return counter == size;
    }
    bool isEmpty(){
        return counter == 0;
    }
};


int main(){
    queue myFirstQueue(3);
    myFirstQueue.enqueue(10);
    myFirstQueue.enqueue(20);
    myFirstQueue.enqueue(30);
    myFirstQueue.enqueue(40);
    myFirstQueue.dequeue();
    myFirstQueue.dequeue();
    myFirstQueue.dequeue();
    myFirstQueue.enqueue(10);
    // myFirstQueue.enqueue(20);
    // myFirstQueue.enqueue(30);
    // myFirstQueue.enqueue(40);
    return 0;
}
