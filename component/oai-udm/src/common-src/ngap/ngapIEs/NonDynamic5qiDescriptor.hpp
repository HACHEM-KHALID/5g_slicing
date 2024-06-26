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

#ifndef _NON_DYNAMIC_5QI_DESCRIPTOR_H_
#define _NON_DYNAMIC_5QI_DESCRIPTOR_H_

#include <optional>

#include "AveragingWindow.hpp"
#include "FiveQI.hpp"
#include "MaximumDataBurstVolume.hpp"
#include "PriorityLevelQos.hpp"

extern "C" {
#include "Ngap_NonDynamic5QIDescriptor.h"
}

namespace oai::ngap {

class NonDynamic5qiDescriptor {
 public:
  NonDynamic5qiDescriptor();
  NonDynamic5qiDescriptor(
      const FiveQI& fiveQI,
      const std::optional<PriorityLevelQos>& priorityLevelQos,
      const std::optional<AveragingWindow>& averagingWindow,
      const std::optional<MaximumDataBurstVolume>& maximumDataBurstVolume);
  virtual ~NonDynamic5qiDescriptor();

  void set(
      const FiveQI& fiveQI,
      const std::optional<PriorityLevelQos>& priorityLevelQos,
      const std::optional<AveragingWindow>& averagingWindow,
      const std::optional<MaximumDataBurstVolume>& maximumDataBurstVolume);
  void get(
      FiveQI& fiveQI, std::optional<PriorityLevelQos>& priorityLevelQos,
      std::optional<AveragingWindow>& averagingWindow,
      std::optional<MaximumDataBurstVolume>& maximumDataBurstVolume) const;

  bool encode(Ngap_NonDynamic5QIDescriptor_t&) const;
  bool decode(const Ngap_NonDynamic5QIDescriptor_t&);

 private:
  FiveQI m_FiveQI;                                                 // Mandatory
  std::optional<PriorityLevelQos> m_PriorityLevelQos;              // Optional
  std::optional<AveragingWindow> m_AveragingWindow;                // Optional
  std::optional<MaximumDataBurstVolume> m_MaximumDataBurstVolume;  // Optional
};
}  // namespace oai::ngap

#endif
