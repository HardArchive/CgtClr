#pragma once

//Project

//!!! ========== Поддерживается только HiAsm 4, пакет Windows ==========

namespace CgtClr {
	namespace Share {
		//!ru Флаги элемента
		enum NElementFlags {
			//ru Элемент заморожен (нельзя перемещать).
			ELEMENT_FLG_IS_FREEZE = 0x0,

			//ru Элемент является частью интерфейса.
			ELEMENT_FLG_ONE_WIDGET = 0x1,

			//ru Элемент нельзя удалить.
			ELEMENT_FLG_IS_NODELETE = 0x2,

			//ru Элемент является редактором контейнера.
			//ru Например: EditMulti, EditMultiEx, EditPoliMulti.
			ELEMENT_FLG_IS_EDIT = 0x20,

			//ru Элемент является контейнером.
			ELEMENT_FLG_IS_MULTI = 0x40,

			//ru Элемент выбран в редакторе схем.
			ELEMENT_FLG_IS_SELECT = 0x100,

			//ru Родитель для элементов текущей SDK.
			ELEMENT_FLG_IS_PARENT = 0x200,

			//ru Элемент является базовым.
			//ru Например: CI_HubEx, CI_GetDataEx, ElementInfoTip, HCButton.
			ELEMENT_FLG_IS_CORE = 0x400,

			//ru Элемент является ссылкой, либо на него ссылаются.
			ELEMENT_FLG_IS_LINK = 0x800,
		};

		//!ru Флаги элемента
		public enum class ElementFlags {
			//ru Элемент заморожен (нельзя перемещать).
			ELEMENT_FLG_IS_FREEZE = 0x0,

			//ru Элемент является частью интерфейса.
			ELEMENT_FLG_ONE_WIDGET = 0x1,

			//ru Элемент нельзя удалить.
			ELEMENT_FLG_IS_NODELETE = 0x2,

			//ru Элемент является редактором контейнера.
			//ru Например: EditMulti, EditMultiEx, EditPoliMulti.
			ELEMENT_FLG_IS_EDIT = 0x20,

			//ru Элемент является контейнером.
			ELEMENT_FLG_IS_MULTI = 0x40,

			//ru Элемент выбран в редакторе схем.
			ELEMENT_FLG_IS_SELECT = 0x100,

			//ru Родитель для элементов текущей SDK.
			ELEMENT_FLG_IS_PARENT = 0x200,

			//ru Элемент является базовым.
			//ru Например: CI_HubEx, CI_GetDataEx, ElementInfoTip, HCButton.
			ELEMENT_FLG_IS_CORE = 0x400,

			//ru Элемент является ссылкой, либо на него ссылаются.
			ELEMENT_FLG_IS_LINK = 0x800,
		};

		//!ru Типы точек
		enum NPointType {
			//ru Метод
			pt_Work = 1,

			//ru Событие
			pt_Event,

			//ru Переменная
			pt_Var,

			//ru Данные
			pt_Data
		};
		//!ru Типы точек
		public enum class PointType {
			//ru Метод
			pt_Work = 1,

			//ru Событие
			pt_Event,

			//ru Переменная
			pt_Var,

			//ru Данные
			pt_Data
		};

		//!ru Типы данных
		enum NDataType {
			data_null = 0,
			data_int,
			data_str,
			data_data,
			data_combo,
			data_list,
			data_icon,
			data_real,
			data_color,
			data_script,
			data_stream,
			data_bitmap,
			data_wave,
			data_array,
			data_comboEx,
			data_font,
			data_matr,
			data_jpeg,
			data_menu,
			data_code,
			data_element,
			data_flags,
			data_object
		};
		//!ru Типы данных
		public enum class DataType {
			data_null = 0,
			data_int,
			data_str,
			data_data,
			data_combo,
			data_list,
			data_icon,
			data_real,
			data_color,
			data_script,
			data_stream,
			data_bitmap,
			data_wave,
			data_array,
			data_comboEx,
			data_font,
			data_matr,
			data_jpeg,
			data_menu,
			data_code,
			data_element,
			data_flags,
			data_object
		};

		//!ru Классы элементов (elGetClassIndex)
		enum NElementClass {
			//ru Просто элемент.
			CI_Element = 0,
			//ru Элемент с динамическими точками (автонумерация), например - IndexToChanel.
			//D - Dynamic, P - Point.
			CI_DPElement,
			//ru Контейнер
			CI_MultiElement,
			//ru Редактор контейнера MultiElement.
			CI_EditMulti,
			//ru Редактор динамического контейнера.
			CI_EditMultiEx,
			//ru Элемент для встраивания кода.
			CI_InlineCode,
			//ru Ручная отрисовка элемента интерфейса.
			CI_DrawElement,
			//ru Специальный класс, который используется для реализации ActionSkin.
			//ru Элемент AS_Control.
			CI_AS_Special,
			//ru Элемент со списком динамических точек.
			//ru Например элемент - VBScript.
			//D - Dynamic, P - Point, L - List
			CI_DPLElement,
			//ru Упрощённое подключение внешних библиотек.
			CI_UseHiDLL,
			//ru Элемент интерфейса, которым можно управлять в дизайнере форм.
			CI_WinElement,
			//ru Сноска.
			//ru PointHint - элемент базового пакета (_base).
			CI_PointHint,
			//ru Эмулятор элемента.
			//ru PointElement - элемент базового пакета (_base).
			CI_PointElement,
			//ru Разрыв линии.
			//ru LineBreak - элемент базового пакета (_base).
			CI_LineBreak,
			//ru Разрыв линии.
			//ru LineBreakEx - элемент базового пакета (_base).
			CI_LineBreakEx,
			//ru Пользовательский элемент.
			CI_UserElement,
			//ru Элемент для работы с переводом.
			//ru В пакете Windows, именуется как Class=Translator.
			CI_Translate,
			//ru Полиморфный контейнер.
			//ru Элемент может содержать более одного контейнера.
			CI_PolyMulti,
			//ru Шаблон документа.
			CI_DocumentTemplate
		};
		//!ru Классы элементов (elGetClassIndex)
		public enum class ElementClass {
			//ru Просто элемент.
			CI_Element = 0,
			//ru Элемент с динамическими точками (автонумерация), например - IndexToChanel.
			//D - Dynamic, P - Point.
			CI_DPElement,
			//ru Контейнер
			CI_MultiElement,
			//ru Редактор контейнера MultiElement.
			CI_EditMulti,
			//ru Редактор динамического контейнера.
			CI_EditMultiEx,
			//ru Элемент для встраивания кода.
			CI_InlineCode,
			//ru Ручная отрисовка элемента интерфейса.
			CI_DrawElement,
			//ru Специальный класс, который используется для реализации ActionSkin.
			//ru Элемент AS_Control.
			CI_AS_Special,
			//ru Элемент со списком динамических точек.
			//ru Например элемент - VBScript.
			//D - Dynamic, P - Point, L - List
			CI_DPLElement,
			//ru Упрощённое подключение внешних библиотек.
			CI_UseHiDLL,
			//ru Элемент интерфейса, которым можно управлять в дизайнере форм.
			CI_WinElement,
			//ru Сноска.
			//ru PointHint - элемент базового пакета (_base).
			CI_PointHint,
			//ru Эмулятор элемента.
			//ru PointElement - элемент базового пакета (_base).
			CI_PointElement,
			//ru Разрыв линии.
			//ru LineBreak - элемент базового пакета (_base).
			CI_LineBreak,
			//ru Разрыв линии.
			//ru LineBreakEx - элемент базового пакета (_base).
			CI_LineBreakEx,
			//ru Пользовательский элемент.
			CI_UserElement,
			//ru Элемент для работы с переводом.
			//ru В пакете Windows, именуется как Class=Translator.
			CI_Translate,
			//ru Полиморфный контейнер.
			//ru Элемент может содержать более одного контейнера.
			CI_PolyMulti,
			//ru Шаблон документа.
			CI_DocumentTemplate
		};

		//!ru Индексы параметров среды - GetParam()
		enum NCgtParams {
			PARAM_CODE_PATH = 0,
			PARAM_DEBUG_MODE,
			PARAM_DEBUG_SERVER_PORT,
			PARAM_DEBUG_CLIENT_PORT,
			PARAM_PROJECT_PATH,
			PARAM_HIASM_VERSION,
			PARAM_USER_NAME,
			PARAM_USER_MAIL,
			PARAM_PROJECT_NAME,
			PARAM_SDE_WIDTH,
			PARAM_SDE_HEIGHT,
			PARAM_COMPILER
		};
		//!ru Индексы параметров среды - GetParam()
		public enum class CgtParams {
			PARAM_CODE_PATH = 0,
			PARAM_DEBUG_MODE,
			PARAM_DEBUG_SERVER_PORT,
			PARAM_DEBUG_CLIENT_PORT,
			PARAM_PROJECT_PATH,
			PARAM_HIASM_VERSION,
			PARAM_USER_NAME,
			PARAM_USER_MAIL,
			PARAM_PROJECT_NAME,
			PARAM_SDE_WIDTH,
			PARAM_SDE_HEIGHT,
			PARAM_COMPILER
		};

		//!ru Ошибки при работе с библиотекой кодогенератора
		enum CgResult {
			//ru Успешное завершение.
			CG_SUCCESS = 0,

			//ru Кодогенератор не найден.
			CG_NOT_FOUND = 1,

			//ru Используемая версия среды не поддерживается.
			CG_INVALID_VERSION = 2,

			//ru Точка входа в кодогенератор не найдена.
			CG_ENTRY_POINT_NF = 3,

			//ru Общая ошибка при сборке проекта.
			CG_BUILD_FAILED = 10,

			//ru Результат компиляции не найден.
			CG_APP_NOT_FOUND = 20
		};

		//!ru Параметры проекта
		enum ProjectFlags {
			//ru Поддерживает сжатие.
			CGMP_COMPRESSED = 0x01,

			//ru Поддерживает запуск из среды.
			CGMP_RUN = 0x02,

			//ru Поддерживает запуск из среды в отладочном режиме.
			CGMP_RUN_DEBUG = 0x04,

			//ru Поддерживает внешний редактор форм.
			CGMP_FORM_EDIT = 0x08
		};

		/*
		 * Описание интерфейса make_*
		 *
		*/

		struct TBuildMakePrjRec {
			void *result;
			const char *prjFilename;
			const char *compiler;
		};

		struct TBuildCompliteRec {
			const char *prjFilename;
			const char *appFilename;
		};

		struct TBuildParams {
			int flags;
		};

		struct TBuildRunRec {
			const char *FileName;
			int Mode;
			int ServerPort;
			int ClientPort;
			void *data;
		};

		typedef int(*TBuildCompliteProc)(const TBuildCompliteRec &params);
		typedef int(*TBuildGetParamsProc)(TBuildParams &params);
		typedef int(*TBuildMakePrj)(const TBuildMakePrjRec &params);
		typedef int(*TBuildRunProc)(TBuildRunRec &params);
		typedef int(*TBuildStopProc)(TBuildRunRec &params);

		/*
		 * Описание интерфейса библиотеки CodeGen.
		 *
		*/

		struct THiAsmVersion {
			int major{};
			int minor{};
			int build{};
		};

		struct TBuildProcessRec {
			void *cgt{};
			int sdk{};
			void *result{};
		};

		typedef CgResult(*TBuildPrepareProc)(void *params);
		typedef CgResult(*TBuildProcessProc)(TBuildProcessRec &params);
		typedef CgResult(*TCheckVersionProc)(const THiAsmVersion &params);
	}
}