#include"WC.h"

int main(int argc,char* argv[])
{
	FILE* file;
	int in = 0;
	errno_t err;
	err = fopen_s(&file, argv[argc - 1], "r");
	if (err != 0)
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
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
			case 'c':cout << "���ļ����ַ���Ϊ��" << c(file) << endl;break;
			case 'w':cout << "���ļ��ĵ�����Ϊ��" << w(file) << endl;break;
			case 'l':cout << "���ļ�������Ϊ��" << l(file) << endl;break;
			default:cout << "�������������" << endl;break;
			}
			break;
		}
		else break;
	}
	system("pause");
	return 0;
}
