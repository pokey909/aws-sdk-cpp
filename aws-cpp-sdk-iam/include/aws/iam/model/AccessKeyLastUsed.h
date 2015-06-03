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
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /*
    <p>Contains information about the last time an AWS access key was used.</p> <p>This data type is used as a response element in the <a>GetAccessKeyLastUsed</a> action.</p>
  */
  class AWS_IAM_API AccessKeyLastUsed
  {
  public:
    AccessKeyLastUsed();
    AccessKeyLastUsed(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccessKeyLastUsed& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601 date-time format</a>, when the access key was most recently used.</p>
    */
    inline double GetLastUsedDate() const{ return m_lastUsedDate; }
    /*
     <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601 date-time format</a>, when the access key was most recently used.</p>
    */
    inline void SetLastUsedDate(double value) { m_lastUsedDate = value; }

    /*
     <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601 date-time format</a>, when the access key was most recently used.</p>
    */
    inline AccessKeyLastUsed&  WithLastUsedDate(double value) { SetLastUsedDate(value); return *this;}

    /*
     <p>The name of the AWS service with which this access key was most recently used.</p>
    */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    /*
     <p>The name of the AWS service with which this access key was most recently used.</p>
    */
    inline void SetServiceName(const Aws::String& value) { m_serviceName = value; }

    /*
     <p>The name of the AWS service with which this access key was most recently used.</p>
    */
    inline void SetServiceName(const char* value) { m_serviceName.assign(value); }

    /*
     <p>The name of the AWS service with which this access key was most recently used.</p>
    */
    inline AccessKeyLastUsed&  WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /*
     <p>The name of the AWS service with which this access key was most recently used.</p>
    */
    inline AccessKeyLastUsed& WithServiceName(const char* value) { SetServiceName(value); return *this;}

    /*
     <p>The AWS region where this access key was most recently used.</p> <p>For more information about AWS regions, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a> in the Amazon Web Services General Reference.</p>
    */
    inline const Aws::String& GetRegion() const{ return m_region; }
    /*
     <p>The AWS region where this access key was most recently used.</p> <p>For more information about AWS regions, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a> in the Amazon Web Services General Reference.</p>
    */
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    /*
     <p>The AWS region where this access key was most recently used.</p> <p>For more information about AWS regions, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a> in the Amazon Web Services General Reference.</p>
    */
    inline void SetRegion(const char* value) { m_region.assign(value); }

    /*
     <p>The AWS region where this access key was most recently used.</p> <p>For more information about AWS regions, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a> in the Amazon Web Services General Reference.</p>
    */
    inline AccessKeyLastUsed&  WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /*
     <p>The AWS region where this access key was most recently used.</p> <p>For more information about AWS regions, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a> in the Amazon Web Services General Reference.</p>
    */
    inline AccessKeyLastUsed& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:
    double m_lastUsedDate;
    Aws::String m_serviceName;
    Aws::String m_region;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws