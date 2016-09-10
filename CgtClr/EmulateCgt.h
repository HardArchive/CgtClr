#pragma once

//Project
#include "Share.h"
#include "CgtClr.h"

namespace CgtClr {
	using namespace Share;

	namespace Emulate {
		static private ref class EmulateCgt
		{
		public:
			static void *getCgt();
			static BaseCgt ^ref;
		};
	}
}