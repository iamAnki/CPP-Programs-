// Write a C program to assign values to each members of the following structure. Pass the populated structure to a function Using call-by address and print the value of each member of the structure with in that function.
// struct info{
// int roll_no;
// char name[50];
// float CGPA;
// }

#include <stdio.h>
#include <string.h>
 
struct info 
{
  int roll_no;
  char name[50];
  float CGPA;
};
 
void func(struct info *record);
 
int main() 
{
  struct info record;

  record.roll_no=10;
  strcpy(record.name, "Sambit");
  record.CGPA = 8.74;

  func(&record);
  return 0;
}
 
void func(struct info *record)
{
  printf(" Roll is: %d \n", record->roll_no);
  printf(" Name is: %s \n", record->name);
  printf(" Percentage is: %f \n", record->CGPA);
}