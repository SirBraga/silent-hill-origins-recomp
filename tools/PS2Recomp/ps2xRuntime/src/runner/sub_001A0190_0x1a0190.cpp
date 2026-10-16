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

// Function: sub_001A0190
// Address: 0x1a0190 - 0x1a0208
void sub_001A0190_0x1a0190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0190_0x1a0190");
#endif

    switch (ctx->pc) {
        case 0x1a01b8u: goto label_1a01b8;
        case 0x1a01c8u: goto label_1a01c8;
        default: break;
    }

    ctx->pc = 0x1a0190u;

    // 0x1a0190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0194: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a0194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a0198: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a0198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a019c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1a019cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a01a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a01a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a01a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a01a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a01a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a01ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a01acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a01b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a01b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a01b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a01b8:
    // 0x1a01b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a01bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01c0: 0xc0c5cd6  jal         func_317358
    ctx->pc = 0x1A01C0u;
    SET_GPR_U32(ctx, 31, 0x1A01C8u);
    ctx->pc = 0x1A01C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01C0u;
    // 0x1a01c4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317358u, 0x1A01C0u, 0x1A01C8u)) {
        return;
    }
    ctx->pc = 0x1A01C8u;
label_1a01c8:
    // 0x1a01c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A01C8u;
    {
        const bool branch_taken_0x1a01c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01C8u;
        // 0x1a01cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01c8) {
            ctx->pc = 0x1A01D8u;
            goto label_1a01d8;
        }
    }
    ctx->pc = 0x1A01D0u;
    // 0x1a01d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A01D0u;
    {
        const bool branch_taken_0x1a01d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01D0u;
        // 0x1a01d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01d0) {
            ctx->pc = 0x1A01ECu;
            goto label_1a01ec;
        }
    }
    ctx->pc = 0x1A01D8u;
label_1a01d8:
    // 0x1a01d8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1a01d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a01dc: 0x2e420040  sltiu       $v0, $s2, 0x40
    ctx->pc = 0x1a01dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a01e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A01E0u;
    {
        const bool branch_taken_0x1a01e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A01E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01E0u;
        // 0x1a01e4: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01e0) {
            ctx->pc = 0x1A01B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a01b8;
        }
    }
    ctx->pc = 0x1A01E8u;
    // 0x1a01e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a01e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a01ec:
    // 0x1a01ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a01ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a01f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a01f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a01f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a01f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a01f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a01f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a01fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a01fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0200: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0200u;
        // 0x1a0204: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0208u;
}
