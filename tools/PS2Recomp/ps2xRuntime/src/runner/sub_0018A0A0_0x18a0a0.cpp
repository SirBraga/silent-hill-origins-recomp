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

// Function: sub_0018A0A0
// Address: 0x18a0a0 - 0x18a170
void sub_0018A0A0_0x18a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A0A0_0x18a0a0");
#endif

    switch (ctx->pc) {
        case 0x18a0c0u: goto label_18a0c0;
        case 0x18a0f8u: goto label_18a0f8;
        case 0x18a154u: goto label_18a154;
        default: break;
    }

    ctx->pc = 0x18a0a0u;

    // 0x18a0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18a0a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18a0a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a0ac: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x18a0b0: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x18a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x18a0b4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A0B4u;
    {
        const bool branch_taken_0x18a0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0B4u;
        // 0x18a0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0b4) {
            ctx->pc = 0x18A0DCu;
            goto label_18a0dc;
        }
    }
    ctx->pc = 0x18A0BCu;
    // 0x18a0bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18a0c0:
    // 0x18a0c0: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A0C0u;
    {
        const bool branch_taken_0x18a0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x18A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0C0u;
        // 0x18a0c4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0c0) {
            ctx->pc = 0x18A0DCu;
            goto label_18a0dc;
        }
    }
    ctx->pc = 0x18A0C8u;
    // 0x18a0c8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x18a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18a0cc: 0x0  nop
    ctx->pc = 0x18a0ccu;
    // NOP
    // 0x18a0d0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18A0D0u;
    {
        const bool branch_taken_0x18a0d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a0d0) {
            ctx->pc = 0x18A0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A0D0u;
            // 0x18a0d4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a0c0;
        }
    }
    ctx->pc = 0x18A0D8u;
    // 0x18a0d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a0dc:
    // 0x18a0dc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18A0DCu;
    {
        const bool branch_taken_0x18a0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0DCu;
        // 0x18a0e0: 0x24900038  addiu       $s0, $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0dc) {
            ctx->pc = 0x18A160u;
            goto label_18a160;
        }
    }
    ctx->pc = 0x18A0E4u;
    // 0x18a0e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18a0e8: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x18A0E8u;
    {
        const bool branch_taken_0x18a0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a0e8) {
            ctx->pc = 0x18A0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A0E8u;
            // 0x18a0ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A114u;
            goto label_18a114;
        }
    }
    ctx->pc = 0x18A0F0u;
    // 0x18a0f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a0f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18a0f8:
    // 0x18a0f8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A0F8u;
    {
        const bool branch_taken_0x18a0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18a0f8) {
            ctx->pc = 0x18A114u;
            goto label_18a114;
        }
    }
    ctx->pc = 0x18A100u;
    // 0x18a100: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x18a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18a104: 0x0  nop
    ctx->pc = 0x18a104u;
    // NOP
    // 0x18a108: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18A108u;
    {
        const bool branch_taken_0x18a108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a108) {
            ctx->pc = 0x18A10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A108u;
            // 0x18a10c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a0f8;
        }
    }
    ctx->pc = 0x18A110u;
    // 0x18a110: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a114:
    // 0x18a114: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18A114u;
    {
        const bool branch_taken_0x18a114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a114) {
            ctx->pc = 0x18A118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A114u;
            // 0x18a118: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A164u;
            goto label_18a164;
        }
    }
    ctx->pc = 0x18A11Cu;
    // 0x18a11c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18a120: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A120u;
    {
        const bool branch_taken_0x18a120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A120u;
        // 0x18a124: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a120) {
            ctx->pc = 0x18A130u;
            goto label_18a130;
        }
    }
    ctx->pc = 0x18A128u;
    // 0x18a128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A128u;
    {
        const bool branch_taken_0x18a128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A128u;
        // 0x18a12c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a128) {
            ctx->pc = 0x18A134u;
            goto label_18a134;
        }
    }
    ctx->pc = 0x18A130u;
label_18a130:
    // 0x18a130: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18a130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18a134:
    // 0x18a134: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18a134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18a138: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A138u;
    {
        const bool branch_taken_0x18a138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A138u;
        // 0x18a13c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a138) {
            ctx->pc = 0x18A148u;
            goto label_18a148;
        }
    }
    ctx->pc = 0x18A140u;
    // 0x18a140: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A140u;
    {
        const bool branch_taken_0x18a140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A140u;
        // 0x18a144: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a140) {
            ctx->pc = 0x18A14Cu;
            goto label_18a14c;
        }
    }
    ctx->pc = 0x18A148u;
label_18a148:
    // 0x18a148: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18a148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18a14c:
    // 0x18a14c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18A14Cu;
    SET_GPR_U32(ctx, 31, 0x18A154u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18A14Cu, 0x18A154u)) {
        return;
    }
    ctx->pc = 0x18A154u;
label_18a154:
    // 0x18a154: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18a154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a158: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18a158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a15c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_18a160:
    // 0x18a160: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18a160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a164:
    // 0x18a164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a168: 0x3e00008  jr          $ra
    ctx->pc = 0x18A168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A168u;
        // 0x18a16c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A170u;
}
