#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021AAF8
// Address: 0x21aaf8 - 0x21ab30
void sub_0021AAF8_0x21aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AAF8_0x21aaf8");
#endif

    ctx->pc = 0x21aaf8u;

    // 0x21aaf8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x21aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21aafc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x21aafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ab00: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x21ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21ab04: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x21ab04u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x21ab08: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x21ab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab0c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x21ab0cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x21ab10: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x21ab10u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x21ab14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x21ab14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21ab18: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x21ab18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x21ab1c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x21ab1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x21ab20: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x21ab20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x21ab24: 0x3e00008  jr          $ra
    ctx->pc = 0x21AB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB24u;
        // 0x21ab28: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AB2Cu;
    // 0x21ab2c: 0x0  nop
    ctx->pc = 0x21ab2cu;
    // NOP
    ctx->pc = 0x21ab30u;
}
