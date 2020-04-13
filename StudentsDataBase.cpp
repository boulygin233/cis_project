#include "StudentsDataBase.h"
#include <string>
#include <iostream>

void StudentsDataBase::run() {
  std::string command;
  std::cout << "This is database of students, who want to study at CIS\n";
  while (command != "Exit") {
    std::cout << "You can use next commands:\n"
                 "Filters - you can choose field and write value, that you can see;\n"
                 "Insert - you can add information about student;\n"
                 "Accepted - show students, who were accepted to CIS;\n"
                 "Other commands, that will be soon appear.\n"
                 "Exit - exit from this program\n";
    std::cout << "Input command:\n";
    std::cin >> command;
    if (command == "Filters") {
      GetInfoByFilters();
    } else if (command == "Insert") {
      InsertNewData();
    } else if (command == "Accepted") {
      GetAcceptedStudents();
    } else if (command == "other command") {
      /*множество пресетов*/
    } else if (command != "Exit") {
      std::cout << "Sorry, but I don't know this command\n\n";
    }
  }
}

void StudentsDataBase::GetInfoByFilters() {
  std::cout << "Input name of field, where you want to use filter and value or input \"Show\" to show results\n";
  std::string Filter;
  while (Filter != "Show") {
    std::cin >> Filter;
  }
  std::cout << "Your information:\n\n";
  /*mysql_query(&mysql,"*query*");
  res = mysql_store_result(&mysql);
  while((row = mysql_fetch_row(res))) {
      for (i = 0 ; i < mysql_num_fields(res); i++)
         {std::cout << row[i] << "\t";}
      std::cout << '\n';
   }*/
}

void StudentsDataBase::InsertNewData() {
  std::cout << "You inserted some new data\n\n";
  /* запрос к базе данных вида "update students_information set link = 'link.com' where name = ''"*/
}

void StudentsDataBase::GetAcceptedStudents() {
  std::cout << "Accepted students:\n\n";
  /*mysql_query(&mysql,"select * from students_information where decision = 'accept'");
  res = mysql_store_result(&mysql);
  while((row = mysql_fetch_row(res))) {
      for (i = 0 ; i < mysql_num_fields(res); i++)
         {std::cout << row[i] << "\t";}
      std::cout << '\n';
   }*/
}

