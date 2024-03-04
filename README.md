The speaker first introduces the concept of virtual functions. A virtual function is a function that is defined in a base class and then redefined in a derived class. The purpose of virtual functions is to achieve runtime polymorphism. This means that when a virtual function is called using a base class pointer, the most derived version of the function will be executed.

The speaker then uses an example of musical instruments to illustrate the concept of virtual functions. The speaker creates a base class called Instrument and two derived classes called Accordion and Piano. The Instrument class has a function called makeSound() that is declared as virtual. The Accordion and Piano classes each have their own implementation of the makeSound() function.

When the speaker creates an array of Instrument pointers and iterates through the array, the makeSound() function is called for each instrument. However, since the makeSound() function is virtual, the most derived version of the function is called for each instrument. This means that the accordion.makeSound() function is called for the accordion object and the piano.makeSound() function is called for the piano object.

The speaker then introduces the concept of pure virtual functions. A pure virtual function is a virtual function that does not have an implementation in the base class. A class that has at least one pure virtual function is called an abstract class. An abstract class cannot be instantiated.

The speaker modifies the Instrument class to make the makeSound() function pure virtual. This is done by adding a zero to the end of the function declaration. The speaker then creates a new derived class called Piano from Instrument. Since the makeSound() function is pure virtual, the Piano class must provide its own implementation of the function.

Finally, the speaker demonstrates the polymorphic behavior that can be achieved using virtual functions. The speaker creates an array of Instrument pointers and iterates through the array, calling the makeSound() function for each instrument. Since the makeSound() function is virtual, the most derived version of the function is called for each instrument. This means that the accordion.makeSound() function is called for the accordion object and the piano.makeSound() function is called for the piano object.

In conclusion, this video explains the concepts of virtual functions, pure virtual functions, and abstract classes in C++. The video also demonstrates how these concepts can be used to achieve polymorphic behavior. 
