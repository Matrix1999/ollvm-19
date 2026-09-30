#include "kagura/Options.h"
using namespace llvm;
namespace kagura { namespace opt {
#define KAGURA_FN_PASS(Flag, Cli, Desc, Ctor) cl::opt<bool> Flag(Cli, cl::desc("[Kagura] " Desc), cl::init(false));
#define KAGURA_TUNING(Flag, Cli, Type, Default, Desc) cl::opt<Type> Flag(Cli, cl::desc("[Kagura] " Desc), cl::init(Default));
#include "kagura/PassRegistry.def"
cl::opt<std::string> ProtectList("kagura-protect", cl::init(""));
cl::opt<std::string> DenyList("kagura-deny", cl::init(""));
cl::opt<std::string> AllowList("kagura-allow", cl::init(""));
cl::opt<std::string> BuildID("kagura-build-id", cl::init(""));
}}
