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

// Function: sub_001AEF80
// Address: 0x1aef80 - 0x1aefe0
void sub_001AEF80_0x1aef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEF80_0x1aef80");
#endif

    switch (ctx->pc) {
        case 0x1aefb0u: goto label_1aefb0;
        default: break;
    }

    ctx->pc = 0x1aef80u;

    // 0x1aef80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aef84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aef84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1aef88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aef8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aef8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aef94: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1aef94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aef98: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x1aef98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x1aef9c: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x1aef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1aefa0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1AEFA0u;
    {
        const bool branch_taken_0x1aefa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aefa0) {
            ctx->pc = 0x1AEFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEFA0u;
            // 0x1aefa4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEFD0u;
            goto label_1aefd0;
        }
    }
    ctx->pc = 0x1AEFA8u;
    // 0x1aefa8: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1AEFA8u;
    SET_GPR_U32(ctx, 31, 0x1AEFB0u);
    ctx->pc = 0x1AEFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEFA8u;
    // 0x1aefac: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1AEFA8u, 0x1AEFB0u)) {
        return;
    }
    ctx->pc = 0x1AEFB0u;
label_1aefb0:
    // 0x1aefb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1aefb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aefb4: 0x0  nop
    ctx->pc = 0x1aefb4u;
    // NOP
    // 0x1aefb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aefb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aefbc: 0x0  nop
    ctx->pc = 0x1aefbcu;
    // NOP
    // 0x1aefc0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1AEFC0u;
    {
        const bool branch_taken_0x1aefc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aefc0) {
            ctx->pc = 0x1AEFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEFC0u;
            // 0x1aefc4: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEFCCu;
            goto label_1aefcc;
        }
    }
    ctx->pc = 0x1AEFC8u;
    // 0x1aefc8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1aefc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1aefcc:
    // 0x1aefcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1aefccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aefd0:
    // 0x1aefd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aefd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aefd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aefd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aefd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFD8u;
        // 0x1aefdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEFE0u;
}
