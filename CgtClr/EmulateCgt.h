#pragma once

//Project
#include "Share.h"
#include "CgtClr.h"

using namespace System::Collections::Generic;
using namespace System::Runtime::InteropServices;

namespace CgtClr {
	using namespace Share;

	namespace Emulate {
		static ref class EmulateCgt
		{
			static List<IntPtr> ^m_handleList;

		public:
			static void *GetCgt();
			static IntPtr ObjectToIntPtr(Object ^ obj);
			static void AddHandle(IntPtr % h);

			static BaseCgt ^ref;
		};
	}
}