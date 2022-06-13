SUMMARY = "Libraries for user space access to RTAS services"
HOMEPAGE = "https://github.com/ibm-power-utilities/librtas"

LICENSE = "LGPLv2.1"
LIC_FILES_CHKSUM = "file://COPYING.LESSER;md5=4b54a1fd55a448865a0b32d41598759d"

SRC_URI = "git://github.com/ibm-power-utilities/librtas.git;protocol=https"

# Modify these as desired
PV = "2.0.2+git${SRCPV}"
SRCREV = "ea1f1ff72ef15e20e663dcaecebb7517aac354e5"

S = "${WORKDIR}/git"

inherit autotools

EXTRA_OECONF = ""
