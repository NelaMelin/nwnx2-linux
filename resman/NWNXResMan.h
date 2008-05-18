/***************************************************************************
    NWNXResMan.h - Interface for the CNWNXResMan class.
    Copyright (C) 2005 Ingmar Stieger (papillon@nwnx.org)
    copyright (c) 2006 dumbo (dumbo@nm.ru) & virusman (virusman@virusman.ru)

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 ***************************************************************************/

#if !defined(_NWNXResMan_H_)
#define _NWNXResMan_H_

#include "../NWNXBase.h"
#include "../gline.h" 

#include "NwnDefines.h"
#include "HookDemandRes.h"

#define MAXPATH 512

class CNWNXResMan : public CNWNXBase
{
	
public:
	CNWNXResMan();
	virtual ~CNWNXResMan();
  bool OnCreate (gline *config, const char* LogDir);
	char* OnRequest(char* gameObject, char* Request, char* Parameters);
	bool OnRelease();
	void LoadConfiguration();
	void WriteLogHeader();

	char* DemandRes(CResStruct* cRes, char* resRef, NwnResType resType);
	unsigned long LoadResource(char* resPath);

private:
	char *pScriptBuffer;
	char *saveName;
	int bufferSize;
	char m_sourcePath[MAXPATH];
};

#endif 
