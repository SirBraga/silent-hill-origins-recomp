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

// Function: sub_00245F78
// Address: 0x245f78 - 0x2464b8
void sub_00245F78_0x245f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245F78_0x245f78");
#endif

    switch (ctx->pc) {
        case 0x245ffcu: goto label_245ffc;
        case 0x24600cu: goto label_24600c;
        case 0x246028u: goto label_246028;
        case 0x2461e8u: goto label_2461e8;
        case 0x246208u: goto label_246208;
        case 0x246298u: goto label_246298;
        case 0x2463b8u: goto label_2463b8;
        case 0x2463d4u: goto label_2463d4;
        case 0x2463f0u: goto label_2463f0;
        default: break;
    }

    ctx->pc = 0x245f78u;

    // 0x245f78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x245f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x245f7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x245f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x245f80: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x245f80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x245f84: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x245f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x245f88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x245f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x245f8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x245f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f90: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x245f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x245f94: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x245f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x245f98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x245f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x245f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245fa0: 0x92020036  lbu         $v0, 0x36($s0)
    ctx->pc = 0x245fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x245fa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x245fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x245fa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245FA8u;
    {
        const bool branch_taken_0x245fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FA8u;
        // 0x245fac: 0xa0682d  daddu       $t5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fa8) {
            ctx->pc = 0x245FB8u;
            goto label_245fb8;
        }
    }
    ctx->pc = 0x245FB0u;
    // 0x245fb0: 0x55a0013a  bnel        $t5, $zero, . + 4 + (0x13A << 2)
    ctx->pc = 0x245FB0u;
    {
        const bool branch_taken_0x245fb0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x245fb0) {
            ctx->pc = 0x245FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245FB0u;
            // 0x245fb4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24649Cu;
            goto label_24649c;
        }
    }
    ctx->pc = 0x245FB8u;
label_245fb8:
    // 0x245fb8: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x245fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x245fbc: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x245FBCu;
    {
        const bool branch_taken_0x245fbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FBCu;
        // 0x245fc0: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fbc) {
            ctx->pc = 0x246030u;
            goto label_246030;
        }
    }
    ctx->pc = 0x245FC4u;
    // 0x245fc4: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x245fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x245fc8: 0x24511180  addiu       $s1, $v0, 0x1180
    ctx->pc = 0x245fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
    // 0x245fcc: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x245fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x245fd0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x245fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x245fd4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x245fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x245fd8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x245fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x245fdc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x245fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x245fe0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x245fe0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x245fe4: 0x54820013  bnel        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x245FE4u;
    {
        const bool branch_taken_0x245fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x245fe4) {
            ctx->pc = 0x245FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245FE4u;
            // 0x245fe8: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246034u;
            goto label_246034;
        }
    }
    ctx->pc = 0x245FECu;
    // 0x245fec: 0x55a0012b  bnel        $t5, $zero, . + 4 + (0x12B << 2)
    ctx->pc = 0x245FECu;
    {
        const bool branch_taken_0x245fec = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x245fec) {
            ctx->pc = 0x245FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245FECu;
            // 0x245ff0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24649Cu;
            goto label_24649c;
        }
    }
    ctx->pc = 0x245FF4u;
    // 0x245ff4: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x245FF4u;
    SET_GPR_U32(ctx, 31, 0x245FFCu);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x245FF4u, 0x245FFCu)) {
        return;
    }
    ctx->pc = 0x245FFCu;
label_245ffc:
    // 0x245ffc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x245ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246000: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x246004: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x246004u;
    SET_GPR_U32(ctx, 31, 0x24600Cu);
    ctx->pc = 0x246008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246004u;
    // 0x246008: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x246004u, 0x24600Cu)) {
        return;
    }
    ctx->pc = 0x24600Cu;
label_24600c:
    // 0x24600c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x24600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x246010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246014: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x246018: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246018u;
    {
        const bool branch_taken_0x246018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246018u;
        // 0x24601c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246018) {
            ctx->pc = 0x246028u;
            goto label_246028;
        }
    }
    ctx->pc = 0x246020u;
    // 0x246020: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x246020u;
    SET_GPR_U32(ctx, 31, 0x246028u);
    ctx->pc = 0x246024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246020u;
    // 0x246024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x246020u, 0x246028u)) {
        return;
    }
    ctx->pc = 0x246028u;
label_246028:
    // 0x246028: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x246028u;
    {
        const bool branch_taken_0x246028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246028u;
        // 0x24602c: 0xae330024  sw          $s3, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246028) {
            ctx->pc = 0x246498u;
            goto label_246498;
        }
    }
    ctx->pc = 0x246030u;
label_246030:
    // 0x246030: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x246030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
label_246034:
    // 0x246034: 0x54400119  bnel        $v0, $zero, . + 4 + (0x119 << 2)
    ctx->pc = 0x246034u;
    {
        const bool branch_taken_0x246034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246034) {
            ctx->pc = 0x246038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246034u;
            // 0x246038: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24649Cu;
            goto label_24649c;
        }
    }
    ctx->pc = 0x24603Cu;
    // 0x24603c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x24603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x246040: 0x24441180  addiu       $a0, $v0, 0x1180
    ctx->pc = 0x246040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
    // 0x246044: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x246044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246048: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x246048u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5C1190u));
    // 0x24604c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x24604cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5C118Cu));
    // 0x246050: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246050u;
    {
        const bool branch_taken_0x246050 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x246054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246050u;
        // 0x246054: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246050) {
            ctx->pc = 0x24606Cu;
            goto label_24606c;
        }
    }
    ctx->pc = 0x246058u;
    // 0x246058: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x246058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x24605c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x24605cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x246060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x246064: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x246064u;
    {
        const bool branch_taken_0x246064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246064u;
        // 0x246068: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246064) {
            ctx->pc = 0x246078u;
            goto label_246078;
        }
    }
    ctx->pc = 0x24606Cu;
label_24606c:
    // 0x24606c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x24606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x246070: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x246070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x246074: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x246074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_246078:
    // 0x246078: 0x26431180  addiu       $v1, $s2, 0x1180
    ctx->pc = 0x246078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
    // 0x24607c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24607cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x246080: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x246080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x246084: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x246088: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x246088u;
    {
        const bool branch_taken_0x246088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246088u;
        // 0x24608c: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246088) {
            ctx->pc = 0x2460BCu;
            goto label_2460bc;
        }
    }
    ctx->pc = 0x246090u;
    // 0x246090: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x246090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x246094: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x246094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x246098: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x246098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24609c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2460a0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2460a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2460a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2460a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2460a8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2460a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2460ac: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2460acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2460b0: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2460b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2460b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2460B4u;
    {
        const bool branch_taken_0x2460b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2460B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460B4u;
        // 0x2460b8: 0x26431180  addiu       $v1, $s2, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460b4) {
            ctx->pc = 0x2460D0u;
            goto label_2460d0;
        }
    }
    ctx->pc = 0x2460BCu;
label_2460bc:
    // 0x2460bc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x2460bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2460c0: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2460c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2460c4: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2460c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2460c8: 0x544000f4  bnel        $v0, $zero, . + 4 + (0xF4 << 2)
    ctx->pc = 0x2460C8u;
    {
        const bool branch_taken_0x2460c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2460c8) {
            ctx->pc = 0x2460CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2460C8u;
            // 0x2460cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24649Cu;
            goto label_24649c;
        }
    }
    ctx->pc = 0x2460D0u;
label_2460d0:
    // 0x2460d0: 0x11a00069  beqz        $t5, . + 4 + (0x69 << 2)
    ctx->pc = 0x2460D0u;
    {
        const bool branch_taken_0x2460d0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2460D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460D0u;
        // 0x2460d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460d0) {
            ctx->pc = 0x246278u;
            goto label_246278;
        }
    }
    ctx->pc = 0x2460D8u;
    // 0x2460d8: 0x26461180  addiu       $a2, $s2, 0x1180
    ctx->pc = 0x2460d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
    // 0x2460dc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2460dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2460e0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2460e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2460e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2460e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2460e8: 0x50450064  beql        $v0, $a1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2460E8u;
    {
        const bool branch_taken_0x2460e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2460e8) {
            ctx->pc = 0x2460ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2460E8u;
            // 0x2460ec: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24627Cu;
            goto label_24627c;
        }
    }
    ctx->pc = 0x2460F0u;
    // 0x2460f0: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x2460f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2460f4: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2460F4u;
    {
        const bool branch_taken_0x2460f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2460F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460F4u;
        // 0x2460f8: 0x8cc70008  lw          $a3, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460f4) {
            ctx->pc = 0x24611Cu;
            goto label_24611c;
        }
    }
    ctx->pc = 0x2460FCu;
    // 0x2460fc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2460fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x246100: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x246100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x246104: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x246104u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x246108: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x246108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24610c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246110: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x246110u;
    {
        const bool branch_taken_0x246110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246110) {
            ctx->pc = 0x246114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246110u;
            // 0x246114: 0xacc5002c  sw          $a1, 0x2C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24611Cu;
            goto label_24611c;
        }
    }
    ctx->pc = 0x246118u;
    // 0x246118: 0x26461180  addiu       $a2, $s2, 0x1180
    ctx->pc = 0x246118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
label_24611c:
    // 0x24611c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x24611cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x246120: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x246120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x246124: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x246124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x246128: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x246128u;
    {
        const bool branch_taken_0x246128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x24612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246128u;
        // 0x24612c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246128) {
            ctx->pc = 0x246148u;
            goto label_246148;
        }
    }
    ctx->pc = 0x246130u;
    // 0x246130: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x246130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x246134: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x246134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x246138: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x246138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24613c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246140: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x246140u;
    {
        const bool branch_taken_0x246140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246140) {
            ctx->pc = 0x246144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246140u;
            // 0x246144: 0xacc50030  sw          $a1, 0x30($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246148u;
            goto label_246148;
        }
    }
    ctx->pc = 0x246148u;
label_246148:
    // 0x246148: 0x26491180  addiu       $t1, $s2, 0x1180
    ctx->pc = 0x246148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
    // 0x24614c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x246150: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x246150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x246154: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x246158: 0x10820047  beq         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x246158u;
    {
        const bool branch_taken_0x246158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246158u;
        // 0x24615c: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246158) {
            ctx->pc = 0x246278u;
            goto label_246278;
        }
    }
    ctx->pc = 0x246160u;
    // 0x246160: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x246160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x246164: 0x1031026  xor         $v0, $t0, $v1
    ctx->pc = 0x246164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x246168: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x246168u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0));
    // 0x24616c: 0x5507000a  bnel        $t0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x24616Cu;
    {
        const bool branch_taken_0x24616c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x24616c) {
            ctx->pc = 0x246170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24616Cu;
            // 0x246170: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246198u;
            goto label_246198;
        }
    }
    ctx->pc = 0x246174u;
    // 0x246174: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x246174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x246178: 0x510200c8  beql        $t0, $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x246178u;
    {
        const bool branch_taken_0x246178 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x246178) {
            ctx->pc = 0x24617Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246178u;
            // 0x24617c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24649Cu;
            goto label_24649c;
        }
    }
    ctx->pc = 0x246180u;
    // 0x246180: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x246180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x246184: 0x110200c4  beq         $t0, $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x246184u;
    {
        const bool branch_taken_0x246184 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x246188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246184u;
        // 0x246188: 0x25070001  addiu       $a3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246184) {
            ctx->pc = 0x246498u;
            goto label_246498;
        }
    }
    ctx->pc = 0x24618Cu;
    // 0x24618c: 0xe31026  xor         $v0, $a3, $v1
    ctx->pc = 0x24618cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x246190: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x246190u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
    // 0x246194: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x246194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_246198:
    // 0x246198: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x246198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x24619c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x24619cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2461a0: 0xe55018  mult        $t2, $a3, $a1
    ctx->pc = 0x2461a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2461a4: 0x8d260014  lw          $a2, 0x14($t1)
    ctx->pc = 0x2461a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x2461a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2461a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2461ac: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x2461acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x2461b0: 0x246307ff  addiu       $v1, $v1, 0x7FF
    ctx->pc = 0x2461b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x2461b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2461b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2461b8: 0x240782d  daddu       $t7, $s2, $zero
    ctx->pc = 0x2461b8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2461bc: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x2461bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2461c0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2461c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2461c4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2461c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2461c8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2461c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2461cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2461ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2461d0: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x2461d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2461d4: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x2461d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2461d8: 0xd1602b  sltu        $t4, $a2, $s1
    ctx->pc = 0x2461d8u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2461dc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2461dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2461e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2461E0u;
    {
        const bool branch_taken_0x2461e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2461E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461E0u;
        // 0x2461e4: 0x222582b  sltu        $t3, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461e0) {
            ctx->pc = 0x246224u;
            goto label_246224;
        }
    }
    ctx->pc = 0x2461E8u;
label_2461e8:
    // 0x2461e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2461E8u;
    {
        const bool branch_taken_0x2461e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2461ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461E8u;
        // 0x2461ec: 0x25e31180  addiu       $v1, $t7, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461e8) {
            ctx->pc = 0x246208u;
            goto label_246208;
        }
    }
    ctx->pc = 0x2461F0u;
    // 0x2461f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2461f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2461f4: 0x50e200a9  beql        $a3, $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2461F4u;
    {
        const bool branch_taken_0x2461f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2461f4) {
            ctx->pc = 0x2461F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2461F4u;
            // 0x2461f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24649Cu;
            goto label_24649c;
        }
    }
    ctx->pc = 0x2461FCu;
    // 0x2461fc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2461fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x246200: 0x50e200a6  beql        $a3, $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x246200u;
    {
        const bool branch_taken_0x246200 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x246200) {
            ctx->pc = 0x246204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246200u;
            // 0x246204: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24649Cu;
            goto label_24649c;
        }
    }
    ctx->pc = 0x246208u;
label_246208:
    // 0x246208: 0x8d430010  lw          $v1, 0x10($t2)
    ctx->pc = 0x246208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x24620c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24620cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x246210: 0x8d440014  lw          $a0, 0x14($t2)
    ctx->pc = 0x246210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x246214: 0xe31826  xor         $v1, $a3, $v1
    ctx->pc = 0x246214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x246218: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x246218u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
    // 0x24621c: 0xee1018  mult        $v0, $a3, $t6
    ctx->pc = 0x24621cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x246220: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x246220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_246224:
    // 0x246224: 0x51070015  beql        $t0, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x246224u;
    {
        const bool branch_taken_0x246224 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x246224) {
            ctx->pc = 0x246228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246224u;
            // 0x246228: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24627Cu;
            goto label_24627c;
        }
    }
    ctx->pc = 0x24622Cu;
    // 0x24622c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x246230: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x246230u;
    {
        const bool branch_taken_0x246230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246230u;
        // 0x246234: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246230) {
            ctx->pc = 0x246208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246208;
        }
    }
    ctx->pc = 0x246238u;
    // 0x246238: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x246238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24623c: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x24623cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x246240: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x246240u;
    {
        const bool branch_taken_0x246240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246240u;
        // 0x246244: 0x89102b  sltu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246240) {
            ctx->pc = 0x246260u;
            goto label_246260;
        }
    }
    ctx->pc = 0x246248u;
    // 0x246248: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x246248u;
    {
        const bool branch_taken_0x246248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246248u;
        // 0x24624c: 0x91102b  sltu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246248) {
            ctx->pc = 0x246278u;
            goto label_246278;
        }
    }
    ctx->pc = 0x246250u;
    // 0x246250: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x246250u;
    {
        const bool branch_taken_0x246250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246250) {
            ctx->pc = 0x2461E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2461e8;
        }
    }
    ctx->pc = 0x246258u;
    // 0x246258: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x246258u;
    {
        const bool branch_taken_0x246258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246258u;
        // 0x24625c: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246258) {
            ctx->pc = 0x24627Cu;
            goto label_24627c;
        }
    }
    ctx->pc = 0x246260u;
label_246260:
    // 0x246260: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x246260u;
    {
        const bool branch_taken_0x246260 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x246260) {
            ctx->pc = 0x246270u;
            goto label_246270;
        }
    }
    ctx->pc = 0x246268u;
    // 0x246268: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x246268u;
    {
        const bool branch_taken_0x246268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246268) {
            ctx->pc = 0x2461E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2461e8;
        }
    }
    ctx->pc = 0x246270u;
label_246270:
    // 0x246270: 0x1180ffdd  beqz        $t4, . + 4 + (-0x23 << 2)
    ctx->pc = 0x246270u;
    {
        const bool branch_taken_0x246270 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x246270) {
            ctx->pc = 0x2461E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2461e8;
        }
    }
    ctx->pc = 0x246278u;
label_246278:
    // 0x246278: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x246278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_24627c:
    // 0x24627c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24627Cu;
    {
        const bool branch_taken_0x24627c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24627Cu;
        // 0x246280: 0x1a0302d  daddu       $a2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24627c) {
            ctx->pc = 0x24628Cu;
            goto label_24628c;
        }
    }
    ctx->pc = 0x246284u;
    // 0x246284: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x246284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x246288: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x246288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_24628c:
    // 0x24628c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24628cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246290: 0xc0915c4  jal         func_245710
    ctx->pc = 0x246290u;
    SET_GPR_U32(ctx, 31, 0x246298u);
    ctx->pc = 0x246294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246290u;
    // 0x246294: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x245710u, 0x246290u, 0x246298u)) {
        return;
    }
    ctx->pc = 0x246298u;
label_246298:
    // 0x246298: 0x26461180  addiu       $a2, $s2, 0x1180
    ctx->pc = 0x246298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
    // 0x24629c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24629cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2462a0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2462a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2462a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2462a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2462a8: 0x10a2006c  beq         $a1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2462A8u;
    {
        const bool branch_taken_0x2462a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2462ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462A8u;
        // 0x2462ac: 0x24a80001  addiu       $t0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462a8) {
            ctx->pc = 0x24645Cu;
            goto label_24645c;
        }
    }
    ctx->pc = 0x2462B0u;
    // 0x2462b0: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2462b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2462b4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2462b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2462b8: 0x1021026  xor         $v0, $t0, $v0
    ctx->pc = 0x2462b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x2462bc: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x2462bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0));
    // 0x2462c0: 0x15030013  bne         $t0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2462C0u;
    {
        const bool branch_taken_0x2462c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x2462C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462C0u;
        // 0x2462c4: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462c0) {
            ctx->pc = 0x246310u;
            goto label_246310;
        }
    }
    ctx->pc = 0x2462C8u;
    // 0x2462c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2462c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2462cc: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2462ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2462d0: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x2462d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2462d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2462d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2462d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2462d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2462dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2462DCu;
    {
        const bool branch_taken_0x2462dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2462E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462DCu;
        // 0x2462e0: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462dc) {
            ctx->pc = 0x2462F4u;
            goto label_2462f4;
        }
    }
    ctx->pc = 0x2462E4u;
    // 0x2462e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2462e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2462e8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x2462e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2462ec: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2462ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2462f0: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x2462f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_2462f4:
    // 0x2462f4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2462f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2462f8: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2462f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2462fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2462fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246300: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x246300u;
    {
        const bool branch_taken_0x246300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x246304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246300u;
        // 0x246304: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246300) {
            ctx->pc = 0x24630Cu;
            goto label_24630c;
        }
    }
    ctx->pc = 0x246308u;
    // 0x246308: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x246308u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_24630c:
    // 0x24630c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x24630cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_246310:
    // 0x246310: 0x26441180  addiu       $a0, $s2, 0x1180
    ctx->pc = 0x246310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
    // 0x246314: 0x1072818  mult        $a1, $t0, $a3
    ctx->pc = 0x246314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x246318: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x246318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x24631c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x24631cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x246320: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x246320u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246324: 0x34c6f800  ori         $a2, $a2, 0xF800
    ctx->pc = 0x246324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)63488);
    // 0x246328: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x246328u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24632c: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x24632cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x246330: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x246330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x246334: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x246334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x246338: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x246338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x24633c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x246340: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x246340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x246344: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x246344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x246348: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x246348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24634c: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x24634cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x246350: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x246350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x246354: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x246354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x246358: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x246358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x24635c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x24635cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x246360: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x246360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x246364: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x246364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x246368: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x246368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24636c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x24636cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x246370: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x246370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x246374: 0xc72818  mult        $a1, $a2, $a3
    ctx->pc = 0x246374u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x246378: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x246378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x24637c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x24637cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x246380: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x246380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x246384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x246388: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x246388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24638c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x24638cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x246390: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x246390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x246394: 0xb1502b  sltu        $t2, $a1, $s1
    ctx->pc = 0x246394u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x246398: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x246398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24639c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24639Cu;
    {
        const bool branch_taken_0x24639c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24639Cu;
        // 0x2463a0: 0x223382b  sltu        $a3, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24639c) {
            ctx->pc = 0x2463ECu;
            goto label_2463ec;
        }
    }
    ctx->pc = 0x2463A4u;
    // 0x2463a4: 0x1106002b  beq         $t0, $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x2463A4u;
    {
        const bool branch_taken_0x2463a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x2463A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463A4u;
        // 0x2463a8: 0x26421180  addiu       $v0, $s2, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463a4) {
            ctx->pc = 0x246454u;
            goto label_246454;
        }
    }
    ctx->pc = 0x2463ACu;
    // 0x2463ac: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2463ACu;
    {
        const bool branch_taken_0x2463ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463ACu;
        // 0x2463b0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463ac) {
            ctx->pc = 0x246434u;
            goto label_246434;
        }
    }
    ctx->pc = 0x2463B4u;
    // 0x2463b4: 0x0  nop
    ctx->pc = 0x2463b4u;
    // NOP
label_2463b8:
    // 0x2463b8: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2463B8u;
    {
        const bool branch_taken_0x2463b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2463b8) {
            ctx->pc = 0x2463C8u;
            goto label_2463c8;
        }
    }
    ctx->pc = 0x2463C0u;
    // 0x2463c0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2463C0u;
    {
        const bool branch_taken_0x2463c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2463c0) {
            ctx->pc = 0x2463C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2463C0u;
            // 0x2463c4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2463D4u;
            goto label_2463d4;
        }
    }
    ctx->pc = 0x2463C8u;
label_2463c8:
    // 0x2463c8: 0x15400022  bnez        $t2, . + 4 + (0x22 << 2)
    ctx->pc = 0x2463C8u;
    {
        const bool branch_taken_0x2463c8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2463CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463C8u;
        // 0x2463cc: 0x26421180  addiu       $v0, $s2, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463c8) {
            ctx->pc = 0x246454u;
            goto label_246454;
        }
    }
    ctx->pc = 0x2463D0u;
    // 0x2463d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2463d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2463d4:
    // 0x2463d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2463D4u;
    {
        const bool branch_taken_0x2463d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463D4u;
        // 0x2463d8: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463d4) {
            ctx->pc = 0x2463ECu;
            goto label_2463ec;
        }
    }
    ctx->pc = 0x2463DCu;
    // 0x2463dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2463dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2463e0: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x2463e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2463e4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2463e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2463e8: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x2463e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_2463ec:
    // 0x2463ec: 0x25841180  addiu       $a0, $t4, 0x1180
    ctx->pc = 0x2463ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4480));
label_2463f0:
    // 0x2463f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2463f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2463f4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2463f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2463f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2463f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2463fc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2463FCu;
    {
        const bool branch_taken_0x2463fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x246400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463FCu;
        // 0x246400: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463fc) {
            ctx->pc = 0x246408u;
            goto label_246408;
        }
    }
    ctx->pc = 0x246404u;
    // 0x246404: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x246404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_246408:
    // 0x246408: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x246408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24640c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x24640cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x246410: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x246410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x246414: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x246414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x246418: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x246418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24641c: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x24641Cu;
    {
        const bool branch_taken_0x24641c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24641c) {
            ctx->pc = 0x246420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24641Cu;
            // 0x246420: 0x25841180  addiu       $a0, $t4, 0x1180 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4480));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2463F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2463f0;
        }
    }
    ctx->pc = 0x246424u;
    // 0x246424: 0x8da20008  lw          $v0, 0x8($t5)
    ctx->pc = 0x246424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x246428: 0x1102000a  beq         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x246428u;
    {
        const bool branch_taken_0x246428 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x24642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246428u;
        // 0x24642c: 0x26421180  addiu       $v0, $s2, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246428) {
            ctx->pc = 0x246454u;
            goto label_246454;
        }
    }
    ctx->pc = 0x246430u;
    // 0x246430: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x246430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_246434:
    // 0x246434: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x246434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x246438: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x246438u;
    {
        const bool branch_taken_0x246438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246438u;
        // 0x24643c: 0x69102b  sltu        $v0, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246438) {
            ctx->pc = 0x2463B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2463b8;
        }
    }
    ctx->pc = 0x246440u;
    // 0x246440: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246440u;
    {
        const bool branch_taken_0x246440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246440u;
        // 0x246444: 0x71102b  sltu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246440) {
            ctx->pc = 0x246450u;
            goto label_246450;
        }
    }
    ctx->pc = 0x246448u;
    // 0x246448: 0x5040ffe2  beql        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x246448u;
    {
        const bool branch_taken_0x246448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246448) {
            ctx->pc = 0x24644Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246448u;
            // 0x24644c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2463D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2463d4;
        }
    }
    ctx->pc = 0x246450u;
label_246450:
    // 0x246450: 0x26421180  addiu       $v0, $s2, 0x1180
    ctx->pc = 0x246450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
label_246454:
    // 0x246454: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x246454u;
    {
        const bool branch_taken_0x246454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246454u;
        // 0x246458: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246454) {
            ctx->pc = 0x246498u;
            goto label_246498;
        }
    }
    ctx->pc = 0x24645Cu;
label_24645c:
    // 0x24645c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x24645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x246460: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x246460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x246464: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x246464u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x246468: 0x3484f800  ori         $a0, $a0, 0xF800
    ctx->pc = 0x246468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63488);
    // 0x24646c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x24646cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x246470: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x246470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x246474: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x246474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x246478: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x246478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x24647c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x24647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x246480: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x246480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x246484: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x246484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x246488: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x246488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x24648c: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x24648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x246490: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x246490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x246494: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x246494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_246498:
    // 0x246498: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x246498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24649c:
    // 0x24649c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x24649cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2464a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2464a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2464a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2464a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2464a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2464a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2464ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2464ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2464B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464ACu;
        // 0x2464b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2464ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2464B4u;
    // 0x2464b4: 0x0  nop
    ctx->pc = 0x2464b4u;
    // NOP
    ctx->pc = 0x2464b8u;
}
