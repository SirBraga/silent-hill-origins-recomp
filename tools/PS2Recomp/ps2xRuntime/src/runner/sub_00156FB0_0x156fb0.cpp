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

// Function: sub_00156FB0
// Address: 0x156fb0 - 0x157160
void sub_00156FB0_0x156fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156FB0_0x156fb0");
#endif

    switch (ctx->pc) {
        case 0x157004u: goto label_157004;
        case 0x157018u: goto label_157018;
        case 0x157024u: goto label_157024;
        case 0x157048u: goto label_157048;
        case 0x157058u: goto label_157058;
        case 0x157068u: goto label_157068;
        case 0x157078u: goto label_157078;
        case 0x157098u: goto label_157098;
        case 0x1570a8u: goto label_1570a8;
        case 0x1570c8u: goto label_1570c8;
        case 0x1570e8u: goto label_1570e8;
        case 0x1570fcu: goto label_1570fc;
        case 0x157114u: goto label_157114;
        case 0x157120u: goto label_157120;
        case 0x157134u: goto label_157134;
        default: break;
    }

    ctx->pc = 0x156fb0u;

    // 0x156fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x156fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x156fb4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x156fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x156fb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x156fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x156fbc: 0x24678880  addiu       $a3, $v1, -0x7780
    ctx->pc = 0x156fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936704));
    // 0x156fc0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x156fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x156fc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x156fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fc8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x156fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x156fcc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x156fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x156fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156fd4: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x156fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x156fd8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x156fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x156fdc: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x156FDCu;
    {
        const bool branch_taken_0x156fdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x156FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FDCu;
        // 0x156fe0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fdc) {
            ctx->pc = 0x15702Cu;
            goto label_15702c;
        }
    }
    ctx->pc = 0x156FE4u;
    // 0x156fe4: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x156fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x156fe8: 0x52000057  beql        $s0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x156FE8u;
    {
        const bool branch_taken_0x156fe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x156fe8) {
            ctx->pc = 0x156FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156FE8u;
            // 0x156fec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157148u;
            goto label_157148;
        }
    }
    ctx->pc = 0x156FF0u;
    // 0x156ff0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x156ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x156ff4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x156FF4u;
    {
        const bool branch_taken_0x156ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ff4) {
            ctx->pc = 0x156FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156FF4u;
            // 0x156ff8: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157008u;
            goto label_157008;
        }
    }
    ctx->pc = 0x156FFCu;
    // 0x156ffc: 0xc05624c  jal         func_158930
    ctx->pc = 0x156FFCu;
    SET_GPR_U32(ctx, 31, 0x157004u);
    ctx->pc = 0x157000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FFCu;
    // 0x157000: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158930u, 0x156FFCu, 0x157004u)) {
        return;
    }
    ctx->pc = 0x157004u;
label_157004:
    // 0x157004: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x157004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_157008:
    // 0x157008: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x157008u;
    {
        const bool branch_taken_0x157008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x157008) {
            ctx->pc = 0x15700Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157008u;
            // 0x15700c: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15701Cu;
            goto label_15701c;
        }
    }
    ctx->pc = 0x157010u;
    // 0x157010: 0xc05624c  jal         func_158930
    ctx->pc = 0x157010u;
    SET_GPR_U32(ctx, 31, 0x157018u);
    ctx->pc = 0x157014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157010u;
    // 0x157014: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158930u, 0x157010u, 0x157018u)) {
        return;
    }
    ctx->pc = 0x157018u;
label_157018:
    // 0x157018: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x157018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15701c:
    // 0x15701c: 0xc055c58  jal         func_157160
    ctx->pc = 0x15701Cu;
    SET_GPR_U32(ctx, 31, 0x157024u);
    ctx->pc = 0x157020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15701Cu;
    // 0x157020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x157160u, 0x15701Cu, 0x157024u)) {
        return;
    }
    ctx->pc = 0x157024u;
label_157024:
    // 0x157024: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x157024u;
    {
        const bool branch_taken_0x157024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157024u;
        // 0x157028: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157024) {
            ctx->pc = 0x157148u;
            goto label_157148;
        }
    }
    ctx->pc = 0x15702Cu;
label_15702c:
    // 0x15702c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x15702cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x157030: 0x8c4346a0  lw          $v1, 0x46A0($v0)
    ctx->pc = 0x157030u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B46A0u));
    // 0x157034: 0x14c30026  bne         $a2, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x157034u;
    {
        const bool branch_taken_0x157034 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x157038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157034u;
        // 0x157038: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157034) {
            ctx->pc = 0x1570D0u;
            goto label_1570d0;
        }
    }
    ctx->pc = 0x15703Cu;
    // 0x15703c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x15703cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x157040: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x157040u;
    SET_GPR_U32(ctx, 31, 0x157048u);
    ctx->pc = 0x157044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157040u;
    // 0x157044: 0x8c44860c  lw          $a0, -0x79F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x157040u, 0x157048u)) {
        return;
    }
    ctx->pc = 0x157048u;
label_157048:
    // 0x157048: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x157048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15704c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x15704cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x157050: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x157050u;
    SET_GPR_U32(ctx, 31, 0x157058u);
    ctx->pc = 0x157054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157050u;
    // 0x157054: 0x8c448610  lw          $a0, -0x79F0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x157050u, 0x157058u)) {
        return;
    }
    ctx->pc = 0x157058u;
label_157058:
    // 0x157058: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x157058u;
    {
        const bool branch_taken_0x157058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157058u;
        // 0x15705c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157058) {
            ctx->pc = 0x157080u;
            goto label_157080;
        }
    }
    ctx->pc = 0x157060u;
    // 0x157060: 0xc080858  jal         func_202160
    ctx->pc = 0x157060u;
    SET_GPR_U32(ctx, 31, 0x157068u);
    ctx->pc = 0x157064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157060u;
    // 0x157064: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x157060u, 0x157068u)) {
        return;
    }
    ctx->pc = 0x157068u;
label_157068:
    // 0x157068: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x157068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15706c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15706cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157070: 0xc05620a  jal         func_158828
    ctx->pc = 0x157070u;
    SET_GPR_U32(ctx, 31, 0x157078u);
    ctx->pc = 0x157074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157070u;
    // 0x157074: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158828u, 0x157070u, 0x157078u)) {
        return;
    }
    ctx->pc = 0x157078u;
label_157078:
    // 0x157078: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157078u;
    {
        const bool branch_taken_0x157078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157078u;
        // 0x15707c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157078) {
            ctx->pc = 0x157088u;
            goto label_157088;
        }
    }
    ctx->pc = 0x157080u;
label_157080:
    // 0x157080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x157080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157084: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x157084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_157088:
    // 0x157088: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x157088u;
    {
        const bool branch_taken_0x157088 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157088u;
        // 0x15708c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157088) {
            ctx->pc = 0x1570B0u;
            goto label_1570b0;
        }
    }
    ctx->pc = 0x157090u;
    // 0x157090: 0xc080858  jal         func_202160
    ctx->pc = 0x157090u;
    SET_GPR_U32(ctx, 31, 0x157098u);
    ctx->pc = 0x157094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157090u;
    // 0x157094: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x157090u, 0x157098u)) {
        return;
    }
    ctx->pc = 0x157098u;
label_157098:
    // 0x157098: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x157098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15709c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15709cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1570a0: 0xc05620a  jal         func_158828
    ctx->pc = 0x1570A0u;
    SET_GPR_U32(ctx, 31, 0x1570A8u);
    ctx->pc = 0x1570A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570A0u;
    // 0x1570a4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158828u, 0x1570A0u, 0x1570A8u)) {
        return;
    }
    ctx->pc = 0x1570A8u;
label_1570a8:
    // 0x1570a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1570A8u;
    {
        const bool branch_taken_0x1570a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1570ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570A8u;
        // 0x1570ac: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570a8) {
            ctx->pc = 0x1570B4u;
            goto label_1570b4;
        }
    }
    ctx->pc = 0x1570B0u;
label_1570b0:
    // 0x1570b0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1570b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1570b4:
    // 0x1570b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1570b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1570b8: 0x26658880  addiu       $a1, $s3, -0x7780
    ctx->pc = 0x1570b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936704));
    // 0x1570bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1570bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1570c0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1570C0u;
    SET_GPR_U32(ctx, 31, 0x1570C8u);
    ctx->pc = 0x1570C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570C0u;
    // 0x1570c4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1570C0u, 0x1570C8u)) {
        return;
    }
    ctx->pc = 0x1570C8u;
label_1570c8:
    // 0x1570c8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1570C8u;
    {
        const bool branch_taken_0x1570c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1570CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570C8u;
        // 0x1570cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570c8) {
            ctx->pc = 0x157148u;
            goto label_157148;
        }
    }
    ctx->pc = 0x1570D0u;
label_1570d0:
    // 0x1570d0: 0x8c4346a8  lw          $v1, 0x46A8($v0)
    ctx->pc = 0x1570d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18088)));
    // 0x1570d4: 0x14c3001c  bne         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1570D4u;
    {
        const bool branch_taken_0x1570d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1570D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570D4u;
        // 0x1570d8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570d4) {
            ctx->pc = 0x157148u;
            goto label_157148;
        }
    }
    ctx->pc = 0x1570DCu;
    // 0x1570dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1570dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1570e0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1570E0u;
    SET_GPR_U32(ctx, 31, 0x1570E8u);
    ctx->pc = 0x1570E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570E0u;
    // 0x1570e4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1570E0u, 0x1570E8u)) {
        return;
    }
    ctx->pc = 0x1570E8u;
label_1570e8:
    // 0x1570e8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1570e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1570ec: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1570ECu;
    {
        const bool branch_taken_0x1570ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1570ec) {
            ctx->pc = 0x1570F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1570ECu;
            // 0x1570f0: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157104u;
            goto label_157104;
        }
    }
    ctx->pc = 0x1570F4u;
    // 0x1570f4: 0xc056232  jal         func_1588C8
    ctx->pc = 0x1570F4u;
    SET_GPR_U32(ctx, 31, 0x1570FCu);
    ctx->pc = 0x1570F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570F4u;
    // 0x1570f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1588C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1588C8u, 0x1570F4u, 0x1570FCu)) {
        return;
    }
    ctx->pc = 0x1570FCu;
label_1570fc:
    // 0x1570fc: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1570fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x157100: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x157100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_157104:
    // 0x157104: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157104u;
    {
        const bool branch_taken_0x157104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x157108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157104u;
        // 0x157108: 0x26500710  addiu       $s0, $s2, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157104) {
            ctx->pc = 0x15711Cu;
            goto label_15711c;
        }
    }
    ctx->pc = 0x15710Cu;
    // 0x15710c: 0xc056232  jal         func_1588C8
    ctx->pc = 0x15710Cu;
    SET_GPR_U32(ctx, 31, 0x157114u);
    ctx->pc = 0x157110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15710Cu;
    // 0x157110: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1588C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1588C8u, 0x15710Cu, 0x157114u)) {
        return;
    }
    ctx->pc = 0x157114u;
label_157114:
    // 0x157114: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x157114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x157118: 0x26500710  addiu       $s0, $s2, 0x710
    ctx->pc = 0x157118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1808));
label_15711c:
    // 0x15711c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x15711cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_157120:
    // 0x157120: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x157120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x157124: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x157124u;
    {
        const bool branch_taken_0x157124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157124) {
            ctx->pc = 0x157128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157124u;
            // 0x157128: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157138u;
            goto label_157138;
        }
    }
    ctx->pc = 0x15712Cu;
    // 0x15712c: 0xc05745c  jal         func_15D170
    ctx->pc = 0x15712Cu;
    SET_GPR_U32(ctx, 31, 0x157134u);
    ctx->pc = 0x157130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15712Cu;
    // 0x157130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15D170u, 0x15712Cu, 0x157134u)) {
        return;
    }
    ctx->pc = 0x157134u;
label_157134:
    // 0x157134: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x157134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_157138:
    // 0x157138: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x157138u;
    {
        const bool branch_taken_0x157138 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x15713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157138u;
        // 0x15713c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157138) {
            ctx->pc = 0x157120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157120;
        }
    }
    ctx->pc = 0x157140u;
    // 0x157140: 0xae400850  sw          $zero, 0x850($s2)
    ctx->pc = 0x157140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2128), GPR_U32(ctx, 0));
    // 0x157144: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x157144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_157148:
    // 0x157148: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x157148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15714c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15714cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157150: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x157150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157158: 0x3e00008  jr          $ra
    ctx->pc = 0x157158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157158u;
        // 0x15715c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157160u;
}
