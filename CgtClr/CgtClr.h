#pragma once

#include <Windows.h>
#include "Share.h"

using namespace System;
using namespace CgtClr::Share;

namespace CgtClr {

	public ref class BaseCgt abstract
	{
	public:
		void RunCodeGen(const String ^codeGenPath, int idRootContainer);
		static BaseCgt ^ref;

		/// <summary>
		/// Считаем количество элементов в контейнере
		/// </summary>
		/// <param name="id_sdk">Идентификатор контейнера</param>
		/// <returns>Количество элементов в контейнере</returns>
		virtual int sdkGetCount(int id_sdk) abstract;

		/// <summary>
		/// Подучаем идентификатор элемента по его Z-положению(индексу) в контейнере
		/// </summary>
		/// <param name="id_sdk">Идентификатор контейнера</param>
		/// <param name="index">Z-положение(индекс) элемента</param>
		/// <returns>Идентификатор элемента</returns>
		virtual int sdkGetElement(int id_sdk, int index) abstract;

		/// <summary>
		/// Получаем идентификатор элемента по имени элемента
		/// </summary>
		/// <param name="id_sdk">Идентификатор контейнера</param>
		/// <param name="name">Имя элемента</param>
		/// <returns>Идентификатор элемента</returns>
		virtual int sdkGetElementName(int id_sdk, String ^ name) abstract;

		/// <summary>
		/// Получаем флаги элемента
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns>Флаги элемента</returns>
		virtual ElementFlags elGetFlag(int id_element) abstract;

		/// <summary>
		/// Получаем количество свойств элемента
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns>Количество свойств элемента</returns>
		virtual int elGetPropCount(int id_element) abstract;

		/// <summary>
		/// Получаем идентификатор свойства элемента по индексу, с порядковым номером из INI
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="index">Индекс свойства</param>
		/// <returns>Идентификатор свойства</returns>
		virtual int elGetProperty(int id_element, int index) abstract;

		/// <summary>
		/// Возвращает True, если значение свойства совпадает с заданным по умолчанию в INI файле, иначе False.
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="index">Индекс свойства</param>
		/// <returns>Состояние свойства</returns>
		virtual bool elIsDefProp(int id_element, int index) abstract;

		/// <summary>
		/// Присваиваем элементу уникальное имя
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="name">Имя элемента</param>
		/// <returns>Идентификатор элемента</returns>
		virtual int elSetCodeName(int id_element, String ^ name) abstract;

		/// <summary>
		/// Получаем уникальное имя элемента
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns>Имя элемента</returns>
		virtual String ^ elGetCodeName(int id_element) abstract;

		/// <summary>
		/// Получаем имя класса элемента
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns>Имя класса элемента</returns>
		virtual String ^ elGetClassName(int id_element) abstract;

		/// <summary>
		/// Получаем содержимое поля Sub из конфигурационного INI-файла элемента
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns>Содержимое поля Sub</returns>
		virtual String ^ elGetInfSub(int id_element) abstract;

		/// <summary>
		/// Получаем общее количество видимых точек у элемента
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns>Количество видимых точек</returns>
		virtual int elGetPtCount(int id_element) abstract;

		/// <summary>
		/// Получаем идентификатор точки по её индексу
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="index">Индекс точки</param>
		/// <returns>Идентификатор точки</returns>
		virtual int elGetPt(int id_element, int index) abstract;

		/// <summary>
		/// Получаем идентификатор точки по её имени
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="name">Имя точки</param>
		/// <returns>Идентификатор точки</returns>
		virtual int elGetPtName(int id_element, String ^ name) abstract;

		/// <summary>
		/// Получаем индекс класса элемента
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns>Индекс класса элемента</returns>
		virtual ElementClass elGetClassIndex(int id_element) abstract;

		/// <summary>
		/// Получаем идентификатор контейнера элемента.
		/// Если элемент не содержит контейнер, возвращается идентификатор элемента родителя текущего контейнера.
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns>Идентификатор контейнера</returns>
		virtual int elGetSDK(int id_element) abstract;

		/// <summary>
		/// Является ли элемент ссылкой, либо на него ссылаются
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns>Если элемент является ссылкой или на него ссылаются - true, иначе - false</returns>
		virtual bool elLinkIs(int id_element) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int elLinkMain(int id_element) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="X"></param>
		/// <param name="Y"></param>
		virtual void elGetPos(int id_element, int % X, int % Y) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="W"></param>
		/// <param name="H"></param>
		virtual void elGetSize(int id_element, int % W, int % H) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual int elGetEID(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual int ptGetLinkPoint(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual int ptGetRLinkPoint(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual PointType ptGetType(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual String ^ ptGetName(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual int ptGetParent(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual int ptGetIndex(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual String ^ pt_dpeGetName(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual DataType propGetType(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ propGetName(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual int propGetValue(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual unsigned char propToByte(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual int propToInteger(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual double propToReal(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ propToString(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="name"></param>
		/// <returns></returns>
		virtual int resAddFile(String ^ name) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ resAddIcon(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="str"></param>
		/// <returns></returns>
		virtual String ^ resAddStr(String ^ str) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ resAddStream(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ resAddWave(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ resAddBitmap(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ resAddMenu(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="text"></param>
		/// <param name="color"></param>
		/// <returns></returns>
		virtual int _Debug(String ^ text, int color) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual Object ^ GetParam(CgtParams index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual int arrCount(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual DataType arrType(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual String ^ arrItemName(int id_value, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int arrItemData(int id_value, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int arrGetItem(int id_value, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int isDebug(int id_element) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual DataType dtType(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual String ^ dtStr(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual int dtInt(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual double dtReal(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual String ^ fntName(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual int fntSize(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual unsigned char fntStyle(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual unsigned int fntColor(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual unsigned char fntCharSet(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int elGetData(int id_element) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="data"></param>
		virtual void elSetData(int id_element, int data) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual DataType ptGetDataType(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int elGetParent(int id_element) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int elGetPropertyListCount(int id_element) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int elGetPropertyListItem(int id_element, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual String ^ plGetName(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual String ^ plGetInfo(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual String ^ plGetGroup(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_point"></param>
		/// <returns></returns>
		virtual int plGetProperty(int id_point) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual int plGetOwner(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ ptGetInfo(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <param name="propName"></param>
		/// <returns></returns>
		virtual int propGetLinkedElement(int id_prop, String ^ propName) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual int propIsTranslate(int id_element, int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="id_prop"></param>
		/// <param name="info"></param>
		/// <returns></returns>
		virtual int propGetLinkedElementInfo(int id_element, int id_prop, String ^ info) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int elGetSDKByIndex(int id_element, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int elGetSDKCount(int id_element) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual String ^ elGetSDKName(int id_element, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_sdk">Идентификатор контейнера</param>
		/// <returns></returns>
		virtual int sdkGetParent(int id_sdk) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns></returns>
		virtual String ^ elGetInterface(int id_element) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns></returns>
		virtual String ^ elGetInherit(int id_element) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <returns></returns>
		virtual int resEmpty() abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="pref"></param>
		/// <returns></returns>
		virtual int resSetPref(String ^ pref) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="line"></param>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <param name="text"></param>
		/// <returns></returns>
		virtual int _Error(int line, int id_element, String ^ text) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_element">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int elGetGroup(int id_element) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <param name="fileName"></param>
		/// <returns></returns>
		virtual int propSaveToFile(int id_prop, String ^ fileName) abstract;
	};
}