# Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

project(JPEG)

set(JPEG_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/jpeg-9a)

#include_directories(AFTER
#	${CMAKE_SOURCE_DIR}/3rdparty/zlib
#)

set(JPEG_HDR
	${JPEG_ROOT}/cderror.h
	${JPEG_ROOT}/cdjpeg.h
	${JPEG_ROOT}/jconfig.h
	${JPEG_ROOT}/jdct.h
	${JPEG_ROOT}/jerror.h
	${JPEG_ROOT}/jinclude.h
	${JPEG_ROOT}/jmemsys.h
	${JPEG_ROOT}/jmorecfg.h
	${JPEG_ROOT}/jpegint.h
	${JPEG_ROOT}/jpeglib.h
	${JPEG_ROOT}/jversion.h
	${JPEG_ROOT}/transupp.h
)

set(JPEG_SRC
	${JPEG_ROOT}/jaricom.c
	${JPEG_ROOT}/jcapimin.c
	${JPEG_ROOT}/jcapistd.c
	${JPEG_ROOT}/jcarith.c
	${JPEG_ROOT}/jccoefct.c
	${JPEG_ROOT}/jccolor.c
	${JPEG_ROOT}/jcdctmgr.c
	${JPEG_ROOT}/jchuff.c
	${JPEG_ROOT}/jcinit.c
	${JPEG_ROOT}/jcmainct.c
	${JPEG_ROOT}/jcmarker.c
	${JPEG_ROOT}/jcmaster.c
	${JPEG_ROOT}/jcomapi.c
	${JPEG_ROOT}/jcparam.c
	${JPEG_ROOT}/jcprepct.c
	${JPEG_ROOT}/jcsample.c
	${JPEG_ROOT}/jctrans.c
	${JPEG_ROOT}/jdarith.c
	${JPEG_ROOT}/jdapimin.c
	${JPEG_ROOT}/jdapistd.c
	${JPEG_ROOT}/jdatadst.c
	${JPEG_ROOT}/jdatasrc.c
	${JPEG_ROOT}/jdcoefct.c
	${JPEG_ROOT}/jdcolor.c
	${JPEG_ROOT}/jddctmgr.c
	${JPEG_ROOT}/jdhuff.c
	${JPEG_ROOT}/jdinput.c
	${JPEG_ROOT}/jdmainct.c
	${JPEG_ROOT}/jdmarker.c
	${JPEG_ROOT}/jdmaster.c
	${JPEG_ROOT}/jdmerge.c
	${JPEG_ROOT}/jdpostct.c
	${JPEG_ROOT}/jdsample.c
	${JPEG_ROOT}/jdtrans.c
	${JPEG_ROOT}/jerror.c
	${JPEG_ROOT}/jfdctflt.c
	${JPEG_ROOT}/jfdctfst.c
	${JPEG_ROOT}/jfdctint.c
	${JPEG_ROOT}/jidctflt.c
	${JPEG_ROOT}/jidctfst.c
	${JPEG_ROOT}/jidctint.c
	${JPEG_ROOT}/jmemmgr.c
	${JPEG_ROOT}/jmemnobs.c
	${JPEG_ROOT}/jquant1.c
	${JPEG_ROOT}/jquant2.c
	${JPEG_ROOT}/jutils.c
)

add_library(libjpeg
	${JPEG_HDR}
	${JPEG_SRC}
)

install(TARGETS libjpeg
	RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin
	LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/bin
	ARCHIVE DESTINATION ${CMAKE_SOURCE_DIR}/lib
)
