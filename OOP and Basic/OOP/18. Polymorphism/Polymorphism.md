- The word “polymorphism” means having many forms.
  In simple words, we can define polymorphism as the ability of a message to be displayed in more than
  one form.
  A real-life example of polymorphism is a person who at the same time can have different characteristics.
  A man at the same time is a father, a husband, and an employee. So the same person exhibits different
  behavior in different situations. This is called polymorphism.

Types of Polymorphism

1. Compile-time Polymorphism
2. Runtime Polymorphism

3. Compile-Time Polymorphism
   This type of polymorphism is achieved by :
   a. Function overloading
   and
   b. Operator overloading.

a. Function Overloading
When there are multiple functions with the same name but different parameters, then the functions
are said to be overloaded, hence this is known as Function Overloading. Functions can be overloaded
by changing the number of arguments or/and changing the type of arguments.
In simple terms, it is a feature of object-oriented programming providing many functions that have the same name
but distinct parameters when numerous tasks are listed under one function name.

b. Operator Overloading
In C++, Operator overloading is a compile-time polymorphism. It is an idea of giving special
meaning to an existing operator in C++ without changing its original meaning.
For example, we can overload an operator ‘+’ in a class like String so that we can concatenate
two strings by just using +. Other example classes where arithmetic operators may be overloaded
are Complex Numbers, Fractional Numbers, Big integers, etc.

class A {
statements;
};

int main()
{
A a1, a2, a3;

    a3 = a1 + a2;

    return 0;

}

In this example, we have 3 variables “a1”, “a2” and “a3” of type “class A”. Here we are trying to add
two objects “a1” and “a2”, which are of user-defined type i.e. of type “class A” using the “+” operator.
This is not allowed, because the addition operator “+” is predefined to operate only on built-in data types.
But here, “class A” is a user-defined type, so the compiler generates an error. This is where the concept
of “Operator overloading” comes in.
Now, if the user wants to make the operator “+” add two class objects, the user has to redefine the meaning
of the “+” operator such that it adds two class objects. This is done by using the concept of “Operator overloading”.
So the main idea behind “Operator overloading” is to use C++ operators with class variables or class objects.

Redefining the meaning of operators really does not change their original meaning; instead, they have been
given additional meaning along with their existing ones.

# Difference between Operator Functions and Normal Functions:

Operator functions are the same as normal functions. The only differences are, that the name of an operator
function is always the operator keyword followed by the symbol of the operator, and operator functions are
called when the corresponding operator is used.

# Can We Overload All Operators?

Almost all operators can be overloaded except a few. Following is the list of operators that
cannot be overloaded.
sizeof, typeid, Scope resolution (::), Ternary or conditional (?:), member selection operator
Class member access operators (.(dot), .\* (pointer to member operator))

# Operators that can be Overloaded in C++:

- Unary operators, Binary operators, Special operators ( [ ], (), etc)
- Binary Arithmetic: +, -, _, /, %
  Unary Arithmetic: +, -, ++, —
  Assignment: =, +=,_=, /=,-=, %=
  Bitwise: & , | , << , >> , ~ , ^
  De-referencing: (->)
  Dynamic memory allocation,De-allocation: New, delete
  Subscript: [ ]
  Function call: ()
  Logical: &, | |, !
  Relational: >, < , = =, <=, >=

2. Runtime Polymorphism:
   A virtual function is a member function that is declared in the base class using the keyword virtual
   and is re-defined (Overridden) in the derived class. It tells the compiler to perform late binding
   where the compiler matches the object with the right called function and executes it during the runtime.
   This technique falls under Runtime Polymorphism.

The main thing to note about the program is that the derived class’s function is called using a base class
pointer. The idea is that virtual functions are called according to the type of the object instance
pointed to or referenced, not according to the type of the pointer or reference.
In other words, virtual functions are resolved late, at runtime.
