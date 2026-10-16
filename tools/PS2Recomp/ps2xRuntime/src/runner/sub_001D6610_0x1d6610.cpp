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

// Function: sub_001D6610
// Address: 0x1d6610 - 0x1d66f8
void sub_001D6610_0x1d6610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6610_0x1d6610");
#endif

    switch (ctx->pc) {
        case 0x1d6650u: goto label_1d6650;
        case 0x1d6668u: goto label_1d6668;
        case 0x1d6674u: goto label_1d6674;
        case 0x1d66b8u: goto label_1d66b8;
        default: break;
    }

    ctx->pc = 0x1d6610u;

    // 0x1d6610: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d6610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d6614: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1d6614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1d6618: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1d6618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1d661c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d661cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6620: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1d6620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1d6624: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d6624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6628: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d6628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d662c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d662cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6630: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1d6630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1d6634: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d6634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6638: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d6638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d663c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d663cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6644: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1d6644u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1d6648: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x1d6648u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x1d664c: 0x0  nop
    ctx->pc = 0x1d664cu;
    // NOP
label_1d6650:
    // 0x1d6650: 0x8e42883c  lw          $v0, -0x77C4($s2)
    ctx->pc = 0x1d6650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936636)));
    // 0x1d6654: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d6654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6658: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D6658u;
    {
        const bool branch_taken_0x1d6658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6658) {
            ctx->pc = 0x1D6694u;
            goto label_1d6694;
        }
    }
    ctx->pc = 0x1D6660u;
    // 0x1d6660: 0xc0759be  jal         func_1D66F8
    ctx->pc = 0x1D6660u;
    SET_GPR_U32(ctx, 31, 0x1D6668u);
    ctx->pc = 0x1D6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6660u;
    // 0x1d6664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D66F8u, 0x1D6660u, 0x1D6668u)) {
        return;
    }
    ctx->pc = 0x1D6668u;
label_1d6668:
    // 0x1d6668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d6668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d666c: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1D666Cu;
    SET_GPR_U32(ctx, 31, 0x1D6674u);
    ctx->pc = 0x1D6670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D666Cu;
    // 0x1d6670: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1D666Cu, 0x1D6674u)) {
        return;
    }
    ctx->pc = 0x1D6674u;
label_1d6674:
    // 0x1d6674: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D6674u;
    {
        const bool branch_taken_0x1d6674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6674) {
            ctx->pc = 0x1D6678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6674u;
            // 0x1d6678: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6650;
        }
    }
    ctx->pc = 0x1D667Cu;
    // 0x1d667c: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x1d667cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d6680: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d6680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d6684: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x1d6684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d6688: 0x8c828838  lw          $v0, -0x77C8($a0)
    ctx->pc = 0x1d6688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936632)));
    // 0x1d668c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1d668cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6690: 0x2634000c  addiu       $s4, $s1, 0xC
    ctx->pc = 0x1d6690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1d6694:
    // 0x1d6694: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D6694u;
    {
        const bool branch_taken_0x1d6694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6694u;
        // 0x1d6698: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6694) {
            ctx->pc = 0x1D66D0u;
            goto label_1d66d0;
        }
    }
    ctx->pc = 0x1D669Cu;
    // 0x1d669c: 0x3c02dead  lui         $v0, 0xDEAD
    ctx->pc = 0x1d669cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57005 << 16));
    // 0x1d66a0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d66a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d66a4: 0x3442f00d  ori         $v0, $v0, 0xF00D
    ctx->pc = 0x1d66a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61453);
    // 0x1d66a8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D66A8u;
    {
        const bool branch_taken_0x1d66a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66A8u;
        // 0x1d66ac: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66a8) {
            ctx->pc = 0x1D66CCu;
            goto label_1d66cc;
        }
    }
    ctx->pc = 0x1D66B0u;
    // 0x1d66b0: 0xc074ce0  jal         func_1D3380
    ctx->pc = 0x1D66B0u;
    SET_GPR_U32(ctx, 31, 0x1D66B8u);
    ctx->pc = 0x1D66B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66B0u;
    // 0x1d66b4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3380u, 0x1D66B0u, 0x1D66B8u)) {
        return;
    }
    ctx->pc = 0x1D66B8u;
label_1d66b8:
    // 0x1d66b8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d66b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d66bc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D66BCu;
    {
        const bool branch_taken_0x1d66bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D66C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66BCu;
        // 0x1d66c0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66bc) {
            ctx->pc = 0x1D66D0u;
            goto label_1d66d0;
        }
    }
    ctx->pc = 0x1D66C4u;
    // 0x1d66c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d66c8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1d66c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1d66cc:
    // 0x1d66cc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d66ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d66d0:
    // 0x1d66d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1d66d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d66d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1d66d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d66d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d66d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d66dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d66dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d66e0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1d66e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d66e4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1d66e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d66e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d66e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d66ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D66ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66ECu;
        // 0x1d66f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D66ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D66F4u;
    // 0x1d66f4: 0x0  nop
    ctx->pc = 0x1d66f4u;
    // NOP
    ctx->pc = 0x1d66f8u;
}
