#include "TargetInfo/MyRISCVTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

namespace llvm{

    Target &getMyRISCV32Target(){
        static Target getMyRISCV32Target;
        return MyRISCV32Target;
    }
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeMyRISCVTargetInfo(){
    RegisterTarget<Triple::myriscv32> X(getMyRISCV32Target(),"myriscv32","32 bit RISC-v","RISCV");
}