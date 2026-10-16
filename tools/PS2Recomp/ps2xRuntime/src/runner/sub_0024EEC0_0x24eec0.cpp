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

// Function: sub_0024EEC0
// Address: 0x24eec0 - 0x24efb0
void sub_0024EEC0_0x24eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EEC0_0x24eec0");
#endif

    switch (ctx->pc) {
        case 0x24eef8u: goto label_24eef8;
        case 0x24ef50u: goto label_24ef50;
        case 0x24ef60u: goto label_24ef60;
        default: break;
    }

    ctx->pc = 0x24eec0u;

    // 0x24eec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24eec4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24eec8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24eec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24eecc: 0x24a5001f  addiu       $a1, $a1, 0x1F
    ctx->pc = 0x24eeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x24eed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24eed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24eed4: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x24eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
    // 0x24eed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24eed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24eedc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24eedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eee0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x24eee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24eee4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x24eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24eee8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x24EEE8u;
    {
        const bool branch_taken_0x24eee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEE8u;
        // 0x24eeec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eee8) {
            ctx->pc = 0x24EF28u;
            goto label_24ef28;
        }
    }
    ctx->pc = 0x24EEF0u;
    // 0x24eef0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x24eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x24eef4: 0x0  nop
    ctx->pc = 0x24eef4u;
    // NOP
label_24eef8:
    // 0x24eef8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24eef8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x24eefc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24eefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24ef00: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EF00u;
    {
        const bool branch_taken_0x24ef00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ef00) {
            ctx->pc = 0x24EF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EF00u;
            // 0x24ef04: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EF18u;
            goto label_24ef18;
        }
    }
    ctx->pc = 0x24EF08u;
    // 0x24ef08: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24ef0c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x24ef0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x24ef10: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x24ef10u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
    // 0x24ef14: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x24ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_24ef18:
    // 0x24ef18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24EF18u;
    {
        const bool branch_taken_0x24ef18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ef18) {
            ctx->pc = 0x24EF28u;
            goto label_24ef28;
        }
    }
    ctx->pc = 0x24EF20u;
    // 0x24ef20: 0x5200fff5  beql        $s0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x24EF20u;
    {
        const bool branch_taken_0x24ef20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ef20) {
            ctx->pc = 0x24EF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EF20u;
            // 0x24ef24: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24eef8;
        }
    }
    ctx->pc = 0x24EF28u;
label_24ef28:
    // 0x24ef28: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x24EF28u;
    {
        const bool branch_taken_0x24ef28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ef28) {
            ctx->pc = 0x24EF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EF28u;
            // 0x24ef2c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EF38u;
            goto label_24ef38;
        }
    }
    ctx->pc = 0x24EF30u;
    // 0x24ef30: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24EF30u;
    {
        const bool branch_taken_0x24ef30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF30u;
        // 0x24ef34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef30) {
            ctx->pc = 0x24EF88u;
            goto label_24ef88;
        }
    }
    ctx->pc = 0x24EF38u;
label_24ef38:
    // 0x24ef38: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x24ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x24ef3c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x24ef3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24ef40: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24EF40u;
    {
        const bool branch_taken_0x24ef40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ef40) {
            ctx->pc = 0x24EF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EF40u;
            // 0x24ef44: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EF54u;
            goto label_24ef54;
        }
    }
    ctx->pc = 0x24EF48u;
    // 0x24ef48: 0xc093b48  jal         func_24ED20
    ctx->pc = 0x24EF48u;
    SET_GPR_U32(ctx, 31, 0x24EF50u);
    ctx->pc = 0x24EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EF48u;
    // 0x24ef4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ED20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24ED20u, 0x24EF48u, 0x24EF50u)) {
        return;
    }
    ctx->pc = 0x24EF50u;
label_24ef50:
    // 0x24ef50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24ef54:
    // 0x24ef54: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24EF54u;
    {
        const bool branch_taken_0x24ef54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x24EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF54u;
        // 0x24ef58: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef54) {
            ctx->pc = 0x24EF7Cu;
            goto label_24ef7c;
        }
    }
    ctx->pc = 0x24EF5Cu;
    // 0x24ef5c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24ef60:
    // 0x24ef60: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x24ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24ef64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EF64u;
    {
        const bool branch_taken_0x24ef64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF64u;
        // 0x24ef68: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef64) {
            ctx->pc = 0x24EF7Cu;
            goto label_24ef7c;
        }
    }
    ctx->pc = 0x24EF6Cu;
    // 0x24ef6c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x24ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24ef70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24ef70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24ef74: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24EF74u;
    {
        const bool branch_taken_0x24ef74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ef74) {
            ctx->pc = 0x24EF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EF74u;
            // 0x24ef78: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ef60;
        }
    }
    ctx->pc = 0x24EF7Cu;
label_24ef7c:
    // 0x24ef7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ef80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24ef80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef84: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x24ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_24ef88:
    // 0x24ef88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24ef88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ef8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24ef8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ef90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ef94: 0x3e00008  jr          $ra
    ctx->pc = 0x24EF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF94u;
        // 0x24ef98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EF9Cu;
    // 0x24ef9c: 0x0  nop
    ctx->pc = 0x24ef9cu;
    // NOP
    // 0x24efa0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24efa4: 0x0  nop
    ctx->pc = 0x24efa4u;
    // NOP
    // 0x24efa8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24efa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24efac: 0x0  nop
    ctx->pc = 0x24efacu;
    // NOP
    ctx->pc = 0x24efb0u;
}
