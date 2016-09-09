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
		/// Считает количество элементов в контейнере
		/// </summary>
		/// <param name="id_sdk">Идентификатор контейнера</param>
		/// <returns>Количество элементов в контейнере</returns>
		virtual int sdkGetCount(int id_sdk) abstract;

		/// <summary>
		/// Возвращает идентификатор элемента по его Z-положению(индексу) в контейнере
		/// </summary>
		/// <param name="index">Z-положение(индекс) элемента</param>
		/// <returns>Идентификатор элемента</returns>
		virtual int sdkGetElement(int id, int index) abstract;

		/// <summary>
		/// Возвращает идентификатор элемента по имени элемента
		/// </summary>
		/// <param name="id">Идентификатор контейнера</param>
		/// <param name="name">Имя элемента</param>
		/// <returns>Идентификатор элемента</returns>
		virtual int sdkGetElementName(int id, String ^ name) abstract;

		/// <summary>
		/// Возвращает флаги элемента
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns>Флаги элемента</returns>
		virtual ElementFlags elGetFlag(int id) abstract;

		/// <summary>
		/// Возвращает количество свойств элемента
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns>Количество свойств элемента</returns>
		virtual int elGetPropCount(int id) abstract;

		/// <summary>
		/// Возвращает указатель на свойство элемента по индексу с порядковым номером из INI
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="index">Индекс свойства</param>
		/// <returns>Указатель на свойство</returns>
		virtual IntPtr elGetProperty(int id, int index) abstract;

		/// <summary>
		/// Возвращает True, если значение свойства совпадает с заданным по умолчанию в INI файле, иначе False.
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="index">Индекс свойства</param>
		/// <returns>Состояние свойства</returns>
		virtual bool elIsDefProp(int id, int index) abstract;

		/// <summary>
		/// Присваиваем элементу уникальное имя
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="name">Имя элемента</param>
		/// <returns>Идентификатор элемента</returns>
		virtual int elSetCodeName(int id, String ^ name) abstract;

		/// <summary>
		/// Возвращает уникальное имя элемента
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns>Имя элемента</returns>
		virtual String ^ elGetCodeName(int id) abstract;

		/// <summary>
		/// Возвращает имя класса элемента
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns>Имя класса элемента</returns>
		virtual String ^ elGetClassName(int id) abstract;

		/// <summary>
		/// Возвращает содержимое поля Sub из конфигурационного INI-файла элемента
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns>Содержимое поля Sub</returns>
		virtual String ^ elGetInfSub(int id) abstract;

		/// <summary>
		/// Возвращает общее количество видимых точек у элемента
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns>Количество видимых точек</returns>
		virtual int elGetPtCount(int id) abstract;

		/// <summary>
		/// Возвращает указатель на точку по её индексу
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="index">Индекс точки</param>
		/// <returns>Указатель на точку</returns>
		virtual IntPtr elGetPt(int id, int index) abstract;

		/// <summary>
		/// Возвращает указатель на точку по её имени
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="name">Имя точки</param>
		/// <returns>Указатель на точку</returns>
		virtual IntPtr elGetPtName(int id, String ^ name) abstract;

		/// <summary>
		/// Возвращает индекс класса элемента
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns>Индекс класса элемента</returns>
		virtual ElementClass elGetClassIndex(int id) abstract;

		/// <summary>
		/// Возвращает идентификатор контейнера элемента.
		/// Если элемент не содержит контейнер, возвращается идентификатор элемента родителя текущего контейнера.
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns>Идентификатор контейнера или элемента</returns>
		virtual int elGetSDK(int id) abstract;

		/// <summary>
		/// Проверяет, является ли элемент ссылкой, либо на него ссылаются
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns>Если элемент является ссылкой или на него ссылаются - true, иначе - false</returns>
		virtual bool elLinkIs(int id) abstract;

		/// <summary>
		/// Возвращает идентификатор главного элемента(тот, на который ссылаются другие)
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns>Идентификатор элемента</returns>
		virtual int elLinkMain(int id) abstract;

		/// <summary>
		/// Помещает в переменные "X" и "Y", позицию элемента в редакторе схем
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="X">Позиция по горизонтали</param>
		/// <param name="Y">Позиция по вертикали</param>
		virtual void elGetPos(int id, int % X, int % Y) abstract;

		/// <summary>
		/// Помещает в переменные "W" и "H", размеры элемента
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="W">Ширина</param>
		/// <param name="H">Высота</param>
		virtual void elGetSize(int id, int % W, int % H) abstract;

		/// <summary>
		/// Возвращает специальный идентификатор элемента
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns>Идентификатор элемента</returns>
		[Obsolete]
		virtual int elGetEID(int id) abstract;

		/// <summary>
		/// Возвращает указатель на точку с которой соединена указанная
		/// </summary>
		/// <param name="ptr">Указатель на точку</param>
		/// <returns>Указатель на точку</returns>
		virtual IntPtr ptGetLinkPoint(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает указатель на точку с которой соединена указанная,
		/// без учета точек разрыва и хабов.
		/// </summary>
		/// <param name="ptr">Указатель на точку</param>
		/// <returns>Указатель на точку</returns>
		virtual IntPtr ptGetRLinkPoint(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает тип точки
		/// </summary>
		/// <param name="ptr">Указатель на точку</param>
		/// <returns>Тип точки</returns>
		virtual PointType ptGetType(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает имя точки
		/// </summary>
		/// <param name="ptr">Указатель на точку</param>
		/// <returns>Имя точки</returns>
		virtual String ^ ptGetName(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает идентификатор родителя точки
		/// </summary>
		/// <param name="ptr">Указатель на точку</param>
		/// <returns>Идентификатор элемента</returns>
		virtual int ptGetParent(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает индекс точки относительно точек того же типа
		/// </summary>
		/// <param name="ptr">Указатель на точку</param>
		/// <returns>Индекс точки</returns>
		virtual int ptGetIndex(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает базовую часть имени динамической точки(для CI_DPElement).
		/// </summary>
		/// <param name="ptr">Указатель на точку</param>
		/// <returns>Часть имени динамической точки</returns>
		virtual String ^ pt_dpeGetName(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает тип свойства
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Тип свойства</returns>
		virtual DataType propGetType(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает имя свойства
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Имя свойства</returns>
		virtual String ^ propGetName(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает указатель на значение свойства
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Указатель на значение</returns>
		virtual IntPtr propGetValue(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает значение свойства в формате byte
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Значение свойства</returns>
		virtual byte propToByte(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает значение свойства в формате int
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Значение свойства</returns>
		virtual int propToInteger(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает значение свойства в формате double
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Значение свойства</returns>
		virtual double propToReal(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает значение свойства в формате <see cref="String"/>.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns></returns>
		virtual String ^ propToString(IntPtr ptr) abstract;

		/// <summary>
		/// Добавляет файл в список ресурсов.
		/// </summary>
		/// <param name="name">Путь к файлу</param>
		/// <returns>Всегда возвращает 0</returns>
		virtual int resAddFile(String ^ filePath) abstract;

		/// <summary>
		/// Добавляет иконку из значения свойства в ресурсы.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddIcon(IntPtr ptr) abstract;

		/// <summary>
		/// Добавляет строку в ресурсы.
		/// </summary>
		/// <param name="str">Строка для добавления</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddStr(String ^ str) abstract;

		/// <summary>
		/// Добавляет поток данных из значения свойства в ресурсы.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddStream(IntPtr ptr) abstract;

		/// <summary>
		///  Добавляет Wave звук из значения свойства в ресурсы.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddWave(IntPtr ptr) abstract;

		/// <summary>
		/// Добавляет картинку из значения свойства в ресурсы.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddBitmap(IntPtr ptr) abstract;

		/// <summary>
		/// Добавляет меню из значения свойства в ресурсы.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Имя временного файла</returns>
		[Obsolete]
		virtual String ^ resAddMenu(IntPtr ptr) abstract;

		/// <summary>
		/// Выводит текст в окно отладки.
		/// </summary>
		/// <param name="text">Текст выводимый в отладочное окно</param>
		/// <param name="color">Цвет выводимого текста</param>
		/// <returns>Всегда возвращает 0</returns>
		virtual int _Debug(String ^ text, int color) abstract;

		/// <summary>
		/// Возвращаем значение параметра среды.
		/// </summary>
		/// <param name="index">Индекс параметра</param>
		/// <returns>Параметр среды</returns>
		virtual Object ^ GetParam(CgtParams index) abstract;

		/// <summary>
		/// Возвращаем количество элементов в массиве значения.
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <returns>Количество элементов массива</returns>
		virtual int arrCount(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <returns></returns>
		virtual DataType arrType(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual String ^ arrItemName(IntPtr ptr, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int arrItemData(IntPtr ptr, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int arrGetItem(IntPtr ptr, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int isDebug(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <returns></returns>
		virtual DataType dtType(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <returns></returns>
		virtual String ^ dtStr(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <returns></returns>
		virtual int dtInt(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <returns></returns>
		virtual double dtReal(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <returns></returns>
		virtual String ^ fntName(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <returns></returns>
		virtual int fntSize(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <returns></returns>
		virtual unsigned char fntStyle(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <returns></returns>
		virtual unsigned int fntColor(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <returns></returns>
		virtual unsigned char fntCharSet(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int elGetData(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="data"></param>
		virtual void elSetData(int id, int data) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr"></param>
		/// <returns></returns>
		virtual DataType ptGetDataType(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int elGetParent(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int elGetPropertyListCount(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="index"></param>
		/// <returns>Указатель на свойство</returns>
		virtual IntPtr elGetPropertyListItem(int id, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns></returns>
		virtual String ^ plGetName(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns></returns>
		virtual String ^ plGetInfo(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns></returns>
		virtual String ^ plGetGroup(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Указатель на значение</returns>
		virtual IntPtr plGetProperty(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns></returns>
		virtual int plGetOwner(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns></returns>
		virtual String ^ ptGetInfo(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <param name="propName"></param>
		/// <returns></returns>
		virtual int propGetLinkedElement(IntPtr ptr, String ^ propName) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns></returns>
		virtual int propIsTranslate(int id, IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="ptr">Указатель на свойство</param>
		/// <param name="info"></param>
		/// <returns></returns>
		virtual int propGetLinkedElementInfo(int id, IntPtr ptr, String ^ info) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int elGetSDKByIndex(int id, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int elGetSDKCount(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual String ^ elGetSDKName(int id, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_sdk">Идентификатор контейнера</param>
		/// <returns></returns>
		virtual int sdkGetParent(int id_sdk) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns></returns>
		virtual String ^ elGetInterface(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns></returns>
		virtual String ^ elGetInherit(int id) abstract;

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
		/// <param name="id">Идентификатор элемента</param>
		/// <param name="text"></param>
		/// <returns></returns>
		virtual int _Error(int line, int id, String ^ text) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">Идентификатор элемента</param>
		/// <returns></returns>
		virtual int elGetGroup(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <param name="fileName"></param>
		/// <returns></returns>
		virtual int propSaveToFile(IntPtr ptr, String ^ fileName) abstract;
	};
}