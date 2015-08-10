#############################################################################
# Makefile for building: PeriodicTable
# Generated by qmake (3.0) (Qt 5.3.2)
# Project:  PeriodicTable.pro
# Template: app
# Command: C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\bin\qmake.exe -spec win32-msvc2013 -o Makefile PeriodicTable.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = copy /y
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: PeriodicTable.pro C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\win32-msvc2013\qmake.conf C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\spec_pre.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\common\shell-win32.conf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\qconfig.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_axbase.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_axbase_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_axcontainer.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_axcontainer_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_axserver.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_axserver_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_bluetooth.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_bluetooth_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_bootstrap_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_clucene_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_concurrent.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_concurrent_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_core.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_core_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_declarative.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_declarative_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_designer.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_designer_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_designercomponents_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_enginio.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_enginio_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_gui.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_gui_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_help.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_help_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_multimedia.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_multimedia_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_multimediawidgets.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_multimediawidgets_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_network.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_network_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_nfc.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_nfc_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_opengl.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_opengl_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_openglextensions.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_openglextensions_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_platformsupport_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_positioning.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_positioning_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_printsupport.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_printsupport_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_qml.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_qml_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_qmldevtools_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_qmltest.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_qmltest_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_quick.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_quick_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_quickparticles_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_quickwidgets.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_quickwidgets_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_script.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_script_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_scripttools.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_scripttools_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_sensors.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_sensors_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_serialport.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_serialport_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_sql.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_sql_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_svg.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_svg_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_testlib.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_testlib_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_uitools.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_uitools_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_webkit.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_webkit_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_webkitwidgets.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_webkitwidgets_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_websockets.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_websockets_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_widgets.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_widgets_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_winextras.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_winextras_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_xml.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_xml_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_xmlpatterns.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_xmlpatterns_private.pri \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\qt_functions.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\qt_config.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\win32\qt_config.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\win32-msvc2013\qmake.conf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\spec_post.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\exclusive_builds.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\default_pre.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\win32\default_pre.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\resolve_config.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\exclusive_builds_post.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\default_post.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\win32\rtti.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\precompile_header.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\warn_on.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\qt.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\resources.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\moc.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\win32\opengl.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\uic.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\win32\windows.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\testcase_targets.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\exceptions.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\yacc.prf \
		C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\lex.prf \
		PeriodicTable.pro \
		C:/Qtx32/Qt5.3.2/5.3/msvc2013_opengl/lib/qtmain.prl \
		C:/Qtx32/Qt5.3.2/5.3/msvc2013_opengl/lib/Qt5Core.prl \
		C:/Qtx32/Qt5.3.2/5.3/msvc2013_opengl/lib/Qt5Widgets.prl \
		C:/Qtx32/Qt5.3.2/5.3/msvc2013_opengl/lib/Qt5Gui.prl
	$(QMAKE) -spec win32-msvc2013 -o Makefile PeriodicTable.pro
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\spec_pre.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\common\shell-win32.conf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\qconfig.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_axbase.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_axbase_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_axcontainer.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_axcontainer_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_axserver.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_axserver_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_bluetooth.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_bluetooth_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_bootstrap_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_clucene_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_concurrent.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_concurrent_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_core.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_core_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_declarative.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_declarative_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_designer.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_designer_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_designercomponents_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_enginio.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_enginio_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_gui.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_gui_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_help.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_help_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_multimedia.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_multimedia_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_multimediawidgets.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_network.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_network_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_nfc.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_nfc_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_opengl.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_opengl_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_openglextensions.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_openglextensions_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_platformsupport_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_positioning.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_positioning_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_printsupport.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_printsupport_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_qml.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_qml_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_qmldevtools_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_qmltest.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_qmltest_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_quick.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_quick_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_quickparticles_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_quickwidgets.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_quickwidgets_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_script.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_script_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_scripttools.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_scripttools_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_sensors.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_sensors_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_serialport.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_serialport_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_sql.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_sql_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_svg.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_svg_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_testlib.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_testlib_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_uitools.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_uitools_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_webkit.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_webkit_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_webkitwidgets.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_webkitwidgets_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_websockets.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_websockets_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_widgets.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_widgets_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_winextras.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_winextras_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_xml.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_xml_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_xmlpatterns.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\qt_functions.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\qt_config.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\win32\qt_config.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\win32-msvc2013\qmake.conf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\spec_post.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\exclusive_builds.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\default_pre.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\win32\default_pre.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\resolve_config.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\exclusive_builds_post.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\default_post.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\win32\rtti.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\precompile_header.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\warn_on.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\qt.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\resources.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\moc.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\win32\opengl.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\uic.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\win32\windows.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\testcase_targets.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\exceptions.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\yacc.prf:
C:\Qtx32\Qt5.3.2\5.3\msvc2013_opengl\mkspecs\features\lex.prf:
PeriodicTable.pro:
C:/Qtx32/Qt5.3.2/5.3/msvc2013_opengl/lib/qtmain.prl:
C:/Qtx32/Qt5.3.2/5.3/msvc2013_opengl/lib/Qt5Core.prl:
C:/Qtx32/Qt5.3.2/5.3/msvc2013_opengl/lib/Qt5Widgets.prl:
C:/Qtx32/Qt5.3.2/5.3/msvc2013_opengl/lib/Qt5Gui.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-msvc2013 -o Makefile PeriodicTable.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first FORCE
all: release-all debug-all FORCE
clean: release-clean debug-clean FORCE
	-$(DEL_FILE) PeriodicTable.exp
distclean: release-distclean debug-distclean FORCE
	-$(DEL_FILE) Makefile

release-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
