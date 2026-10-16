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

// Function: sub_00190090
// Address: 0x190090 - 0x190140
void sub_00190090_0x190090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190090_0x190090");
#endif

    switch (ctx->pc) {
        case 0x1900c0u: goto label_1900c0;
        case 0x190100u: goto label_190100;
        case 0x19012cu: goto label_19012c;
        default: break;
    }

    ctx->pc = 0x190090u;

    // 0x190090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190094: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x190094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x190098: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x190098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19009c: 0x244294e8  addiu       $v0, $v0, -0x6B18
    ctx->pc = 0x19009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939880));
    // 0x1900a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1900a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1900a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1900a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1900a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1900ac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1900acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1900b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1900b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1900b4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1900B4u;
    {
        const bool branch_taken_0x1900b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1900B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900B4u;
        // 0x1900b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900b4) {
            ctx->pc = 0x190118u;
            goto label_190118;
        }
    }
    ctx->pc = 0x1900BCu;
    // 0x1900bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1900bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1900c0:
    // 0x1900c0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1900C0u;
    {
        const bool branch_taken_0x1900c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1900c0) {
            ctx->pc = 0x1900C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1900C0u;
            // 0x1900c4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190110u;
            goto label_190110;
        }
    }
    ctx->pc = 0x1900C8u;
    // 0x1900c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1900c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1900cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1900CCu;
    {
        const bool branch_taken_0x1900cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1900D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900CCu;
        // 0x1900d0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900cc) {
            ctx->pc = 0x1900DCu;
            goto label_1900dc;
        }
    }
    ctx->pc = 0x1900D4u;
    // 0x1900d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1900D4u;
    {
        const bool branch_taken_0x1900d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1900D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900D4u;
        // 0x1900d8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900d4) {
            ctx->pc = 0x1900E0u;
            goto label_1900e0;
        }
    }
    ctx->pc = 0x1900DCu;
label_1900dc:
    // 0x1900dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1900dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1900e0:
    // 0x1900e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1900e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1900e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1900E4u;
    {
        const bool branch_taken_0x1900e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1900E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900E4u;
        // 0x1900e8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900e4) {
            ctx->pc = 0x1900F4u;
            goto label_1900f4;
        }
    }
    ctx->pc = 0x1900ECu;
    // 0x1900ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1900ECu;
    {
        const bool branch_taken_0x1900ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1900F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900ECu;
        // 0x1900f0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900ec) {
            ctx->pc = 0x1900F8u;
            goto label_1900f8;
        }
    }
    ctx->pc = 0x1900F4u;
label_1900f4:
    // 0x1900f4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1900f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1900f8:
    // 0x1900f8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1900F8u;
    SET_GPR_U32(ctx, 31, 0x190100u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1900F8u, 0x190100u)) {
        return;
    }
    ctx->pc = 0x190100u;
label_190100:
    // 0x190100: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x190100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190104: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190108: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x190108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19010c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_190110:
    // 0x190110: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x190110u;
    {
        const bool branch_taken_0x190110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190110) {
            ctx->pc = 0x190114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190110u;
            // 0x190114: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1900C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1900c0;
        }
    }
    ctx->pc = 0x190118u;
label_190118:
    // 0x190118: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x190118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x19011c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19011Cu;
    {
        const bool branch_taken_0x19011c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19011c) {
            ctx->pc = 0x190120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19011Cu;
            // 0x190120: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190130u;
            goto label_190130;
        }
    }
    ctx->pc = 0x190124u;
    // 0x190124: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190124u;
    SET_GPR_U32(ctx, 31, 0x19012Cu);
    ctx->pc = 0x190128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190124u;
    // 0x190128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190124u, 0x19012Cu)) {
        return;
    }
    ctx->pc = 0x19012Cu;
label_19012c:
    // 0x19012c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19012cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_190130:
    // 0x190130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190138: 0x3e00008  jr          $ra
    ctx->pc = 0x190138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190138u;
        // 0x19013c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190140u;
}
