#pragma once
#include "llvm/Support/CommandLine.h"
#include <cstdint>
namespace kagura { namespace opt {
extern llvm::cl::opt<bool> MVO;
extern llvm::cl::opt<bool> PE;
extern llvm::cl::opt<bool> VM;
extern llvm::cl::opt<uint64_t> Seed;
extern llvm::cl::opt<std::string> ProtectList, DenyList, AllowList, BuildID;
}}
