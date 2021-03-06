#include "std_lib_facilities.h"
#include "Token.h"
#include "Token_stream.h"
#include "grm.h"

int main()

try
{
	bool val = 0;
	Token_stream ts;
	while (cin) {
		Token t = ts.get();

		if (t.kind == 'q') break; // 'q' for quit
		if (t.kind == ';')        // ';' for "print now"
			cout << "=" << val << '\n';
		else
			ts.putback(t);
		val = expression(ts);
	}
	keep_window_open();
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}