/* file      : libca-certificates-curl/ca-certificates-installed.c -*- C -*-
 * license   : Mozilla Public License 2.0; see accompanying LICENSE file
 */

#include <libca-certificates-curl/path.h>

#ifdef CA_CERTIFICATES_BUNDLE_PATH

const char*
ca_certificates_file ()
{
  return CA_CERTIFICATES_BUNDLE_PATH;
}

#endif
