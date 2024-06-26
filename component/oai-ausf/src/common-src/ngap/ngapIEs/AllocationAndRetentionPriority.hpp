/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#ifndef _ALLOCATION_AND_RETENTION_PRIORITY_H_
#define _ALLOCATION_AND_RETENTION_PRIORITY_H_

#include "Pre-emptionCapability.hpp"
#include "Pre-emptionVulnerability.hpp"
#include "PriorityLevelARP.hpp"

extern "C" {
#include "Ngap_AllocationAndRetentionPriority.h"
}

namespace oai::ngap {

class AllocationAndRetentionPriority {
 public:
  AllocationAndRetentionPriority();
  virtual ~AllocationAndRetentionPriority();

  void set(
      const PriorityLevelARP& priorityLevelArp,
      const Pre_emptionCapability& pre_emptionCapability,
      const Pre_emptionVulnerability& pre_emptionVulnerability);
  bool get(
      PriorityLevelARP& priorityLevelArp,
      Pre_emptionCapability& pre_emptionCapability,
      Pre_emptionVulnerability& pre_emptionVulnerability) const;

  bool encode(Ngap_AllocationAndRetentionPriority_t&) const;
  bool decode(const Ngap_AllocationAndRetentionPriority_t&);

 private:
  PriorityLevelARP m_PriorityLevelArp;                  // Mandatory
  Pre_emptionCapability m_Pre_emptionCapability;        // Mandatory
  Pre_emptionVulnerability m_Pre_emptionVulnerability;  // Mandatory
};
}  // namespace oai::ngap

#endif
