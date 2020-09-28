//
//  exception.h
//  act 2.1 tc1031
//
//  Created by Manolo Medina on 9/27/20.
//  Copyright © 2020 Manolo Medina. All rights reserved.
//

#ifndef exception_h
#define exception_h

#include <exception>
#include <string>
#include <cstdio>

/*********** Exception ***********/
class Exception : public std::exception {
protected:
    std::string text;

public:
    Exception() throw();
    ~Exception() throw();
    virtual const char* what() const throw();
};

Exception::Exception() throw ()
    : text("Basic exception") {
}

Exception::~Exception() throw () {}

const char* Exception::what() const throw() {
    return text.c_str();
}

/*********** RangeError ***********/
class RangeError : public Exception {
public:
    RangeError() throw();
};

RangeError::RangeError() throw () {
        text = std::string("RangeError");
}

/*********** OutOfMemory ***********/
class OutOfMemory : public Exception {
public:
    OutOfMemory() throw();
};

OutOfMemory::OutOfMemory() throw () {
        text = std::string("OutOfMemory");
}

/*********** IndexOutOfBounds ***********/
class IndexOutOfBounds : public Exception {
public:
    IndexOutOfBounds() throw();
};

IndexOutOfBounds::IndexOutOfBounds() throw () {
    text = std::string("IndexOutOfBounds");
}

/*********** NoSuchElement ***********/
class NoSuchElement : public Exception {
public:
    NoSuchElement() throw();
};

NoSuchElement::NoSuchElement() throw () {
        text = std::string("NoSuchElement");
}

/*********** IllegalAction ***********/
class IllegalAction : public Exception {
public:
    IllegalAction() throw();
};

IllegalAction::IllegalAction() throw () {
        text = std::string("IllegalAction");
}

/*********** Overflow ***********/
class Overflow : public Exception {
public:
    Overflow() throw();
};

Overflow::Overflow() throw () {
        text = std::string("Overflow");
}

#endif /* exception_h */
