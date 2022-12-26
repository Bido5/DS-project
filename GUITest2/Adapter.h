#pragma once
#include <msclr\marshal_cppstd.h>

using namespace std;
using namespace System;

static ref class  Adapter
{
	public: static String^ to_managed(string unmanaged) {
			  
		String^ text;
		text = gcnew String(unmanaged.c_str());
		String^ temp = text;
		delete text;
		return temp;
	}
			  
	public: static string to_unmanaged(String^ managed) {
		int pos = 0;
		std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
		while ((pos = unmanaged.find('\r', pos)) != std::string::npos)
		{
			unmanaged.erase(pos, 1 );
		}
		return unmanaged;
			  
	}
};

