#include"WC.h"

int main(int argc,char* argv[])
{
	FILE* file;
	int in = 0;
	errno_t err;
	err = fopen_s(&file, argv[argc - 1], "r");
	if (err != 0)
	{
		cout << "文件打开失败！" << endl;
		system("pause");
		return 0;
	}
	while (1)
	{
		err = fopen_s(&file, argv[argc-1], "r");
		char a;
		if (argc > 2)
		{
			a = argv[argc-2][1];
			switch (a)
			{
			case 'c':cout << "该文件的字符数为：" << c(file) << endl;break;
			case 'w':cout << "该文件的单词数为：" << w(file) << endl;break;
			case 'l':cout << "该文件的行数为：" << l(file) << endl;break;
			default:cout << "输入的命令有误！" << endl;break;
			}
			break;
		}
		else break;
	}
	system("pause");
	return 0;
}
