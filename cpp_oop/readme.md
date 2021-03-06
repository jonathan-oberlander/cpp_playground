in C++ structs and classes are very similar, they both pass by values.

structs are used for small portions of data, like variables, they have no functionalities by conventions, and their members are public by default

classes are used for both values and functions, their members are private by defualt

a class defines the shape of data
when you create a class you create a new type
a class is a blueprint, it creates objects
creating an object from a class is known as instantiation

constructor is special method in a class
the constructor has the same name as the class

its possible to overload operators and create our own
operator behaviour

static members describe the class in general
the member is attached to the class but not to the instance

Constructors have the same name as the class they construct
default constructors have no parameters
its possible to create several constructors !!

encapsulation abstracts the complexity of the classes when using them, its possible to use getters and setters to access and modify private members of a class.

Static data members describe the entire class and not the many objects
there are static data and static methods
Problem is that we can't assign static data members inside of the class itself because since there is no instance of the class yet, no memory exists

operators can be re-defined for custom operand types {x:3, y:5} + {x:4, y:2} = {x:7, y:7}
it works similarly to a function overload

the friend function allows to be used in different classes but being define once, outside of the class. it also allows us to access the private data, but its better to use a getter for that only purpose
friend functions are interesting because they can be overloading an operator!!
so its could "upgrade" an operator on specific classes using friend functions.
