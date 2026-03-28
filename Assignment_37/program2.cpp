#include<iostream>
using namespace std;

class Array
{
    protected: 
        int *Arr;
        int size;

    public:
        Array(int value = 10)
        {
            cout<<"Inside Constructor\n";

            this->size = value;
            this->Arr = new int[size];
        }

        Array(Array &ref)
        {
            cout<<"Inside copy constructor\n";

            this->size = ref.size;
            this->Arr = new int[this->size];

            for(int i = 0; i < size; i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
        }

        ~Array()
        {
            cout<<"Inside Destructor\n";

            delete []Arr;
        }

        inline void Accept();
        inline void Display();
};

void Array :: Accept()
{
    cout<<"Please enter the value\n";

    for(int i = 0; i < this->size; i++)
    {
        cin>>Arr[i];
    }
}

void Array :: Display()
{
    cout<<"Elements are\n";

    for(int i = 0; i < this->size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

class ArrSearch : public Array
{
    public:
        ArrSearch(int no = 10) : Array(no)
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch :: SearchFirst(int value)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch :: Frequency(int value)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            i++;
        }
    }

    return i;
}

int ArrSearch :: SearchLast(int value)
{
    int i = 0, pos = 1;

    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            pos = i;
        }
    }

    return pos;
}

int ArrSearch :: EvenCount()
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            i++;
        }
    }

    return i;
}

int main()
{
    cout<<"Inside main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iRet = 0;

    iRet = sobj1.Frequency(10);
    cout<<"Frequency is "<<iRet<<"\n";

    iRet = sobj1.SearchFirst(10);
    cout<<"First occurance is "<<iRet<<"\n";

    iRet = sobj1.SearchLast(10);
    cout<<"Last occurance is "<<iRet<<"\n";

    iRet = sobj1.EvenCount();
    cout<<"Even numbers are : "<<iRet<<"\n";
}