#include<iostream>

enum days {
   Sunday,
   Monday,
   Tuesday,
   Wednesday,
   Thursday,
   Friday,
   Saturday
};

struct Date {
   int  day;
   int month;
   int year;

};
int main()
{
  days d = Friday;
  
  switch (d) {
    case Sunday:
	std::cout << "Sunday " << std::endl;
        break;
    case Monday:
	std:: cout << "Monday" << std::endl;
        break;
    case Tuesday:
	std::cout << "Tuesday" << std::endl;
        break;
    case Wednesday:
	std::cout << "Wednesday"<< std::endl;
        break;
    case Thursday:
	std::cout << "Thursday" << std::endl;
         break;
    case Friday:
	 std::cout << "Friday" << std::endl;
         break;
    case Saturday:
	 std::cout << "Saturday" << std:: endl;
        break;
    default:
	std:: cout << "invalid value :" << std::endl;

    } 
  Date date;
  std::cout << "Day :" << std::endl;
  std::cin >> date.day;
  std::cout << "Month :" << std::endl;
  std::cin >> date.month;
  std::cout << "Year :" << std::endl;
  std::cin >> date.year;

  std::cout << date.day << '.' << date.month << '.' << date.year << std::endl;

}
