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
#include <aws/cloudfront/model/CachedMethods.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CachedMethods::CachedMethods() : 
    m_quantity(0)
{
}

CachedMethods::CachedMethods(const XmlNode& xmlNode) : 
    m_quantity(0)
{
  *this = xmlNode;
}

CachedMethods& CachedMethods::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode quantityNode = resultNode.FirstChild("Quantity");
    m_quantity = StringUtils::ConvertToInt32(StringUtils::Trim(quantityNode.GetText().c_str()).c_str());
    XmlNode methodNode = resultNode.FirstChild("Method");
    while(!methodNode.IsNull())
    {
      m_items.push_back(MethodMapper::GetMethodForName(StringUtils::Trim(methodNode.GetText().c_str())));
      methodNode = methodNode.NextNode("Method");
    }

  }

  return *this;
}

void CachedMethods::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  XmlNode quantityNode = parentNode.CreateChildElement("Quantity");
  ss << m_quantity;
  quantityNode.SetText(ss.str());
  ss.str("");
  for(const auto& item : m_items)
  {
    XmlNode itemsNode = parentNode.CreateChildElement("Method");
    itemsNode.SetText(MethodMapper::GetNameForMethod(item));
  }
}