#pragma once

#include <Windows.h>
#include "Share.h"

using namespace System;
using namespace CgtClr::Share;

namespace CgtClr {
	public ref class BaseCgt abstract
	{
	public:
		void RunCodeGen(const String ^codeGenPath, Object ^ rootContainer);

		/// <summary>
		/// Считает количество элементов в контейнере.
		/// </summary>
		/// <param name="c">Контейнер</param>
		/// <returns>Возвращает количество элементов в контейнере</returns>
		virtual int sdkGetCount(Object ^ c) abstract;

		/// <summary>
		/// Возвращает элемент по его Z-положению(индексу) в контейнере.
		/// </summary>
		/// <param name="c">Контейнер</param>
		/// <param name="index">Z-положение(индекс) элемента</param>
		/// <returns>Возвращает элемент</returns>
		virtual Object ^ sdkGetElement(Object ^ c, int index) abstract;

		/// <summary>
		/// Возвращает элемент по имени.
		/// </summary>
		/// <param name="c">Контейнер</param>
		/// <param name="name">Имя элемента</param>
		/// <returns>Возвращает элемент</returns>
		virtual Object ^ sdkGetElementName(Object ^ c, String ^ name) abstract;

		/// <summary>
		/// Возвращает флаги элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Возвращает флаги элемента</returns>
		virtual ElementFlags elGetFlag(Object ^ e) abstract;

		/// <summary>
		/// Возвращает количество свойств элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Возвращает количество свойств элемента</returns>
		virtual int elGetPropCount(Object ^ e) abstract;

		/// <summary>
		/// Возвращает свойство элемента по индексу с порядковым номером из INI.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="index">Индекс свойства</param>
		/// <returns>Возвращает свойство</returns>
		virtual Object ^ elGetProperty(Object ^ e, int index) abstract;

		/// <summary>
		/// Возвращает True, если значение свойства совпадает с заданным по умолчанию в INI файле, иначе False.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="index">Индекс свойства</param>
		/// <returns>Возвращает состояние свойства</returns>
		virtual bool elIsDefProp(Object ^ e, int index) abstract;

		/// <summary>
		/// Присваиваем элементу уникальное имя.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="name">Имя элемента</param>
		/// <returns>Возвращает элемент</returns>
		virtual Object ^ elSetCodeName(Object ^ e, String ^ name) abstract;

		/// <summary>
		/// Возвращает уникальное имя элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Возвращает имя элемента</returns>
		virtual String ^ elGetCodeName(Object ^ e) abstract;

		/// <summary>
		/// Возвращает имя класса элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Возвращает имя класса элемента</returns>
		virtual String ^ elGetClassName(Object ^ e) abstract;

		/// <summary>
		/// Возвращает содержимое поля Sub из конфигурационного INI-файла элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Возвращает содержимое поля Sub</returns>
		virtual String ^ elGetInfSub(Object ^ e) abstract;

		/// <summary>
		/// Возвращает общее количество видимых точек у элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Возвращает количество видимых точек</returns>
		virtual int elGetPtCount(Object ^ e) abstract;

		/// <summary>
		/// Возвращает точку по её индексу.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="index">Индекс точки</param>
		/// <returns>Возвращает точку</returns>
		virtual Object ^ elGetPt(Object ^ e, int index) abstract;

		/// <summary>
		/// Возвращает точку по её имени.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="name">Имя точки</param>
		/// <returns>Возвращает точку</returns>
		virtual Object ^ elGetPtName(Object ^ e, String ^ name) abstract;

		/// <summary>
		/// Возвращает индекс класса элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Индекс класса элемента</returns>
		virtual ElementClass elGetClassIndex(Object ^ e) abstract;

		/// <summary>
		/// Возвращает контейнер элемента.
		/// Если элемент не содержит контейнер, возвращается элемент родителя текущего контейнера.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Контейнер или элемент</returns>
		virtual Object ^ elGetSDK(Object ^ e) abstract;

		/// <summary>
		/// Проверяет, является ли элемент ссылкой, либо на него ссылаются.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Если элемент является ссылкой или на него ссылаются - true, иначе - false</returns>
		virtual bool elLinkIs(Object ^ e) abstract;

		/// <summary>
		/// Возвращает идентификатор главного элемента(тот, на который ссылаются другие).
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Возвращает элемент</returns>
		virtual Object ^ elLinkMain(Object ^ e) abstract;

		/// <summary>
		/// Помещает в переменные "X" и "Y", позицию элемента в редакторе схем.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="X">Позиция по горизонтали</param>
		/// <param name="Y">Позиция по вертикали</param>
		virtual void elGetPos(Object ^ e, int % X, int % Y) abstract;

		/// <summary>
		/// Помещает в переменные "W" и "H", размеры элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="W">Ширина</param>
		/// <param name="H">Высота</param>
		virtual void elGetSize(Object ^ e, int % W, int % H) abstract;

		/// <summary>
		/// Возвращает идентификатор элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Идентификатор элемента</returns>
		[Obsolete]
		virtual int elGetEID(Object ^ e) abstract;

		/// <summary>
		/// Возвращает точку с которой соединена указанная.
		/// </summary>
		/// <param name="p">Точка</param>
		/// <returns>Возвращает точку</returns>
		virtual Object ^ ptGetLinkPoint(Object ^ p) abstract;

		/// <summary>
		/// Возвращает точку с которой соединена указанная,
		/// без учета точек разрыва и хабов.
		/// </summary>
		/// <param name="p">Точка</param>
		/// <returns>Возвращает точку</returns>
		virtual Object ^ ptGetRLinkPoint(Object ^ p) abstract;

		/// <summary>
		/// Возвращает тип точки.
		/// </summary>
		/// <param name="p">Точка</param>
		/// <returns>Тип точки</returns>
		virtual PointType ptGetType(Object ^ p) abstract;

		/// <summary>
		/// Возвращает имя точки.
		/// </summary>
		/// <param name="p">Точка</param>
		/// <returns>Имя точки</returns>
		virtual String ^ ptGetName(Object ^ p) abstract;

		/// <summary>
		/// Возвращает идентификатор родителя точки.
		/// </summary>
		/// <param name="p">Точка</param>
		/// <returns>Возвращает элемент</returns>
		virtual Object ^ ptGetParent(Object ^ p) abstract;

		/// <summary>
		/// Возвращает индекс точки относительно точек того же типа.
		/// </summary>
		/// <param name="p">Точка</param>
		/// <returns>Индекс точки</returns>
		virtual int ptGetIndex(Object ^ p) abstract;

		/// <summary>
		/// Возвращает базовую часть имени динамической точки(для CI_DPElement).
		/// </summary>
		/// <param name="p">Точка</param>
		/// <returns>Часть имени динамической точки</returns>
		virtual String ^ pt_dpeGetName(Object ^ p) abstract;

		/// <summary>
		/// Возвращает тип свойства.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Тип свойства</returns>
		virtual DataType propGetType(Object ^ p) abstract;

		/// <summary>
		/// Возвращает имя свойства.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Имя свойства</returns>
		virtual String ^ propGetName(Object ^ p) abstract;

		/// <summary>
		/// Возвращает значение свойства.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Значение</returns>
		virtual Object ^ propGetValue(Object ^ p) abstract;

		/// <summary>
		/// Возвращает значение свойства в формате byte.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Значение свойства</returns>
		virtual byte propToByte(Object ^ p) abstract;

		/// <summary>
		/// Возвращает значение свойства в формате int.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Значение свойства</returns>
		virtual int propToInteger(Object ^ p) abstract;

		/// <summary>
		/// Возвращает значение свойства в формате double.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Значение свойства</returns>
		virtual double propToReal(Object ^ p) abstract;

		/// <summary>
		/// Возвращает значение свойства в формате String.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns></returns>
		virtual String ^ propToString(Object ^ p) abstract;

		/// <summary>
		/// Добавляет файл в список ресурсов.
		/// </summary>
		/// <param name="name">Путь к файлу</param>
		/// <returns>Всегда возвращает 0</returns>
		virtual int resAddFile(String ^ filePath) abstract;

		/// <summary>
		/// Добавляет иконку из свойства в ресурсы.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddIcon(Object ^ p) abstract;

		/// <summary>
		/// Добавляет строку в ресурсы.
		/// </summary>
		/// <param name="str">Строка для добавления</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddStr(String ^ str) abstract;

		/// <summary>
		/// Добавляет поток данных из свойства в ресурсы.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddStream(Object ^ p) abstract;

		/// <summary>
		///  Добавляет Wave звук из свойства в ресурсы.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddWave(Object ^ p) abstract;

		/// <summary>
		/// Добавляет картинку из свойства в ресурсы.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Имя временного файла</returns>
		virtual String ^ resAddBitmap(Object ^ p) abstract;

		/// <summary>
		/// Добавляет меню из свойства в ресурсы.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Имя временного файла</returns>
		[Obsolete]
		virtual String ^ resAddMenu(Object ^ p) abstract;

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
		/// <param name="a">Массив</param>
		/// <returns>Количество элементов массива</returns>
		virtual int arrCount(Object ^ a) abstract;

		/// <summary>
		/// Возвращает тип элементов в массиве.
		/// </summary>
		/// <param name="a">Массив</param>
		/// <returns>Тип элементов массива</returns>
		virtual DataType arrType(Object ^ a) abstract;

		/// <summary>
		/// Возвращает имя элемента по индексу массива.
		/// </summary>
		/// <param name="a">Массив</param>
		/// <param name="index">Индекс элемента массива</param>
		/// <returns>Имя элемента массива</returns>
		virtual String ^ arrItemName(Object ^ a, int index) abstract;

		/// <summary>
		/// Возвращает данные элемента массива.
		/// </summary>
		/// <param name="a">Массив</param>
		/// <param name="index">Индекс элемента массива</param>
		/// <returns>Данные элемента массива</returns>
		[Obsolete]
		virtual Object ^ arrItemData(Object ^ a, int index) abstract;

		/// <summary>
		/// Возвращает элемент массива как свойство со значением элемента массива.
		/// </summary>
		/// <param name="a">Массив</param>
		/// <param name="index">Индекс элемента массива</param>
		/// <returns>Свойство</returns>
		virtual Object ^ arrGetItem(Object ^ a, int index) abstract;

		/// <summary>
		/// Возвращает статус отладки запущенной схемы.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>
		/// Если число больше нуля - отладка включена.
		/// Если число равно нулю - отладка выключена.
		/// </returns>
		virtual int isDebug(Object ^ e) abstract;

		/// <summary>
		/// Возвращает тип данных.
		/// </summary>
		/// <param name="d">Данные</param>
		/// <returns>Тип данных</returns>
		virtual DataType dtType(Object ^ d) abstract;

		/// <summary>
		/// Возвращает данные в формате String.
		/// </summary>
		/// <param name="d">Данные</param>
		/// <returns>Строка</returns>
		virtual String ^ dtStr(Object ^ d) abstract;

		/// <summary>
		/// Возвращает данные в формате int.
		/// </summary>
		/// <param name="d">Данные</param>
		/// <returns>Число</returns>
		virtual int dtInt(Object ^ d) abstract;

		/// <summary>
		/// Возвращает данные в формате double.
		/// </summary>
		/// <param name="d">Данные</param>
		/// <returns>Дробное число</returns>
		virtual double dtReal(Object ^ d) abstract;

		/// <summary>
		/// Возвращает название шрифта.
		/// </summary>
		/// <param name="f">Шрифт</param>
		/// <returns>Название шрифта</returns>
		virtual String ^ fntName(Object ^ f) abstract;

		/// <summary>
		/// Возвращает размер шрифта.
		/// </summary>
		/// <param name="f">Шрифт</param>
		/// <returns>Размер шрифта</returns>
		virtual int fntSize(Object ^ f) abstract;

		/// <summary>
		/// Возвращает стиль шрифта.
		/// </summary>
		/// <param name="f">Шрифт</param>
		/// <returns>Стиль шрифта</returns>
		virtual byte fntStyle(Object ^ f) abstract;

		/// <summary>
		/// Возвращает цвет шрифта.
		/// </summary>
		/// <param name="f">Шрифт</param>
		/// <returns>Цвет шрифта</returns>
		virtual int fntColor(Object ^ f) abstract;

		/// <summary>
		/// Возвращает кодировку шрифта.
		/// </summary>
		/// <param name="f">Шрифт</param>
		/// <returns>Кодировка шрифта</returns>
		virtual byte fntCharSet(Object ^ f) abstract;

		/// <summary>
		/// Возвращает указатель на пользовательские данные элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Указатель на пользовательские данные</returns>
		virtual IntPtr elGetData(Object ^ e) abstract;

		/// <summary>
		/// Присваивает элементу указатель на пользовательские данные.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="ptr">Указатель на пользовательские данные</param>
		virtual void elSetData(Object ^ e, IntPtr ptr) abstract;

		/// <summary>
		/// Возвращает тип данных точки.
		/// </summary>
		/// <param name="p">Точка</param>
		/// <returns>Тип данных</returns>
		virtual DataType ptGetDataType(Object ^ p) abstract;

		/// <summary>
		/// Возвращает родительский контейнер элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Контейнер</returns>
		virtual Object ^ elGetParent(Object ^ e) abstract;

		/// <summary>
		/// Возвращает количество свойств в списке свойств(из панели свойств).
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Количество свойств (всегда 0)</returns>
		[Obsolete]
		virtual int elGetPropertyListCount(Object ^ e) abstract;

		/// <summary>
		/// Возвращает свойство из списка свойств элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="index">Индекс свойства</param>
		/// <returns>Свойство</returns>
		[Obsolete]
		virtual Object ^ elGetPropertyListItem(Object ^ e, int index) abstract;

		/// <summary>
		/// Возвращает имя свойства.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Имя свойства</returns>
		[Obsolete]
		virtual String ^ plGetName(Object ^ p) abstract;

		/// <summary>
		/// Возвращает описание свойства.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Описание свойства</returns>
		[Obsolete]
		virtual String ^ plGetInfo(Object ^ p) abstract;

		/// <summary>
		/// Возвращает название группы свойства.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Название группы свойства</returns>
		[Obsolete]
		virtual String ^ plGetGroup(Object ^ p) abstract;

		/// <summary>
		/// Возвращает значение свойства.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Значение</returns>
		[Obsolete]
		virtual Object ^ plGetProperty(Object ^ p) abstract;

		/// <summary>
		/// Возвращает родительский элемент свойства.
		/// </summary>
		/// <param name="p">Свойство</param>
		/// <returns>Возвращает элемент</returns>
		[Obsolete]
		virtual Object ^ plGetOwner(Object ^ p) abstract;

		/// <summary>
		/// Возвращает описание точки.
		/// </summary>
		/// <param name="p">Точка</param>
		/// <returns>Описание точки</returns>
		virtual String ^ ptGetInfo(Object ^ p) abstract;

		/// <summary>
		///	Возвращает элемент, прилинкованный к указанному свойству.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="propName">Имя свойства</param>
		/// <returns>Возвращает элемент</returns>
		virtual Object ^ propGetLinkedElement(Object ^ e, String ^ propName) abstract;

		/// <summary>
		/// Возвращает 1, если свойство помечено на перевод.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="pp">Свойство</param>
		/// <returns>Статус перевода</returns>
		[Obsolete]
		virtual int propIsTranslate(Object ^ e, Object ^ pp) abstract;

		/// <summary>
		/// Возвращает элемент, прилинкованный к указанному свойству.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="pp">Свойство</param>
		/// <param name="info">
		/// Имя интерфейса элемента.
		/// Например, в строке из INI: FormFastening=Форма для привязки позиции|20|(empty)|ControlManager
		/// ControlManager - имя интерфейса, которое мы должны передать в info.</param>
		/// <returns></returns>
		virtual Object ^ propGetLinkedElementInfo(Object ^ e, Object ^ pp, String ^ info) abstract;

		/// <summary>
		/// Возвращает контейнер по его индексу из элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="index">Индекс</param>
		/// <returns>Контейнер</returns>
		virtual Object ^ elGetSDKByIndex(Object ^ e, int index) abstract;

		/// <summary>
		/// Возвращает количество контейнеров полиморфного элемента(CI_PolyMulti).
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Количество контейнеров</returns>
		virtual int elGetSDKCount(Object ^ e) abstract;

		/// <summary>
		/// Возвращает имя контейнера по индексу.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <param name="index">Индекс контейнера</param>
		/// <returns>Имя контейнера</returns>
		virtual String ^ elGetSDKName(Object ^ e, int index) abstract;

		/// <summary>
		/// Возвращает элемент родитель для указанного контейнера, или null, если контейнер не имеет родителя.
		/// </summary>
		/// <param name="c">Контейнер</param>
		/// <returns>Возвращает элемент или null</returns>
		virtual Object ^ sdkGetParent(Object ^ c) abstract;

		/// <summary>
		/// Возвращает интерфейсы, предоставляемые элементом.   
		/// Содержимое поля Interfaces= из конфигурации элемента
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Возвращает строку</returns>
		virtual String ^ elGetInterface(Object ^ e) abstract;

		/// <summary>
		/// Возвращает список классов, от которых наследуется элемент.
		/// Содержимое поля Inherit= из конфигурации элемента.
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Возвращает строку</returns>
		virtual String ^ elGetInherit(Object ^ e) abstract;
		/// <summary>
		/// Возвращает 1, если список ресурсов пуст, и 0 в противном случае.
		/// </summary>
		/// <returns>Возвращает 1 или 0</returns>
		virtual int resEmpty() abstract;

		/// <summary>
		/// Устанавливает префикс для имен ресурсов.
		/// </summary>
		/// <param name="pref">Префикс</param>
		/// <returns>Всегда возвращает 0</returns>
		[Obsolete]
		virtual int resSetPref(String ^ pref) abstract;

		/// <summary>
		/// Добавляет информацию об ошибке в отладочный вывод.
		/// </summary>
		/// <param name="num_line">Номер строки</param>
		/// <param name="e">Элемент</param>
		/// <param name="text">Текст</param>
		/// <returns>Всегда возвращает 0</returns>
		virtual int _Error(int num_line, Object ^ e, String ^ text) abstract;

		/// <summary>
		/// Возвращает идентификатор группы, к которой принадлежит элемент и 0, если группа отсутствует
		/// </summary>
		/// <param name="e">Элемент</param>
		/// <returns>Возвращает идентификатор</returns>
		[Obsolete]
		virtual int elGetGroup(Object ^ e) abstract;

		/// <summary>
		/// Сохраняет данные свойства в файл.
		/// </summary>
		/// <param name="pp">Свойство</param>
		/// <param name="fileName">Имя файла</param>
		/// <returns>Всегда возвращает 0</returns>
		[Obsolete]
		virtual int propSaveToFile(Object ^ pp, String ^ fileName) abstract;
	};
}