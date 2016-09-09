#pragma once

#include <Windows.h>
#include "Share.h"

using namespace System;
using namespace CgtClr::Share;

namespace CgtClr {

	public ref class BaseCgt abstract
	{
	public:
		void RunCodeGen(const String ^codeGenPath, IntPtr ptrRootContainer);
		static BaseCgt ^ref;

		/// <summary>
		/// Считает количество элементов в контейнере.
		/// </summary>
		/// <param name="ptr">Указатель на контейнер</param>
		/// <returns>Количество элементов в контейнере</returns>
		virtual int sdkGetCount(IntPtr id) abstract;

		/// <summary>
		/// Возвращает указатель на элемент по его Z-положению(индексу) в контейнере.
		/// </summary>
		/// <param name="ptr">Указатель на контейнер</param>
		/// <param name="index">Z-положение(индекс) элемента</param>
		/// <returns>Указатель на элемент</returns>
		virtual IntPtr sdkGetElement(IntPtr ptr, int index) abstract;

		/// <summary>
		/// Возвращает указатель на элемент по имени элемента.
		/// </summary>
		/// <param name="ptr">Указатель на контейнер</param>
		/// <param name="name">Имя элемента</param>
		/// <returns>Указатель на элемент</returns>
		virtual IntPtr sdkGetElementName(IntPtr ptr, String ^ name) abstract;

		/// <summary>
		/// Возвращает флаги элемента.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Флаги элемента</returns>
		virtual ElementFlags elGetFlag(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает количество свойств элемента.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Количество свойств элемента</returns>
		virtual int elGetPropCount(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает указатель на свойство элемента по индексу с порядковым номером из INI.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="index">Индекс свойства</param>
		/// <returns>Указатель на свойство</returns>
		virtual IntPtr elGetProperty(IntPtr ptr, int index) abstract;

		/// <summary>
		/// Возвращает True, если значение свойства совпадает с заданным по умолчанию в INI файле, иначе False.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="index">Индекс свойства</param>
		/// <returns>Состояние свойства</returns>
		virtual bool elIsDefProp(IntPtr ptr, int index) abstract;

		/// <summary>
		/// Присваиваем элементу уникальное имя.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="name">Имя элемента</param>
		/// <returns>Указатель на элемент</returns>
		virtual IntPtr elSetCodeName(IntPtr ptr, String ^ name) abstract;

		/// <summary>
		/// Возвращает уникальное имя элемента.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Имя элемента</returns>
		virtual String ^ elGetCodeName(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает имя класса элемента.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Имя класса элемента</returns>
		virtual String ^ elGetClassName(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает содержимое поля Sub из конфигурационного INI-файла элемента.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Содержимое поля Sub</returns>
		virtual String ^ elGetInfSub(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает общее количество видимых точек у элемента.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Количество видимых точек</returns>
		virtual int elGetPtCount(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает указатель на точку по её индексу.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="index">Индекс точки</param>
		/// <returns>Указатель на точку</returns>
		virtual IntPtr elGetPt(IntPtr ptr, int index) abstract;

		/// <summary>
		/// Возвращает указатель на точку по её имени.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="name">Имя точки</param>
		/// <returns>Указатель на точку</returns>
		virtual IntPtr elGetPtName(IntPtr ptr, String ^ name) abstract;

		/// <summary>
		/// Возвращает индекс класса элемента.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Индекс класса элемента</returns>
		virtual ElementClass elGetClassIndex(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает указатель на контейнер элемента.
		/// Если элемент не содержит контейнер, возвращается указатель на элемент родителя текущего контейнера.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Указатель на контейнер или элемента</returns>
		virtual IntPtr elGetSDK(IntPtr ptr) abstract;

		/// <summary>
		/// Проверяет, является ли элемент ссылкой, либо на него ссылаются.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Если элемент является ссылкой или на него ссылаются - true, иначе - false</returns>
		virtual bool elLinkIs(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает идентификатор главного элемента(тот, на который ссылаются другие).
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Указатель на элемент</returns>
		virtual IntPtr elLinkMain(IntPtr ptr) abstract;

		/// <summary>
		/// Помещает в переменные "X" и "Y", позицию элемента в редакторе схем.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="X">Позиция по горизонтали</param>
		/// <param name="Y">Позиция по вертикали</param>
		virtual void elGetPos(IntPtr ptr, int % X, int % Y) abstract;

		/// <summary>
		/// Помещает в переменные "W" и "H", размеры элемента.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="W">Ширина</param>
		/// <param name="H">Высота</param>
		virtual void elGetSize(IntPtr ptr, int % W, int % H) abstract;

		/// <summary>
		/// Возвращает идентификатор элемента.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Идентификатор элемента</returns>
		[Obsolete]
		virtual int elGetEID(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает указатель на точку с которой соединена указанная.
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
		/// Возвращает тип точки.
		/// </summary>
		/// <param name="ptr">Указатель на точку</param>
		/// <returns>Тип точки</returns>
		virtual PointType ptGetType(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает имя точки.
		/// </summary>
		/// <param name="ptr">Указатель на точку</param>
		/// <returns>Имя точки</returns>
		virtual String ^ ptGetName(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает идентификатор родителя точки.
		/// </summary>
		/// <param name="ptr">Указатель на точку</param>
		/// <returns>Указатель на элемент</returns>
		virtual IntPtr ptGetParent(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает индекс точки относительно точек того же типа.
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
		/// Возвращает тип свойства.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Тип свойства</returns>
		virtual DataType propGetType(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает имя свойства.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Имя свойства</returns>
		virtual String ^ propGetName(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает указатель на значение свойства.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Указатель на значение</returns>
		virtual IntPtr propGetValue(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает значение свойства в формате byte.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Значение свойства</returns>
		virtual byte propToByte(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает значение свойства в формате int.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Значение свойства</returns>
		virtual int propToInteger(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает значение свойства в формате double.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Значение свойства</returns>
		virtual double propToReal(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает значение свойства в формате String.
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
		/// Добавляет иконку из свойства в ресурсы.
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
		/// Добавляет поток данных из свойства в ресурсы.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddStream(IntPtr ptr) abstract;

		/// <summary>
		///  Добавляет Wave звук из свойства в ресурсы.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddWave(IntPtr ptr) abstract;

		/// <summary>
		/// Добавляет картинку из свойства в ресурсы.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddBitmap(IntPtr ptr) abstract;

		/// <summary>
		/// Добавляет меню из свойства в ресурсы.
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
		/// Возвращает значение параметра среды.
		/// </summary>
		/// <param name="index">Индекс параметра</param>
		/// <returns>Параметр среды</returns>
		virtual Object ^ GetParam(CgtParams index) abstract;

		/// <summary>
		/// Возвращает количество элементов в массиве.
		/// </summary>
		/// <param name="ptr">Указатель на массив</param>
		/// <returns>Количество элементов массива</returns>
		virtual int arrCount(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает тип элементов в массиве.
		/// </summary>
		/// <param name="ptr">Указатель на массив</param>
		/// <returns>Тип элементов массива</returns>
		virtual DataType arrType(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает имя элемента по индексу массива.
		/// </summary>
		/// <param name="ptr">Указатель на массив</param>
		/// <param name="index">Индекс элемента массива</param>
		/// <returns>Имя элемента массива</returns>
		virtual String ^ arrItemName(IntPtr ptr, int index) abstract;

		/// <summary>
		/// Возвращает указатель на данные элемента массива значения.
		/// </summary>
		/// <param name="ptr">Указатель на значение</param>
		/// <param name="index">Индекс элемента массива</param>
		/// <returns>Указатель на данные элемента массива</returns>
		[Obsolete]
		virtual IntPtr arrItemData(IntPtr ptr, int index) abstract;

		/// <summary>
		/// Возвращает элемент массива как указатель на свойство со значением элемента массива.
		/// </summary>
		/// <param name="ptr">Указатель на массив</param>
		/// <param name="index">Индекс элемента массива</param>
		/// <returns>Указатель на свойство</returns>
		virtual IntPtr arrGetItem(IntPtr ptr, int index) abstract;

		/// <summary>
		/// Возвращает статус отладки запущенной схемы.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>
		/// Если число больше нуля - отладка включена.
		/// Если число равно нулю - отладка выключена.
		/// </returns>
		virtual int isDebug(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает тип данных.
		/// </summary>
		/// <param name="ptr">Указатель на данные</param>
		/// <returns>Тип данных</returns>
		virtual DataType dtType(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает данные в формате String.
		/// </summary>
		/// <param name="ptr">Указатель на данные</param>
		/// <returns>Строка</returns>
		virtual String ^ dtStr(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает данные в формате int.
		/// </summary>
		/// <param name="ptr">Указатель на данные</param>
		/// <returns>Число</returns>
		virtual int dtInt(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает данные в формате double.
		/// </summary>
		/// <param name="ptr">Указатель на данные</param>
		/// <returns>Дробное число</returns>
		virtual double dtReal(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает название шрифта.
		/// </summary>
		/// <param name="ptr">Указатель на шрифт</param>
		/// <returns>Название шрифта</returns>
		virtual String ^ fntName(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает размер шрифта.
		/// </summary>
		/// <param name="ptr">Указатель на шрифт</param>
		/// <returns>Размер шрифта</returns>
		virtual int fntSize(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает стиль шрифта.
		/// </summary>
		/// <param name="ptr">Указатель на шрифт</param>
		/// <returns>Стиль шрифта</returns>
		virtual byte fntStyle(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает цвет шрифта.
		/// </summary>
		/// <param name="ptr">Указатель на шрифт</param>
		/// <returns>Цвет шрифта</returns>
		virtual int fntColor(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает кодировку шрифта.
		/// </summary>
		/// <param name="ptr">Указатель на шрифт</param>
		/// <returns>Кодировка шрифта</returns>
		virtual byte fntCharSet(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает указатель на пользовательские данные элемента.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Указатель на пользовательские данные</returns>
		virtual IntPtr elGetData(IntPtr ptr) abstract;

		/// <summary>
		/// Присваивает элементу указатель на пользовательские данные.
		/// </summary>
		/// <param name="eptr">Указатель на элемент</param>
		/// <param name="dptr">Указатель на пользовательские данные</param>
		virtual void elSetData(IntPtr eptr, IntPtr dptr) abstract;

		/// <summary>
		/// Возвращает тип данных точки.
		/// </summary>
		/// <param name="ptr">Указатель на точку</param>
		/// <returns>Тип данных</returns>
		virtual DataType ptGetDataType(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает идентификатор родительского контейнера элемента.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Указатель на контейнер</returns>
		virtual IntPtr elGetParent(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает количество свойств в списке свойств(из панели свойств).
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns>Количество свойств (всегда 0)</returns>
		[Obsolete]
		virtual int elGetPropertyListCount(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает указатель на свойство из списка свойств элемента.
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="index">Индекс свойства</param>
		/// <returns>Указатель на свойство</returns>
		[Obsolete]
		virtual IntPtr elGetPropertyListItem(IntPtr ptr, int index) abstract;

		/// <summary>
		/// Возвращает имя свойства.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Имя свойства</returns>
		[Obsolete]
		virtual String ^ plGetName(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает описание свойства.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Описание свойства</returns>
		[Obsolete]
		virtual String ^ plGetInfo(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает название группы свойства.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Название группы свойства</returns>
		[Obsolete]
		virtual String ^ plGetGroup(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает указатель на значение свойства.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Указатель на значение</returns>
		[Obsolete]
		virtual IntPtr plGetProperty(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает указатель на родительский элемент свойства.
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns>Указатель на элемент</returns>
		[Obsolete]
		virtual IntPtr plGetOwner(IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает описание точки.
		/// </summary>
		/// <param name="ptr">Указатель на точку</param>
		/// <returns>Описание точки</returns>
		virtual String ^ ptGetInfo(IntPtr ptr) abstract;

		ывавыа
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
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="ptr">Указатель на свойство</param>
		/// <returns></returns>
		virtual int propIsTranslate(IntPtr ptr, IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="ptr">Указатель на свойство</param>
		/// <param name="info"></param>
		/// <returns></returns>
		virtual int propGetLinkedElementInfo(IntPtr ptr, IntPtr ptr, String ^ info) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int elGetSDKByIndex(IntPtr ptr, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns></returns>
		virtual int elGetSDKCount(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual String ^ elGetSDKName(IntPtr ptr, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на контейнер</param>
		/// <returns></returns>
		virtual int sdkGetParent(IntPtr id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns></returns>
		virtual String ^ elGetInterface(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns></returns>
		virtual String ^ elGetInherit(IntPtr ptr) abstract;

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
		/// <param name="ptr">Указатель на элемент</param>
		/// <param name="text"></param>
		/// <returns></returns>
		virtual int _Error(int line, IntPtr ptr, String ^ text) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на элемент</param>
		/// <returns></returns>
		virtual int elGetGroup(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">Указатель на свойство</param>
		/// <param name="fileName"></param>
		/// <returns></returns>
		virtual int propSaveToFile(IntPtr ptr, String ^ fileName) abstract;
	};
}