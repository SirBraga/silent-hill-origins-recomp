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

// Function: sub_0029CF40
// Address: 0x29cf40 - 0x29d008
void sub_0029CF40_0x29cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CF40_0x29cf40");
#endif

    switch (ctx->pc) {
        case 0x29cf40u: goto label_29cf40;
        case 0x29cf44u: goto label_29cf44;
        case 0x29cf48u: goto label_29cf48;
        case 0x29cf4cu: goto label_29cf4c;
        case 0x29cf50u: goto label_29cf50;
        case 0x29cf54u: goto label_29cf54;
        case 0x29cf58u: goto label_29cf58;
        case 0x29cf5cu: goto label_29cf5c;
        case 0x29cf60u: goto label_29cf60;
        case 0x29cf64u: goto label_29cf64;
        case 0x29cf68u: goto label_29cf68;
        case 0x29cf6cu: goto label_29cf6c;
        case 0x29cf70u: goto label_29cf70;
        case 0x29cf74u: goto label_29cf74;
        case 0x29cf78u: goto label_29cf78;
        case 0x29cf7cu: goto label_29cf7c;
        case 0x29cf80u: goto label_29cf80;
        case 0x29cf84u: goto label_29cf84;
        case 0x29cf88u: goto label_29cf88;
        case 0x29cf8cu: goto label_29cf8c;
        case 0x29cf90u: goto label_29cf90;
        case 0x29cf94u: goto label_29cf94;
        case 0x29cf98u: goto label_29cf98;
        case 0x29cf9cu: goto label_29cf9c;
        case 0x29cfa0u: goto label_29cfa0;
        case 0x29cfa4u: goto label_29cfa4;
        case 0x29cfa8u: goto label_29cfa8;
        case 0x29cfacu: goto label_29cfac;
        case 0x29cfb0u: goto label_29cfb0;
        case 0x29cfb4u: goto label_29cfb4;
        case 0x29cfb8u: goto label_29cfb8;
        case 0x29cfbcu: goto label_29cfbc;
        case 0x29cfc0u: goto label_29cfc0;
        case 0x29cfc4u: goto label_29cfc4;
        case 0x29cfc8u: goto label_29cfc8;
        case 0x29cfccu: goto label_29cfcc;
        case 0x29cfd0u: goto label_29cfd0;
        case 0x29cfd4u: goto label_29cfd4;
        case 0x29cfd8u: goto label_29cfd8;
        case 0x29cfdcu: goto label_29cfdc;
        case 0x29cfe0u: goto label_29cfe0;
        case 0x29cfe4u: goto label_29cfe4;
        case 0x29cfe8u: goto label_29cfe8;
        case 0x29cfecu: goto label_29cfec;
        case 0x29cff0u: goto label_29cff0;
        case 0x29cff4u: goto label_29cff4;
        case 0x29cff8u: goto label_29cff8;
        case 0x29cffcu: goto label_29cffc;
        case 0x29d000u: goto label_29d000;
        case 0x29d004u: goto label_29d004;
        default: break;
    }

    ctx->pc = 0x29cf40u;

label_29cf40:
    // 0x29cf40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29cf44:
    // 0x29cf44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29cf48:
    // 0x29cf48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29cf4c:
    // 0x29cf4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29cf4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29cf50:
    // 0x29cf50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29cf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29cf54:
    // 0x29cf54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29cf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29cf58:
    // 0x29cf58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29cf58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29cf5c:
    // 0x29cf5c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29cf60:
    // 0x29cf60: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x29cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_29cf64:
    // 0x29cf64: 0x40f809  jalr        $v0
label_29cf68:
    if (ctx->pc == 0x29CF68u) {
        ctx->pc = 0x29CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF64u;
        // 0x29cf68: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF6Cu;
        goto label_29cf6c;
    }
    ctx->pc = 0x29CF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29CF6Cu);
        ctx->pc = 0x29CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF64u;
        // 0x29cf68: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CF64u, 0x29CF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CF6Cu;
label_29cf6c:
    // 0x29cf6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29cf70:
    // 0x29cf70: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
label_29cf74:
    if (ctx->pc == 0x29CF74u) {
        ctx->pc = 0x29CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF70u;
        // 0x29cf74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF78u;
        goto label_29cf78;
    }
    ctx->pc = 0x29CF70u;
    {
        const bool branch_taken_0x29cf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF70u;
        // 0x29cf74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf70) {
            ctx->pc = 0x29CFF0u;
            goto label_29cff0;
        }
    }
    ctx->pc = 0x29CF78u;
label_29cf78:
    // 0x29cf78: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_29cf7c:
    if (ctx->pc == 0x29CF7Cu) {
        ctx->pc = 0x29CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF78u;
        // 0x29cf7c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF80u;
        goto label_29cf80;
    }
    ctx->pc = 0x29CF78u;
    {
        const bool branch_taken_0x29cf78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF78u;
        // 0x29cf7c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf78) {
            ctx->pc = 0x29CF88u;
            goto label_29cf88;
        }
    }
    ctx->pc = 0x29CF80u;
label_29cf80:
    // 0x29cf80: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_29cf84:
    if (ctx->pc == 0x29CF84u) {
        ctx->pc = 0x29CF88u;
        goto label_29cf88;
    }
    ctx->pc = 0x29CF80u;
    {
        const bool branch_taken_0x29cf80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x29cf80) {
            ctx->pc = 0x29CFACu;
            goto label_29cfac;
        }
    }
    ctx->pc = 0x29CF88u;
label_29cf88:
    // 0x29cf88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29cf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29cf8c:
    // 0x29cf8c: 0x2605004b  addiu       $a1, $s0, 0x4B
    ctx->pc = 0x29cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 75));
label_29cf90:
    // 0x29cf90: 0x2606004c  addiu       $a2, $s0, 0x4C
    ctx->pc = 0x29cf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_29cf94:
    // 0x29cf94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29cf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_29cf98:
    // 0x29cf98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29cf98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cf9c:
    // 0x29cf9c: 0xc0a72e0  jal         func_29CB80
label_29cfa0:
    if (ctx->pc == 0x29CFA0u) {
        ctx->pc = 0x29CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF9Cu;
        // 0x29cfa0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFA4u;
        goto label_29cfa4;
    }
    ctx->pc = 0x29CF9Cu;
    SET_GPR_U32(ctx, 31, 0x29CFA4u);
    ctx->pc = 0x29CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF9Cu;
    // 0x29cfa0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CB80u, 0x29CF9Cu, 0x29CFA4u)) {
        return;
    }
    ctx->pc = 0x29CFA4u;
label_29cfa4:
    // 0x29cfa4: 0x1000000c  b           . + 4 + (0xC << 2)
label_29cfa8:
    if (ctx->pc == 0x29CFA8u) {
        ctx->pc = 0x29CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFA4u;
        // 0x29cfa8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFACu;
        goto label_29cfac;
    }
    ctx->pc = 0x29CFA4u;
    {
        const bool branch_taken_0x29cfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFA4u;
        // 0x29cfa8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfa4) {
            ctx->pc = 0x29CFD8u;
            goto label_29cfd8;
        }
    }
    ctx->pc = 0x29CFACu;
label_29cfac:
    // 0x29cfac: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x29cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_29cfb0:
    // 0x29cfb0: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x29cfb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
label_29cfb4:
    // 0x29cfb4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29cfb4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_29cfb8:
    // 0x29cfb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29cfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29cfbc:
    // 0x29cfbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29cfc0:
    // 0x29cfc0: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x29cfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_29cfc4:
    // 0x29cfc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29cfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29cfc8:
    // 0x29cfc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29cfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29cfcc:
    // 0x29cfcc: 0xc0a72e0  jal         func_29CB80
label_29cfd0:
    if (ctx->pc == 0x29CFD0u) {
        ctx->pc = 0x29CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFCCu;
        // 0x29cfd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFD4u;
        goto label_29cfd4;
    }
    ctx->pc = 0x29CFCCu;
    SET_GPR_U32(ctx, 31, 0x29CFD4u);
    ctx->pc = 0x29CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CFCCu;
    // 0x29cfd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CB80u, 0x29CFCCu, 0x29CFD4u)) {
        return;
    }
    ctx->pc = 0x29CFD4u;
label_29cfd4:
    // 0x29cfd4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x29cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_29cfd8:
    // 0x29cfd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29cfd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29cfdc:
    // 0x29cfdc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x29cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_29cfe0:
    // 0x29cfe0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x29cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_29cfe4:
    // 0x29cfe4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x29cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_29cfe8:
    // 0x29cfe8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_29cfec:
    // 0x29cfec: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x29cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_29cff0:
    // 0x29cff0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29cff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29cff4:
    // 0x29cff4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29cff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29cff8:
    // 0x29cff8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29cff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29cffc:
    // 0x29cffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29cffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29d000:
    // 0x29d000: 0x3e00008  jr          $ra
label_29d004:
    if (ctx->pc == 0x29D004u) {
        ctx->pc = 0x29D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D000u;
        // 0x29d004: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D008u;
        goto label_fallthrough_0x29d000;
    }
    ctx->pc = 0x29D000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D000u;
        // 0x29d004: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d000:
    ctx->pc = 0x29D008u;
}
