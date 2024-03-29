#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <initializer_list>

using namespace std;

class StrBlob {
public:
	typedef std::vector<std::string>::size_type size_type;

	StrBlob(): data(make_shared<vector<std::string>>()) {};
	StrBlob(std::initializer_list< std::string> il): data(make_shared<vector<std::string>>(il)) {};

	void push_back(const std::string &t) { data->push_back( t ); };

	int count() const { return data->size(); }
 
private:
	std::shared_ptr<std::vector<std::string> > data;
};

int main(int argc, char* argv[])
{
	StrBlob b1;
	{
		StrBlob b2 = {"a", "an", "the"};
		b1 = b2;
		b2.push_back("about");

		cout << b2.count() << endl; // 4
	}

	cout << b1.count() << endl; // 4

	return 0;
}