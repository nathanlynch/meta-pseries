DEFAULTTUNE ?= "ppc64p8le"

require conf/machine/include/powerpc/arch-powerpc64.inc

TUNEVALID[power8] = "Enable IBM Power8 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'power8', ' -mcpu=power8', '', d)}"

AVAILTUNES += "ppcp8 ppc64p8 ppcp8le ppc64p8le"

TUNE_FEATURES_tune-ppcp8 = "m32 fpu-hard power8 altivec bigendian"
BASE_LIB_tune-ppcp8 = "lib"
TUNE_PKGARCH_tune-ppcp8 = "ppcp8"
PACKAGE_EXTRA_ARCHS_tune-ppcp8 = "${PACKAGE_EXTRA_ARCHS_tune-powerpc} ppcp8"

TUNE_FEATURES_tune-ppc64p8 = "m64 fpu-hard power8 altivec bigendian"
BASE_LIB_tune-ppc64p8 = "lib64"
TUNE_PKGARCH_tune-ppc64p8 = "ppc64p8"
PACKAGE_EXTRA_ARCHS_tune-ppc64p8 = "${PACKAGE_EXTRA_ARCHS_tune-powerpc64} ppc64p8"

TUNE_FEATURES_tune-ppcp8le = "m32 fpu-hard power8 altivec"
BASE_LIB_tune-ppcp8le = "lib"
TUNE_PKGARCH_tune-ppcp8le = "ppcp8le"
PACKAGE_EXTRA_ARCHS_tune-ppcp8le = "${PACKAGE_EXTRA_ARCHS_tune-powerpcle} ppcp8le"

TUNE_FEATURES_tune-ppc64p8le = "m64 fpu-hard power8 altivec"
BASE_LIB_tune-ppc64p8le = "lib64"
TUNE_PKGARCH_tune-ppc64p8le = "ppc64p8le"
PACKAGE_EXTRA_ARCHS_tune-ppc64p8le = "${PACKAGE_EXTRA_ARCHS_tune-powerpc64le} ppc64p8le"

# glibc configure options to get power8 specific library
GLIBC_EXTRA_OECONF += "${@bb.utils.contains('TUNE_FEATURES', 'power8', '--with-cpu=power8', '', d)}"
