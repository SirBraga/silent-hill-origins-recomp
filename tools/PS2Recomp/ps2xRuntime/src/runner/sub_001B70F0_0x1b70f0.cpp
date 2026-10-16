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

// Function: sub_001B70F0
// Address: 0x1b70f0 - 0x1b7160
void sub_001B70F0_0x1b70f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B70F0_0x1b70f0");
#endif

    ctx->pc = 0x1b70f0u;

    // 0x1b70f0: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B70F0u;
    {
        const bool branch_taken_0x1b70f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B70F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70F0u;
        // 0x1b70f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b70f0) {
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B70F8u;
    // 0x1b70f8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1b70f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b70fc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1b70fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7100: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1b7100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7104: 0x0  nop
    ctx->pc = 0x1b7104u;
    // NOP
    // 0x1b7108: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1B7108u;
    {
        const bool branch_taken_0x1b7108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7108) {
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B7110u;
    // 0x1b7110: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1b7110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7114: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b7114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b7118: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b7118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b711c: 0x0  nop
    ctx->pc = 0x1b711cu;
    // NOP
    // 0x1b7120: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1B7120u;
    {
        const bool branch_taken_0x1b7120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7120) {
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B7128u;
    // 0x1b7128: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1b7128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b712c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1b712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7130: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1b7130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7134: 0x0  nop
    ctx->pc = 0x1b7134u;
    // NOP
    // 0x1b7138: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7138u;
    {
        const bool branch_taken_0x1b7138 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7138) {
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B7140u;
    // 0x1b7140: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1b7140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7144: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b7144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b7148: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b7148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b714c: 0x0  nop
    ctx->pc = 0x1b714cu;
    // NOP
    // 0x1b7150: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B7150u;
    {
        const bool branch_taken_0x1b7150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7150) {
            ctx->pc = 0x1B7154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7150u;
            // 0x1b7154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B7158u;
label_1b7158:
    // 0x1b7158: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7160u;
}
