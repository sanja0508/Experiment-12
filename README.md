# Experiment-12

Aim: To understand and implement the concept of constructors (default, parameterized, and copy) and destructors in C++ to manage the lifecycle and initialization of objects.

Software Required: Visual Studio / Code::Blocks / Dev C++ / Turbo C++, C++ Compiler (GCC or MSVC)

Theory: In C++, a class is a blueprint, but an object is a real-world instance of that blueprint. For an object to be useful, its data members must be properly initialized when it is created. That's the job of a constructor. A constructor is a special member function that is automatically called when an object of a class is created. Its name is the same as the class name, and it has no return type. There are several types of constructors we can define: a default constructor takes no arguments and provides a basic, default initialization; a parameterized constructor takes arguments to allow for specific initialization values at the time of creation; and a copy constructor takes an existing object of the same class as an argument and creates a new object as a copy of the existing one.
Just as objects need to be initialized, they also need to be properly cleaned up. A destructor is a special member function that is automatically called when an object goes out of scope or is explicitly destroyed. Its name is the class name preceded by a tilde (~). The primary purpose of a destructor is to release any resources that the object acquired during its lifetime, such as dynamically allocated memory. By defining destructors, we ensure that our programs do not have memory leaks and that resources are managed effectively throughout the object's lifespan. This experiment explores these essential concepts by creating simple classes that demonstrate when each type of constructor and the destructor is called, and what their specific roles are.

Concepts Covered:
Default constructor syntax and automatic invocation.
Parameterized constructor for object initialization with specific values.
Copy constructor for creating a new object from an existing one.
Destructor syntax and its role in object cleanup.
Understanding object lifetime and scope-based destruction.
The relationship between constructors, destructors, and memory management.

Algorithms:

1] Default Constructor
    Input: No input is required from the user.
    Process: A construct object is created without arguments, automatically invoking the default constructor to initialize its members a and b to 10 and 20 respectively.
    Output: Display the initialized values of a and b.

2] Parameterized Constructor
    Input: Two integer values 5 and 10 are provided at object creation.
    Process: A construct object is created with the provided values, which are passed to the parameterized constructor to initialize its members a and b.
    Output: Display the initialized values of a and b.

3] Copy Constructor
    Input: An existing student object s is used to create a new object.
    Process: A new student object Student1 is created by passing s to the copy constructor. The constructor copies the values of rno, name, and fee from s to Student1.
    Output: Display the details of both the original and the copied object, confirming that the new object is a perfect clone of the old one.

4] Destructors
    Input: No input is required.
    Process: Objects are created, and a global counter is incremented by the constructor. When objects go out of scope (including a nested scope), the destructor is automatically called, and the counter is decremented.
    Output: Display messages showing the creation and destruction of each object and the current count of living objects.

Conclusion: In this experiment, we successfully implemented and observed the behavior of different types of constructors and destructors in C++. We confirmed that constructors are crucial for ensuring objects are in a valid state from the moment they are created, and that destructors are vital for cleaning up resources and preventing memory leaks. We also learned how object scope dictates when destructors are called, highlighting the importance of automatic resource management in C++. These concepts form the bedrock of object-oriented design, enabling us to write more robust and reliable programs.
