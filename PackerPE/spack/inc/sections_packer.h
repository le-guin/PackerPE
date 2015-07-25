#pragma once

#include "includes.h"
#include "isections_packer.h"

class SectionsPacker: ISectionsPacker
{
public:
  SectionsPacker(std::shared_ptr<PeLib::PeFile>& srcPEFile):
    ISectionsPacker(srcPEFile)
  {}
  virtual SectionsArr ProcessExecutable(const std::vector<uint8_t>& sourceFileBuff, const std::vector<RequiredDataBlock> additionalSizeRequest);
  virtual Expected<ErrorCode> IsReady() const;
};