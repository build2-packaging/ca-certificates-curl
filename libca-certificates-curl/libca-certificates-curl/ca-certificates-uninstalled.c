/* file      : libca-certificates-curl/ca-certificates-uninstalled.c -*- C -*-
 * copyright : Copyright (c) 2018-2019 Code Synthesis Ltd
 * license   : Mozilla Public License 2.0; see accompanying LICENSE file
 */

#include <libca-certificates-curl/path.h>

const char*
ca_certificates_file ()
{
  return CA_CERTIFICATES_BUNDLE_PATH;
}
