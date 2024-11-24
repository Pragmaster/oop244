/***********************************************************************
// OOP244 Project, Utils Module
//
// File    Menu.h
// Version 0.1
// Date 2024-9-11
// started by Fardad
// Description
// utility function to be used in the project
// Revision History
// -----------------------------------------------------------
// Name                          Date            Reason
// Nursultan KYLYCHBEKOV         11/17
/////////////////////////////////////////////////////////////////
***********************************************************************/
#ifndef SENECA_MENU_H
#define SENECA_MENU_H
#include <iostream>
#include "constants.h"

namespace seneca {
class MenuItem {
    
   char* m_content;
    unsigned int m_numOfindent;
    unsigned int m_indentSize;
    int m_row;
    
public:
    
 MenuItem(const char* content,  unsigned int indentation, unsigned int indentSize, int row);
 ~MenuItem();
 //copy constructor
 MenuItem(const MenuItem& other) = delete  ;
 MenuItem& operator=(const MenuItem& other) = delete;
 operator bool() const;
 std::ostream& display(std::ostream& ostr = std::cout) const;
 private:
 void setEmpty();
};
class menu : public MenuItem {
    
};

}
#endif // !SENECA_MENU_H

