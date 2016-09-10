#pragma once

//! ========== Поддерживается только HiAsm 4, пакет Windows ==========

namespace CgtClr {
	namespace Share {

		/// <summary>
		/// Флаги элемента.
		/// Нативный enum.
		/// </summary>
		enum NElementFlags {
			/// <summary>
			/// Элемент заморожен (нельзя перемещать).
			/// </summary>
			ELEMENT_FLG_IS_FREEZE = 0x0,

			/// <summary>
			/// Элемент является частью интерфейса.
			/// </summary>
			ELEMENT_FLG_ONE_WIDGET = 0x1,

			/// <summary>
			/// Элемент нельзя удалить.
			/// </summary>
			ELEMENT_FLG_IS_NODELETE = 0x2,

			/// <summary>
			/// Элемент является редактором контейнера.
			/// Например: EditMulti, EditMultiEx, EditPoliMulti.
			/// </summary>
			ELEMENT_FLG_IS_EDIT = 0x20,

			/// <summary>
			/// Элемент является контейнером.
			/// </summary>
			ELEMENT_FLG_IS_MULTI = 0x40,

			/// <summary>
			/// Элемент выбран в редакторе схем.
			/// </summary>
			ELEMENT_FLG_IS_SELECT = 0x100,

			/// <summary>
			/// Родитель для элементов текущей SDK.
			/// </summary>
			ELEMENT_FLG_IS_PARENT = 0x200,

			/// <summary>
			/// Элемент является базовым.
			/// Например: CI_HubEx, CI_GetDataEx, ElementInfoTip, HCButton.
			/// </summary>
			ELEMENT_FLG_IS_CORE = 0x400,

			/// <summary>
			/// Элемент является ссылкой, либо на него ссылаются.
			/// </summary>
			ELEMENT_FLG_IS_LINK = 0x800,
		};

		/// <summary>
		/// Флаги элемента.
		/// </summary>
		public enum class ElementFlags {
			/// <summary>
			/// Элемент заморожен (нельзя перемещать).
			/// </summary>
			ELEMENT_FLG_IS_FREEZE = 0x0,

			/// <summary>
			/// Элемент является частью интерфейса.
			/// </summary>
			ELEMENT_FLG_ONE_WIDGET = 0x1,

			/// <summary>
			/// Элемент нельзя удалить.
			/// </summary>
			ELEMENT_FLG_IS_NODELETE = 0x2,

			/// <summary>
			/// Элемент является редактором контейнера.
			/// Например: EditMulti, EditMultiEx, EditPoliMulti.
			/// </summary>
			ELEMENT_FLG_IS_EDIT = 0x20,

			/// <summary>
			/// Элемент является контейнером.
			/// </summary>
			ELEMENT_FLG_IS_MULTI = 0x40,

			/// <summary>
			/// Элемент выбран в редакторе схем.
			/// </summary>
			ELEMENT_FLG_IS_SELECT = 0x100,

			/// <summary>
			/// Родитель для элементов текущей SDK.
			/// </summary>
			ELEMENT_FLG_IS_PARENT = 0x200,

			/// <summary>
			/// Элемент является базовым.
			/// Например: CI_HubEx, CI_GetDataEx, ElementInfoTip, HCButton.
			/// </summary>
			ELEMENT_FLG_IS_CORE = 0x400,

			/// <summary>
			/// Элемент является ссылкой, либо на него ссылаются.
			/// </summary>
			ELEMENT_FLG_IS_LINK = 0x800,
		};

		/// <summary>
		/// Типы точек.
		/// Нативный enum.
		/// </summary>
		enum NPointType {
			/// <summary>
			/// Метод
			/// </summary>
			pt_Work = 1,

			/// <summary>
			/// Событие
			/// </summary>
			pt_Event,

			/// <summary>
			/// Переменная
			/// </summary>
			pt_Var,

			/// <summary>
			/// Данные
			/// </summary>
			pt_Data
		};
		/// <summary>
		/// Типы точек.
		/// </summary>
		public enum class PointType {
			/// <summary>
			/// Метод
			/// </summary>
			pt_Work = 1,

			/// <summary>
			/// Событие
			/// </summary>
			pt_Event,

			/// <summary>
			/// Переменная
			/// </summary>
			pt_Var,

			/// <summary>
			/// Данные
			/// </summary>
			pt_Data
		};

		/// <summary>
		/// Типы данных.
		/// Нативный enum.
		/// </summary>
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
		/// <summary>
		/// Типы данных.
		/// </summary>
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

		/// <summary>
		/// Классы элементов (elGetClassIndex).
		/// Нативный enum.
		/// </summary>
		enum NElementClass {
			/// <summary>
			/// Просто элемент.
			/// </summary>
			CI_Element = 0,
			/// <summary>
			/// Элемент с динамическими точками (автонумерация), например - IndexToChanel.
			/// D - Dynamic, P - Point.
			/// </summary>
			CI_DPElement,
			/// <summary>
			/// Контейнер
			/// </summary>
			CI_MultiElement,
			/// <summary>
			/// Редактор контейнера MultiElement.
			/// </summary>
			CI_EditMulti,
			/// <summary>
			/// Редактор динамического контейнера.
			/// </summary>
			CI_EditMultiEx,
			/// <summary>
			/// Элемент для встраивания кода.
			/// </summary>
			CI_InlineCode,
			/// <summary>
			/// Элемент для встраивания кода.
			/// </summary>
			CI_DrawElement,
			/// <summary>
			/// Специальный класс, который используется для реализации ActionSkin.
			/// Элемент AS_Control.
			/// </summary>
			CI_AS_Special,
			/// <summary>
			/// Элемент со списком динамических точек.
			/// Например элемент - VBScript.
			/// D - Dynamic, P - Point, L - List
			/// </summary>
			CI_DPLElement,
			/// <summary>
			/// Упрощённое подключение внешних библиотек.
			/// </summary>
			CI_UseHiDLL,
			/// <summary>
			/// Элемент интерфейса, которым можно управлять в дизайнере форм.
			/// </summary>
			CI_WinElement,
			/// <summary>
			/// Сноска.
			/// PointHint - элемент базового пакета (_base).
			/// </summary>
			CI_PointHint,
			/// <summary>
			/// Эмулятор элемента.
			/// PointElement - элемент базового пакета (_base).
			/// </summary>
			CI_PointElement,
			/// <summary>
			/// Разрыв линии.
			/// LineBreak - элемент базового пакета (_base).
			/// </summary>
			CI_LineBreak,
			/// <summary>
			/// Разрыв линии.
			/// LineBreakEx - элемент базового пакета (_base).
			/// </summary>
			CI_LineBreakEx,
			/// <summary>
			/// Пользовательский элемент.
			/// </summary>
			CI_UserElement,
			/// <summary>
			/// Элемент для работы с переводом.
			/// В пакете Windows именуется как Class=Translator.
			/// </summary>
			CI_Translate,
			/// <summary>
			/// Полиморфный контейнер.
			/// Элемент может содержать более одного контейнера.
			/// </summary>
			CI_PolyMulti,
			/// <summary>
			/// Шаблон документа.
			/// </summary>
			CI_DocumentTemplate
		};
		/// <summary>
		/// Классы элементов (elGetClassIndex).
		/// </summary>
		public enum class ElementClass {
			/// <summary>
			/// Просто элемент.
			/// </summary>
			CI_Element = 0,
			/// <summary>
			/// Элемент с динамическими точками (автонумерация), например - IndexToChanel.
			/// D - Dynamic, P - Point.
			/// </summary>
			CI_DPElement,
			/// <summary>
			/// Контейнер
			/// </summary>
			CI_MultiElement,
			/// <summary>
			/// Редактор контейнера MultiElement.
			/// </summary>
			CI_EditMulti,
			/// <summary>
			/// Редактор динамического контейнера.
			/// </summary>
			CI_EditMultiEx,
			/// <summary>
			/// Элемент для встраивания кода.
			/// </summary>
			CI_InlineCode,
			/// <summary>
			/// Элемент для встраивания кода.
			/// </summary>
			CI_DrawElement,
			/// <summary>
			/// Специальный класс, который используется для реализации ActionSkin.
			/// Элемент AS_Control.
			/// </summary>
			CI_AS_Special,
			/// <summary>
			/// Элемент со списком динамических точек.
			/// Например элемент - VBScript.
			/// D - Dynamic, P - Point, L - List
			/// </summary>
			CI_DPLElement,
			/// <summary>
			/// Упрощённое подключение внешних библиотек.
			/// </summary>
			CI_UseHiDLL,
			/// <summary>
			/// Элемент интерфейса, которым можно управлять в дизайнере форм.
			/// </summary>
			CI_WinElement,
			/// <summary>
			/// Сноска.
			/// PointHint - элемент базового пакета (_base).
			/// </summary>
			CI_PointHint,
			/// <summary>
			/// Эмулятор элемента.
			/// PointElement - элемент базового пакета (_base).
			/// </summary>
			CI_PointElement,
			/// <summary>
			/// Разрыв линии.
			/// LineBreak - элемент базового пакета (_base).
			/// </summary>
			CI_LineBreak,
			/// <summary>
			/// Разрыв линии.
			/// LineBreakEx - элемент базового пакета (_base).
			/// </summary>
			CI_LineBreakEx,
			/// <summary>
			/// Пользовательский элемент.
			/// </summary>
			CI_UserElement,
			/// <summary>
			/// Элемент для работы с переводом.
			/// В пакете Windows именуется как Class=Translator.
			/// </summary>
			CI_Translate,
			/// <summary>
			/// Полиморфный контейнер.
			/// Элемент может содержать более одного контейнера.
			/// </summary>
			CI_PolyMulti,
			/// <summary>
			/// Шаблон документа.
			/// </summary>
			CI_DocumentTemplate
		};

		/// <summary>
		/// Индексы параметров среды - GetParam().
		/// Нативный enum.
		/// </summary>
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
		/// <summary>
		/// Индексы параметров среды - GetParam()
		/// </summary>
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

		/// <summary>
		/// Ошибки при работе с библиотекой кодогенератора
		/// </summary>
		enum CgResult {
			/// <summary>
			/// Успешное завершение.
			/// </summary>
			CG_SUCCESS = 0,

			/// <summary>
			/// Кодогенератор не найден.
			/// </summary>
			CG_NOT_FOUND = 1,

			/// <summary>
			/// Используемая версия среды не поддерживается.
			/// </summary>
			CG_INVALID_VERSION = 2,

			/// <summary>
			/// Точка входа в кодогенератор не найдена.
			/// </summary>
			CG_ENTRY_POINT_NF = 3,

			/// <summary>
			/// Общая ошибка при сборке проекта.
			/// </summary>
			CG_BUILD_FAILED = 10,

			/// <summary>
			/// Результат компиляции не найден.
			/// </summary>
			CG_APP_NOT_FOUND = 20
		};

		/// <summary>
		/// Параметры проекта
		/// </summary>
		enum ProjectFlags {
			/// <summary>
			/// Поддерживает сжатие.
			/// </summary>
			CGMP_COMPRESSED = 0x01,

			/// <summary>
			/// Поддерживает запуск из среды.
			/// </summary>
			CGMP_RUN = 0x02,

			/// <summary>
			/// Поддерживает запуск из среды в отладочном режиме.
			/// </summary>
			CGMP_RUN_DEBUG = 0x04,

			/// <summary>
			/// Поддерживает внешний редактор форм.
			/// </summary>
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