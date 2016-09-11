#pragma once

//Project
#include "Share.h"
#include "CgtClr.h"

using namespace System::Collections::Generic;

namespace CgtClr {
	using namespace Share;

	namespace Emulate {
		static ref class EmulateCgt
		{
			static  List<GCHandle> m_handleList;

		public:
			static void *GetCgt();
			static IntPtr ^ ObjectToIntPtr(Object ^ obj);

			static BaseCgt ^ref;
		};
	}
}