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

// Function: sub_002F2B68
// Address: 0x2f2b68 - 0x2f2bc0
void sub_002F2B68_0x2f2b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2B68_0x2f2b68");
#endif

    switch (ctx->pc) {
        case 0x2f2bb4u: goto label_2f2bb4;
        default: break;
    }

    ctx->pc = 0x2f2b68u;

    // 0x2f2b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f2b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f2b6c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2f2b6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f2b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f2b74: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2f2b74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2b78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f2b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b7c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2f2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2f2b80: 0x94660028  lhu         $a2, 0x28($v1)
    ctx->pc = 0x2f2b80u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2f2b84: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x2f2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x2f2b88: 0x9467002c  lhu         $a3, 0x2C($v1)
    ctx->pc = 0x2f2b88u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2f2b8c: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x2f2b8cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f2b90: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2f2b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b94: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x2f2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x2f2b98: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x2f2b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x2f2b9c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2B9Cu;
    {
        const bool branch_taken_0x2f2b9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b9c) {
            ctx->pc = 0x2F2BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2B9Cu;
            // 0x2f2ba0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2BA4u;
            goto label_2f2ba4;
        }
    }
    ctx->pc = 0x2F2BA4u;
label_2f2ba4:
    // 0x2f2ba4: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x2f2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x2f2ba8: 0x1012  mflo        $v0
    ctx->pc = 0x2f2ba8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f2bac: 0xc0bdc92  jal         func_2F7248
    ctx->pc = 0x2F2BACu;
    SET_GPR_U32(ctx, 31, 0x2F2BB4u);
    ctx->pc = 0x2F2BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BACu;
    // 0x2f2bb0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7248u, 0x2F2BACu, 0x2F2BB4u)) {
        return;
    }
    ctx->pc = 0x2F2BB4u;
label_2f2bb4:
    // 0x2f2bb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f2bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BB8u;
        // 0x2f2bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2BC0u;
}
