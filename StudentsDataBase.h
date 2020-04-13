#include <string>
#include <iostream>

class StudentsDataBase {
 public:
  StudentsDataBase() = default;
  /*
    mysql_connect(&mysql, localhost, "root", "passwd");
   */
  void run();

  void GetInfoByFilters();
  void InsertNewData();
  void GetAcceptedStudents();
 private:
  //MYSQL mysql;
};

