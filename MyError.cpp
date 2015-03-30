// MyError.cpp
class MyError {
		const char* const data;
	public:
		MyError(const char* const msg =0):data(msg) {}
};

void f(){
	//here we throw an exceptional object
	throw MyError("something bad happened");
};

int main()
{
	// as you will see shortly, we'll want a "try block" here
	f();
}
