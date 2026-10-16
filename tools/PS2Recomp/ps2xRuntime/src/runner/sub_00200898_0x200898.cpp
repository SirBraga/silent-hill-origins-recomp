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

// Function: sub_00200898
// Address: 0x200898 - 0x200948
void sub_00200898_0x200898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200898_0x200898");
#endif

    switch (ctx->pc) {
        case 0x2008c8u: goto label_2008c8;
        case 0x200908u: goto label_200908;
        case 0x200934u: goto label_200934;
        default: break;
    }

    ctx->pc = 0x200898u;

    // 0x200898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20089c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20089cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2008a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2008a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2008a4: 0x24423800  addiu       $v0, $v0, 0x3800
    ctx->pc = 0x2008a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14336));
    // 0x2008a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2008a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2008ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2008acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2008b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2008b4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2008b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2008b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2008b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2008bc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2008BCu;
    {
        const bool branch_taken_0x2008bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008BCu;
        // 0x2008c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008bc) {
            ctx->pc = 0x200920u;
            goto label_200920;
        }
    }
    ctx->pc = 0x2008C4u;
    // 0x2008c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2008c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2008c8:
    // 0x2008c8: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2008C8u;
    {
        const bool branch_taken_0x2008c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2008c8) {
            ctx->pc = 0x2008CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2008C8u;
            // 0x2008cc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200918u;
            goto label_200918;
        }
    }
    ctx->pc = 0x2008D0u;
    // 0x2008d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2008d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2008d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2008D4u;
    {
        const bool branch_taken_0x2008d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2008D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008D4u;
        // 0x2008d8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008d4) {
            ctx->pc = 0x2008E4u;
            goto label_2008e4;
        }
    }
    ctx->pc = 0x2008DCu;
    // 0x2008dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2008DCu;
    {
        const bool branch_taken_0x2008dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008DCu;
        // 0x2008e0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008dc) {
            ctx->pc = 0x2008E8u;
            goto label_2008e8;
        }
    }
    ctx->pc = 0x2008E4u;
label_2008e4:
    // 0x2008e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2008e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2008e8:
    // 0x2008e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2008e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2008ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2008ECu;
    {
        const bool branch_taken_0x2008ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2008F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008ECu;
        // 0x2008f0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008ec) {
            ctx->pc = 0x2008FCu;
            goto label_2008fc;
        }
    }
    ctx->pc = 0x2008F4u;
    // 0x2008f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2008F4u;
    {
        const bool branch_taken_0x2008f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008F4u;
        // 0x2008f8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008f4) {
            ctx->pc = 0x200900u;
            goto label_200900;
        }
    }
    ctx->pc = 0x2008FCu;
label_2008fc:
    // 0x2008fc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2008fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_200900:
    // 0x200900: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x200900u;
    SET_GPR_U32(ctx, 31, 0x200908u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x200900u, 0x200908u)) {
        return;
    }
    ctx->pc = 0x200908u;
label_200908:
    // 0x200908: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x200908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20090c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x200910: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x200910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x200914: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x200914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_200918:
    // 0x200918: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x200918u;
    {
        const bool branch_taken_0x200918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200918) {
            ctx->pc = 0x20091Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200918u;
            // 0x20091c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2008C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2008c8;
        }
    }
    ctx->pc = 0x200920u;
label_200920:
    // 0x200920: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x200920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x200924: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x200924u;
    {
        const bool branch_taken_0x200924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200924) {
            ctx->pc = 0x200928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200924u;
            // 0x200928: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200938u;
            goto label_200938;
        }
    }
    ctx->pc = 0x20092Cu;
    // 0x20092c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x20092Cu;
    SET_GPR_U32(ctx, 31, 0x200934u);
    ctx->pc = 0x200930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20092Cu;
    // 0x200930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x20092Cu, 0x200934u)) {
        return;
    }
    ctx->pc = 0x200934u;
label_200934:
    // 0x200934: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x200934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_200938:
    // 0x200938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20093c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20093cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200940: 0x3e00008  jr          $ra
    ctx->pc = 0x200940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200940u;
        // 0x200944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200948u;
}
