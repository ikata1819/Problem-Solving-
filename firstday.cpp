#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int dayOfWeek(int d, int m, int y) {
    if (m < 3) {
        m += 12;
        y--;
    }
    int k = y % 100;
    int j = y / 100;
    int day = (d + ((13 * (m + 1)) / 5) + k + (k / 4) + (j / 4) + (5 * j)) % 7;
    return day;
}

//std::string dayOfWeekName(int day) {
//    switch (day) {
//        case 0: return "Saturday";
//        case 1: return "Sunday";
//        case 2: return "Monday";
//        case 3: return "Tuesday";
//        case 4: return "Wednesday";
//        case 5: return "Thursday";
//        case 6: return "Friday";
//        default: return "Invalid Day";
//    }
//}
//
//std::string firstDayOfMonth(int d, int m, int y) {
//    int day = dayOfWeek(1, m, y);
//    return dayOfWeekName(day);
//}

int main() {
    std::string date;
    std::cout << "Enter date in DD/MM/YYYY format: ";
    std::cin >> date;

    int d, m, y;
    char delimiter;
    std::istringstream(date) >> d >> delimiter >> m >> delimiter >> y;

     int firstDay = dayOfWeek(d, m, y);
     char days[31];
     if(m!=2 || m!=4 || m!=6 || m!= 9|| m!=11){
        for
     }

    return 0;
}
