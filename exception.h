#ifndef EXCEPTION_H
#define EXCEPTION_H

struct Exception
private:
	m_msg : char*
public:
	Exception()
	Exception(in msg : const char*)
	Exception(in copy : const Exception&)
	Exception(inout copy : Exception&&)
	~Exception()
	
	operator =(in rhs : const Exception&) : Exception &
	operator =(inout rhs : Exception&&) : Exception &
	operator <<(inout stream : ostream&, in except : const Exception&) : ostream &

	getMessage():const char*
	setMessage(in msh : const char*):void
	

#endif