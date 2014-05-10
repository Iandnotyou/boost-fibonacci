#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <iomanip>

using boost::multiprecision::cpp_int;
using namespace std;


// iterativ
template <typename T>
T fibonacci(T n) {
	T current, pre = T(1), prepre = T(0);

	if (n == 0 || n == 1) return T(n);
    for (T i = T(1);i < n; i++) {
	     current = pre + prepre;
	     prepre  = pre;
	     pre     = current;

	}
    return current;
}


int main()
{
    cout<< fibonacci(cpp_int(13330)) << endl;
}

