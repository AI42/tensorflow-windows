# Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

project(PNG)

set(PNG_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/libpng-1.2.53)

include_directories(AFTER
	${CMAKE_SOURCE_DIR}/3rdparty/zlib
)

set(PNG_SRC
	${PNG_ROOT}/png.c
	${PNG_ROOT}/pngerror.c
	${PNG_ROOT}/pngget.c
	${PNG_ROOT}/pngmem.c
	${PNG_ROOT}/pngpread.c
	${PNG_ROOT}/pngread.c
	${PNG_ROOT}/pngrio.c
	${PNG_ROOT}/pngrtran.c
	${PNG_ROOT}/pngrutil.c
	${PNG_ROOT}/pngset.c
	${PNG_ROOT}/pngtrans.c
	${PNG_ROOT}/pngwio.c
	${PNG_ROOT}/pngwrite.c
	${PNG_ROOT}/pngwtran.c
	${PNG_ROOT}/pngwutil.c
)

add_library(libpng
	${PNG_SRC}
)
