#include "stdafx.h"
#include "CgtClr.h"
#include "Emulate.h"
#include "Share.h"
#include <vcclr.h>

using namespace System;
using namespace CgtClr::Share;

namespace CgtClr {
	void BaseCgt::RunCodeGen(const String ^codeGenPath, Object^ rootContainer)
	{
		pin_ptr<const wchar_t> path = PtrToStringChars(codeGenPath);
		auto hCodeGen = LoadLibraryW(path);

		if (hCodeGen) {
			BaseCgt::ref = this;

			TBuildProcessProc buildProcessProcLib = (TBuildProcessProc)GetProcAddress(hCodeGen, "buildProcessProc");
			TBuildProcessRec params;
			params.sdk = idRootContainer;
			params.cgt = CgtClr::Emulate::getCgt();
			buildProcessProcLib(params);
			FreeLibrary(hCodeGen);
		}
	}

}