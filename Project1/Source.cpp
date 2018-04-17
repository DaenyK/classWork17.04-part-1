#include "students.h"

int main()
{
	student s1 ("John", "Snow", 25);
	student s2(s1);

	//student ss[10];
	s1.print();
	s2.print();

	s1.~student();

	system("pause");
	return 0;
}