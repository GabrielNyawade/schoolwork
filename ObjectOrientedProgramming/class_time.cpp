#include <iostream>

class Time
{
private:
    int m_hrs;
    int m_mins;
public:
    void setTime(int hours, int minutes)
    {
        m_hrs = hours;
        m_mins = minutes;
    }
    void putTime(){ std::cout << m_hrs << "H:" << m_mins << "M\n"; }
    void sumTimes(Time, Time);

};


void Time::sumTimes(Time time1, Time time2)
{
    m_mins = time1.m_mins + time2.m_mins;
    m_hrs /= 60;
    m_mins %= 60;
    m_hrs = m_hrs + time1.m_hrs + time2.m_hrs;
}

int main()
{
    Time t1, t2, t3;
    t1.setTime(1, 46);
    t2.setTime(3, 52);
    t3.sumTimes(t1, t2);

    std::cout << "T3 = ";
    t3.putTime();
    return 0;
}
