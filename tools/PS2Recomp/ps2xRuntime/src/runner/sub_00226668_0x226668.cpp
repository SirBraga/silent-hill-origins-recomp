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

// Function: sub_00226668
// Address: 0x226668 - 0x2266f0
void sub_00226668_0x226668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226668_0x226668");
#endif

    switch (ctx->pc) {
        case 0x2266a0u: goto label_2266a0;
        case 0x2266d0u: goto label_2266d0;
        case 0x2266d8u: goto label_2266d8;
        default: break;
    }

    ctx->pc = 0x226668u;

    // 0x226668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22666c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22666cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226678: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x226678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22667c: 0x8c830098  lw          $v1, 0x98($a0)
    ctx->pc = 0x22667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x226680: 0x54700004  bnel        $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226680u;
    {
        const bool branch_taken_0x226680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x226680) {
            ctx->pc = 0x226684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226680u;
            // 0x226684: 0x8c62009c  lw          $v0, 0x9C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226694u;
            goto label_226694;
        }
    }
    ctx->pc = 0x226688u;
    // 0x226688: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x226688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x22668c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22668Cu;
    {
        const bool branch_taken_0x22668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22668Cu;
        // 0x226690: 0xac820098  sw          $v0, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22668c) {
            ctx->pc = 0x2266BCu;
            goto label_2266bc;
        }
    }
    ctx->pc = 0x226694u;
label_226694:
    // 0x226694: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x226694u;
    {
        const bool branch_taken_0x226694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x226698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226694u;
        // 0x226698: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226694) {
            ctx->pc = 0x2266B8u;
            goto label_2266b8;
        }
    }
    ctx->pc = 0x22669Cu;
    // 0x22669c: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x22669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_2266a0:
    // 0x2266a0: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x2266a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x2266a4: 0x0  nop
    ctx->pc = 0x2266a4u;
    // NOP
    // 0x2266a8: 0x0  nop
    ctx->pc = 0x2266a8u;
    // NOP
    // 0x2266ac: 0x0  nop
    ctx->pc = 0x2266acu;
    // NOP
    // 0x2266b0: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2266B0u;
    {
        const bool branch_taken_0x2266b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2266b0) {
            ctx->pc = 0x2266B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2266B0u;
            // 0x2266b4: 0x8c63009c  lw          $v1, 0x9C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2266A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2266a0;
        }
    }
    ctx->pc = 0x2266B8u;
label_2266b8:
    // 0x2266b8: 0xac64009c  sw          $a0, 0x9C($v1)
    ctx->pc = 0x2266b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 4));
label_2266bc:
    // 0x2266bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2266bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2266c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2266c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2266c4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2266c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2266c8: 0xc0897bc  jal         func_225EF0
    ctx->pc = 0x2266C8u;
    SET_GPR_U32(ctx, 31, 0x2266D0u);
    ctx->pc = 0x2266CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2266C8u;
    // 0x2266cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225EF0u, 0x2266C8u, 0x2266D0u)) {
        return;
    }
    ctx->pc = 0x2266D0u;
label_2266d0:
    // 0x2266d0: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x2266D0u;
    SET_GPR_U32(ctx, 31, 0x2266D8u);
    ctx->pc = 0x2266D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2266D0u;
    // 0x2266d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x2266D0u, 0x2266D8u)) {
        return;
    }
    ctx->pc = 0x2266D8u;
label_2266d8:
    // 0x2266d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2266d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2266dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2266dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2266e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2266e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2266e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2266E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2266E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266E4u;
        // 0x2266e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2266E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2266ECu;
    // 0x2266ec: 0x0  nop
    ctx->pc = 0x2266ecu;
    // NOP
    ctx->pc = 0x2266f0u;
}
