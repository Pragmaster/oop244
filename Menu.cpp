/***********************************************************************
// OOP244 Project, Utils Module
//
// File    Menu.cpp
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
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Menu.h"
#include "constants.h"
#include <cstring>
#include "Utils.h"
#include "iomanip"

using namespace std;

namespace seneca {
// CONSTRUCTOR
MenuItem::MenuItem(const char* content, unsigned int indentations, unsigned int indentationSize, int rowNumber)
: m_content(nullptr), m_numOfindent(indentations), m_indentSize(indentationSize), m_row(rowNumber) {
    if (content == nullptr || strlen(content) == 0 || ut.isspace(content) ||
        m_numOfindent >  4 || m_indentSize > 4 || m_row > (int) MaximumNumberOfMenuItems) {
        setEmpty();
    } else {
        m_content = new char[strlen(content) + 1];
        std::strcpy(m_content, content);}
}
// DESTRUCTOR
MenuItem::~MenuItem() {
    delete[] m_content;}

void MenuItem::setEmpty() {
    
    m_content = nullptr;
    m_numOfindent = 0;
    m_indentSize = 0;
    m_row = -1;
}

MenuItem::operator bool() const {
    return m_content != nullptr;
}

std::ostream& MenuItem::display(std::ostream& ostr) const {
    if (m_content != nullptr) {
        for (unsigned int i = 0; i < m_numOfindent * m_indentSize ; i++) {
            ostr.put(' ');}
        if (m_row >= 0) {
            ostr << std::setw(2) << m_row << "- ";}
        const char* content = m_content;
        while (*content != '\0' && std::isspace(*content)) {
            ++content; }
        ostr << content;}
        else {
            ostr << "??????????";}
        return ostr;}
}
