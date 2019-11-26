#include <iostream>
#include <string>
#include <vector>

template<typename T> struct S
{
public:

	S(T a):val{a} 
	{
	};	

	T& get();
	T& get() const;

	void operator=(const T& newval);

private: 
	T val;

};


template<typename T>	void S<T>::operator=(const T& value){
	this->val = value;
}



template<typename T>	T& S<T>::get(){
	return val;
}


template<typename T>	T& S<T>::get() const{
	return val;
}

template<typename T>	void read_val(T &v){
		
		std::cin>>v;
	
	}


template<typename T> std::ostream &operator<<(std::ostream &os, std::vector<T> &v){

	os<<"{ ";

	for(int i = 0; i<v.size(); ++i){

		os<<v[i];

		if(i < v.size()-1){ os<<", "; }
	}

	os<<" }";

	return os;
}




int main(){


	S<char> ch('c');
	S<int> num(2);
	S<double> dble(5.2);
	S<std::string> strin("stringg123");
	S<std::vector<int>> vec(std::vector<int> {5, 9});


	std::cout<<ch.get()<<" "<<num.get()<<" "<<dble.get()<<" "<<strin.get()<<" "<<vec.get()<<std::endl;


	std::cout<<"set int: ";

	int x;
	read_val(x);
	num = x;

	std::cout<<std::endl<<"set double: ";
	

	double d;
	read_val(d);
	dble = d;

	std::cout<<std::endl<<"set string: ";

	std::string str;
	read_val(str);
	strin = str;

	std::cout<<std::endl<<"set char: ";

	char c;
	read_val(c);
	ch = c;

	std::cout<<std::endl;

	std::cout<<ch.get()<<" "<<num.get()<<" "<<dble.get()<<" "<<strin.get()<<" "<<vec.get()<<std::endl;

	return 0;
}