#include<iostream>
int main()
{
	std::cout << 3 + 4 << std::endl;

	std::cout
		<< "This (\") is a quote, and this(\\) is a backflash."
		<< "\n\n\tThis is a sentence.\b"
		<< std::endl;
	/*이것은 여러 행에 걸쳐 나타나는 주석입니다.
	시작과 끝 구분기호로 /*와 */를 사용하기 때문입니다*/
	std::cout
		<< "Does this work?"
		<< std::endl;
	return 0;
}