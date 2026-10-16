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

// Function: sub_00244FC8
// Address: 0x244fc8 - 0x2451c8
void sub_00244FC8_0x244fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244FC8_0x244fc8");
#endif

    switch (ctx->pc) {
        case 0x245050u: goto label_245050;
        case 0x2450acu: goto label_2450ac;
        case 0x245184u: goto label_245184;
        default: break;
    }

    ctx->pc = 0x244fc8u;

    // 0x244fc8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x244fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x244fcc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x244fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x244fd0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x244fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x244fd4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x244fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x244fd8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x244fd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fdc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x244fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x244fe0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x244fe0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fe4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x244fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x244fe8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x244fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x244fec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x244fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x244ff0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x244ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x244ff4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x244ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x244ff8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x244ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x244ffc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x244ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x245000: 0x8c84416c  lw          $a0, 0x416C($a0)
    ctx->pc = 0x245000u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x245004: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x245004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x245008: 0x2a48821  addu        $s1, $s5, $a0
    ctx->pc = 0x245008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x24500c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24500cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x245010: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x245010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245014: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x245014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x245018: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x245018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24501c: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x24501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x245020: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x245020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x245024: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x245024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x245028: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x245028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x24502c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x24502cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x245030: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x245030u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x245034: 0x14800031  bnez        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x245034u;
    {
        const bool branch_taken_0x245034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245034u;
        // 0x245038: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245034) {
            ctx->pc = 0x2450FCu;
            goto label_2450fc;
        }
    }
    ctx->pc = 0x24503Cu;
    // 0x24503c: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x24503cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x245040: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x245040u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245044: 0x37defff0  ori         $fp, $fp, 0xFFF0
    ctx->pc = 0x245044u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65520);
    // 0x245048: 0x2632003c  addiu       $s2, $s1, 0x3C
    ctx->pc = 0x245048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x24504c: 0x0  nop
    ctx->pc = 0x24504cu;
    // NOP
label_245050:
    // 0x245050: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x245050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x245054: 0x3205000f  andi        $a1, $s0, 0xF
    ctx->pc = 0x245054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x245058: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x245058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x24505c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x24505cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x245060: 0x2e31807  srav        $v1, $v1, $s7
    ctx->pc = 0x245060u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
    // 0x245064: 0x2e49807  srav        $s3, $a0, $s7
    ctx->pc = 0x245064u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 23) & 0x1F));
    // 0x245068: 0x14a00017  bnez        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x245068u;
    {
        const bool branch_taken_0x245068 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245068u;
        // 0x24506c: 0x2e2b007  srav        $s6, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 23) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245068) {
            ctx->pc = 0x2450C8u;
            goto label_2450c8;
        }
    }
    ctx->pc = 0x245070u;
    // 0x245070: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x245070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x245074: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x245074u;
    {
        const bool branch_taken_0x245074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245074u;
        // 0x245078: 0x2d31018  mult        $v0, $s6, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245074) {
            ctx->pc = 0x2450CCu;
            goto label_2450cc;
        }
    }
    ctx->pc = 0x24507Cu;
    // 0x24507c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x245080: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x245080u;
    {
        const bool branch_taken_0x245080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245080u;
        // 0x245084: 0x2634003c  addiu       $s4, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245080) {
            ctx->pc = 0x2450B4u;
            goto label_2450b4;
        }
    }
    ctx->pc = 0x245088u;
    // 0x245088: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x245088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x24508c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24508Cu;
    {
        const bool branch_taken_0x24508c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24508Cu;
        // 0x245090: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24508c) {
            ctx->pc = 0x2450C0u;
            goto label_2450c0;
        }
    }
    ctx->pc = 0x245094u;
    // 0x245094: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x245094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245098: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x245098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x24509c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x24509cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2450a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450a4: 0xc0913b6  jal         func_244ED8
    ctx->pc = 0x2450A4u;
    SET_GPR_U32(ctx, 31, 0x2450ACu);
    ctx->pc = 0x2450A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2450A4u;
    // 0x2450a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x244ED8u, 0x2450A4u, 0x2450ACu)) {
        return;
    }
    ctx->pc = 0x2450ACu;
label_2450ac:
    // 0x2450ac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2450acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2450b0: 0x7ba90010  lq          $t1, 0x10($sp)
    ctx->pc = 0x2450b0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2450b4:
    // 0x2450b4: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x2450b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2450b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2450B8u;
    {
        const bool branch_taken_0x2450b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2450BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450B8u;
        // 0x2450bc: 0x2d31018  mult        $v0, $s6, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450b8) {
            ctx->pc = 0x2450CCu;
            goto label_2450cc;
        }
    }
    ctx->pc = 0x2450C0u;
label_2450c0:
    // 0x2450c0: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x2450c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x2450c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2450c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2450c8:
    // 0x2450c8: 0x2d31018  mult        $v0, $s6, $s3
    ctx->pc = 0x2450c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2450cc:
    // 0x2450cc: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x2450ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2450d0: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x2450d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2450d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2450D4u;
    {
        const bool branch_taken_0x2450d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450D4u;
        // 0x2450d8: 0x2602000f  addiu       $v0, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450d4) {
            ctx->pc = 0x2450E0u;
            goto label_2450e0;
        }
    }
    ctx->pc = 0x2450DCu;
    // 0x2450dc: 0x5e8024  and         $s0, $v0, $fp
    ctx->pc = 0x2450dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
label_2450e0:
    // 0x2450e0: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x2450e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x2450e4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2450e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2450e8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2450e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2450ec: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2450ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2450f0: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x2450f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2450f4: 0x1040ffd6  beqz        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2450F4u;
    {
        const bool branch_taken_0x2450f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450F4u;
        // 0x2450f8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450f4) {
            ctx->pc = 0x245050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245050;
        }
    }
    ctx->pc = 0x2450FCu;
label_2450fc:
    // 0x2450fc: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2450fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x245100: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x245100u;
    {
        const bool branch_taken_0x245100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245100) {
            ctx->pc = 0x245104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245100u;
            // 0x245104: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24519Cu;
            goto label_24519c;
        }
    }
    ctx->pc = 0x245108u;
    // 0x245108: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x245108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x24510c: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x24510cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x245110: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x245110u;
    {
        const bool branch_taken_0x245110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245110u;
        // 0x245114: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245110) {
            ctx->pc = 0x245198u;
            goto label_245198;
        }
    }
    ctx->pc = 0x245118u;
    // 0x245118: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x245118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24511c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24511cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245120: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x245120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x245124: 0x2442b5d0  addiu       $v0, $v0, -0x4A30
    ctx->pc = 0x245124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948304));
    // 0x245128: 0x2484b5b0  addiu       $a0, $a0, -0x4A50
    ctx->pc = 0x245128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948272));
    // 0x24512c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245130: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x245130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x245134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x245134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x245138: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x245138u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24513c: 0x52cc2  srl         $a1, $a1, 19
    ctx->pc = 0x24513cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 19));
    // 0x245140: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245144: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x245144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x245148: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x245148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24514c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24514Cu;
    {
        const bool branch_taken_0x24514c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x245150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24514Cu;
        // 0x245150: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24514c) {
            ctx->pc = 0x245164u;
            goto label_245164;
        }
    }
    ctx->pc = 0x245154u;
    // 0x245154: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x245154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x245158: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x245158u;
    {
        const bool branch_taken_0x245158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245158u;
        // 0x24515c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245158) {
            ctx->pc = 0x245164u;
            goto label_245164;
        }
    }
    ctx->pc = 0x245160u;
    // 0x245160: 0x45380a  movz        $a3, $v0, $a1
    ctx->pc = 0x245160u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2));
label_245164:
    // 0x245164: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x245164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x245168: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x245168u;
    {
        const bool branch_taken_0x245168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245168u;
        // 0x24516c: 0x92220034  lbu         $v0, 0x34($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245168) {
            ctx->pc = 0x24518Cu;
            goto label_24518c;
        }
    }
    ctx->pc = 0x245170u;
    // 0x245170: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x245170u;
    {
        const bool branch_taken_0x245170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245170u;
        // 0x245174: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245170) {
            ctx->pc = 0x245194u;
            goto label_245194;
        }
    }
    ctx->pc = 0x245178u;
    // 0x245178: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x245178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24517c: 0xc0913b6  jal         func_244ED8
    ctx->pc = 0x24517Cu;
    SET_GPR_U32(ctx, 31, 0x245184u);
    ctx->pc = 0x245180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24517Cu;
    // 0x245180: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x244ED8u, 0x24517Cu, 0x245184u)) {
        return;
    }
    ctx->pc = 0x245184u;
label_245184:
    // 0x245184: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x245184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x245188: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x245188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_24518c:
    // 0x24518c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24518Cu;
    {
        const bool branch_taken_0x24518c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24518Cu;
        // 0x245190: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24518c) {
            ctx->pc = 0x24519Cu;
            goto label_24519c;
        }
    }
    ctx->pc = 0x245194u;
label_245194:
    // 0x245194: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x245194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_245198:
    // 0x245198: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x245198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_24519c:
    // 0x24519c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x24519cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2451a0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2451a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2451a4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2451a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2451a8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2451a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2451ac: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2451acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2451b0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2451b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2451b4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2451b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2451b8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2451b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2451bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2451bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2451c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2451C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2451C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451C0u;
        // 0x2451c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2451C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2451C8u;
}
