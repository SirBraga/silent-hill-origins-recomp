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

// Function: sub_001BBEC0
// Address: 0x1bbec0 - 0x1bbf88
void sub_001BBEC0_0x1bbec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBEC0_0x1bbec0");
#endif

    switch (ctx->pc) {
        case 0x1bbec0u: goto label_1bbec0;
        case 0x1bbec4u: goto label_1bbec4;
        case 0x1bbec8u: goto label_1bbec8;
        case 0x1bbeccu: goto label_1bbecc;
        case 0x1bbed0u: goto label_1bbed0;
        case 0x1bbed4u: goto label_1bbed4;
        case 0x1bbed8u: goto label_1bbed8;
        case 0x1bbedcu: goto label_1bbedc;
        case 0x1bbee0u: goto label_1bbee0;
        case 0x1bbee4u: goto label_1bbee4;
        case 0x1bbee8u: goto label_1bbee8;
        case 0x1bbeecu: goto label_1bbeec;
        case 0x1bbef0u: goto label_1bbef0;
        case 0x1bbef4u: goto label_1bbef4;
        case 0x1bbef8u: goto label_1bbef8;
        case 0x1bbefcu: goto label_1bbefc;
        case 0x1bbf00u: goto label_1bbf00;
        case 0x1bbf04u: goto label_1bbf04;
        case 0x1bbf08u: goto label_1bbf08;
        case 0x1bbf0cu: goto label_1bbf0c;
        case 0x1bbf10u: goto label_1bbf10;
        case 0x1bbf14u: goto label_1bbf14;
        case 0x1bbf18u: goto label_1bbf18;
        case 0x1bbf1cu: goto label_1bbf1c;
        case 0x1bbf20u: goto label_1bbf20;
        case 0x1bbf24u: goto label_1bbf24;
        case 0x1bbf28u: goto label_1bbf28;
        case 0x1bbf2cu: goto label_1bbf2c;
        case 0x1bbf30u: goto label_1bbf30;
        case 0x1bbf34u: goto label_1bbf34;
        case 0x1bbf38u: goto label_1bbf38;
        case 0x1bbf3cu: goto label_1bbf3c;
        case 0x1bbf40u: goto label_1bbf40;
        case 0x1bbf44u: goto label_1bbf44;
        case 0x1bbf48u: goto label_1bbf48;
        case 0x1bbf4cu: goto label_1bbf4c;
        case 0x1bbf50u: goto label_1bbf50;
        case 0x1bbf54u: goto label_1bbf54;
        case 0x1bbf58u: goto label_1bbf58;
        case 0x1bbf5cu: goto label_1bbf5c;
        case 0x1bbf60u: goto label_1bbf60;
        case 0x1bbf64u: goto label_1bbf64;
        case 0x1bbf68u: goto label_1bbf68;
        case 0x1bbf6cu: goto label_1bbf6c;
        case 0x1bbf70u: goto label_1bbf70;
        case 0x1bbf74u: goto label_1bbf74;
        case 0x1bbf78u: goto label_1bbf78;
        case 0x1bbf7cu: goto label_1bbf7c;
        case 0x1bbf80u: goto label_1bbf80;
        case 0x1bbf84u: goto label_1bbf84;
        default: break;
    }

    ctx->pc = 0x1bbec0u;

label_1bbec0:
    // 0x1bbec0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bbec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1bbec4:
    // 0x1bbec4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bbec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bbec8:
    // 0x1bbec8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1bbec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1bbecc:
    // 0x1bbecc: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x1bbeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
label_1bbed0:
    // 0x1bbed0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bbed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1bbed4:
    // 0x1bbed4: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1bbed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1bbed8:
    // 0x1bbed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bbedc:
    // 0x1bbedc: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_1bbee0:
    if (ctx->pc == 0x1BBEE0u) {
        ctx->pc = 0x1BBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEDCu;
        // 0x1bbee0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBEE4u;
        goto label_1bbee4;
    }
    ctx->pc = 0x1BBEDCu;
    {
        const bool branch_taken_0x1bbedc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEDCu;
        // 0x1bbee0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbedc) {
            ctx->pc = 0x1BBF00u;
            goto label_1bbf00;
        }
    }
    ctx->pc = 0x1BBEE4u;
label_1bbee4:
    // 0x1bbee4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bbee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bbee8:
    // 0x1bbee8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1bbeec:
    if (ctx->pc == 0x1BBEECu) {
        ctx->pc = 0x1BBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEE8u;
        // 0x1bbeec: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBEF0u;
        goto label_1bbef0;
    }
    ctx->pc = 0x1BBEE8u;
    {
        const bool branch_taken_0x1bbee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbee8) {
            ctx->pc = 0x1BBEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBEE8u;
            // 0x1bbeec: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBF04u;
            goto label_1bbf04;
        }
    }
    ctx->pc = 0x1BBEF0u;
label_1bbef0:
    // 0x1bbef0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bbef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1bbef4:
    // 0x1bbef4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bbef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bbef8:
    // 0x1bbef8: 0xc07fd18  jal         func_1FF460
label_1bbefc:
    if (ctx->pc == 0x1BBEFCu) {
        ctx->pc = 0x1BBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEF8u;
        // 0x1bbefc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF00u;
        goto label_1bbf00;
    }
    ctx->pc = 0x1BBEF8u;
    SET_GPR_U32(ctx, 31, 0x1BBF00u);
    ctx->pc = 0x1BBEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBEF8u;
    // 0x1bbefc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BBEF8u, 0x1BBF00u)) {
        return;
    }
    ctx->pc = 0x1BBF00u;
label_1bbf00:
    // 0x1bbf00: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1bbf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1bbf04:
    // 0x1bbf04: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1bbf04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1bbf08:
    // 0x1bbf08: 0xc06c994  jal         func_1B2650
label_1bbf0c:
    if (ctx->pc == 0x1BBF0Cu) {
        ctx->pc = 0x1BBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF08u;
        // 0x1bbf0c: 0x24a5d5b8  addiu       $a1, $a1, -0x2A48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF10u;
        goto label_1bbf10;
    }
    ctx->pc = 0x1BBF08u;
    SET_GPR_U32(ctx, 31, 0x1BBF10u);
    ctx->pc = 0x1BBF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF08u;
    // 0x1bbf0c: 0x24a5d5b8  addiu       $a1, $a1, -0x2A48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1BBF08u, 0x1BBF10u)) {
        return;
    }
    ctx->pc = 0x1BBF10u;
label_1bbf10:
    // 0x1bbf10: 0x8e0302dc  lw          $v1, 0x2DC($s0)
    ctx->pc = 0x1bbf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_1bbf14:
    // 0x1bbf14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bbf14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbf18:
    // 0x1bbf18: 0x8c440258  lw          $a0, 0x258($v0)
    ctx->pc = 0x1bbf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1bbf1c:
    // 0x1bbf1c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1bbf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1bbf20:
    // 0x1bbf20: 0x848300c8  lh          $v1, 0xC8($a0)
    ctx->pc = 0x1bbf20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 200)));
label_1bbf24:
    // 0x1bbf24: 0x248700c8  addiu       $a3, $a0, 0xC8
    ctx->pc = 0x1bbf24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
label_1bbf28:
    // 0x1bbf28: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1bbf2c:
    if (ctx->pc == 0x1BBF2Cu) {
        ctx->pc = 0x1BBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF28u;
        // 0x1bbf2c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF30u;
        goto label_1bbf30;
    }
    ctx->pc = 0x1BBF28u;
    {
        const bool branch_taken_0x1bbf28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF28u;
        // 0x1bbf2c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf28) {
            ctx->pc = 0x1BBF50u;
            goto label_1bbf50;
        }
    }
    ctx->pc = 0x1BBF30u;
label_1bbf30:
    // 0x1bbf30: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x1bbf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_1bbf34:
    // 0x1bbf34: 0x0  nop
    ctx->pc = 0x1bbf34u;
    // NOP
label_1bbf38:
    // 0x1bbf38: 0x50c30007  beql        $a2, $v1, . + 4 + (0x7 << 2)
label_1bbf3c:
    if (ctx->pc == 0x1BBF3Cu) {
        ctx->pc = 0x1BBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF38u;
        // 0x1bbf3c: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF40u;
        goto label_1bbf40;
    }
    ctx->pc = 0x1BBF38u;
    {
        const bool branch_taken_0x1bbf38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bbf38) {
            ctx->pc = 0x1BBF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBF38u;
            // 0x1bbf3c: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBF58u;
            goto label_1bbf58;
        }
    }
    ctx->pc = 0x1BBF40u;
label_1bbf40:
    // 0x1bbf40: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1bbf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1bbf44:
    // 0x1bbf44: 0x0  nop
    ctx->pc = 0x1bbf44u;
    // NOP
label_1bbf48:
    // 0x1bbf48: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
label_1bbf4c:
    if (ctx->pc == 0x1BBF4Cu) {
        ctx->pc = 0x1BBF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF48u;
        // 0x1bbf4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF50u;
        goto label_1bbf50;
    }
    ctx->pc = 0x1BBF48u;
    {
        const bool branch_taken_0x1bbf48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF48u;
        // 0x1bbf4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf48) {
            ctx->pc = 0x1BBF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbf38;
        }
    }
    ctx->pc = 0x1BBF50u;
label_1bbf50:
    // 0x1bbf50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbf54:
    // 0x1bbf54: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1bbf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1bbf58:
    // 0x1bbf58: 0x40f809  jalr        $v0
label_1bbf5c:
    if (ctx->pc == 0x1BBF5Cu) {
        ctx->pc = 0x1BBF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF58u;
        // 0x1bbf5c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF60u;
        goto label_1bbf60;
    }
    ctx->pc = 0x1BBF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBF60u);
        ctx->pc = 0x1BBF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF58u;
        // 0x1bbf5c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBF58u, 0x1BBF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBF60u;
label_1bbf60:
    // 0x1bbf60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bbf60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bbf64:
    // 0x1bbf64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bbf64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bbf68:
    // 0x1bbf68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bbf6c:
    // 0x1bbf6c: 0xc06ba6c  jal         func_1AE9B0
label_1bbf70:
    if (ctx->pc == 0x1BBF70u) {
        ctx->pc = 0x1BBF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF6Cu;
        // 0x1bbf70: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF74u;
        goto label_1bbf74;
    }
    ctx->pc = 0x1BBF6Cu;
    SET_GPR_U32(ctx, 31, 0x1BBF74u);
    ctx->pc = 0x1BBF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF6Cu;
    // 0x1bbf70: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1BBF6Cu, 0x1BBF74u)) {
        return;
    }
    ctx->pc = 0x1BBF74u;
label_1bbf74:
    // 0x1bbf74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bbf74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bbf78:
    // 0x1bbf78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bbf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bbf7c:
    // 0x1bbf7c: 0x3e00008  jr          $ra
label_1bbf80:
    if (ctx->pc == 0x1BBF80u) {
        ctx->pc = 0x1BBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF7Cu;
        // 0x1bbf80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF84u;
        goto label_1bbf84;
    }
    ctx->pc = 0x1BBF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF7Cu;
        // 0x1bbf80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBF84u;
label_1bbf84:
    // 0x1bbf84: 0x0  nop
    ctx->pc = 0x1bbf84u;
    // NOP
    ctx->pc = 0x1bbf88u;
}
