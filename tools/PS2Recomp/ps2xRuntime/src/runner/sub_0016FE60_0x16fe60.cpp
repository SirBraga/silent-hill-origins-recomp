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

// Function: sub_0016FE60
// Address: 0x16fe60 - 0x16ff28
void sub_0016FE60_0x16fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FE60_0x16fe60");
#endif

    switch (ctx->pc) {
        case 0x16fe7cu: goto label_16fe7c;
        case 0x16fe90u: goto label_16fe90;
        case 0x16fea8u: goto label_16fea8;
        case 0x16fed0u: goto label_16fed0;
        case 0x16fee8u: goto label_16fee8;
        case 0x16ff04u: goto label_16ff04;
        default: break;
    }

    ctx->pc = 0x16fe60u;

    // 0x16fe60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16fe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16fe64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16fe64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16fe68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16fe68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16fe6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16fe6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16fe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16fe74: 0xc05c1a4  jal         func_170690
    ctx->pc = 0x16FE74u;
    SET_GPR_U32(ctx, 31, 0x16FE7Cu);
    ctx->pc = 0x16FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE74u;
    // 0x16fe78: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170690u, 0x16FE74u, 0x16FE7Cu)) {
        return;
    }
    ctx->pc = 0x16FE7Cu;
label_16fe7c:
    // 0x16fe7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16fe80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16fe80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe84: 0x8c46f728  lw          $a2, -0x8D8($v0)
    ctx->pc = 0x16fe84u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF728u));
    // 0x16fe88: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16FE88u;
    SET_GPR_U32(ctx, 31, 0x16FE90u);
    ctx->pc = 0x16FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE88u;
    // 0x16fe8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16FE88u, 0x16FE90u)) {
        return;
    }
    ctx->pc = 0x16FE90u;
label_16fe90:
    // 0x16fe90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fe94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16fe98: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16FE98u;
    {
        const bool branch_taken_0x16fe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE98u;
        // 0x16fe9c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe98) {
            ctx->pc = 0x16FF14u;
            goto label_16ff14;
        }
    }
    ctx->pc = 0x16FEA0u;
    // 0x16fea0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16fea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fea4: 0x0  nop
    ctx->pc = 0x16fea4u;
    // NOP
label_16fea8:
    // 0x16fea8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x16fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16feac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16FEACu;
    {
        const bool branch_taken_0x16feac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16feac) {
            ctx->pc = 0x16FEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FEACu;
            // 0x16feb0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FEC4u;
            goto label_16fec4;
        }
    }
    ctx->pc = 0x16FEB4u;
    // 0x16feb4: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16FEB4u;
    {
        const bool branch_taken_0x16feb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x16FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEB4u;
        // 0x16feb8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16feb4) {
            ctx->pc = 0x16FED8u;
            goto label_16fed8;
        }
    }
    ctx->pc = 0x16FEBCu;
    // 0x16febc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16FEBCu;
    {
        const bool branch_taken_0x16febc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEBCu;
        // 0x16fec0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16febc) {
            ctx->pc = 0x16FEF0u;
            goto label_16fef0;
        }
    }
    ctx->pc = 0x16FEC4u;
label_16fec4:
    // 0x16fec4: 0x26240114  addiu       $a0, $s1, 0x114
    ctx->pc = 0x16fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 276));
    // 0x16fec8: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x16FEC8u;
    SET_GPR_U32(ctx, 31, 0x16FED0u);
    ctx->pc = 0x16FECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FEC8u;
    // 0x16fecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x16FEC8u, 0x16FED0u)) {
        return;
    }
    ctx->pc = 0x16FED0u;
label_16fed0:
    // 0x16fed0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16FED0u;
    {
        const bool branch_taken_0x16fed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FED0u;
        // 0x16fed4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fed0) {
            ctx->pc = 0x16FEECu;
            goto label_16feec;
        }
    }
    ctx->pc = 0x16FED8u;
label_16fed8:
    // 0x16fed8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x16fed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x16fedc: 0x2624011c  addiu       $a0, $s1, 0x11C
    ctx->pc = 0x16fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
    // 0x16fee0: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x16FEE0u;
    SET_GPR_U32(ctx, 31, 0x16FEE8u);
    ctx->pc = 0x16FEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FEE0u;
    // 0x16fee4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x16FEE0u, 0x16FEE8u)) {
        return;
    }
    ctx->pc = 0x16FEE8u;
label_16fee8:
    // 0x16fee8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16feec:
    // 0x16feec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16feecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16fef0:
    // 0x16fef0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fef4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16fef8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16fefc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16FEFCu;
    SET_GPR_U32(ctx, 31, 0x16FF04u);
    ctx->pc = 0x16FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FEFCu;
    // 0x16ff00: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16FEFCu, 0x16FF04u)) {
        return;
    }
    ctx->pc = 0x16FF04u;
label_16ff04:
    // 0x16ff04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ff08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ff0c: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x16FF0Cu;
    {
        const bool branch_taken_0x16ff0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF0Cu;
        // 0x16ff10: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff0c) {
            ctx->pc = 0x16FEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fea8;
        }
    }
    ctx->pc = 0x16FF14u;
label_16ff14:
    // 0x16ff14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16ff14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ff18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16ff18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ff1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ff1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ff20: 0x3e00008  jr          $ra
    ctx->pc = 0x16FF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF20u;
        // 0x16ff24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FF28u;
}
