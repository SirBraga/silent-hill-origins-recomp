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

// Function: sub_0022B648
// Address: 0x22b648 - 0x22b680
void sub_0022B648_0x22b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B648_0x22b648");
#endif

    ctx->pc = 0x22b648u;

    // 0x22b648: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x22b648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b64c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x22b64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b650: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x22b650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x22b654: 0x3421660d  ori         $at, $at, 0x660D
    ctx->pc = 0x22b654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26125);
    // 0x22b658: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x22b658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22b65c: 0x3c013e46  lui         $at, 0x3E46
    ctx->pc = 0x22b65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15942 << 16));
    // 0x22b660: 0x3421de6b  ori         $at, $at, 0xDE6B
    ctx->pc = 0x22b660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56939);
    // 0x22b664: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22b664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22b668: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x22b668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x22b66c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22b66cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x22b670: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x22b670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x22b674: 0x3e00008  jr          $ra
    ctx->pc = 0x22B674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B674u;
        // 0x22b678: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B67Cu;
    // 0x22b67c: 0x0  nop
    ctx->pc = 0x22b67cu;
    // NOP
    ctx->pc = 0x22b680u;
}
