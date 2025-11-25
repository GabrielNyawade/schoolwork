#include <iostream>
using namespace std;
class Time
{
    private:
    int _hours;
    int _minutes;
    
    public:
    Time()
    {
        _hours = 0;
        _minutes = 0;
    }
    Time(int h, int m)
    {
        _hours = h;
        _minutes = m;
    }
    void display()
    {
        cout << _hours << "H: " << _minutes << "M\n";
    }
    friend Time add(Time, Time);
};

Time add(Time t1, Time t2)
{
    int minutes = t1._minutes + t2._minutes;
    int hours = t1._hours + t2._hours;
    hours += minutes / 60;
    minutes %= 60;
    return Time(hours, minutes);
}

int main()
{
    Time morning(8, 30);
    Time afternoon(12, 45);
    Time evening = add(morning, afternoon);
    evening.display();
    return 0;
}