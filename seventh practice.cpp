#include<iostream>
using namespace std;

//第一题：
//double average(double a, double b);
//int main()
//{
//	double H_average;
//	double one, two;
//	cout << "请输入两个数：";
//		while (cin >> one >> two)
//		{
//			if (one == 0 || two == 0)
//				break;
//			else
//				H_average = average(one, two);
//			cout << "两数的调和平均数为："<<H_average<<endl;
//			cout << "请输入两个数：";
//	}
//	return 0;
//}
//
//double average(double a, double b)
//{
//	double average = 2 * a * b / (a + b);
//	return average;
//}

//第二题：

//int input(double grade[], int n);
//void show(double grade[10],int n);
//double average(double average[],int n);
//int main()
//{
//	double grade[10];
//	int n;
//	cout << "本次输入高尔夫场次为：";
//	cin >> n;
//	int i = input(grade, n);
//	show(grade, i);
//	double aaverage = average(grade , i);
//	cout << "\n所有高尔夫的平均成绩为："<<aaverage;
//
//}
//
//int input(double input_grade[],int n )
//{
//	int i = 0;
//	cout << "请输入每场的高尔夫成绩（输入任意负数结束)：\n";
//	for (; i < n; i++)
//	{
//		cout << "第" << i + 1 << "场：";
//		cin >> input_grade[i];
//		if (input_grade[i] < 0)
//			break;
//	}
//	return i;
//}
//
//void show(double grade[10], int n)
//{
//	cout << "所有高尔夫的成绩为：";
//	for (int i = 0; i < n; i++)
//	{
//		cout << grade[i]<<"  ";
//	}
//}
//
//double average(double grade[], int n)
//{
//	double sum = 0,average;
//
//	for (int i = 0; i < n; i++)
//	{
//		sum += grade[i];
//	
//	}
//	average = sum / n;
//	return average;
//}

//第三题：
//struct box {
//	char maker[40];
//	float height;
//	float width;
//	float length;
//	float volume;
//};
//void showbox(box box_1);
//void set_box(box* box_2);
//int main()
//{
//	box box1 = {"wuyuliang",163,40,170,50};
//	showbox(box1);
//	set_box(&box1);
//	showbox(box1);
//	return 0;
//}
//
////a.按值传递box，并且显示每个成员的值
//void showbox(box box_1)
//{
//	cout << box_1.maker << "  " << box_1.height << "  " << box_1.width << "  " << box_1.length << "  " << box_1.volume<<endl;
//}
//
////b传递box结构的地址，并将volume成员设置为其它三位长度的乘积
//void set_box(box* box_2)
//{
//	box_2->volume = box_2->height * box_2->length * box_2->width;
//}

//第四题：
//const int total1 = 47;
//const int total2 = 27;
//const int choice1 = 5;
//const int choice2 = 1;
//long double rate1(int, int);
//long double rate2(int, int);
//int main()
//{
//	long double rate;
//	rate = rate1(total1, choice1) * rate2(total2, choice2);
//	cout << "中头奖的几率为：" << rate << endl;
//	return 0;
//}
//
//long double rate1(int t1, int c1)
//{
//	long double result = 1;
//	long double n;
//	int p;
//	for (n = t1, p = c1; p > 0; n--, p--)
//		result = result * n / p;
//	return result;
//}
//
//long double rate2(int t1, int c1)
//{
//	long double result = 1;
//	long double n;
//	int p;
//	for (n = t1, p = c1; p > 0; n--, p--)
//		result = result * n / p;
//	return result;
//}

//第五题：
//long long factorial(int n);
//int main()
//{
//	int n;
//	cout << "请输入要计算阶乘的数为：";
//	cin >> n;
//	while (n > 0)
//	{
//		cout << n << "! = " << factorial(n) << endl;
//		cout << "请再次输入想要计算的阶乘的数：";
//		cin >> n;
//	}
//	return 0;
//}
//
//long long factorial(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}

//第六题：
//int Fill_array(double arr[], int n);
//void Show_array(double arr[], int n);
//void Reverse_array(double arr[], int n);
//const int SIZE = 20;
//int main()
//{
//	double ar1[SIZE];
//	int size = Fill_array(ar1, SIZE);
//	Show_array(ar1, size);
//	Reverse_array(ar1, size);
//	Show_array(ar1, size);
//
//	return 0;
//}
//
//int Fill_array(double arr[], int n)
//{
//	int num = 0;
//	cout << "请在数组中输入double值：";
//	for (int i = 0; i < n; i++)
//	{
//		if (cin >> arr[i])
//			num++;
//		else
//			break;		
//		
//	}
//	return num;
//}
//
//void Show_array(double arr[], int n)
//{
//	cout << "该数组的内容为：";
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//}
//
//void Reverse_array(double arr[], int n)
//{
//	cout << "反转后";
//	int start, end;
//	for (start = 1, end = n - 1; end > start; start++, end--)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end -1];
//		arr[end -1] = temp;
//	}
//}

////第七题：错误的！·
//int* fill_array(double ar[], int limit);
//void show_array(const double ar[], int* n);
//void revalue(double r, double ar[], int n);
//const int MAX = 5;
//int main()
//{
//	double properties[MAX];
//	int* size = fill_array(properties,MAX);
//	show_array(properties,size);
//	if (size > 0)
//	{
//		cout << "Enter revaluation factor:";
//		double factor;
//		while (!(cin >> factor))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input;Please enter a number:";
//		}
//		revalue(factor, properties,*
//			
//			
//			
//			
//			size);
//		show_array(properties, size);
//	}
//	cout << "Done.\n";
//	cin.get();
//	cin.get();
//	return 0;
//}
//
//int* fill_array(double ar[], int limit)
//{
//	double temp;
//	int i;
//	for (i = 0; i < limit; i++)
//	{
//		cout << "Enter valur #" << i + 1 << ": ";
//		cin >> temp;
//		if (!cin)
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input;input process terminited.\n";
//			break;
//		}
//		else if (temp < 0)
//			break;
//		ar[i] = temp;
//	}
//	return &i;
//}
//
//void show_array(const double ar[], int *n)
//{
//	for (int i = 0; i < *n; i++)
//	{
//		cout << "Property #" << i + 1 << "： ＄";
//		cout << ar[i] << endl;
//	}
//}
//
//void revalue(double r, double ar[], int n)
//{
//	for (int i = 0; i < n; i++)
//		ar[i] =ar[i] * r;
//}

//第八题：
//a.
//const char* seasons[4] = { "Spring","Summer","Fall","Winner" };
//void fill(double [],int size);
//void show(double [4], int size);
//int main()
//{
//	double expense[4];
//	fill(expense,4);
//	show(expense,4);
//	return 0;
//}
//
//void fill(double expense[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter " << seasons[i] << " expenses:";
//		cin >> expense[i];
//	}
//}
//
//void show(double expense[], int size)
//{
//	double total = 0.0;
//	for (int i = 0; i < size; i++)
//	{
//		cout << seasons[i] << ":" << expense[i] << endl;
//		total += expense[i];
//	}
//	cout << "total:" << total << endl;
//}

//b.
//const char* seasons[4] = { "Spring","Summer","Fall","Winner" };
//struct expense {
//	double expenses[4];
//};
//const int SIZE = 4;
//void fill(expense *ex);
//void show(expense ex);
//int main()
//{
//	expense money;
//	fill(&money);
//	show(money);
//	return 0;
//}
//
//void fill(expense *ex)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << "Enter " << seasons[i] << " expenses:";
//		cin >> ex->expenses[i];
//	}
//}
//
//void show(expense ex)
//{
//	double total = 0.0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << seasons[i] << ":" << ex.expenses[i] << endl;
//		total += ex.expenses[i];
//	}
//	cout << "total:" << total << endl;
//}


//第九题：
//#include<string>
//const int SLEN = 30;
//struct student {
//	char fullname[SLEN];
//	char hobby[SLEN];
//	int ooplevel;
//};
//int getinfo(student pa[], int n);
//void display1(student st);
//void display2(const student* ps);
//void display3(const student pa[], int n);
//int main()
//{
//	cout << "Enter class size:";
//	int class_size;
//	cin >> class_size;
//	while (cin.get() != '\n')
//		continue;
//	student* ptr_stu = new student[class_size];
//	int enterd = getinfo(ptr_stu, class_size);
//	for (int i = 0; i < class_size; i++)
//	{
//		display1(ptr_stu[i]);
//		display2(&ptr_stu[i]);
//	}
//	display3(ptr_stu, class_size);
//	delete[] ptr_stu;
//	cout << "Done\n";
//	return 0;
//}
//
//int getinfo(student pa[], int n)
//{
//	int size = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "请输入第" << i + 1 << "个学生的信息：";
//		cout << "姓名：";
//		cin.get();
//		cin.getline(pa[i].fullname,SLEN);
//		cout << "\n爱好：";
//		cin.getline(pa[i].hobby, SLEN);
//		cout << "排名：";
//			cin >> pa[i].ooplevel;
//			cout << endl;
//			size++;
//	}
//	return size;
//}
//
//void display1(student st)
//{
//	
//	cout << "姓名：" << st.fullname<<endl;
//	cout << "爱好：" << st.hobby << endl;
//	cout << "排名：" << st.ooplevel << endl;
//}
//
//void display2(const student *ps)
//{
//
//	cout << "姓名：" << ps->fullname << endl;
//	cout << "爱好：" << ps->hobby << endl;
//	cout << "排名：" << ps->ooplevel << endl;
//}
//
//void display3(const student pa[],int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "第" << i + 1 << "个学生的信息为：\n";
//		cout << "姓名：" << pa[i].fullname << endl;
//		cout << "爱好：" << pa[i].hobby << endl;
//		cout << "排名：" << pa[i].ooplevel << endl;
//	}
//}

//第十题：
double add(double x, double y);
double subtract(double x, double y);
double calculate(double x, double y,double (*pf)(double,double));
int main(int argc, char *argv[])
{
	double q = calculate(3.0, 2.0, add);
	cout << q<<endl;
	double t = calculate(2.0, 2.0, subtract);
	cout << t << endl;
	return 0;
}

double add(double x, double y)
{
	return x + y;
}
double subtract(double x, double y)
{
	return x - y;
}

double calculate(double x, double y, double (*pf)(double x1, double x2))
{
	return  pf(x,y) + x + y;
}