/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/s3/model/TransitionStorageClass.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int GLACIER_HASH = HashingUtils::HashString("GLACIER");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace TransitionStorageClassMapper
{
TransitionStorageClass GetTransitionStorageClassForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == GLACIER_HASH)
  {
    return TransitionStorageClass::GLACIER;
  }

  return TransitionStorageClass::NOT_SET;
}

Aws::String GetNameForTransitionStorageClass(TransitionStorageClass value)
{
  switch(value)
  {
  case TransitionStorageClass::GLACIER:
    return "GLACIER";
  default:
    return "";
  }
}

} // namespace TransitionStorageClassMapper
} // namespace Model
} // namespace S3
} // namespace Aws
