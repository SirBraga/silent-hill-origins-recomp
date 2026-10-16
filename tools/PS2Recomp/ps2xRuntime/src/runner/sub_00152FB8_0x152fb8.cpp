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

// Function: sub_00152FB8
// Address: 0x152fb8 - 0x153108
void sub_00152FB8_0x152fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152FB8_0x152fb8");
#endif

    switch (ctx->pc) {
        case 0x152fdcu: goto label_152fdc;
        case 0x153008u: goto label_153008;
        case 0x15301cu: goto label_15301c;
        case 0x153030u: goto label_153030;
        case 0x153050u: goto label_153050;
        case 0x153060u: goto label_153060;
        case 0x153074u: goto label_153074;
        case 0x153088u: goto label_153088;
        case 0x1530c4u: goto label_1530c4;
        case 0x1530e8u: goto label_1530e8;
        default: break;
    }

    ctx->pc = 0x152fb8u;

    // 0x152fb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x152fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x152fbc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x152fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x152fc0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x152fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x152fc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x152fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x152fcc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x152fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x152fd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152fd4: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x152FD4u;
    SET_GPR_U32(ctx, 31, 0x152FDCu);
    ctx->pc = 0x152FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FD4u;
    // 0x152fd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x152FD4u, 0x152FDCu)) {
        return;
    }
    ctx->pc = 0x152FDCu;
label_152fdc:
    // 0x152fdc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x152fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x152fe0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x152fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152fe4: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x152FE4u;
    {
        const bool branch_taken_0x152fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x152fe4) {
            ctx->pc = 0x152FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152FE4u;
            // 0x152fe8: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153064u;
            goto label_153064;
        }
    }
    ctx->pc = 0x152FECu;
    // 0x152fec: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x152fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x152ff0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x152FF0u;
    {
        const bool branch_taken_0x152ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FF0u;
        // 0x152ff4: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ff0) {
            ctx->pc = 0x153058u;
            goto label_153058;
        }
    }
    ctx->pc = 0x152FF8u;
    // 0x152ff8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x152ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x152ffc: 0x24532670  addiu       $s3, $v0, 0x2670
    ctx->pc = 0x152ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
    // 0x153000: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x153000u;
    SET_GPR_U32(ctx, 31, 0x153008u);
    ctx->pc = 0x153004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153000u;
    // 0x153004: 0x8e120084  lw          $s2, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x153000u, 0x153008u)) {
        return;
    }
    ctx->pc = 0x153008u;
label_153008:
    // 0x153008: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x153008u;
    {
        const bool branch_taken_0x153008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153008u;
        // 0x15300c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153008) {
            ctx->pc = 0x153038u;
            goto label_153038;
        }
    }
    ctx->pc = 0x153010u;
    // 0x153010: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x153010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153014: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x153014u;
    SET_GPR_U32(ctx, 31, 0x15301Cu);
    ctx->pc = 0x153018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153014u;
    // 0x153018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x153014u, 0x15301Cu)) {
        return;
    }
    ctx->pc = 0x15301Cu;
label_15301c:
    // 0x15301c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15301Cu;
    {
        const bool branch_taken_0x15301c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15301Cu;
        // 0x153020: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15301c) {
            ctx->pc = 0x153038u;
            goto label_153038;
        }
    }
    ctx->pc = 0x153024u;
    // 0x153024: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x153024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153028: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x153028u;
    SET_GPR_U32(ctx, 31, 0x153030u);
    ctx->pc = 0x15302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153028u;
    // 0x15302c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x153028u, 0x153030u)) {
        return;
    }
    ctx->pc = 0x153030u;
label_153030:
    // 0x153030: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x153030u;
    {
        const bool branch_taken_0x153030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153030u;
        // 0x153034: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153030) {
            ctx->pc = 0x15303Cu;
            goto label_15303c;
        }
    }
    ctx->pc = 0x153038u;
label_153038:
    // 0x153038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15303c:
    // 0x15303c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x153040: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153040u;
    {
        const bool branch_taken_0x153040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153040) {
            ctx->pc = 0x153058u;
            goto label_153058;
        }
    }
    ctx->pc = 0x153048u;
    // 0x153048: 0xc054c42  jal         func_153108
    ctx->pc = 0x153048u;
    SET_GPR_U32(ctx, 31, 0x153050u);
    ctx->pc = 0x15304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153048u;
    // 0x15304c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153108u, 0x153048u, 0x153050u)) {
        return;
    }
    ctx->pc = 0x153050u;
label_153050:
    // 0x153050: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x153050u;
    {
        const bool branch_taken_0x153050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153050u;
        // 0x153054: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153050) {
            ctx->pc = 0x153064u;
            goto label_153064;
        }
    }
    ctx->pc = 0x153058u;
label_153058:
    // 0x153058: 0xc054c42  jal         func_153108
    ctx->pc = 0x153058u;
    SET_GPR_U32(ctx, 31, 0x153060u);
    ctx->pc = 0x15305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153058u;
    // 0x15305c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153108u, 0x153058u, 0x153060u)) {
        return;
    }
    ctx->pc = 0x153060u;
label_153060:
    // 0x153060: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x153060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_153064:
    // 0x153064: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x153064u;
    {
        const bool branch_taken_0x153064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153064) {
            ctx->pc = 0x153068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153064u;
            // 0x153068: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1530ECu;
            goto label_1530ec;
        }
    }
    ctx->pc = 0x15306Cu;
    // 0x15306c: 0xc075da2  jal         func_1D7688
    ctx->pc = 0x15306Cu;
    SET_GPR_U32(ctx, 31, 0x153074u);
    ctx->pc = 0x1D7688u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7688u, 0x15306Cu, 0x153074u)) {
        return;
    }
    ctx->pc = 0x153074u;
label_153074:
    // 0x153074: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x153074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x153078: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153078u;
    {
        const bool branch_taken_0x153078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153078u;
        // 0x15307c: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153078) {
            ctx->pc = 0x15308Cu;
            goto label_15308c;
        }
    }
    ctx->pc = 0x153080u;
    // 0x153080: 0xc075d7e  jal         func_1D75F8
    ctx->pc = 0x153080u;
    SET_GPR_U32(ctx, 31, 0x153088u);
    ctx->pc = 0x1D75F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75F8u, 0x153080u, 0x153088u)) {
        return;
    }
    ctx->pc = 0x153088u;
label_153088:
    // 0x153088: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x153088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_15308c:
    // 0x15308c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x15308cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x153090: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x153090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936704)));
    // 0x153094: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153094u;
    {
        const bool branch_taken_0x153094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x153098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153094u;
        // 0x153098: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153094) {
            ctx->pc = 0x1530A8u;
            goto label_1530a8;
        }
    }
    ctx->pc = 0x15309Cu;
    // 0x15309c: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x15309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936728)));
    // 0x1530a0: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1530A0u;
    {
        const bool branch_taken_0x1530a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1530A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530A0u;
        // 0x1530a4: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530a0) {
            ctx->pc = 0x1530CCu;
            goto label_1530cc;
        }
    }
    ctx->pc = 0x1530A8u;
label_1530a8:
    // 0x1530a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1530a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1530ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1530acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530b0: 0xc6000088  lwc1        $f0, 0x88($s0)
    ctx->pc = 0x1530b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1530b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1530b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1530b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1530b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1530bc: 0xc054f0c  jal         func_153C30
    ctx->pc = 0x1530BCu;
    SET_GPR_U32(ctx, 31, 0x1530C4u);
    ctx->pc = 0x1530C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530BCu;
    // 0x1530c0: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x153C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153C30u, 0x1530BCu, 0x1530C4u)) {
        return;
    }
    ctx->pc = 0x1530C4u;
label_1530c4:
    // 0x1530c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1530C4u;
    {
        const bool branch_taken_0x1530c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1530C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530C4u;
        // 0x1530c8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530c4) {
            ctx->pc = 0x1530ECu;
            goto label_1530ec;
        }
    }
    ctx->pc = 0x1530CCu;
label_1530cc:
    // 0x1530cc: 0x8c438918  lw          $v1, -0x76E8($v0)
    ctx->pc = 0x1530ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936856)));
    // 0x1530d0: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1530D0u;
    {
        const bool branch_taken_0x1530d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1530d0) {
            ctx->pc = 0x1530D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1530D0u;
            // 0x1530d4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1530ECu;
            goto label_1530ec;
        }
    }
    ctx->pc = 0x1530D8u;
    // 0x1530d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1530d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1530dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1530dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530e0: 0xc054b26  jal         func_152C98
    ctx->pc = 0x1530E0u;
    SET_GPR_U32(ctx, 31, 0x1530E8u);
    ctx->pc = 0x1530E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530E0u;
    // 0x1530e4: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152C98u, 0x1530E0u, 0x1530E8u)) {
        return;
    }
    ctx->pc = 0x1530E8u;
label_1530e8:
    // 0x1530e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1530e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1530ec:
    // 0x1530ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1530ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1530f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1530f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1530f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1530f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1530f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1530f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1530fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1530FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530FCu;
        // 0x153100: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1530FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153104u;
    // 0x153104: 0x0  nop
    ctx->pc = 0x153104u;
    // NOP
    ctx->pc = 0x153108u;
}
