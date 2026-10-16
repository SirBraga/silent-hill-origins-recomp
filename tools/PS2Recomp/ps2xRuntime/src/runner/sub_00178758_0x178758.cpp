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

// Function: sub_00178758
// Address: 0x178758 - 0x178808
void sub_00178758_0x178758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178758_0x178758");
#endif

    switch (ctx->pc) {
        case 0x178788u: goto label_178788;
        case 0x1787c8u: goto label_1787c8;
        case 0x1787f4u: goto label_1787f4;
        default: break;
    }

    ctx->pc = 0x178758u;

    // 0x178758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17875c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17875cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x178760: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x178760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x178764: 0x24426a48  addiu       $v0, $v0, 0x6A48
    ctx->pc = 0x178764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27208));
    // 0x178768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17876c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17876cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178774: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x178774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x178778: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x178778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17877c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x17877Cu;
    {
        const bool branch_taken_0x17877c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17877Cu;
        // 0x178780: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17877c) {
            ctx->pc = 0x1787E0u;
            goto label_1787e0;
        }
    }
    ctx->pc = 0x178784u;
    // 0x178784: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x178784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_178788:
    // 0x178788: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x178788u;
    {
        const bool branch_taken_0x178788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x178788) {
            ctx->pc = 0x17878Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178788u;
            // 0x17878c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1787D8u;
            goto label_1787d8;
        }
    }
    ctx->pc = 0x178790u;
    // 0x178790: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x178790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x178794: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178794u;
    {
        const bool branch_taken_0x178794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178794u;
        // 0x178798: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178794) {
            ctx->pc = 0x1787A4u;
            goto label_1787a4;
        }
    }
    ctx->pc = 0x17879Cu;
    // 0x17879c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17879Cu;
    {
        const bool branch_taken_0x17879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1787A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17879Cu;
        // 0x1787a0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17879c) {
            ctx->pc = 0x1787A8u;
            goto label_1787a8;
        }
    }
    ctx->pc = 0x1787A4u;
label_1787a4:
    // 0x1787a4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1787a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1787a8:
    // 0x1787a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1787a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1787ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1787ACu;
    {
        const bool branch_taken_0x1787ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1787B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787ACu;
        // 0x1787b0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787ac) {
            ctx->pc = 0x1787BCu;
            goto label_1787bc;
        }
    }
    ctx->pc = 0x1787B4u;
    // 0x1787b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1787B4u;
    {
        const bool branch_taken_0x1787b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1787B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787B4u;
        // 0x1787b8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787b4) {
            ctx->pc = 0x1787C0u;
            goto label_1787c0;
        }
    }
    ctx->pc = 0x1787BCu;
label_1787bc:
    // 0x1787bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1787bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1787c0:
    // 0x1787c0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1787C0u;
    SET_GPR_U32(ctx, 31, 0x1787C8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1787C0u, 0x1787C8u)) {
        return;
    }
    ctx->pc = 0x1787C8u;
label_1787c8:
    // 0x1787c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1787c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1787cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1787ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1787d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1787d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1787d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1787d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1787d8:
    // 0x1787d8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1787D8u;
    {
        const bool branch_taken_0x1787d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1787d8) {
            ctx->pc = 0x1787DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1787D8u;
            // 0x1787dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178788;
        }
    }
    ctx->pc = 0x1787E0u;
label_1787e0:
    // 0x1787e0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1787e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1787e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1787E4u;
    {
        const bool branch_taken_0x1787e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1787e4) {
            ctx->pc = 0x1787E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1787E4u;
            // 0x1787e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1787F8u;
            goto label_1787f8;
        }
    }
    ctx->pc = 0x1787ECu;
    // 0x1787ec: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1787ECu;
    SET_GPR_U32(ctx, 31, 0x1787F4u);
    ctx->pc = 0x1787F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1787ECu;
    // 0x1787f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1787ECu, 0x1787F4u)) {
        return;
    }
    ctx->pc = 0x1787F4u;
label_1787f4:
    // 0x1787f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1787f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1787f8:
    // 0x1787f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1787f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1787fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1787fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178800: 0x3e00008  jr          $ra
    ctx->pc = 0x178800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178800u;
        // 0x178804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178808u;
}
