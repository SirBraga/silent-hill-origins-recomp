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

// Function: sub_002DDFC8
// Address: 0x2ddfc8 - 0x2de080
void sub_002DDFC8_0x2ddfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDFC8_0x2ddfc8");
#endif

    switch (ctx->pc) {
        case 0x2ddfc8u: goto label_2ddfc8;
        case 0x2ddfccu: goto label_2ddfcc;
        case 0x2ddfd0u: goto label_2ddfd0;
        case 0x2ddfd4u: goto label_2ddfd4;
        case 0x2ddfd8u: goto label_2ddfd8;
        case 0x2ddfdcu: goto label_2ddfdc;
        case 0x2ddfe0u: goto label_2ddfe0;
        case 0x2ddfe4u: goto label_2ddfe4;
        case 0x2ddfe8u: goto label_2ddfe8;
        case 0x2ddfecu: goto label_2ddfec;
        case 0x2ddff0u: goto label_2ddff0;
        case 0x2ddff4u: goto label_2ddff4;
        case 0x2ddff8u: goto label_2ddff8;
        case 0x2ddffcu: goto label_2ddffc;
        case 0x2de000u: goto label_2de000;
        case 0x2de004u: goto label_2de004;
        case 0x2de008u: goto label_2de008;
        case 0x2de00cu: goto label_2de00c;
        case 0x2de010u: goto label_2de010;
        case 0x2de014u: goto label_2de014;
        case 0x2de018u: goto label_2de018;
        case 0x2de01cu: goto label_2de01c;
        case 0x2de020u: goto label_2de020;
        case 0x2de024u: goto label_2de024;
        case 0x2de028u: goto label_2de028;
        case 0x2de02cu: goto label_2de02c;
        case 0x2de030u: goto label_2de030;
        case 0x2de034u: goto label_2de034;
        case 0x2de038u: goto label_2de038;
        case 0x2de03cu: goto label_2de03c;
        case 0x2de040u: goto label_2de040;
        case 0x2de044u: goto label_2de044;
        case 0x2de048u: goto label_2de048;
        case 0x2de04cu: goto label_2de04c;
        case 0x2de050u: goto label_2de050;
        case 0x2de054u: goto label_2de054;
        case 0x2de058u: goto label_2de058;
        case 0x2de05cu: goto label_2de05c;
        case 0x2de060u: goto label_2de060;
        case 0x2de064u: goto label_2de064;
        case 0x2de068u: goto label_2de068;
        case 0x2de06cu: goto label_2de06c;
        case 0x2de070u: goto label_2de070;
        case 0x2de074u: goto label_2de074;
        case 0x2de078u: goto label_2de078;
        case 0x2de07cu: goto label_2de07c;
        default: break;
    }

    ctx->pc = 0x2ddfc8u;

label_2ddfc8:
    // 0x2ddfc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ddfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ddfcc:
    // 0x2ddfcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ddfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddfd0:
    // 0x2ddfd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ddfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ddfd4:
    // 0x2ddfd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ddfd8:
    // 0x2ddfd8: 0xc0b7452  jal         func_2DD148
label_2ddfdc:
    if (ctx->pc == 0x2DDFDCu) {
        ctx->pc = 0x2DDFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFD8u;
        // 0x2ddfdc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFE0u;
        goto label_2ddfe0;
    }
    ctx->pc = 0x2DDFD8u;
    SET_GPR_U32(ctx, 31, 0x2DDFE0u);
    ctx->pc = 0x2DDFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDFD8u;
    // 0x2ddfdc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD148u, 0x2DDFD8u, 0x2DDFE0u)) {
        return;
    }
    ctx->pc = 0x2DDFE0u;
label_2ddfe0:
    // 0x2ddfe0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_2ddfe4:
    if (ctx->pc == 0x2DDFE4u) {
        ctx->pc = 0x2DDFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFE0u;
        // 0x2ddfe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFE8u;
        goto label_2ddfe8;
    }
    ctx->pc = 0x2DDFE0u;
    {
        const bool branch_taken_0x2ddfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFE0u;
        // 0x2ddfe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfe0) {
            ctx->pc = 0x2DE068u;
            goto label_2de068;
        }
    }
    ctx->pc = 0x2DDFE8u;
label_2ddfe8:
    // 0x2ddfe8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2ddfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2ddfec:
    // 0x2ddfec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2ddff0:
    if (ctx->pc == 0x2DDFF0u) {
        ctx->pc = 0x2DDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFECu;
        // 0x2ddff0: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFF4u;
        goto label_2ddff4;
    }
    ctx->pc = 0x2DDFECu;
    {
        const bool branch_taken_0x2ddfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddfec) {
            ctx->pc = 0x2DDFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDFECu;
            // 0x2ddff0: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE000u;
            goto label_2de000;
        }
    }
    ctx->pc = 0x2DDFF4u;
label_2ddff4:
    // 0x2ddff4: 0x40f809  jalr        $v0
label_2ddff8:
    if (ctx->pc == 0x2DDFF8u) {
        ctx->pc = 0x2DDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFF4u;
        // 0x2ddff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFFCu;
        goto label_2ddffc;
    }
    ctx->pc = 0x2DDFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DDFFCu);
        ctx->pc = 0x2DDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFF4u;
        // 0x2ddff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDFF4u, 0x2DDFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DDFFCu;
label_2ddffc:
    // 0x2ddffc: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2ddffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2de000:
    // 0x2de000: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2de004:
    if (ctx->pc == 0x2DE004u) {
        ctx->pc = 0x2DE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE000u;
        // 0x2de004: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE008u;
        goto label_2de008;
    }
    ctx->pc = 0x2DE000u;
    {
        const bool branch_taken_0x2de000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de000) {
            ctx->pc = 0x2DE004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE000u;
            // 0x2de004: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE014u;
            goto label_2de014;
        }
    }
    ctx->pc = 0x2DE008u;
label_2de008:
    // 0x2de008: 0xc0b82d0  jal         func_2E0B40
label_2de00c:
    if (ctx->pc == 0x2DE00Cu) {
        ctx->pc = 0x2DE010u;
        goto label_2de010;
    }
    ctx->pc = 0x2DE008u;
    SET_GPR_U32(ctx, 31, 0x2DE010u);
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DE008u, 0x2DE010u)) {
        return;
    }
    ctx->pc = 0x2DE010u;
label_2de010:
    // 0x2de010: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2de010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2de014:
    // 0x2de014: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2de014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2de018:
    // 0x2de018: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2de01c:
    if (ctx->pc == 0x2DE01Cu) {
        ctx->pc = 0x2DE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE018u;
        // 0x2de01c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE020u;
        goto label_2de020;
    }
    ctx->pc = 0x2DE018u;
    {
        const bool branch_taken_0x2de018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de018) {
            ctx->pc = 0x2DE01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE018u;
            // 0x2de01c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE02Cu;
            goto label_2de02c;
        }
    }
    ctx->pc = 0x2DE020u;
label_2de020:
    // 0x2de020: 0xc0b7080  jal         func_2DC200
label_2de024:
    if (ctx->pc == 0x2DE024u) {
        ctx->pc = 0x2DE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE020u;
        // 0x2de024: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE028u;
        goto label_2de028;
    }
    ctx->pc = 0x2DE020u;
    SET_GPR_U32(ctx, 31, 0x2DE028u);
    ctx->pc = 0x2DE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE020u;
    // 0x2de024: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DE020u, 0x2DE028u)) {
        return;
    }
    ctx->pc = 0x2DE028u;
label_2de028:
    // 0x2de028: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2de028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2de02c:
    // 0x2de02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de030:
    // 0x2de030: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x2de030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2de034:
    // 0x2de034: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2de034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2de038:
    // 0x2de038: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2de038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2de03c:
    // 0x2de03c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2de03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2de040:
    // 0x2de040: 0xc0b7d76  jal         func_2DF5D8
label_2de044:
    if (ctx->pc == 0x2DE044u) {
        ctx->pc = 0x2DE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE040u;
        // 0x2de044: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE048u;
        goto label_2de048;
    }
    ctx->pc = 0x2DE040u;
    SET_GPR_U32(ctx, 31, 0x2DE048u);
    ctx->pc = 0x2DE044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE040u;
    // 0x2de044: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF5D8u, 0x2DE040u, 0x2DE048u)) {
        return;
    }
    ctx->pc = 0x2DE048u;
label_2de048:
    // 0x2de048: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2de048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2de04c:
    // 0x2de04c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2de04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2de050:
    // 0x2de050: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2de054:
    if (ctx->pc == 0x2DE054u) {
        ctx->pc = 0x2DE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE050u;
        // 0x2de054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE058u;
        goto label_2de058;
    }
    ctx->pc = 0x2DE050u;
    {
        const bool branch_taken_0x2de050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE050u;
        // 0x2de054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de050) {
            ctx->pc = 0x2DE064u;
            goto label_2de064;
        }
    }
    ctx->pc = 0x2DE058u;
label_2de058:
    // 0x2de058: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2de058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2de05c:
    // 0x2de05c: 0xc0b81ea  jal         func_2E07A8
label_2de060:
    if (ctx->pc == 0x2DE060u) {
        ctx->pc = 0x2DE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE05Cu;
        // 0x2de060: 0x24848040  addiu       $a0, $a0, -0x7FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE064u;
        goto label_2de064;
    }
    ctx->pc = 0x2DE05Cu;
    SET_GPR_U32(ctx, 31, 0x2DE064u);
    ctx->pc = 0x2DE060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE05Cu;
    // 0x2de060: 0x24848040  addiu       $a0, $a0, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DE05Cu, 0x2DE064u)) {
        return;
    }
    ctx->pc = 0x2DE064u;
label_2de064:
    // 0x2de064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de068:
    // 0x2de068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2de068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2de06c:
    // 0x2de06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2de070:
    // 0x2de070: 0x3e00008  jr          $ra
label_2de074:
    if (ctx->pc == 0x2DE074u) {
        ctx->pc = 0x2DE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE070u;
        // 0x2de074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE078u;
        goto label_2de078;
    }
    ctx->pc = 0x2DE070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE070u;
        // 0x2de074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE078u;
label_2de078:
    // 0x2de078: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2de078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2de07c:
    // 0x2de07c: 0x0  nop
    ctx->pc = 0x2de07cu;
    // NOP
    ctx->pc = 0x2de080u;
}
