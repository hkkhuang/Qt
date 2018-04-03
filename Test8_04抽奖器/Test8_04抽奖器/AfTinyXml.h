
#ifndef _AF_TINYXML_H
#define _AF_TINYXML_H

#include <stdio.h>
#include <string.h>
#include "../tinyxml/tinyxml.h"

#include <string>
#include <string>
#include <vector>
using namespace std;

class AfTinyXml
{
	static const char* childAsText(TiXmlElement* parent, const char* childName)
	{
		TiXmlElement* child = parent->FirstChildElement(childName);
		if(child) 
		{
			const char* t = child->GetText();
			if(t) return t;
		}
		return "";
	}

	static int childAsInt(TiXmlElement* parent, const char* childName)
	{
		const char* t = childAsText(parent, childName);
		return atoi(t);
	}

	static void addChild(TiXmlElement* parent, const string& child, const string& value)
	{
		TiXmlElement* leaf = new TiXmlElement(child);  
		leaf->LinkEndChild( new TiXmlText(value));
		parent->LinkEndChild( leaf );  	
	}

	static void addChild(TiXmlElement* parent, const string& child, int value)
	{
		char buf[32];
		sprintf(buf,"%d", value);

		TiXmlElement* leaf = new TiXmlElement(child);  
		leaf->LinkEndChild( new TiXmlText(buf));
		parent->LinkEndChild( leaf );  	
	}
};




#endif


