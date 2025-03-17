#include <iostream>

class Time
{
private:
    int m_hrs;
    int m_mins;
    int m_secs;
public:
    void getTime();
    void displayTime();
    void sumTimes(Time, Time);

};

void Time::getTime()
{
    std::cout << "Enter hours >>> ";
    std::cin >> m_hrs;
    std::cout << "Enter minutes >>> ";
    std::cin >> m_mins;
    std::cout << "Enter seconds >>> ";
    std::cin >> m_secs;
}

void Time::displayTime()
{
    std::cout << m_hrs << "H:" << m_mins << "M:" << m_secs << "S\n";
}

void Time::sumTimes(Time time1, Time time2)
{
    m_secs = time1.m_secs + time2.m_secs;
    m_mins = m_secs / 60;
    m_secs = m_secs % 60;
    m_mins = m_mins + time1.m_mins + time2.m_mins;
    m_hrs = m_mins / 60;
    m_mins = m_mins % 60;
    m_hrs = m_hrs + time1.m_hrs + time2.m_hrs;
}

int main()
{
    Time t1, t2, t3;
    std::cout<<"enter the time 1 values"<<std::endl;
    t1.getTime();
    t1.displayTime();
    std::cout<<"enter the  time 2, minutes and hour"<<std::endl;
    t2.getTime();
    t2.displayTime();
    t3.sumTimes(t1, t2);

    std::cout << "T3 = ";
    t3.displayTime();
    return 0;
}
