#pragma once
/* Source
����Դ�������б�
*/

#include "AfTinyXml.h"

class Source
{
public:
	Source();

	int load();

public:
	vector<string> numbers;
};