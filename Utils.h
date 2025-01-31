/***********************************************************************
// OOP244 Project, Utils Module
//
// File	Utils.h
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
#ifndef SENECA_UTILS_H
#define SENECA_UTILS_H
namespace seneca {
   class Utils {
   public:
      bool isspace(char ch)const;
      bool isspace(const char* cstring)const;
      char* alocpy(const char* src)const;
      char* alocpy(char*& des, const char* src)const;
      char* strcpy(char* des, const char* src)const;
      int strlen(const char* str)const;
      
   };


   extern Utils ut;   
}

#endif 
