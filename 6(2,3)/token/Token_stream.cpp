#include "std_lib_facilities.h"
#include "Token.h"
#include "Token_stream.h"
#include "grm.h"

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------


//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
	:full(false), buffer(0)    // no Token in buffer
{
}

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
	if (full) error("putback() into a full buffer");
	buffer = t;       // copy t to buffer
	full = true;      // buffer is now full
}

//------------------------------------------------------------------------------

Token Token_stream::get()
{
	if (full) {       // do we already have a Token ready?
		// remove token from buffer
		full = false;
		return buffer;
	}

	char ch;
	cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

	switch (ch) {
	case ';':    // for "print"
	case 'q':    // for "quit"
	case '(': case ')': case '|': case '^': case '&': case '!':
		return Token(ch);        // let each character represent itself
	case '0': case '1':
	{
		bool val = (ch == '1');        // read a floating-point number
		return Token('8', val);   // let '8' represent "a number"
	}
	case 't': case 'T':
	{
		for (int i = 0; i < 3; i++)cin >> ch;
		return Token('8', true);
	}
	case 'f': case 'F':
	{
		for (int i = 0; i < 4; i++)cin >> ch;
		return Token('8', false);
	}
	default:
		error("Bad token");
	}
}

//