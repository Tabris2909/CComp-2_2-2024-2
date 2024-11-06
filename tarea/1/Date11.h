// Date.h
#ifndef DATE_H
#define DATE_H

class Date {
public:
    Date(int m = 1, int d = 1, int y = 1900) : month(m), day(d), year(y) {}
    
    int getMonth() const { return month; }
    int getDay() const { return day; }
    int getYear() const { return year; }

    // Convert date to string in the format MM/DD/YYYY
    std::string toString() const {
        return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
    }

private:
    int month;
    int day;
    int year;
};

#endif // DATE_H
