/* file      : libca-certificates-curl/path.h -*- C -*-
 * copyright : Copyright (c) 2018-2019 Code Synthesis Ltd
 * license   : Mozilla Public License 2.0; see accompanying LICENSE file
 */

#pragma once

#include <libca-certificates-curl/export.h>

#ifdef  __cplusplus
extern "C" {
#endif

/* Return the CA certificate bundle filesystem path.
 */
LIBCA_CERTIFICATES_CURL_SYMEXPORT const char*
ca_certificates_file ();

#ifdef  __cplusplus
}
#endif
