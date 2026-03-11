#include<iostream>
#include<string>

//표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin; using std::cout;
using std::endl; using std::string;



int main()
{
	cout
		<< "Please enter your first name: ";
	string name;
	cin
		>> name;
	//출력하려는 메세지 구성
	const string greeting
		= "Hello, " + name + "!";
	/*
	 ***************
	 *	           *
	  hello jaewon *
	 *             *
	 ***************
	 */
	 //인삿말 둘러싼 공백 개수
	const int pad = 3;
	//출력할 행과 열 개수
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;
	 
	 //입력 부분과 출력 부분 구별
	cout << endl;

	//rows개 행 출력
	//불변성: 지금까지 r개 행을 출력
	for (int r=0; r!=rows; ++r)
	{
		string::size_type c = 0;


		while (c != cols)
		{
			if (r == pad + 1 && c == pad + 1)
			{
				cout << greeting;
				c += greeting.size();
			}
			else
			{
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				c++;
			}
		}
		cout << endl;
	}
	 
	 
	 
	return 0;
}