#include "std_lib_facilities.h"
#include "Token.h"
#include "Token_stream.h"
#include "grm.h"

Token_stream ts;        // provides get() and putback() 

//------------------------------------------------------------------------------

bool expression(Token_stream& ts);    // declaration so that primary() can call expression()

//------------------------------------------------------------------------------

// deal with numbers and parentheses
bool primary(Token_stream& ts)
{
	Token t = ts.get();
	switch (t.kind) {
	case 'q':
		ts.putback(t);
		break;

	case '!':
		bool right;
		right = !primary(ts);
		return right;


	case '(':    // handle '(' expression ')'
	{
		double d = expression(ts);
		t = ts.get();
		if (t.kind != ')') error("')' expected");
		return d;
	}
	case '8':            // we use '8' to represent a number
		return t.value;  // return the number's value
	default:
		error("primary expected");
	}
}

//------------------------------------------------------------------------------

// deal with *, /, and %
bool term(Token_stream& ts)
{
	bool left = primary(ts);
	Token t = ts.get();        // get the next token from token stream
	bool right;

	while (true) {
		switch (t.kind) {
		case '&':
			left *= primary(ts);
			t = ts.get();
			break;
		case '^':
		{
			right = primary(ts);
			if (left == right)
				left = 0;
			else
				left = 1;
			t = ts.get();
			break;
		}
		default:
			ts.putback(t);     // put t back into the token stream
			return left;
		}
	}
}

//------------------------------------------------------------------------------

// deal with + and -
bool expression(Token_stream& ts)
{
	bool left = term(ts);      // read and evaluate a Term
	Token t = ts.get();		// get the next token from token stream
	bool right;

	while (true) {
		switch (t.kind) {
		case '|':
			right = term(ts);
			if (left + right != 0)
				left = 1;
			else
				left = 0;
			t = ts.get();
			break;
		default:
			ts.putback(t);     // put t back into the token stream
			return left;       // finally: no more + or -: return the answer
		}
	}
}