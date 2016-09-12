//Project
#include "stdafx.h"
#include "EmulateCgt.h"

using namespace System::Runtime::InteropServices;


namespace CgtClr {
	namespace Emulate {
#define EXPORT __stdcall

		//Служебные функции
		String^ CharToString(char* ch) {
			return Marshal::PtrToStringAnsi(IntPtr(ch));
		}

		const char * StringToChar(String ^managedString) {
			return (const char*)(Marshal::StringToHGlobalAnsi(managedString)).ToPointer();
		}

		//Функции CGT

		int EXPORT sdkGetCount(int id_sdk)
		{

			return EmulateCgt::ref->sdkGetCount(id_sdk);
		}
		int EXPORT sdkGetElement(int id_sdk, int index)
		{
			return EmulateCgt::ref->sdkGetElement(id_sdk, index);
		}
		int EXPORT sdkGetElementName(int id_sdk, char *name)
		{
			return EmulateCgt::ref->sdkGetElementName(id_sdk, CharToString(name));
		}
		NElementFlags EXPORT elGetFlag(int id_element)
		{
			return static_cast<NElementFlags>(EmulateCgt::ref->elGetFlag(id_element));
		}
		int EXPORT elGetPropCount(int id_element)
		{
			return EmulateCgt::ref->elGetPropCount(id_element);
		}
		int EXPORT elGetProperty(int id_element, int index)
		{
			return EmulateCgt::ref->elGetProperty(id_element, index);
		}
		bool EXPORT elIsDefProp(int id_element, int index)
		{
			return EmulateCgt::ref->elIsDefProp(id_element, index);
		}
		int EXPORT elSetCodeName(int id_element, char *name)
		{
			return EmulateCgt::ref->elSetCodeName(id_element, CharToString(name));
		}
		const char* EXPORT elGetCodeName(int id_element)
		{
			return StringToChar(EmulateCgt::ref->elGetCodeName(id_element));
		}
		const char* EXPORT elGetClassName(int id_element)
		{
			return StringToChar(EmulateCgt::ref->elGetClassName(id_element));
		}
		const char* EXPORT elGetInfSub(int id_element)
		{
			return StringToChar(EmulateCgt::ref->elGetInfSub(id_element));
		}
		int EXPORT elGetPtCount(int id_element)
		{
			return EmulateCgt::ref->elGetPtCount(id_element);
		}
		int EXPORT elGetPt(int id_element, int index)
		{
			return EmulateCgt::ref->elGetPt(id_element, index);
		}
		int EXPORT elGetPtName(int id_element, char *name)
		{
			return EmulateCgt::ref->elGetPtName(id_element, CharToString(name));
		}
		NElementClass EXPORT elGetClassIndex(int id_element)
		{
			return static_cast<NElementClass>(EmulateCgt::ref->elGetClassIndex(id_element));
		}
		int EXPORT elGetSDK(int id_element)
		{
			return EmulateCgt::ref->elGetSDK(id_element);
		}
		bool EXPORT elLinkIs(int id_element)
		{
			return EmulateCgt::ref->elLinkIs(id_element);
		}
		int EXPORT elLinkMain(int id_element)
		{
			return EmulateCgt::ref->elLinkMain(id_element);
		}
		void EXPORT elGetPos(int id_element, int &X, int &Y)
		{
			EmulateCgt::ref->elGetPos(id_element, X, Y);
		}
		void EXPORT elGetSize(int id_element, int &W, int &H)
		{
			EmulateCgt::ref->elGetSize(id_element, W, H);
		}
		int EXPORT elGetEID(int id_element)
		{
#pragma warning( disable : 4947 )
			return EmulateCgt::ref->elGetEID(id_element);
		}
		int EXPORT ptGetLinkPoint(int id_point)
		{
			return EmulateCgt::ref->ptGetLinkPoint(id_point);
		}
		int EXPORT ptGetRLinkPoint(int id_point)
		{
			return EmulateCgt::ref->ptGetRLinkPoint(id_point);
		}
		NPointType EXPORT ptGetType(int id_point)
		{
			return static_cast<NPointType>(EmulateCgt::ref->ptGetType(id_point));
		}
		const char* EXPORT ptGetName(int id_point)
		{
			return StringToChar(EmulateCgt::ref->ptGetName(id_point));
		}
		int EXPORT ptGetParent(int id_point)
		{
			return EmulateCgt::ref->ptGetParent(id_point);
		}
		int EXPORT ptGetIndex(int id_point)
		{
			return EmulateCgt::ref->ptGetIndex(id_point);
		}
		const char* EXPORT pt_dpeGetName(int id_point)
		{
			return StringToChar(EmulateCgt::ref->pt_dpeGetName(id_point));
		}
		NDataType EXPORT propGetType(int id_prop)
		{
			return static_cast<NDataType>(EmulateCgt::ref->propGetType(id_prop));
		}
		const char *EXPORT propGetName(int id_prop)
		{
			return StringToChar(EmulateCgt::ref->propGetName(id_prop));
		}
		int EXPORT propGetValue(int id_prop)
		{
			return EmulateCgt::ref->propGetValue(id_prop);
		}
		unsigned char EXPORT propToByte(int id_prop)
		{
			return EmulateCgt::ref->propToByte(id_prop);
		}
		int EXPORT propToInteger(int id_prop)
		{
			return EmulateCgt::ref->propToInteger(id_prop);
		}
		double EXPORT propToReal(int id_prop)
		{
			return EmulateCgt::ref->propToReal(id_prop);
		}
		const char* EXPORT propToString(int id_prop)
		{
			return StringToChar(EmulateCgt::ref->propToString(id_prop));
		}
		int EXPORT resAddFile(char *name)
		{
			return EmulateCgt::ref->resAddFile(CharToString(name));
		}
		const char* EXPORT resAddIcon(int id_prop)
		{
			return StringToChar(EmulateCgt::ref->resAddIcon(id_prop));
		}
		const char* EXPORT resAddStr(char *str)
		{
			return StringToChar(EmulateCgt::ref->resAddStr(CharToString(str)));
		}
		const char* EXPORT resAddStream(int id_prop)
		{
			return StringToChar(EmulateCgt::ref->resAddStream(id_prop));
		}
		const char* EXPORT resAddWave(int id_prop)
		{
			return StringToChar(EmulateCgt::ref->resAddWave(id_prop));
		}
		const char* EXPORT resAddBitmap(int id_prop)
		{
			return StringToChar(EmulateCgt::ref->resAddBitmap(id_prop));
		}
		const char* EXPORT resAddMenu(int id_prop)
		{
			return StringToChar(EmulateCgt::ref->resAddMenu(id_prop));
		}
		int EXPORT _Debug(char *text, int color)
		{
			return EmulateCgt::ref->_Debug(CharToString(text), color);
		}
		int EXPORT GetParam(NCgtParams index, void *buf) //TODO проверить
		{
			Object ^param = EmulateCgt::ref->GetParam(static_cast<CgtParams>(index));
			if (param == nullptr)
				return 0;

			auto writeString = [buf](Object ^obj) {
#pragma warning( disable : 4996 )
				strcpy(reinterpret_cast<char *>(buf), StringToChar(obj->ToString()));
			};
			auto writeInt = [buf](Object ^obj) {
				*reinterpret_cast<int *>(buf) = static_cast<int>(obj); //-V206
			};

			switch (index) {
			case NCgtParams::PARAM_CODE_PATH:
				writeString(param);
				break;
			case NCgtParams::PARAM_DEBUG_MODE:
				writeInt(param);
				break;
			case NCgtParams::PARAM_DEBUG_SERVER_PORT:
				writeInt(param);
				break;
			case NCgtParams::PARAM_DEBUG_CLIENT_PORT:
				writeInt(param);
				break;
			case NCgtParams::PARAM_PROJECT_PATH:
				writeString(param);
				break;
			case NCgtParams::PARAM_HIASM_VERSION:
				writeString(param);
				break;
			case NCgtParams::PARAM_USER_NAME:
				writeString(param);
				break;
			case NCgtParams::PARAM_USER_MAIL:
				writeString(param);
				break;
			case NCgtParams::PARAM_PROJECT_NAME:
				writeString(param);
				break;
			case NCgtParams::PARAM_SDE_WIDTH:
				writeInt(param);
				break;
			case NCgtParams::PARAM_SDE_HEIGHT:
				writeInt(param);
				break;
			case NCgtParams::PARAM_COMPILER:
				writeString(param);
				break;
			}

			return 0;
		}
		int EXPORT arrCount(int id_value)
		{
			return EmulateCgt::ref->arrCount(id_value);
		}
		NDataType EXPORT arrType(int id_value)
		{
			return static_cast<NDataType>(EmulateCgt::ref->arrType(id_value));
		}
		const char* EXPORT arrItemName(int id_value, int index)
		{
			return StringToChar(EmulateCgt::ref->arrItemName(id_value, index));
		}
		int EXPORT arrItemData(int id_value, int index)
		{
			return EmulateCgt::ref->arrItemData(id_value, index);
		}
		int EXPORT arrGetItem(int id_value, int index)
		{
			return EmulateCgt::ref->arrGetItem(id_value, index);
		}
		int EXPORT isDebug(int id_element)
		{
			return EmulateCgt::ref->isDebug(id_element);
		}
		NDataType EXPORT dtType(int id_value)
		{
			return static_cast<NDataType>(EmulateCgt::ref->dtType(id_value));
		}
		const char* EXPORT dtStr(int id_value)
		{
			return StringToChar(EmulateCgt::ref->dtStr(id_value));
		}
		int EXPORT dtInt(int id_value)
		{
			return EmulateCgt::ref->dtInt(id_value);
		}
		double EXPORT dtReal(int id_value)
		{
			return EmulateCgt::ref->dtReal(id_value);
		}
		const char* EXPORT fntName(int id_value)
		{
			return StringToChar(EmulateCgt::ref->fntName(id_value));
		}
		int EXPORT fntSize(int id_value)
		{
			return EmulateCgt::ref->fntSize(id_value);
		}
		byte EXPORT fntStyle(int id_value)
		{
			return EmulateCgt::ref->fntStyle(id_value);
		}
		int EXPORT fntColor(int id_value)
		{
			return EmulateCgt::ref->fntColor(id_value);
		}
		byte EXPORT fntCharSet(int id_value)
		{
			return EmulateCgt::ref->fntCharSet(id_value);
		}
		int EXPORT elGetData(int id_element)
		{
			return EmulateCgt::ref->elGetData(id_element);
		}
		void EXPORT elSetData(int id_element, int data)
		{
			EmulateCgt::ref->elSetData(id_element, data);
		}
		NDataType EXPORT ptGetDataType(int id_point)
		{
			return static_cast<NDataType>(EmulateCgt::ref->ptGetDataType(id_point));
		}
		int EXPORT elGetParent(int id_element)
		{
			return EmulateCgt::ref->elGetParent(id_element);
		}
		int EXPORT elGetPropertyListCount(int id_element)
		{
			return EmulateCgt::ref->elGetPropertyListCount(id_element);
		}
		int EXPORT elGetPropertyListItem(int id_element, int index)
		{
			return EmulateCgt::ref->elGetPropertyListItem(id_element, index);
		}
		const char* EXPORT plGetName(int id_point)
		{
			return StringToChar(EmulateCgt::ref->plGetName(id_point));
		}
		const char* EXPORT plGetInfo(int id_point)
		{
			return StringToChar(EmulateCgt::ref->plGetInfo(id_point));
		}
		const char* EXPORT plGetGroup(int id_point)
		{
			return StringToChar(EmulateCgt::ref->plGetGroup(id_point));
		}
		int EXPORT plGetProperty(int id_point)
		{
			return EmulateCgt::ref->plGetProperty(id_point);
		}
		int EXPORT plGetOwner(int id_prop)
		{
			return EmulateCgt::ref->plGetOwner(id_prop);
		}
		const char* EXPORT ptGetInfo(int id_prop)
		{
			return StringToChar(EmulateCgt::ref->ptGetInfo(id_prop));
		}
		int EXPORT propGetLinkedElement(int id_prop, char *propName)
		{
			return EmulateCgt::ref->propGetLinkedElement(id_prop, CharToString(propName));
		}
		int EXPORT propIsTranslate(int id_element, int id_prop)
		{
			return EmulateCgt::ref->propIsTranslate(id_element, id_prop);
		}
		int EXPORT propGetLinkedElementInfo(int id_element, int id_prop, char *info)
		{
			return EmulateCgt::ref->propGetLinkedElementInfo(id_element, id_prop, CharToString(info));
		}
		int EXPORT elGetSDKByIndex(int id_element, int index)
		{
			return EmulateCgt::ref->elGetSDKByIndex(id_element, index);
		}
		int EXPORT elGetSDKCount(int id_element)
		{
			return EmulateCgt::ref->elGetSDKCount(id_element);
		}
		const char* EXPORT elGetSDKName(int id_element, int index)
		{
			return StringToChar(EmulateCgt::ref->elGetSDKName(id_element, index));
		}
		int EXPORT sdkGetParent(int id_sdk)
		{
			return EmulateCgt::ref->sdkGetParent(id_sdk);
		}
		const char* EXPORT elGetInterface(int id_element)
		{
			return StringToChar(EmulateCgt::ref->elGetInterface(id_element));
		}
		const char* EXPORT elGetInherit(int id_element)
		{
			return StringToChar(EmulateCgt::ref->elGetInherit(id_element));
		}
		int EXPORT resEmpty()
		{
			return EmulateCgt::ref->resEmpty();
		}
		int EXPORT resSetPref(char *pref)
		{
			return EmulateCgt::ref->resSetPref(CharToString(pref));
		}
		int EXPORT _Error(int line, int id_element, char *text)
		{
			return EmulateCgt::ref->_Error(line, id_element, CharToString(text));
		}
		int EXPORT elGetGroup(int id_element)
		{
			return EmulateCgt::ref->elGetGroup(id_element);
		}
		int EXPORT propSaveToFile(int id_prop, char *fileName)
		{
			return EmulateCgt::ref->propSaveToFile(id_prop, CharToString(fileName));
		}

		/*!  Служебные функции   */

		//Получаем массив указателей на функции
		void * EmulateCgt::GetCgt()
		{

			void* emulateCgt[]{
			reinterpret_cast<void*>(sdkGetCount),
			reinterpret_cast<void*>(sdkGetElement),
			reinterpret_cast<void*>(sdkGetElementName),
			reinterpret_cast<void*>(elGetFlag),
			reinterpret_cast<void*>(elGetPropCount),
			reinterpret_cast<void*>(elGetProperty),
			reinterpret_cast<void*>(elIsDefProp),
			reinterpret_cast<void*>(elSetCodeName),
			reinterpret_cast<void*>(elGetCodeName),
			reinterpret_cast<void*>(elGetClassName),
			reinterpret_cast<void*>(elGetInfSub),
			reinterpret_cast<void*>(elGetPtCount),
			reinterpret_cast<void*>(elGetPt),
			reinterpret_cast<void*>(elGetPtName),
			reinterpret_cast<void*>(elGetClassIndex),
			reinterpret_cast<void*>(elGetSDK),
			reinterpret_cast<void*>(elLinkIs),
			reinterpret_cast<void*>(elLinkMain),
			reinterpret_cast<void*>(elGetPos),
			reinterpret_cast<void*>(elGetSize),
			reinterpret_cast<void*>(elGetEID),
			reinterpret_cast<void*>(ptGetLinkPoint),
			reinterpret_cast<void*>(ptGetRLinkPoint),
			reinterpret_cast<void*>(ptGetType),
			reinterpret_cast<void*>(ptGetName),
			reinterpret_cast<void*>(ptGetParent),
			reinterpret_cast<void*>(ptGetIndex),
			reinterpret_cast<void*>(pt_dpeGetName),
			reinterpret_cast<void*>(propGetType),
			reinterpret_cast<void*>(propGetName),
			reinterpret_cast<void*>(propGetValue),
			reinterpret_cast<void*>(propToByte),
			reinterpret_cast<void*>(propToInteger),
			reinterpret_cast<void*>(propToReal),
			reinterpret_cast<void*>(propToString),
			reinterpret_cast<void*>(resAddFile),
			reinterpret_cast<void*>(resAddIcon),
			reinterpret_cast<void*>(resAddStr),
			reinterpret_cast<void*>(resAddStream),
			reinterpret_cast<void*>(resAddWave),
			reinterpret_cast<void*>(resAddBitmap),
			reinterpret_cast<void*>(resAddMenu),
			reinterpret_cast<void*>(_Debug),
			reinterpret_cast<void*>(GetParam),
			reinterpret_cast<void*>(arrCount),
			reinterpret_cast<void*>(arrType),
			reinterpret_cast<void*>(arrItemName),
			reinterpret_cast<void*>(arrItemData),
			reinterpret_cast<void*>(arrGetItem),
			reinterpret_cast<void*>(isDebug),
			reinterpret_cast<void*>(dtType),
			reinterpret_cast<void*>(dtStr),
			reinterpret_cast<void*>(dtInt),
			reinterpret_cast<void*>(dtReal),
			reinterpret_cast<void*>(fntName),
			reinterpret_cast<void*>(fntSize),
			reinterpret_cast<void*>(fntStyle),
			reinterpret_cast<void*>(fntColor),
			reinterpret_cast<void*>(fntCharSet),
			reinterpret_cast<void*>(elGetData),
			reinterpret_cast<void*>(elSetData),
			reinterpret_cast<void*>(ptGetDataType),
			reinterpret_cast<void*>(elGetParent),
			reinterpret_cast<void*>(elGetPropertyListCount),
			reinterpret_cast<void*>(elGetPropertyListItem),
			reinterpret_cast<void*>(plGetName),
			reinterpret_cast<void*>(plGetInfo),
			reinterpret_cast<void*>(plGetGroup),
			reinterpret_cast<void*>(plGetProperty),
			reinterpret_cast<void*>(plGetOwner),
			reinterpret_cast<void*>(ptGetInfo),
			reinterpret_cast<void*>(propGetLinkedElement),
			reinterpret_cast<void*>(propIsTranslate),
			reinterpret_cast<void*>(propGetLinkedElementInfo),
			reinterpret_cast<void*>(elGetSDKByIndex),
			reinterpret_cast<void*>(elGetSDKCount),
			reinterpret_cast<void*>(elGetSDKName),
			reinterpret_cast<void*>(sdkGetParent),
			reinterpret_cast<void*>(elGetInterface),
			reinterpret_cast<void*>(elGetInherit),
			reinterpret_cast<void*>(resEmpty),
			reinterpret_cast<void*>(resSetPref),
			reinterpret_cast<void*>(_Error),
			reinterpret_cast<void*>(elGetGroup),
			reinterpret_cast<void*>(propSaveToFile),
			};

			return reinterpret_cast<void *>(emulateCgt);
		}
		IntPtr EmulateCgt::ObjectToIntPtr(Object ^ obj)
		{
			if (obj == nullptr)
			{
				return IntPtr::Zero;
			}
			IntPtr value = GCHandle::ToIntPtr(GCHandle::Alloc(obj, GCHandleType::Normal));
			AddHandle(value);

			return value;
		}
		void EmulateCgt::AddHandle(IntPtr % h)
		{
			m_handleList->Add(h);
		}
	}
}