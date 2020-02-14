/* file      : libca-certificates-curl/export.h -*- C -*-
 * license   : Mozilla Public License 2.0; see accompanying LICENSE file
 */

#pragma once

#if defined(LIBCA_CERTIFICATES_CURL_STATIC)         // Using static.
#  define LIBCA_CERTIFICATES_CURL_SYMEXPORT
#elif defined(LIBCA_CERTIFICATES_CURL_STATIC_BUILD) // Building static.
#  define LIBCA_CERTIFICATES_CURL_SYMEXPORT
#elif defined(LIBCA_CERTIFICATES_CURL_SHARED)       // Using shared.
#  ifdef _WIN32
#    define LIBCA_CERTIFICATES_CURL_SYMEXPORT __declspec(dllimport)
#  else
#    define LIBCA_CERTIFICATES_CURL_SYMEXPORT
#  endif
#elif defined(LIBCA_CERTIFICATES_CURL_SHARED_BUILD) // Building shared.
#  ifdef _WIN32
#    define LIBCA_CERTIFICATES_CURL_SYMEXPORT __declspec(dllexport)
#  else
#    define LIBCA_CERTIFICATES_CURL_SYMEXPORT
#  endif
#else
// If none of the above macros are defined, then we assume we are being used
// by some third-party build system that cannot/doesn't signal the library
// type. Note that this fallback works for both static and shared but in case
// of shared will be sub-optimal compared to having dllimport.
//
#  define LIBCA_CERTIFICATES_CURL_SYMEXPORT         // Using static or shared.
#endif
