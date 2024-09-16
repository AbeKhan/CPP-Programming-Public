#include <iostream>

using namespace std;

int main()
{
    float x = 1.234;
    double y = 8.7654;

    char c1 = 'a'; //char stores decimal numbers according to the ASCII
                    //max positive: 127
                    //max netgative: -128
    unsigned char c2 = 256; //unsigned
                    //max of 255 lowest of 0 
                    
    char c3 = 256; //signed

    short s1 = 12345;
    int i1 = 123456778;
    long long l1 = 987654323456;

    //number of bytes for data types or variables
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(c2) = " << sizeof(c2) << endl;
    cout << "sizeof(s1) = " << sizeof(s1) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(long) = " << sizeof(long) << endl;
    cout << "sizeof(long long) = " << sizeof(long long) << endl;

    return 0;
}