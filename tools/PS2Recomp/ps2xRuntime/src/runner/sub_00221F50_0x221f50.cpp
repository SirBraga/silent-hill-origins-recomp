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

// Function: sub_00221F50
// Address: 0x221f50 - 0x2222b0
void sub_00221F50_0x221f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221F50_0x221f50");
#endif

    switch (ctx->pc) {
        case 0x222000u: goto label_222000;
        case 0x22203cu: goto label_22203c;
        case 0x222048u: goto label_222048;
        case 0x222050u: goto label_222050;
        case 0x222128u: goto label_222128;
        case 0x222138u: goto label_222138;
        case 0x222158u: goto label_222158;
        case 0x222248u: goto label_222248;
        case 0x22226cu: goto label_22226c;
        case 0x22227cu: goto label_22227c;
        default: break;
    }

    ctx->pc = 0x221f50u;

    // 0x221f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x221f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x221f54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x221f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x221f58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x221f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x221f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x221f60: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x221f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x221f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x221f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x221f68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x221f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x221f6c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x221f6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x221f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221f74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x221f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f78: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x221f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221f80: 0x16620012  bne         $s3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x221F80u;
    {
        const bool branch_taken_0x221f80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x221F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F80u;
        // 0x221f84: 0x3210ffff  andi        $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f80) {
            ctx->pc = 0x221FCCu;
            goto label_221fcc;
        }
    }
    ctx->pc = 0x221F88u;
    // 0x221f88: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x221f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x221f8c: 0x3404fff0  ori         $a0, $zero, 0xFFF0
    ctx->pc = 0x221f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x221f90: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x221f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x221f94: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x221f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x221f98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x221F98u;
    {
        const bool branch_taken_0x221f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221f98) {
            ctx->pc = 0x221F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221F98u;
            // 0x221f9c: 0x230882d  daddu       $s1, $s1, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221FB0u;
            goto label_221fb0;
        }
    }
    ctx->pc = 0x221FA0u;
    // 0x221fa0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x221fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x221fa4: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x221fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x221fa8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x221fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221fac: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x221facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
label_221fb0:
    // 0x221fb0: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x221fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x221fb4: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x221FB4u;
    {
        const bool branch_taken_0x221fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FB4u;
        // 0x221fb8: 0x111438  dsll        $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fb4) {
            ctx->pc = 0x222284u;
            goto label_222284;
        }
    }
    ctx->pc = 0x221FBCu;
    // 0x221fbc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x221fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x221fc0: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x221fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x221fc4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x221FC4u;
    {
        const bool branch_taken_0x221fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FC4u;
        // 0x221fc8: 0x222882d  daddu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fc4) {
            ctx->pc = 0x222280u;
            goto label_222280;
        }
    }
    ctx->pc = 0x221FCCu;
label_221fcc:
    // 0x221fcc: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x221FCCu;
    {
        const bool branch_taken_0x221fcc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x221FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FCCu;
        // 0x221fd0: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fcc) {
            ctx->pc = 0x221FDCu;
            goto label_221fdc;
        }
    }
    ctx->pc = 0x221FD4u;
    // 0x221fd4: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x221FD4u;
    {
        const bool branch_taken_0x221fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FD4u;
        // 0x221fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fd4) {
            ctx->pc = 0x222288u;
            goto label_222288;
        }
    }
    ctx->pc = 0x221FDCu;
label_221fdc:
    // 0x221fdc: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x221FDCu;
    {
        const bool branch_taken_0x221fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FDCu;
        // 0x221fe0: 0x2e6215b0  sltiu       $v0, $s3, 0x15B0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5552) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fdc) {
            ctx->pc = 0x222140u;
            goto label_222140;
        }
    }
    ctx->pc = 0x221FE4u;
    // 0x221fe4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x221fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x221fe8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x221fe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x221fec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x221fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x221ff0: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x221FF0u;
    {
        const bool branch_taken_0x221ff0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x221FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FF0u;
        // 0x221ff4: 0x3402fff0  ori         $v0, $zero, 0xFFF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ff0) {
            ctx->pc = 0x22201Cu;
            goto label_22201c;
        }
    }
    ctx->pc = 0x221FF8u;
    // 0x221ff8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x221ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x221ffc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x221ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_222000:
    // 0x222000: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x222000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x222004: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x222004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x222008: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x222008u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x22200c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x22200cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x222010: 0x1663fffb  bne         $s3, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x222010u;
    {
        const bool branch_taken_0x222010 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x222014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222010u;
        // 0x222014: 0x230882d  daddu       $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222010) {
            ctx->pc = 0x222000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222000;
        }
    }
    ctx->pc = 0x222018u;
    // 0x222018: 0x3402fff0  ori         $v0, $zero, 0xFFF0
    ctx->pc = 0x222018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_22201c:
    // 0x22201c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x22201cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x222020: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x222020u;
    {
        const bool branch_taken_0x222020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222020u;
        // 0x222024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222020) {
            ctx->pc = 0x222034u;
            goto label_222034;
        }
    }
    ctx->pc = 0x222028u;
    // 0x222028: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x222028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22202c: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x22202cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x222030: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x222030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_222034:
    // 0x222034: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x222034u;
    SET_GPR_U32(ctx, 31, 0x22203Cu);
    ctx->pc = 0x222038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222034u;
    // 0x222038: 0x3405fff1  ori         $a1, $zero, 0xFFF1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x222034u, 0x22203Cu)) {
        return;
    }
    ctx->pc = 0x22203Cu;
label_22203c:
    // 0x22203c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x22203Cu;
    {
        const bool branch_taken_0x22203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22203Cu;
        // 0x222040: 0x21438  dsll        $v0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22203c) {
            ctx->pc = 0x222284u;
            goto label_222284;
        }
    }
    ctx->pc = 0x222044u;
    // 0x222044: 0x0  nop
    ctx->pc = 0x222044u;
    // NOP
label_222048:
    // 0x222048: 0x240b015b  addiu       $t3, $zero, 0x15B
    ctx->pc = 0x222048u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
    // 0x22204c: 0x0  nop
    ctx->pc = 0x22204cu;
    // NOP
label_222050:
    // 0x222050: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x222050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x222054: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x222054u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x222058: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x222058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x22205c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x22205cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x222060: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x222060u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x222064: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x222064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x222068: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x222068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x22206c: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x22206cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x222070: 0x92450004  lbu         $a1, 0x4($s2)
    ctx->pc = 0x222070u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x222074: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x222074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x222078: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x222078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x22207c: 0x204802d  daddu       $s0, $s0, $a0
    ctx->pc = 0x22207cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x222080: 0x92460006  lbu         $a2, 0x6($s2)
    ctx->pc = 0x222080u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x222084: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x222084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x222088: 0x92440007  lbu         $a0, 0x7($s2)
    ctx->pc = 0x222088u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x22208c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x22208cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x222090: 0x92470008  lbu         $a3, 0x8($s2)
    ctx->pc = 0x222090u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x222094: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x222094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x222098: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x222098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x22209c: 0x205802d  daddu       $s0, $s0, $a1
    ctx->pc = 0x22209cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 5));
    // 0x2220a0: 0x9248000a  lbu         $t0, 0xA($s2)
    ctx->pc = 0x2220a0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2220a4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2220a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2220a8: 0x9245000b  lbu         $a1, 0xB($s2)
    ctx->pc = 0x2220a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x2220ac: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x2220acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2220b0: 0x9249000c  lbu         $t1, 0xC($s2)
    ctx->pc = 0x2220b0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2220b4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2220b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2220b8: 0x9243000d  lbu         $v1, 0xD($s2)
    ctx->pc = 0x2220b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x2220bc: 0x206802d  daddu       $s0, $s0, $a2
    ctx->pc = 0x2220bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2220c0: 0x924a000e  lbu         $t2, 0xE($s2)
    ctx->pc = 0x2220c0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x2220c4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2220c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2220c8: 0x9246000f  lbu         $a2, 0xF($s2)
    ctx->pc = 0x2220c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    // 0x2220cc: 0x204802d  daddu       $s0, $s0, $a0
    ctx->pc = 0x2220ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2220d0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2220d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2220d4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2220d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2220d8: 0x207802d  daddu       $s0, $s0, $a3
    ctx->pc = 0x2220d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 7));
    // 0x2220dc: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2220dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2220e0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x2220e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2220e4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2220e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2220e8: 0x208802d  daddu       $s0, $s0, $t0
    ctx->pc = 0x2220e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 8));
    // 0x2220ec: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2220ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2220f0: 0x205802d  daddu       $s0, $s0, $a1
    ctx->pc = 0x2220f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 5));
    // 0x2220f4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2220f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2220f8: 0x209802d  daddu       $s0, $s0, $t1
    ctx->pc = 0x2220f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 9));
    // 0x2220fc: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2220fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x222100: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x222100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x222104: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x222104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x222108: 0x20a802d  daddu       $s0, $s0, $t2
    ctx->pc = 0x222108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 10));
    // 0x22210c: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x22210cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x222110: 0x206802d  daddu       $s0, $s0, $a2
    ctx->pc = 0x222110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 6));
    // 0x222114: 0x1560ffce  bnez        $t3, . + 4 + (-0x32 << 2)
    ctx->pc = 0x222114u;
    {
        const bool branch_taken_0x222114 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x222118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222114u;
        // 0x222118: 0x230882d  daddu       $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222114) {
            ctx->pc = 0x222050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222050;
        }
    }
    ctx->pc = 0x22211Cu;
    // 0x22211c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222120: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x222120u;
    SET_GPR_U32(ctx, 31, 0x222128u);
    ctx->pc = 0x222124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222120u;
    // 0x222124: 0x3405fff1  ori         $a1, $zero, 0xFFF1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x222120u, 0x222128u)) {
        return;
    }
    ctx->pc = 0x222128u;
label_222128:
    // 0x222128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22212c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22212cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222130: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x222130u;
    SET_GPR_U32(ctx, 31, 0x222138u);
    ctx->pc = 0x222134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222130u;
    // 0x222134: 0x3405fff1  ori         $a1, $zero, 0xFFF1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x222130u, 0x222138u)) {
        return;
    }
    ctx->pc = 0x222138u;
label_222138:
    // 0x222138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x222138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22213c: 0x2e6215b0  sltiu       $v0, $s3, 0x15B0
    ctx->pc = 0x22213cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5552) ? 1 : 0);
label_222140:
    // 0x222140: 0x5040ffc1  beql        $v0, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x222140u;
    {
        const bool branch_taken_0x222140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222140) {
            ctx->pc = 0x222144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222140u;
            // 0x222144: 0x2673ea50  addiu       $s3, $s3, -0x15B0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961744));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222048;
        }
    }
    ctx->pc = 0x222148u;
    // 0x222148: 0x1260004d  beqz        $s3, . + 4 + (0x4D << 2)
    ctx->pc = 0x222148u;
    {
        const bool branch_taken_0x222148 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222148u;
        // 0x22214c: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222148) {
            ctx->pc = 0x222280u;
            goto label_222280;
        }
    }
    ctx->pc = 0x222150u;
    // 0x222150: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x222150u;
    {
        const bool branch_taken_0x222150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222150) {
            ctx->pc = 0x222228u;
            goto label_222228;
        }
    }
    ctx->pc = 0x222158u;
label_222158:
    // 0x222158: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x222158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22215c: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x22215cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x222160: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x222160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x222164: 0x2e6b0010  sltiu       $t3, $s3, 0x10
    ctx->pc = 0x222164u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x222168: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x222168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x22216c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x22216cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x222170: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x222170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x222174: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x222174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x222178: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x222178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x22217c: 0x92450004  lbu         $a1, 0x4($s2)
    ctx->pc = 0x22217cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x222180: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x222180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x222184: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x222184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x222188: 0x204802d  daddu       $s0, $s0, $a0
    ctx->pc = 0x222188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x22218c: 0x92460006  lbu         $a2, 0x6($s2)
    ctx->pc = 0x22218cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x222190: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x222190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x222194: 0x92440007  lbu         $a0, 0x7($s2)
    ctx->pc = 0x222194u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x222198: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x222198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x22219c: 0x92470008  lbu         $a3, 0x8($s2)
    ctx->pc = 0x22219cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2221a0: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2221a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2221a4: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x2221a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x2221a8: 0x205802d  daddu       $s0, $s0, $a1
    ctx->pc = 0x2221a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 5));
    // 0x2221ac: 0x9248000a  lbu         $t0, 0xA($s2)
    ctx->pc = 0x2221acu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2221b0: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2221b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2221b4: 0x9245000b  lbu         $a1, 0xB($s2)
    ctx->pc = 0x2221b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x2221b8: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x2221b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2221bc: 0x9249000c  lbu         $t1, 0xC($s2)
    ctx->pc = 0x2221bcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2221c0: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2221c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2221c4: 0x9243000d  lbu         $v1, 0xD($s2)
    ctx->pc = 0x2221c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x2221c8: 0x206802d  daddu       $s0, $s0, $a2
    ctx->pc = 0x2221c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2221cc: 0x924a000e  lbu         $t2, 0xE($s2)
    ctx->pc = 0x2221ccu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x2221d0: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2221d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2221d4: 0x9246000f  lbu         $a2, 0xF($s2)
    ctx->pc = 0x2221d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    // 0x2221d8: 0x204802d  daddu       $s0, $s0, $a0
    ctx->pc = 0x2221d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2221dc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2221dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2221e0: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2221e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2221e4: 0x207802d  daddu       $s0, $s0, $a3
    ctx->pc = 0x2221e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 7));
    // 0x2221e8: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2221e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2221ec: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x2221ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2221f0: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2221f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2221f4: 0x208802d  daddu       $s0, $s0, $t0
    ctx->pc = 0x2221f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 8));
    // 0x2221f8: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2221f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2221fc: 0x205802d  daddu       $s0, $s0, $a1
    ctx->pc = 0x2221fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 5));
    // 0x222200: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x222200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x222204: 0x209802d  daddu       $s0, $s0, $t1
    ctx->pc = 0x222204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 9));
    // 0x222208: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x222208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x22220c: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x22220cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x222210: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x222210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x222214: 0x20a802d  daddu       $s0, $s0, $t2
    ctx->pc = 0x222214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 10));
    // 0x222218: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x222218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x22221c: 0x206802d  daddu       $s0, $s0, $a2
    ctx->pc = 0x22221cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 6));
    // 0x222220: 0x1160ffcd  beqz        $t3, . + 4 + (-0x33 << 2)
    ctx->pc = 0x222220u;
    {
        const bool branch_taken_0x222220 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x222224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222220u;
        // 0x222224: 0x230882d  daddu       $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222220) {
            ctx->pc = 0x222158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222158;
        }
    }
    ctx->pc = 0x222228u;
label_222228:
    // 0x222228: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x222228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22222c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x22222cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x222230: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x222230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x222234: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x222234u;
    {
        const bool branch_taken_0x222234 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x222238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222234u;
        // 0x222238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222234) {
            ctx->pc = 0x222264u;
            goto label_222264;
        }
    }
    ctx->pc = 0x22223Cu;
    // 0x22223c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22223cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x222240: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x222240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x222244: 0x0  nop
    ctx->pc = 0x222244u;
    // NOP
label_222248:
    // 0x222248: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x222248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22224c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x22224cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x222250: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x222250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x222254: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x222254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x222258: 0x1663fffb  bne         $s3, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x222258u;
    {
        const bool branch_taken_0x222258 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x22225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222258u;
        // 0x22225c: 0x230882d  daddu       $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222258) {
            ctx->pc = 0x222248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222248;
        }
    }
    ctx->pc = 0x222260u;
    // 0x222260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222264:
    // 0x222264: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x222264u;
    SET_GPR_U32(ctx, 31, 0x22226Cu);
    ctx->pc = 0x222268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222264u;
    // 0x222268: 0x3405fff1  ori         $a1, $zero, 0xFFF1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x222264u, 0x22226Cu)) {
        return;
    }
    ctx->pc = 0x22226Cu;
label_22226c:
    // 0x22226c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22226cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222274: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x222274u;
    SET_GPR_U32(ctx, 31, 0x22227Cu);
    ctx->pc = 0x222278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222274u;
    // 0x222278: 0x3405fff1  ori         $a1, $zero, 0xFFF1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x222274u, 0x22227Cu)) {
        return;
    }
    ctx->pc = 0x22227Cu;
label_22227c:
    // 0x22227c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22227cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_222280:
    // 0x222280: 0x111438  dsll        $v0, $s1, 16
    ctx->pc = 0x222280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 16);
label_222284:
    // 0x222284: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x222284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_222288:
    // 0x222288: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x222288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22228c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22228cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222290: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x222290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222294: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x222294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22229c: 0x3e00008  jr          $ra
    ctx->pc = 0x22229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2222A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22229Cu;
        // 0x2222a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22229Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2222A4u;
    // 0x2222a4: 0x0  nop
    ctx->pc = 0x2222a4u;
    // NOP
    // 0x2222a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2222a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2222ac: 0x0  nop
    ctx->pc = 0x2222acu;
    // NOP
    ctx->pc = 0x2222b0u;
}
