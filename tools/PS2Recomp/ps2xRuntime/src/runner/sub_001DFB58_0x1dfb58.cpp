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

// Function: sub_001DFB58
// Address: 0x1dfb58 - 0x1dfbb8
void sub_001DFB58_0x1dfb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFB58_0x1dfb58");
#endif

    switch (ctx->pc) {
        case 0x1dfb7cu: goto label_1dfb7c;
        default: break;
    }

    ctx->pc = 0x1dfb58u;

    // 0x1dfb58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dfb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dfb5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dfb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dfb60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dfb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dfb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dfb68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb6c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1dfb6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dfb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dfb74: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1DFB74u;
    SET_GPR_U32(ctx, 31, 0x1DFB7Cu);
    ctx->pc = 0x1DFB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB74u;
    // 0x1dfb78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1DFB74u, 0x1DFB7Cu)) {
        return;
    }
    ctx->pc = 0x1DFB7Cu;
label_1dfb7c:
    // 0x1dfb7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DFB7Cu;
    {
        const bool branch_taken_0x1dfb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB7Cu;
        // 0x1dfb80: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb7c) {
            ctx->pc = 0x1DFB9Cu;
            goto label_1dfb9c;
        }
    }
    ctx->pc = 0x1DFB84u;
    // 0x1dfb84: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1dfb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfb88: 0x8c43e6d0  lw          $v1, -0x1930($v0)
    ctx->pc = 0x1dfb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960848)));
    // 0x1dfb8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dfb8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb90: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1dfb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dfb94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFB94u;
    {
        const bool branch_taken_0x1dfb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB94u;
        // 0x1dfb98: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb94) {
            ctx->pc = 0x1DFBA0u;
            goto label_1dfba0;
        }
    }
    ctx->pc = 0x1DFB9Cu;
label_1dfb9c:
    // 0x1dfb9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dfb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfba0:
    // 0x1dfba0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dfba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfba4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dfba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dfba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfbac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBACu;
        // 0x1dfbb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFBB4u;
    // 0x1dfbb4: 0x0  nop
    ctx->pc = 0x1dfbb4u;
    // NOP
    ctx->pc = 0x1dfbb8u;
}
