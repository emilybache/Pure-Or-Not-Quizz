#ifndef CPP_PURE_OR_NOT_H
#define CPP_PURE_OR_NOT_H

#include <opencl-c.h>
#include <string>
#include <iostream>

int pure_or_not_1(int n1, int n2){
    if (n1 > 0) {
        n1 -= 4;
        return max(n1, n2);
    }
    return n2;
}

class PureOrNot2 {
private:
    int x = 1;
public:
    std::string pure_or_not_2(int n) {
        return std::to_string(x).append(", ").append(std::to_string(n));
    }
};

std::string pure_or_not_3(std::string &s) {
    if (!s.empty())
        return "Hello, " + s;
    else
        return "Hello, World!";
}

void pure_or_not_4(std::string &s) {
    if (!s.empty())
        std::cout << "Hello, " << s;
    else
        std::cout << "Hello, World!";

}

class Total {
public:
    int total;

    Total(int total) : total(total)
    {}
};

class PureOrNot5 {
private:
    int x = 1;
public:
    Total pure_or_not_5(Total &running_total) {
        running_total.total += x;
        return running_total;
    }
};

float pure_or_not_6(float n) {
    if (n > 0)
        return sqrt(n);
    else
        return 0.0;
}

std::string pure_or_not_7() {
    std::string input;
    std::cin >> input;
    return "They said: " + input;
}

#endif //CPP_PURE_OR_NOT_H
