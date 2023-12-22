#pragma once
#ifndef BytecodeLexer

struct LexedByteCode
{

};

class BytecodeLexer
{
public:
	BytecodeLexer();
	~BytecodeLexer();
	LexedByteCode StartLex(const char& code);
private:

};

BytecodeLexer::BytecodeLexer()
{
}

BytecodeLexer::~BytecodeLexer()
{
}


LexedByteCode BytecodeLexer::StartLex(const char& code) 
{
	
}






#endif // !BytecodeLexer
