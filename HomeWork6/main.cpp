#include <iostream>
#include <cstring>


struct String
{
    size_t size;
    char* str;

    explicit String(const char* str) : size(strlen(str))
    {
        this->str = new char[size + 1];
        std::strcpy(this->str, str);
    }

    String(size_t repeatCount, char letter) : size(repeatCount)
    {
        this->str = new char[size + 1];
        for (int i = 0; i < repeatCount; ++i)
        {
            str[i] = letter;
        }
        str[repeatCount] = '\0';
    }

    String(const String &copy) : size(copy.size)
    {
        str = new char[size + 1];
        strcpy(str, copy.str);
    }

    ~String()
    {
        delete[] str;
    }

    void append(const String &other)
    {
        size += other.size;
        char* tmp = new char[size + 1];
        strcpy(tmp, str);
        strcat(tmp, other.str);
        delete[] str;
        str = new char[size + 1];
        std::strcpy(str, tmp);
        delete[] tmp;
    }

    String &operator=(const String &newStr)
    {
        if (this != &newStr)
        {
            size = newStr.size;
            delete[] str;
            str = new char[size + 1];
            strcpy(str, newStr.str);
            return *this;
        }
    }

    void print() const
    {
        std::cout << "size: " << size << "\n";
        int i = 0;
        while (str[i] != '\0')
        {
            std::cout << str[i++];
        }
        std::cout << "\n";
    }
};


int main()
{
    auto* myFirstStr = new String("HI!");
    myFirstStr->print();

    auto* mySecondStr = new String(*myFirstStr);
    mySecondStr->print();

    auto* myThirdStr = new String(10, 'a');
    myThirdStr->print();

    myThirdStr->append(String(" It is in the end now."));
    myThirdStr->print();

    mySecondStr = myThirdStr;
    mySecondStr->print();

    delete myFirstStr;
    delete mySecondStr;
    delete myThirdStr;
}