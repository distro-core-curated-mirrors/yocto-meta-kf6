DESCRIPTION = "KWidgetsAddons"
HOMEPAGE = "http://api.kde.org/frameworks-api/frameworks5-apidocs/kwidgetsaddons/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase"

GIT_REPO = "git://anongit.kde.org/kwidgetsaddons"
S = "${WORKDIR}/git"

inherit cmake_qt5

FILES_${PN}-dev += " \
    ${libdir}/cmake/KF5WidgetsAddons/*.cmake \
    ${prefix}/mkspecs/modules/qt_KWidgetsAddons.pri \
"

FILES_${PN} += " \
    /usr/share/kf5/kcharselect/kcharselect-data \
"