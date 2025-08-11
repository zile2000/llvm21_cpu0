//===-- Cpu0TargetMachine.h - Define TargetMachine for Cpu0 -----*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares the Cpu0 specific subclass of TargetMachine.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_CPU0_CPU0TARGETMACHINE_H
#define LLVM_LIB_TARGET_CPU0_CPU0TARGETMACHINE_H

#include "Cpu0Config.h"
#include "llvm/CodeGen/CodeGenTargetMachineImpl.h"
#include <optional>


namespace llvm {

  class Cpu0TargetMachine : public CodeGenTargetMachineImpl {
      Cpu0TargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                    StringRef FS, const TargetOptions &Options,
                    std::optional<Reloc::Model> RM,
                    std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                    bool JIT, bool isLittle);
  };

  // TargetTransformInfo getTargetTransformInfo(const Function &F) const override;

  // const Cpu0Subtarget *getSubtargetImpl() const {
  //   if (Subtarget)
  //     return Subtarget;
  //   return &DefaultSubtarget;
  // }

  // const Cpu0Subtarget *getSubtargetImpl(const Function &F) const override;
  // void resetSubtarget(MachineFunction *MF);

  // // Pass Pipeline Configuration
  // TargetPassConfig *createPassConfig(PassManagerBase &PM) override;

  // TargetLoweringObjectFile *getObjFileLowering() const override {
  //   return TLOF.get();
  // }

  //  MachineFunctionInfo *
  // createMachineFunctionInfo(BumpPtrAllocator &Allocator, const Function &F,
  //                           const TargetSubtargetInfo *STI) const override;

  // /// Returns true if a cast between SrcAS and DestAS is a noop.
  // bool isNoopAddrSpaceCast(unsigned SrcAS, unsigned DestAS) const override {
  //   // Mips doesn't have any special address spaces so we just reserve
  //   // the first 256 for software use (e.g. OpenCL) and treat casts
  //   // between them as noops.
  //   return SrcAS < 256 && DestAS < 256;
  // }

  // bool isLittleEndian() const { return isLittle; }
  // // const MipsABIInfo &getABI() const { return ABI; }
}


#endif

