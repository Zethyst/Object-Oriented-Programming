#include<iostream>
#include<string.h>
#include<fstream>
#include<stdlib.h>
using namespace std;

class data1{  //classes and objects
	public:
    	void display(){
		cout<<"1.A class is a user-defined layout or blueprint that defines the variables and methods common to all objects\n\n";
	    cout<<"2.This is how you define a class (Syntax Of Class)-\n\n";
	    cout<<"class class_name{\n    some data\n    some functions\n }\n\n";
	    cout<<"3.An object is a data field created from a class which as some unique attributes and behavious\n\n";
	    cout<<"4.This is how you define a object (Syntax Of Object)-\n\n";
	    cout<<"Class_Name Object_Name\n";
	    cout<<"5.You can access a variable or function inside a class through it's object and by using dot operator like this-\n\n";
	    cout<<"Object_Name.variable or Object_Name.Function_Name()\n\n";
	    cout<<"6.Understand Classes and Objects like this- If car is a class then BMW, Lamborghini, Ferrari, Volkswagen, etc are it's objects.\n";
	    cout<<"A car has variables like engine, motors and 4 wheels which each of thses objects also have in common\n";
		}
};

class data2{    //static data members and static member functions
	static int x;
	public:
	 static	void display(){
		    cout<<"1.We can define class members static by simply using static keyword like this-\n\n";
	       	cout<<"static data_type_of_variable variable_name\n\n";
		    cout<<"2.When a member of a class is declared static, no matter how many objects are created, only one copy of the static member exists.\n";
		    cout<<"3.A static member is shared by all the objects of a class.\n";
	     	cout<<"4.All static members is initialized to zero when the first object is created, if no other initialization is present.\n";
		    cout<<"5.We can't initiliaze it inside a class but that can be done outside the class\n\n\n";
		    cout<<"6.A static member can also be defined by using static keyword in this way:-\n\n";
		    cout<<"static return_type function_name\n\n";
		    cout<<"7.A static member function can be called even if no objects of the class exists and the static functions are accessed using the class name and scope resolution operator(::).\n";
		    cout<<"8.A static member can only access static data member, other static member functions and any other functions from the class.\n";	}
};

class data3{ //access specifiers
	private:
		void prv(){
		cout<<"Private area, Keep out";
	     }
	     
	protected:
		void ptd(){
		cout<<"Keep out unless you have inherited me";
	}
	
	public:
		void display(){
	      cout<<"1.Access specifiers define how the members (attributes and methods) of a class can be accessed.\n";
	      cout<<"2.Access specifiers are used for data abstraction.\n\n";
	      cout<<"3.Data abstraction refers to providing only essential information to the outside world and hiding their background details\n\n";
	      cout<<"4.There are three types of access specifiers-\na.Public\nb.Protected\nc.Private\n\n";
	      cout<<"You can use access specifiers in following way-\n";
	      cout<<"class class_name{\n access_specifier_type:\n  some data\n some functions\n}\n\n";
	      cout<<"Members declared public can be accesseed anywhere in the program\n";
	      cout<<"Members declared private cannot be accessed from outside the class\n";
	      cout<<"Members declared protected cannot be accessed from outside the class, however, they can be accessed in inherited classes\n";
	  }
};

class data4{ //friend function
	private:
		void display(){
			cout<<"1.A friend function is a special function in C++ which in-spite of not being member function of a class has privilege to access private and protected data of a class.\n";
			cout<<"2.A friend kapoor is declared as a friend using the keyword friend' inside the class.\n";
			cout<<"3.The keyword 'friend' is placed only in the function declaration of the friend function and not in the function definition.\n";
			cout<<"4.Friend function can be declared in any section of the class i.e. public or private or protected.\n\n";			
			cout<<"Syntax of friend function:-\n\n";
			cout<<"class class_name{\n friend return_type function_name(argument/s)\n}\n\n";
			cout<<"And you wanna know something? I'm a private function accessed through a friend function\n";
			
		}
		
		friend void fnd_function(data4);
};

void fnd_function(data4 obj){
	obj.display();
	cout<<"\nI'm a friend function accessing private data of a class\n";
}

class data5{ //friend class
	private:
		void display(){
			cout<<"1.A friend class can access private and protected members of other class in which it is declared as friend.\n";
			cout<<"2.We can declare a class friend of another class in this way:-\n\n";
			cout<<"class A{\n private:\n some data\n friend class B\n}\n\n";
		}
		
		friend class friend_of_data5;
};

class friend_of_data5{
  public:	
  
	void display(data5&obj){
		obj.display();
		cout<<"The above data is private data accessed by another class by making both classes friends\n";
	}
};


inline void display_inline(){   //inline function
	cout<<"C++ provides an inline functions to reduce the function call overhead.\nInline function is a function that is expanded in line when it is called.\n";
	cout<<"When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call.\n";
    cout<<"This substitution is performed by the C++ compiler at compile time.\nInline function may increase efficiency if it is small\n\n";
    cout<<"The syntax for defining the function inline is:\n\n";
    cout<<"inline return-type function-name(parameters)\n{\n  //function code\n}\n\n";
    cout<<"Remember, inlining is only a request to the compiler, not a command.\nCompiler can ignore the request for inlining.\n";
    cout<<"Compiler may not perform inlining in such circumstances like:-\n\n";
    cout<<"1.If a function contains a loop. (for, while, do-while)\n2.If a function contains static variables.\nIf a function is recursive.\n";
    cout<<"4.If a function return type is other than void, and the return statement doesn’t exist in function body.\n5.If a function contains switch or goto statement\n\n";
    cout<<"Advantages of inline functions are:-\n\n";
    cout<<"1.Function call overhead doesn’t occur.\n2.It also saves the overhead of push/pop variables on the stack when function is called.\n";
    cout<<"3.It also saves overhead of a return call from a function.\n4.Inline function may be useful (if it is small) for embedded systems because inline can yield less code than the function call preamble and return.\n";
    cout<<"5.When you inline a function, you may enable compiler to perform context specific optimization on the body of function.\n\n";
    cout<<"Disadvantages of inline functions are:-\n\n";
    cout<<"1.If you use too many inline functions then the size of the binary executable file will be large, because of the duplication of same code.\n";
    cout<<"2.Too much inlining can also reduce your instruction cache hit rate, thus reducing the speed of instruction fetch from that of cache memory to that of primary memory.\n";
    cout<<"3.Inline function may increase compile time overhead if someone changes the code inside the inline function then all the calling location has to be recompiled because compiler would require to replace all the code once again to reflect the changes, otherwise it will continue with old functionality.\n";
    cout<<"4.Inline functions may not be useful for many embedded systems. Because in embedded systems code size is more important than speed.\n";
    cout<<"5.Inline functions might cause thrashing because inlining might increase size of the binary executable file. Thrashing in memory causes performance of computer to degrade.\n";
}

void overloaded_fnc(int x){ //function overloading
	cout<<"1.Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters.\n";
	cout<<"2.In Function Overloading 'function' name should be the same and the arguments should be different.\n";
}

void overloaded_fnc(int x, int y){
	cout<<"3.Function overloading can be considered as an example of a polymorphism feature in C++.\n";
	cout<<"4.Overloaded functions look like this:-\n\n";
	cout<<"  add(int a, int b)\n  add(float a, float b)\n  add(int a , int b, int c, int d)\n\n";
}

void overloaded_fnc(char x){
	cout<<"Using function overloading we can design a family of functions with one function name where each function would perform different function\n";
}

class data6{ //constructor
	public:
		data6(){
			cout<<"1.Constructor in C++ is a special method that is invoked automatically at the time of object creation.\n";
			cout<<"2.It is used to initialize the data members of new objects generally.\n";
			cout<<"3.The constructor in C++ has the same name as the class or structure.\n";
			cout<<"4.It constructs the values i.e. provides data for the object which is why it is known as constructors.\n";
			cout<<"5.Constructor does not have a return value, hence they do not have a return type.\n";
			cout<<"6.Constructors can be defined inside or outside the class declaration\n";
			cout<<"7.The prototype of Constructors is as follows:\n\n";
			cout<<"Inside the class:-\n\nclass-name (list-of-parameters)\n {//constructor definition\n}\n\n";
			cout<<"Outside the class:-\n\nclass-name :: class-name (list-of-parameters)\n {//constructor definition\n}\n";
		}
};

class data7{  //types of constructors
	public:
		
		int *num;
		data7(){
			cout<<"There are majorly 4 types of constructors:-\n";
			cout<<"1.Default constructor\n2.Parameterized Constructor\n3.Copy Constructor\n4.Dynamic Constttructor\n\n";
			cout<<"Default Constructor:-\n";
			cout<<"1.Default constructor is the constructor which doesn’t take any argument. It has no parameters.\n";
			cout<<"2.It is also called a zero-argument constructor.\n";
			cout<<"3.If we define objects and classes without defining any constructor for a class, in such a case compiler automatically generates a constructor of it's own with no paramters\n";
			cout<<"4.This type of automatically  created constructor is known as dummy constructor and it doesn't perform any initialization\n";
			cout<<"5.If you define a default constructor explicitly, the compiler no longer generates a dummy constructor for you\n";
			cout<<"6.We can define a default constructor like this:-\n\n";
			cout<<"class_name(no parameters){\n //some data\n}\n\n";
			}	
					
		data7(int x, int y){
			cout<<"Parameterized Constructors:-\n";
			cout<<"1.Unlike, Default constructor, it contains parameters (or arguments) in the constructor definition and declaration.\n";
			cout<<"2.More than one argument can also pass through a parameterized constructor.";
			cout<<"3.A parameterized constructor can be defined like this:-\n";
			cout<<"Class_Name(datatype variable){\n \\some data\n}\n\n";
		}
		
		data7(data7&obj){
			cout<<"Copy Constructors:-\n";
			cout<<"1.A copy constructor is a member function that initializes an object using another object of the same class.\n";
			cout<<"2.Copy constructor takes a reference to an object of the same class as an argument.\n";
			cout<<"3.The process of initialising members of an object through a copy constructor is known as copy constructor\n";
			cout<<"4.A copy constructor can be created in this way:-\n";
			cout<<"class_name(reference_to_the_object){\n \\some data\n}\n\n";
		}
		
		data7(int x){
			num= new int;
			*num=x;
			cout<<"Dynamic Constructor:-\n";
			cout<<"1.When allocation of memory is done dynamically using dynamic memory allocator new in a constructor, it is known as dynamic constructor.\n";
			cout<<"2.By using a dynamic constructor we can dynamically initialize the objects\n";
			cout<<"3.We can create a dynamic constructor in the same way we create a parameterised constructor, the only difference is the use of 'new' inside a dynamic constructor\n";
		}
	};
		
class data8{ //Destructors
   public:
	data8(){}
	
	~data8(){
		cout<<"1.A destructor is also a special member function as a constructor.\n";
		cout<<"2.Destructor destroys the class objects created by the constructor.\n";
		cout<<"3.Destructor has the same name as their class name preceded by a tilde (~) symbol.\n";
		cout<<"4.It is not possible to define more than one destructor.\n";
		cout<<"5.The destructor is only one way to destroy the object created by the constructor. Hence destructor can-not be overloaded.\n";
		cout<<"6.Destructor neither requires any argument nor returns any value.\n";
		cout<<"7.It is automatically called when the object goes out of scope.\n";
		cout<<"8.Destructors release memory space occupied by the objects created by the constructor.\n";
		cout<<"9.In destructor, objects are destroyed in the reverse of object creation.\n\n\n\n";
	}
};	

class data9{ //Inheritence
	public:
		
		void display(){
			cout<<"1.The capability of a class to derive properties and characteristics from another class is called Inheritance.\n";
			cout<<"2.The new class created is called “derived class” or “child class” and the existing class is known as the 'base class' or 'parent class'.\n";
			cout<<"3.When we say derived class inherits the base class, it means, the derived class inherits all the properties of the base class, without changing the properties of base class and may add new features to its own.\n\n";
			cout<<"When to use Inheritence??\n\n";
			cout<<"Consider a group of vehicles. You need to create classes for Bus, Car, and Truck.\n";
			cout<<"The methods fuelAmount(), capacity(), applyBrakes() will be the same for all three classes.\n";
			cout<<"If we create these classes avoiding inheritance then we have to write all of these functions in each of the three classes\n";
			cout<<"his increases the chances of error and data redundancy. To avoid this type of situation, inheritance is used.\n";
			cout<<"If we create a class Vehicle and write these three functions in it and inherit the rest of the classes from the vehicle class, then we can simply avoid the duplication of data and increase re-usability.\n\n";
		}
};

class  inherited_from_data9: public data9{
	public:
		void display(){  
			data9::display();
			cout<<"The syntax of using inheritence is given below:-\n\n";
			cout<<"class  derived_class_name : access-specifier base_class_name\n\n";
			cout<<"Note- Any number of classes can be inherited from one class.";
		}
};

class data10{ //Types Of Inheritence
	public:
		void display1(){
			cout<<"There are five types of inheritence:-\n";
			cout<<"1.Single inheritance\n2.Multiple inheritance\n3.Multilevel inheritance\n4.Hierarchical inheritance\n5.Hybrid inheritance\n\n";
		}
};

class single_inheritence: public data10{
	public:
		void display2(){
			display1();
			cout<<"In single inheritance, a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.\n";
		}
};

class multiple_dummy{
	public:
		void no_work(){}
};

class multiple_inheritence:public multiple_dummy, public single_inheritence{
	public:
		void display3(){
			display2();
			cout<<"Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.\n";
		}
};

class multilevel_inheritence:public multiple_inheritence{
	public:
		void display4(){
			display3();
			cout<<"In multilevel inheritance, a derived class is created from another derived class\n";
		}
};

class dummy1{
	public:
		void no_work(){}
};

class dummy2: public virtual dummy1{
	public:
		void no_work2(){}
};

class hierarchical_inheritance : public virtual dummy1{              
	public:                   
	   void display5(){                          
	   	    cout<<"In this type of inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class.\n";
	   }                                              				                    						                         
};                                         
                                          

class hybrid_inheritence: public hierarchical_inheritance{
	public:
		void display6(){
			display5();
			cout<<"Hybrid Inheritance is implemented by combining more than one type of inheritance.\n"; //In this case multiple and multilevel are combined
 	}
};


class virtual_multiple: public dummy2{  //virtual function
	public:     //Here if u go above you can see that we have declared dummy1 virtual while creating dummy_2
       void display(){
       	cout<<"1.Virtual classes are primarily used during multiple inheritance.\n";
       	cout<<"2.To avoid, multiple instances of the same class being taken to the same class which later causes ambiguity, virtual classes are used.\n";
       	cout<<"3.Syntax of declaring a class virtual is as following:-\n\n";
       	cout<<"class B : virtual public A or class C : public virtual A\n\n";
       	cout<<"*Note: virtual can be written before or after the public.\n";
	   }
};

class parent{    //function overriding
	public:
		void display(){
			cout<<"This text won't be displayed in console because I am going to be overriden by another function in child class\n";
		}
};

class child: public parent{
	public:
		void display(){
			cout<<"1.In function overriding, the same function is defined in both the derived class and the based class.\n";
			cout<<"2.Now if we call this function using the object of the derived class, the function of the derived class is executed.\n";
			cout<<"3.This is known as function overriding in C++. The function in derived class overrides the function in base class.\n";
		}
};

void scope_resolution_op(){ 
	cout<<"Scope resolution operaor looks like this :: and has a variety of uses:-\n\n";
	cout<<"1.To access a global variable when there is a local variable with same name.\n";
	cout<<"2.To define a function outside a class.\n";
	cout<<"3.To access a class’s static variables.\n";
	cout<<"4.In case of multiple Inheritance: If same variable name exists in two ancestor classes, we can use scope resolution operator to distinguish.\n";
	cout<<"5.For namespace If a class having the same name exists inside two namespace we can use the namespace name with the scope resolution operator to refer that class without any conflicts\n";
	cout<<"6.Refer to a class inside another class: If a class exists inside another class we can use the nesting class to refer the nested class using the scope resolution operator\n";
}

void polymorphism(){   //polymorphism and it's types
	cout<<"1.The term 'Polymorphism' is the combination of 'poly' + 'morphs' which means many forms. It is a greek word.\n";
	cout<<"2.Polymorphism in C++ means the same entity(function, operator or object) behaves differently in different scanerios.\n";
	cout<<"3.There are two types of polymorphism:-\n\n";
	cout<<"a)Compile Time:-\n";
	cout<<"i)In compile time polymorphism, functions are called at the time of compilation.\n";
	cout<<"ii)This is also known as early binding or static binding.\n";
	cout<<"iii)Examples-Function Overloading, Operator Overloading.\n\n";
	cout<<"b)Run Time:-\n";
	cout<<"i)In a run time polymorphism, functions are called at the time of program execution.\n";
	cout<<"ii)This is also known as late binding or dynamic binding.\n";
	cout<<"iii)Examples-Function Overriding, Virtual Function.\n";
}

class operator_overloading_dummy_class{
	public:
		void no_work(){}
};

void operator+(operator_overloading_dummy_class&obj1,operator_overloading_dummy_class&obj2){ //operator overloading
     cout<<"1.C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading.\n";
     cout<<"2.For example, we can overload an operator '+' in a class like String so that we can concatenate two strings by just using '+'.\n";
     cout<<"3.By using operator overloading, we do not change the orignal meaning of the operator, we just prvoide an additional special meaning\n";
     cout<<"4.Syntax Of Operator Overloading:-\n\n";
     cout<<"returnType operator_symbol (arguments) {\n some data or function\n}\n\n";
     cout<<"5.There are few operators which can't be overloaded and they are:\n";
	 cout<<"a)sizeof operator\n";
	 cout<<"b)Scope resolution Operator(::)\n";
     cout<<"c)Class member access operator (.)\n";
	 cout<<"d) Ternary or conditional operator (?:)\n";
}

class base{  //virtual function
	public:
		virtual void display(){
			cout<<"This is a virtual function";
		}
};

class derived : public base{
	public:
		
		void display(){
			cout<<"1.Virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class.\n";
			cout<<"2.When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.\n";
			cout<<"3.Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.\n";
			cout<<"4.They are mainly used to achieve Runtime polymorphism\n";
			cout<<"5.Functions are declared with a virtual keyword in base class.\n";
			cout<<"6.This is how you implement a virtual function:-\n\n";
			cout<<"virtual return_type function_name(parameters)\n\n";
			cout<<"Rules for Virtual Functions:-\n\n";
			cout<<"1.Virtual functions cannot be static.\n";
			cout<<"2.A virtual function can be a friend function of another class.\n";
			cout<<"3.Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.\n";
			cout<<"4.The prototype of virtual functions should be the same in the base as well as derived class.\n";
			cout<<"5.They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override.\n";
			cout<<"6.A class may have virtual destructor but it cannot have a virtual constructor.\n";
		}
};

class another_base{ //pure virtual function and abstract class
	public:
		virtual void display()=0;
};

class another_derived : public another_base{
	public:
		
		void display(){
			cout<<"Pure Virtual functions:-\n\n";
			cout<<"1.A pure virtual function is a virtual function in C++ for which we need not to write any function definition and only we have to declare it\n";
			cout<<"2.It is declared by assigning 0 in the declaration.\n";
	        cout<<"3.Syntax of declaring a pure virtual function is as following:-\n\n";
			cout<<"virtual return_type function_name(paramters)=0\n\n";
			cout<<"4.Pure virtual functions are used if a function doesn't have any use in the base class but the function must be implemented by all its derived classes\n\n";
			cout<<"Abstract Classes:-\n\n";
			cout<<"1.An abstract class is a class in C++ which have at least one pure virtual function.\n";
			cout<<"2.Abstract class can have normal functions and variables along with a pure virtual function.\n";
			cout<<"3.Abstract class cannot be instantiated, but pointers and references of Abstract class type can be created.\n";
			cout<<"4.If an Abstract Class has derived class, they must implement all pure virtual functions, or else they will become Abstract too.\n";
			cout<<"5.Abstract classes are mainly used for Upcasting, so that its derived classes can use its interface.\n";
		}
};

class yet_another_base{     //virtual constructors and destructors
	public:
		yet_another_base(){
			cout<<"In C++, the constructor cannot be virtual, because when a constructor of a class is executed there is no virtual table in the memory, means no virtual pointer defined yet.\nSo, the constructor should always be non-virtual.\n";
			cout<<"But a virtual destructor is possible.\n\n";
		}
		
		virtual ~ yet_another_base(){}
};

class yet_another_derived: public yet_another_base{
	public:
		yet_another_derived(){}
		~yet_another_derived(){
			cout<<"1.Deleting a derived class object using a pointer of base class type that has a non-virtual destructor results in undefined behavior.\n";
			cout<<"2.To correct this situation, the base class should be defined with a virtual destructor.\n";
			cout<<"3.Making base class destructor virtual guarantees that the object of derived class is destructed properly, i.e., both base class and derived class destructors are called.\n";
			cout<<"4.A virtual destructor can be defined as following:-\n\n";
			cout<<"virtual ~ class_name(parameters)\n\n";
		}
};

class exception_h{ //exception handling
	public:
		void handle_exception(int x){
			
			if(x==0){
				cout<<"What are Exceptions?\n\n";
				cout<<"1.Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution.\n\n";
				cout<<"2.There are two types of exceptions:\na)Synchronous\nb)Asynchronous\n\n";
				cout<<"What is Exception Handling?\n\n";
				cout<<"1.When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.\n";
				cout<<"2.When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (error).\n";
				cout<<"3.By using excption handling we can detect these exceptions and errors and throw them out as a message instead of getting a compilation error or execution error in our program.\n";
				cout<<"4.Exception handling in C++ consists of three keywords: try, throw and catch\n";
				cout<<"5.The try statement allows you to define a block of code to be tested for errors while it is being executed.\n";
				cout<<"6.The throw keyword throws an exception when a problem is detected, which lets us create a custom error.\n";
				cout<<"7.The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.\n";
				cout<<"Few more things about exception handling in C++:\n\n";
				cout<<"1.There is a special catch block called the 'catch all' block, written as catch(…), that can be used to catch all types of exceptions.\n";
				cout<<"2.If a statement is written after throw, that statement will be ignored by the compiler.\n";
				throw x;
				cout<<"This statement is written after throw, that's why it will be ignored by compiler and won't be executed";
			}
		}
};

template <class T> 

T template_info(T x){    // templates
	cout<<"1.A template is a simple yet very powerful tool in C++.\n";
	cout<<"2.The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types.\n";
	cout<<"3.Templates does this by defining generic classes and generic functions and thus provides support for generic programming.\n";
	cout<<"4.Templates are expanded at compiler time. This is like macros.\n";
	cout<<"5.There are two major types of templates:-\na)Function Templates\nb)Class Templates\n";
	cout<<"6.We can overload the generic function means that the overloaded template functions can differ in the parameter list.\n";
	cout<<"7.You can define a function template as following:-\n\n";
	cout<<"template <typename T> return_type function_name (T paramter1, T parameter2 and so on)\n\n";
	cout<<"8.You can define a class template as following:-\n\n";
	cout<<"template <class T>\n class class_name{\n};\n\n";
	return x;
}


void file_handling(){    //file handling
	cout<<"1.Files are used to store data in a storage device permanently.\n";
	cout<<"2.File handling provides a mechanism to store the output of a program in a file and to perform various operations on it.\n";
	cout<<"3.In C++ we have a set of file handling methods. These include ifstream, ofstream, and fstream.\n";
	cout<<"4.These classes are derived from fstrembase and from the corresponding iostream class.\n";
	cout<<"5.These classes, designed to manage the disk files, are declared in fstream and therefore we must include fstream and therefore we must include this file in any program that uses files.\n";
	cout<<"6.ofstream: This Stream class signifies the output file stream and is applied to create files for writing information to files.\n";
	cout<<"7.ifstream: This Stream class signifies the input file stream and is applied for reading information from files.\n";
	cout<<"8.fstream: This Stream class can be used for both read and write from/to files.\n";
	cout<<"9.C++ provides us with the following modes in File Handling:\n";
	cout<<"a)in*(input):-File open for reading: the internal stream buffer supports input operations\n";
	cout<<"b)out(output):-File open for writing: the internal stream buffer supports output operations.\n";
	cout<<"c)binary(binary):-Operations are performed in binary mode rather than text.\n";
	cout<<"d)ate(at end):-The output position starts at the end of the file.\n";
	cout<<"e)app(append):-All output operations happen at the end of the file, appending to its existing contents.\n";
	cout<<"f)trunc(truncate):-Any contents that existed in the file before it is open are discarded.\n\n\n";
	
	string choice;
	cout<<"We can even read this complete program using file handling\n";
	cout<<"If you want to read this program then type 'read' otherwise type anything else to continue studying other topics:\n";
	cin>>choice;
	
	if(choice=="read"){
		const char *fileName="OOP- Teach All Concepts.cpp";
        char ch;
        ifstream file;
	
	file.open(fileName,ios::in);
	
	if(!file)
	{
		cout<<"Error in opening file!!!"<<endl;
	}

	while (!file.eof()) 
	{
		file >> noskipws >> ch;	
		cout << ch;
	}
	
	file.close();
	}
}

class abstraction{ //data abstraction
	private:
		void abstracted(){
			cout<<"Data abstraction using access specifers, hidden data";
		}
		
	public:
		void display(){
			cout<<"1.Abstraction means displaying only essential information and hiding the details\n";
			cout<<"2.Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.\n";
			cout<<"3.In C++ data abstraction can be achived by two ways:-\n\n";
			cout<<"a)Abstraction using classes:";
			cout<<" A class has the responsibility to determine which data member is to be visible outside and which is not and we can achieve this by using access specifiers\n";
			cout<<"b)Abstraction in header files- Header files contains in built library functions like strcpy(),strlen (), pow(), etc and they perform various functions but hide the algorithm behind those functions\n";
			cout<<"4.C++ provides a great level of abstraction. For example, pow() function is used to calculate the power of a number without knowing the algorithm the function follows.\n";
			cout<<"5.In C++ program if we implement class with private and public members then it is an example of data abstraction.\n";
		}
};

class encapsulation{ //encapsulation
	private:
		int x;
	
	public:
		void display(int a){
			x=a;
			cout<<"1.In normal terms Encapsulation is defined as wrapping up of data and information under a single unit.\n";
			cout<<"2.In OOP, Encapsulation is defined as binding together the data and the functions that manipulates them.\n";
			cout<<"3.The data is not accessible to the outside world, and only those functions which are wrapped in the class can access it.\n";
			cout<<"4.These functions provide the interface between the object's data and the program.\n";
			cout<<"5.The function which we are making inside the class ,it must use the all member variable then only it is called encapsulation.\n";
			cout<<"6.If we  don''t  make function inside the class which is using the member  variable of the class then we don’t call it encapsulation.\n";
			cout<<"7.Encapsulation also leads to data abstraction or hiding\n";
		}
};

class bind{  //binding
	public:
	void binding(){
	cout<<"1.Binding refers to the process of converting identifiers (such as variable and performance names) into addresses.\n";
	cout<<"2.Binding is done for each variable and functions.\n";
	cout<<"3.For functions, it means that matching the call with the right function definition by the compiler.\n";
	cout<<"4.It takes place either at compile time or at runtime.\n";
	cout<<"5.Early Binding:\na) As the name indicates, compiler (or linker) directly associate an address to the function call.\n";
	cout<<"b)It replaces the call with a machine language instruction that tells the mainframe to leap to the address of the function.\n";
	cout<<"c)By default early binding happens in C++ and is also known as static binding.\n\n";
	cout<<"6.Dynamic Binding:\na)In this, the compiler adds code that identifies the kind of object at runtime then matches the call with the right function definition\n";
	cout<<"b)This can be achieved by declaring a virtual function.\n";
	cout<<"c)Dynamic binding is also known as late binding.\n\n";
	cout<<"7.Binding is associated with polymorphism and inheritance.\n";
    }
};

class message_passing1{ //message passing
    public:
    	void display1(){
    		cout<<"What is a message?\n\n";
    		cout<<"1.A message is a form of request that is made to an object to perform a function specific to the object to which the request was made.\n";
    		cout<<"2.A message is a form of communication between objects that make an object perform a task for the system.\n";
    		cout<<"What is message passing?\n";
    		cout<<"1.All communication between objects is done via message is called message passing.\n";
    		cout<<"2.A message for an object is a request for execution of a function.\n";
    		cout<<"3.The receiving object will invoke a function and generates results.\n";
    		cout<<"4.Message passing involves specifying:\n\n";
    		cout<<"a)The name of the object\n";
    		cout<<"b)The name of the function\n";
    		cout<<"c)The information to be send\n";
		}
};

class message_passing2{
	public:
		void display2(message_passing1 message){
			message.display1();
		}
};

int main(){
	int choice;
	cout<<"Struggling to lean OOP concepts?"<<endl;
	cout<<"Don't worry I'm here to help you and I have created a program to help you"<<endl;
	cout<<"Just ask this program about any topic you want to learn about";
	cout<<" and this program will provide you information about that concept"<<endl;
	cout<<"\n\n";
	do{
		cout<<"1.What Is OOP\n";
		cout<<"2.How Is OOP different from POP?\n";
		cout<<"3.Advantages and Disadvantages of OOP\n";
		cout<<"4.Features of OOP\n";
		cout<<"5.Applications of OOP\n";
		cout<<"6.Classes and Objects\n";
		cout<<"7.Static Members and Static Functions\n";
		cout<<"8.Access Specifiers\n";
		cout<<"9.Friend functions\n";
		cout<<"10.Friend Class\n";
		cout<<"11.Inline function\n";
		cout<<"12.Function Overloading\n";
		cout<<"13.Constructors\n";
		cout<<"14.Types of Constructors\n";
		cout<<"15.Destructors\n";
		cout<<"16.Inheritence\n";
		cout<<"17.Types of Inheritence\n";
		cout<<"18.Virtual Base Class\n";
		cout<<"19.Function Overriding\n";
		cout<<"20.Scope resolution operator\n";
		cout<<"21.Polymorphism and it's types\n";
		cout<<"22.Operator Overloading\n";
		cout<<"23.Virtual Function\n";
		cout<<"24.Pure Virtual Function and Abstract Class\n";
		cout<<"25.Virtual Constructors and Virtual Destructors\n";
		cout<<"26.Exception Handling\n";
		cout<<"27.Templates\n";
		cout<<"28.File Handling\n";
		cout<<"29.Data Abstraction\n";
		cout<<"30.Encapsulation\n";
		cout<<"31.Binding\n";
		cout<<"32.Message Passing\n";
		cout<<"33.Exit\n";
		cout<<"\n\n Choose a topic to learn about it:";
		cin>>choice;
	
	switch(choice){
	
	case 1:
	    {
	     cout<<endl<<endl<<endl;
	     cout<<"1.Object-oriented programming (OOP) is a computer programming model that organizes software design around data, or objects, rather than functions and logic.\n";
         cout<<"2.OOP focuses on the objects that developers want to manipulate rather than the logic required to manipulate them.\n";
         cout<<"3.This approach to programming is well-suited for programs that are large, complex and actively updated or maintained.";
         cout<<endl<<endl<<endl;
	     break;
	   	}
	   
	case 2:
		{
		cout<<endl<<endl<<endl;
		cout<<"OOP\t\t\t\t\t\t\t\t\tPOP\n\n";
		cout<<"1.OOP stands for object oriented programming.\tPOP stands for procedure oriented programming.\n";
		cout<<"2.The program is divided into objects.\t\tThe program is divided into functions.\n";
		cout<<"3.It follows bottom up approach.\t\tIt follows top down approach\n";
		cout<<"4.Adding new data and functions is easy\t\tExpanding data and function is not easy.\n";
		cout<<"5.Data can be hidden using Encapsulation.\tNo data hiding. Data is accessible globally.\n";
		cout<<"6.Used for solving big problems.\t\tNot suitable for solving big problems.\n";
		cout<<endl<<endl<<endl;
	    break;
        } 
        
	case 3:
		{
		cout<<endl<<endl<<endl;
		cout<<"Advantages\t\t\t\t\t\tDisadvantages\n\n";
		cout<<"1.Improved software-development productivity:\t\t1.Larger program size.\n";
		cout<<"2.Improved software maintainability\t\t\t2.Object oriented programs require a lot of work to create.\n";
		cout<<"3.Faster development due to reusability\t\t\t3.Object oriented programs are slower than other programs.\n";
		cout<<"4.Reusing software also lowers cost of development.\t4.Object Oriented Programs also demand more system resources.\n";
	    cout<<"5.Good quality software\t\t\t\t\t5.It takes time to understand the OOPs language\n";
	    cout<<endl<<endl<<endl;
	    break;
	    }
	    
	case 4:
		{
		cout<<endl<<endl<<endl;
		cout<<"OOP has many features some of which are:-\n\n";
		cout<<"1.Inheritence\n";
		cout<<"2.Polymorphism\n";
		cout<<"3.Virtual functions and Classes\n";
		cout<<"4.Classes and Objects\n";
		cout<<"5.Data Abstraction\n";
		cout<<"6.Encapsulation\n";
		cout<<"7.Friend function and friend class";
		cout<<endl<<endl<<endl;
		break;
        }
        
	case 5:
		{
		cout<<endl<<endl<<endl;
		cout<<"There are endless applications of OOP: OOP is used in following:\n\n";
		cout<<"1.Hypertext and Hypermedia\n";
		cout<<"2.Simulation and Modelling system\n";
		cout<<"3.Office Automation Systems\n";
		cout<<"4.Neural Networking and Parallel Programming\n";
		cout<<"5.Object Oriented Databases\n";
		cout<<"6.Real Time System Design\n";
		cout<<"7.Client Server Systems\n";
		cout<<"8.CIM/CAD/CAM Systems\n";
		cout<<endl<<endl<<endl;
		break;
        }
        
	case 6:
		{
		cout<<endl<<endl<<endl;
	    data1 obj;
	    obj.display();
	    cout<<endl<<endl<<endl;
		break;
	    }
	    
    case 7:
    	{
    	cout<<endl<<endl<<endl;
    	data2::display();
    	cout<<endl<<endl<<endl;
    	break;
        }
        
    case 8:
    	{
    	cout<<endl<<endl<<endl;
    	data3 obj2;
    	obj2.display();
    	cout<<endl<<endl<<endl;
    	break;
        }
        
    case 9:
    	{
    	cout<<endl<<endl<<endl;
    	data4 obj3;
        fnd_function(obj3);
    	cout<<endl<<endl<<endl;
    	break;
        }

    case 10:
    	{
    	cout<<endl<<endl<<endl;
    	data5 obj4;
    	friend_of_data5 obj5;
    	obj5.display(obj4);
    	cout<<endl<<endl<<endl;
    	break;
        }
        
    case 11:
    	{
    	cout<<endl<<endl<<endl;
    	display_inline();
    	cout<<endl<<endl<<endl;
    	break;
        }
        
    case 12:
    	{
    	cout<<endl<<endl<<endl;
    	int argument1=0, argument2=1;
        char argument3= 'n';
    	overloaded_fnc(argument1);
    	overloaded_fnc(argument1, argument2);
    	overloaded_fnc(argument3);
    	cout<<endl<<endl<<endl;
    	break;
    }
    
    case 13:
    	{
    	cout<<endl<<endl<<endl;
    	data6 obj6;
    	cout<<endl<<endl<<endl;
    	break;
        }
    	
    case 14:
    	{
    	 cout<<endl<<endl<<endl;
    	 int argument1=1, argument2=2, argument3=3;
		 data7 call_default;	
		 data7 call_paramterized(argument1, argument2);
		 data7 call_copy(call_default);
		 data7 call_dynamic(argument3);
		 cout<<endl<<endl<<endl;
		 break;
		}
    	
	case 15:
	    {
	    cout<<endl<<endl<<endl;
	    data8 destruct;
	    break;
		}
		
	case 16:
	  	{
	  	cout<<endl<<endl<<endl;
	  	inherited_from_data9 inherited_obj;
	  	inherited_obj.display();
	  	cout<<endl<<endl<<endl;
		break;	
		}
		
	case 17:
		{
		cout<<endl<<endl<<endl;
		multilevel_inheritence  inh_obj1;
		inh_obj1.display4();
		hybrid_inheritence inh_obj2;
		inh_obj2.display6();
		cout<<endl<<endl<<endl;
		break;
		}
		
	case 18:
		{
		cout<<endl<<endl<<endl;
		virtual_multiple vm;
		vm.display();
		cout<<endl<<endl<<endl;
		break;
		}
		
	case 19:
		{
		cout<<endl<<endl<<endl;
		child chd;
		chd.display();
		cout<<endl<<endl<<endl;
		break;
		}
		
	case 20:
		{
		cout<<endl<<endl<<endl;	
		scope_resolution_op();
		cout<<endl<<endl<<endl;	
		break;
		}

	case 21:
	    {
	    cout<<endl<<endl<<endl;
		polymorphism();
		cout<<endl<<endl<<endl;
		break;	
		}	
	
	case 22:
    	{
    	cout<<endl<<endl<<endl;
    	operator_overloading_dummy_class object1, object2;
    	object1+object2;
    	cout<<endl<<endl<<endl;
    	break;
		}
		
	case 23:
		{
		cout<<endl<<endl<<endl;
		base *ptr;
		derived d;
		ptr=&d;
		ptr->display();
		cout<<endl<<endl<<endl;
		break;
		}
		
	case 24:
		{
		cout<<endl<<endl<<endl;
		another_base *bp= new another_derived();
		bp->display();
		cout<<endl<<endl<<endl;
		break;
		}
		
	case 25:
		{
		cout<<endl<<endl<<endl;
		yet_another_derived *derv= new yet_another_derived();
		yet_another_base *bas= derv;
		delete bas;
		cout<<endl<<endl<<endl;
		break;
		}
		
	case 26:
	    {
		cout<<endl<<endl<<endl;
		
		try{
		exception_h exc;
		int var=0;
		exc.handle_exception(var);
    	}
    	
    	catch(int a){
		}
		
		cout<<endl<<endl<<endl;
		break;
      }
      
    case 27:
    	{
    	cout<<endl<<endl<<endl;
    	int z=1;
    	template_info<int>(z);
    	cout<<endl<<endl<<endl;
    	break;
		}
		
    case 28:
	   {
    	cout<<endl<<endl<<endl;
    	file_handling();
    	cout<<endl<<endl<<endl;
		break;
	   }
    	
    case 29:
    	{
    	cout<<endl<<endl<<endl;
    	abstraction abs;
    	abs.display();
    	cout<<endl<<endl<<endl;
    	break;
		}
		
	case 30:
		{
		cout<<endl<<endl<<endl;
		encapsulation enc;
		int a=10;
		enc.display(a);
		cout<<endl<<endl<<endl;
		break;
		}
		
	case 31:
	    {
		cout<<endl<<endl<<endl;
		bind bd;
		bd.binding();
		cout<<endl<<endl<<endl;
		break;
	    }
	    
    case 32:
	    {
    	cout<<endl<<endl<<endl;
    	message_passing2 pass;
    	message_passing1 message;
    	pass.display2(message);
    	cout<<endl<<endl<<endl;
		break;
    	}
    	
    case 33:
    	{
    	cout<<endl<<endl<<endl;
    	cout<<"Thanks for choosing my program to study and I hope I was able to help you.\n";
    	cout<<"Please come back if you want to study any other topic and access notes\n\n\n\n";
    	cout<<"******Program Terminated Successfully*******";
    	exit(0);
	    }
	
	default:	
		cout<<"Wrong Choice\n\n\n";
    }
  }while(choice!=33);
  return 0;
}