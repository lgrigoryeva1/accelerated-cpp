#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::string;
using std::vector;

int main()
{
    // Initializing vectors, 3.3.1
    vector<int> ivec;
    vector<string> articles = {"a", "an", "the"};
    vector<int> avec(10, -1); // ten int elements, each initialized to -1
    vector<string> svec(10, "hi");
    vector<int> jvec(5); // five elements, each initialized to 0
    vector<string> ssvec(10); // ten elements, each is an empty string
    // notice the difference in initialization b/n curly braces and parentheses
    vector<int> v2{10}; // has one element with value 10
    vector<int> v3{10, 1}; // has two elements with values 10 and 1
    vector<string> v5{"hi"}; // one element "hi"
    vector<string> v8{10, "hi"}; // has ten elements with value "hi"
    // error: cannot construct a vector from a string literal
    //vector<string> v6("hi");

    // Adding elements, 3.3.2
    // Add 0-99 to vector v2
    vector<int> v2;
    for (int i = 0; i != 100; ++i)
        v2.push_back(i);

    // read words from the standatrd input and store them in a vector
    string word;
    vector<string> text;
    while (cin >> word)
    {
        text.push_back(word);
    }

    // Other vector operations 3.3.3
    // count grades by clusters of ten 0--9, 10-19, ... 90-99, 100
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
            ++scores[grade/10]; // increment the counter for the current cluster
    }

    // ++scores[grade/10] == 
    // auto ind = grade/10;
    // scores[ind] = scores[ind] + 1;

    return 0;
}

// 3.3.1 Notes
// A vector is a collection of objects, all of which have the same type
// Every object in a collection has an index
// Vector = container
// Vector is a class template (TBA)
// Templates tell the compiler to generate classes & functions
// Vectors can hold objects of (most) any type
// Most common way to use vectors: define an empty vector, add elements at run time
// Can also add elements during definition

// Answers to exercises 3.12-3.13 are not recorded here 

// 3.3.2 Notes
// push_back to add elements at run time if we don't know or don't have the values during vector initialization

// 3.3.3 Notes
// Other vector operations include: empty(), size(), etc. 
// Cannot subscript empty vectors ([])


// auto determines variable type upon initialization
