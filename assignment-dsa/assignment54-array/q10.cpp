// 11. Create a function in Array to sort the given array

#include <iostream>
using namespace std;

class DynamicArray
{
    int *array;
    int size;
    int capacity;

public:
    DynamicArray()
    {
        array = new int[1];
        size = 0;
        capacity = 1;
    }
    ~DynamicArray()
    {
        delete[] array;
        size = 0;
        capacity = 0;
    }

    void insert(int index, int value)
    {
        if (capacity == size)
        {
            resize();
        }
        if (index >= capacity || index < 0)
        {
            cout << "Index out of range" << endl;
        }

        array[index] = value;
        size++;
    }

      void sortArray(){
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                int temp;
                if(array[i]<array[j]){
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
    }

    void resize()
    {
        int *temp = new int[2 * capacity];
        for (int i = 0; i < size; i++)
        {
            temp[i] = array[i];
        }
        delete array;
        array = temp;
        capacity *= 2;
    }

    void printArray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
        cout << "Size " << size << " capacity " << capacity << endl;
    }
};

int main()
{

    DynamicArray a;
    a.printArray();
    a.insert(0, 10);
    a.printArray();
    a.insert(1, 20);
    a.printArray();
    a.insert(2, 30);
    a.printArray();

    a.insert(3, 40);
    a.printArray();
    a.sortArray();

    return 0;
}