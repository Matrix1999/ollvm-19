#pragma once
#include "llvm/IR/PassManager.h"
namespace kagura {
struct MemoryValueObfuscationPass : llvm::PassInfoMixin<MemoryValueObfuscationPass> { llvm::PreservedAnalyses run(llvm::Function &, llvm::FunctionAnalysisManager &); static bool isRequired(){return false;} };
struct PointerEncryptionPass : llvm::PassInfoMixin<PointerEncryptionPass> { llvm::PreservedAnalyses run(llvm::Function &, llvm::FunctionAnalysisManager &); static bool isRequired(){return false;} };
}
