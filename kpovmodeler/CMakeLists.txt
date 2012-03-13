#################################################
#
#  (C) 2010-2012 Serghei Amelian
#  serghei (DOT) amelian (AT) gmail.com
#
#  Improvements and feedback are welcome
#
#  This file is released under GPL >= 2
#
#################################################

include( ConfigureChecks.cmake )

add_subdirectory( pics )
add_subdirectory( examples )

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
  ${FREETYPE_INCLUDE_DIRS}
  ${GLU_INCLUDE_DIRS}
)


##### other data ################################

kde_install_icons( kpovmodeler_doc kpovmodeler )

install( FILES
    kpovmodeler.desktop
  DESTINATION ${XDG_APPS_INSTALL_DIR} )

install( FILES
    kpovmodelershell.rc kpovmodelerui.rc kpovmodelerbrowser.rc
    povraydocmap.xml baseinsertrules.xml questionmark.png
  DESTINATION ${DATA_INSTALL_DIR}/kpovmodeler )


##### kpovmodeler (shared) ######################

kde_add_library( kpovmodeler SHARED AUTOMOC
  SOURCES
    pmpart.cpp pmfactory.cpp pmview.cpp pmshell.cpp pmobjectdrag.cpp pmtreeview.cpp
    pmmessage.cpp pmtreeviewitem.cpp pmerrordialog.cpp pminsertpopup.cpp
    pminserterrordialog.cpp pmglview.cpp pmrendermanager.cpp pmobjectselect.cpp
    pmrendermodesdialog.cpp pmpovrayrenderwidget.cpp pmpovraywidget.cpp
    pmpovrayoutputwidget.cpp pmsettingsdialog.cpp pmcolorsettings.cpp
    pmgridsettings.cpp pmlayoutsettings.cpp pmobjectlibrarysettings.cpp
    pmobjectsettings.cpp pmpluginsettings.cpp pmpovraysettings.cpp
    pmpreviewsettings.cpp pmopenglsettings.cpp pmdockwidget.cpp
    pmdockwidget_private.cpp pmviewlayoutmanager.cpp pmviewbase.cpp
    pmviewfactory.cpp pmunknownview.cpp pmdragwidget.cpp pmprototypemanager.cpp
    pmobject.cpp pmcompositeobject.cpp pmgraphicalobject.cpp pmsolidobject.cpp
    pmscene.cpp pmglobalsettings.cpp pmskysphere.cpp pmrainbow.cpp pmfog.cpp
    pmbox.cpp pmsphere.cpp pmblob.cpp pmblobsphere.cpp pmblobcylinder.cpp
    pmtext.cpp pmjuliafractal.cpp pmcylinder.cpp pmcone.cpp pmtorus.cpp
    pmplane.cpp pmpolynom.cpp pmdisc.cpp pmbicubicpatch.cpp pmtriangle.cpp
    pmlathe.cpp pmprism.cpp pmsor.cpp pmsqe.cpp pmheightfield.cpp
    pmheightfieldroam.cpp pmcomment.cpp pmraw.cpp pmnamedobject.cpp
    pmtranslate.cpp pmscale.cpp pmrotate.cpp pmpovraymatrix.cpp pmcsg.cpp
    pmcamera.cpp pmboundedby.cpp pmclippedby.cpp pmlight.cpp pmlookslike.cpp
    pmprojectedthrough.cpp pmtexturebase.cpp pmtexture.cpp pmpigment.cpp
    pmsolidcolor.cpp pmlistpattern.cpp pmquickcolor.cpp pmpattern.cpp
    pmblendmapmodifiers.cpp pmtexturemap.cpp pmnormal.cpp pmslope.cpp pmwarp.cpp
    pmfinish.cpp pminterior.cpp pmmedia.cpp pmmaterial.cpp pmmaterialmap.cpp
    pmdensity.cpp pmimagemap.cpp pmbumpmap.cpp pmisosurface.cpp pmradiosity.cpp
    pmglobalphotons.cpp pmphotons.cpp pmlightgroup.cpp pminteriortexture.cpp
    pmspheresweep.cpp pmmesh.cpp pmdetailobject.cpp pmdeclare.cpp pmobjectlink.cpp
    pmrecursiveobjectiterator.cpp pmaddcommand.cpp pmcommandmanager.cpp
    pmdatachangecommand.cpp pmdeletecommand.cpp pmmovecommand.cpp
    pmdialogview.cpp pmdialogeditbase.cpp pmgraphicalobjectedit.cpp
    pmnamedobjectedit.cpp pmsolidobjectedit.cpp pmskysphereedit.cpp
    pmglobalsettingsedit.cpp pmrainbowedit.cpp pmfogedit.cpp pmboxedit.cpp
    pmsphereedit.cpp pmblobedit.cpp pmblobsphereedit.cpp pmblobcylinderedit.cpp
    pmtextedit.cpp pmjuliafractaledit.cpp pmcylinderedit.cpp pmconeedit.cpp
    pmtorusedit.cpp pmplaneedit.cpp pmpolynomedit.cpp pmheightfieldedit.cpp
    pmlatheedit.cpp pmprismedit.cpp pmsoredit.cpp pmsqeedit.cpp pmdiscedit.cpp
    pmbicubicpatchedit.cpp pmtriangleedit.cpp pmcommentedit.cpp pmrawedit.cpp
    pmrotateedit.cpp pmscaleedit.cpp pmtranslateedit.cpp pmpovraymatrixedit.cpp
    pmcsgedit.cpp pmcameraedit.cpp pmlightedit.cpp pmboundedbyedit.cpp
    pmclippedbyedit.cpp pmlineedits.cpp pmvectorlistedit.cpp pmcoloredit.cpp
    pmlinkedit.cpp pmvectoredit.cpp pmpalettevalueedit.cpp pmformulalabel.cpp
    pmtexturebaseedit.cpp pmtextureedit.cpp pmpigmentedit.cpp pmsolidcoloredit.cpp
    pmlistpatternedit.cpp pmquickcoloredit.cpp pmpatternedit.cpp
    pmblendmapmodifiersedit.cpp pmimagemapedit.cpp pmtexturemapedit.cpp
    pmbumpmapedit.cpp pmmaterialmapedit.cpp pmnormaledit.cpp pmslopeedit.cpp
    pmfinishedit.cpp pmwarpedit.cpp pminterioredit.cpp pmmediaedit.cpp
    pmmaterialedit.cpp pmdensityedit.cpp pmdeclareedit.cpp pmobjectlinkedit.cpp
    pmisosurfaceedit.cpp pmradiosityedit.cpp pmglobalphotonsedit.cpp
    pmphotonsedit.cpp pmlightgroupedit.cpp pminteriortextureedit.cpp
    pmspheresweepedit.cpp pmmeshedit.cpp pmdetailobjectedit.cpp
    pmcontrolpoint.cpp pm3dcontrolpoint.cpp pm2dcontrolpoint.cpp
    pmsorcontrolpoint.cpp pmtranslatecontrolpoint.cpp pmrotatecontrolpoint.cpp
    pmscalecontrolpoint.cpp pmvectorcontrolpoint.cpp pmdistancecontrolpoint.cpp
    pmplanenormalcontrolpoint.cpp pmmemento.cpp pmmapmemento.cpp
    pmsplinememento.cpp pmprismmemento.cpp pmpalettevaluememento.cpp
    pmiomanager.cpp pmpovrayformat.cpp pmpovray31format.cpp pmpovray35format.cpp
    pmpovray31serialization.cpp pmpovray35serialization.cpp pmscanner.cpp
    pmparser.cpp pmxmlparser.cpp pmpovrayparser.cpp pmserializer.cpp
    pmoutputdevice.cpp pmxmlhelper.cpp pmfiledialog.cpp pmpalettevalue.cpp
    pmvector.cpp pmmath.cpp pmmatrix.cpp pmviewstructure.cpp pmline.cpp
    pmcolor.cpp pmpoint.cpp pmsymboltable.cpp pmactions.cpp pmsplinesegment.cpp
    pmsorsegment.cpp pmpolynomexponents.cpp pmvariant.cpp pmmetaobject.cpp
    pmenumproperty.cpp pmface.cpp pmrendermode.cpp pmresourcelocator.cpp
    pmtruetypecache.cpp pmdocumentationmap.cpp pminsertrulesystem.cpp
    pmlibrarymanager.cpp pmlibraryhandle.cpp pmlibraryhandleedit.cpp
    pmlibraryobject.cpp pmlibraryentrypreview.cpp pmlibrarybrowser.cpp
    pmlibraryiconview.cpp pmlibraryobjectsearch.cpp pmpluginmanager.cpp
    pmpartiface.skel
  VERSION 0.0.0
  LINK kparts-shared ${GLU_LIBRARIES} ${XMU_LIBRARIES} ${FREETYPE_LIBRARIES}
  DESTINATION ${LIB_INSTALL_DIR}
)


##### libkpovmodelerpart (module) ###############

configure_file( ${TEMPLATE_DUMMY_CPP} dummy.cpp COPYONLY )

kde_add_kpart( libkpovmodelerpart AUTOMOC
  SOURCES dummy.cpp
  LINK kpovmodeler-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)


##### kpovmodeler (executable) ##################

kde_add_executable( kpovmodeler AUTOMOC
  SOURCES main.cpp
  LINK kpovmodeler-shared
  DESTINATION ${BIN_INSTALL_DIR}
)
