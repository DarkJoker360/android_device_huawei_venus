/*
 * Meticulus hi6250 libsensors
 * Copyright (C) 2017 Jonathan Dennis [Meticulus]
 *                               theonejohnnyd@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#define LOG_TAG "coh_libshim"

#include <libexif/exif-entry.h>
#include <log/log.h>

static int null_shim_called(const char func[] ) {
	/*
	 * Meticulus: null shims, at least that is
	 * what I call them, are shims that do not
	 * do anything. The idea is that these missing
	 * symbols are not used but must be present
	 * for a "shimmed" lib to load. But null shims
	 * are not always enough. Sometimes the the symbol
	 * must preform the function that the caller requires.
	 * The following notice will help identify which
	 * symbols must be "un nulled".
	 */
	ALOGE("warning: attempt to call null shim: %s", func);
	return 0;
}

extern "C" {

/* libaudio_route */
extern int pop_seq_init(){return null_shim_called(__func__);};
extern int pop_seq_set(){return null_shim_called(__func__);};
extern int force_flush_set() {return null_shim_called(__func__);};

/* libexif */
extern void exif_entry_gps_initialize(ExifEntry * e, ExifTag tag)
{
    exif_entry_initialize(e,tag);
}

/* fingerprint.hi6250.so */
extern int __android_logPower_print() {return null_shim_called(__func__);};

//extern android::uirenderer::Extensions* _ZN7android10uirenderer10ExtensionsC1Ev() {
//    return new android::uirenderer::Extensions();
extern int _ZN7android10uirenderer10ExtensionsC1Ev() {
    return null_shim_called(__func__);
}

//extern android::uirenderer::ProgramCache* _ZN7android10uirenderer12ProgramCacheD1Ev(android::uirenderer::Extensions* exts) {
//    return new android::uirenderer::ProgramCache(* exts);
extern int _ZN7android10uirenderer12ProgramCacheD1Ev() {
    return null_shim_called(__func__);
}

extern int _ZN7android10uirenderer12ProgramCacheC1ERNS0_10ExtensionsE() {return null_shim_called(__func__);};

//extern int _ZN7android10uirenderer12ProgramCache14generateShaderERKNS0_18ProgramDescriptionERNS_7String8ES6_(const android::uirenderer::ProgramDescription& description, android::String8& shader) {
extern int _ZN7android10uirenderer12ProgramCache14generateShaderERKNS0_18ProgramDescriptionERNS_7String8ES6_() {
    return null_shim_called(__func__);
}

extern int _ZN7android5Fence5mergeEPKcRKNS_2spIS0_EES6_() {
    return null_shim_called(__func__);
}

extern int _ZN7android13GraphicBufferC1EjjijmNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() {
    return null_shim_called(__func__);
}

extern int _ZN7android13GraphicBufferC1EjjijNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() {
    return null_shim_called(__func__);
}

extern int _ZN7android13GraphicBuffer9lockAsyncEmmRKNS_4RectEPPvi() {
    return null_shim_called(__func__);
}

extern int _Z35eglQueryStringImplementationANDROIDPvi() {
    return null_shim_called(__func__);
}

extern int _ZNK7android7Surface23getLastDequeueStartTimeEv() {
    return null_shim_called(__func__);
}

extern int _ZN7android20DisplayEventReceiverC1ENS_16ISurfaceComposer11VsyncSourceE() {
    return null_shim_called(__func__);
}

extern int _ZN7android11BufferQueue17createBufferQueueEPNS_2spINS_22IGraphicBufferProducerEEEPNS1_INS_22IGraphicBufferConsumerEEEb() {
    return null_shim_called(__func__);
}

extern int _ZNK7android10GLConsumer16getCurrentBufferEPi() {
    return null_shim_called(__func__);
}

extern int _ZN7android10ColorSpaceC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_7details6TMat33IfEENS0_18TransferParametersENS1_8functionIFffEEE() {
    return null_shim_called(__func__);
}

extern int _ZN7android10ColorSpace4sRGBEv() {
    return null_shim_called(__func__);
}

extern int _ZN7android19ColorSpaceConnectorC1ERKNS_10ColorSpaceES3_() {
    return null_shim_called(__func__);
}

extern int _ZTTN7android8hardware8graphics11bufferqueue4V1_05utils24H2BGraphicBufferProducerE() {
    return null_shim_called(__func__);
}

extern int _ZTVN7android8hardware8graphics11bufferqueue4V1_05utils24H2BGraphicBufferProducerE() {
    return null_shim_called(__func__);
}

}
