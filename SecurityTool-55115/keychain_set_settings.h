/*
 * Copyright (c) 2003-2004 Apple Computer, Inc. All Rights Reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 *
 * keychain_set_settings.h
 */

#ifndef _KEYCHAIN_SET_SETTINGS_H_
#define _KEYCHAIN_SET_SETTINGS_H_  1

#ifdef __cplusplus
extern "C" {
#endif

extern int keychain_set_settings(int argc, char * const *argv);
extern int keychain_set_password(int argc, char * const *argv);

#ifdef __cplusplus
}
#endif

#endif /* _KEYCHAIN_SET_SETTINGS_H_ */
