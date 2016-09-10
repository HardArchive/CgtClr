#include "stdafx.h"
#include "CgtClr.h"
#include "EmulateCgt.h"
#include "Share.h"
#include <vcclr.h>

using namespace System;
using namespace CgtClr::Share;
using namespace CgtClr::Emulate;


namespace CgtClr {

	void BaseCgt::RunCodeGen(const String ^codeGenPath, Object^ rootContainer)
	{
		pin_ptr<const wchar_t> path = PtrToStringChars(codeGenPath);
		auto hCodeGen = LoadLibraryW(path);

		if (hCodeGen) {
			EmulateCgt::ref = this;

			TBuildProcessProc buildProcessProcLib = (TBuildProcessProc)GetProcAddress(hCodeGen, "buildProcessProc");
			TBuildProcessRec params;
			params.sdk = rootContainer;
			params.cgt = EmulateCgt::getCgt();
			buildProcessProcLib(params);
			FreeLibrary(hCodeGen);
		}
	}

}