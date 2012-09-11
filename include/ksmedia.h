/**
 * @file ksmedia.h
 * @copy 2012 MinGW.org project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
#ifndef _KSMEDIA_H
#define _KSMEDIA_H
#pragma GCC system_header
#include <_mingw.h>

#ifdef __cplusplus
extern "C" {
#endif

/*--- DirectShow Reference - DirectShow Enumerated Types - CameraControlFlags Enumeration */
#define KSPROPERTY_CAMERACONTROL_FLAGS_AUTO 0x0001L
#define KSPROPERTY_CAMERACONTROL_FLAGS_MANUAL 0x0002L
#define KSPROPERTY_CAMERACONTROL_FLAGS_ABSOLUTE 0x0000L
#define KSPROPERTY_CAMERACONTROL_FLAGS_RELATIVE 0x0010L
/*--- DirectShow Reference - DirectShow Enumerated Types - VideoProcAmpFlags Enumeration */
#define KSPROPERTY_VIDEOPROCAMP_FLAGS_AUTO 0X0001L
#define KSPROPERTY_VIDEOPROCAMP_FLAGS_MANUAL 0X0002L

#ifdef __cplusplus
}
#endif
#endif
