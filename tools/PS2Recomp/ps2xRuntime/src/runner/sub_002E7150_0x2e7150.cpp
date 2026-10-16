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

// Function: sub_002E7150
// Address: 0x2e7150 - 0x2e74c0
void sub_002E7150_0x2e7150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7150_0x2e7150");
#endif

    switch (ctx->pc) {
        case 0x2e71a8u: goto label_2e71a8;
        case 0x2e71c4u: goto label_2e71c4;
        case 0x2e7268u: goto label_2e7268;
        case 0x2e7298u: goto label_2e7298;
        case 0x2e72b0u: goto label_2e72b0;
        case 0x2e7308u: goto label_2e7308;
        case 0x2e7334u: goto label_2e7334;
        case 0x2e735cu: goto label_2e735c;
        case 0x2e7398u: goto label_2e7398;
        case 0x2e73b0u: goto label_2e73b0;
        case 0x2e741cu: goto label_2e741c;
        case 0x2e7424u: goto label_2e7424;
        case 0x2e746cu: goto label_2e746c;
        case 0x2e7488u: goto label_2e7488;
        default: break;
    }

    ctx->pc = 0x2e7150u;

    // 0x2e7150: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e7150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2e7154: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2e7154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2e7158: 0x3a9480a  movz        $t1, $sp, $t1
    ctx->pc = 0x2e7158u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 29));
    // 0x2e715c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2e715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2e7160: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e7160u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7164: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2e7164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2e7168: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2e7168u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e716c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2e716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2e7170: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e7170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e7174: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2e7174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2e7178: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2e7178u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e717c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2e717cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2e7180: 0x24a5f100  addiu       $a1, $a1, -0xF00
    ctx->pc = 0x2e7180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963456));
    // 0x2e7184: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2e7184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2e7188: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e7188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e718c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2e718cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2e7190: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e7190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e7194: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2e7194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2e7198: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2e7198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x2e719c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x2e719cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x2e71a0: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2E71A0u;
    SET_GPR_U32(ctx, 31, 0x2E71A8u);
    ctx->pc = 0x2E71A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E71A0u;
    // 0x2e71a4: 0xafa9000c  sw          $t1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2E71A0u, 0x2E71A8u)) {
        return;
    }
    ctx->pc = 0x2E71A8u;
label_2e71a8:
    // 0x2e71a8: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2E71A8u;
    {
        const bool branch_taken_0x2e71a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E71ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71A8u;
        // 0x2e71ac: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71a8) {
            ctx->pc = 0x2E742Cu;
            goto label_2e742c;
        }
    }
    ctx->pc = 0x2E71B0u;
    // 0x2e71b0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2e71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e71b4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e71b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e71b8: 0x24a5f0f0  addiu       $a1, $a1, -0xF10
    ctx->pc = 0x2e71b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963440));
    // 0x2e71bc: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2E71BCu;
    SET_GPR_U32(ctx, 31, 0x2E71C4u);
    ctx->pc = 0x2E71C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E71BCu;
    // 0x2e71c0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2E71BCu, 0x2E71C4u)) {
        return;
    }
    ctx->pc = 0x2E71C4u;
label_2e71c4:
    // 0x2e71c4: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2E71C4u;
    {
        const bool branch_taken_0x2e71c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E71C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71C4u;
        // 0x2e71c8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71c4) {
            ctx->pc = 0x2E742Cu;
            goto label_2e742c;
        }
    }
    ctx->pc = 0x2E71CCu;
    // 0x2e71cc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2e71ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e71d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e71d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e71d4: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x2e71d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e71d8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2e71d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2e71dc: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2e71dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e71e0: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2e71e0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e71e4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E71E4u;
    {
        const bool branch_taken_0x2e71e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e71e4) {
            ctx->pc = 0x2E71E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E71E4u;
            // 0x2e71e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E71ECu;
            goto label_2e71ec;
        }
    }
    ctx->pc = 0x2E71ECu;
label_2e71ec:
    // 0x2e71ec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2e71ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2e71f0: 0x34c6fff0  ori         $a2, $a2, 0xFFF0
    ctx->pc = 0x2e71f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65520);
    // 0x2e71f4: 0x1812  mflo        $v1
    ctx->pc = 0x2e71f4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2e71f8: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2e71f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2e71fc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2e71fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2e7200: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e7200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e7204: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2e7204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2e7208: 0x2012  mflo        $a0
    ctx->pc = 0x2e7208u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2e720c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e720cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7210: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2e7210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2e7214: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2e7214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e7218: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2e7218u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e721c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2e721cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2e7220: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x2e7220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e7224: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e7224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7228: 0x1012  mflo        $v0
    ctx->pc = 0x2e7228u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e722c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2e722cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2e7230: 0x46a824  and         $s5, $v0, $a2
    ctx->pc = 0x2e7230u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2e7234: 0x2a31018  mult        $v0, $s5, $v1
    ctx->pc = 0x2e7234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e7238: 0x13c00093  beqz        $fp, . + 4 + (0x93 << 2)
    ctx->pc = 0x2E7238u;
    {
        const bool branch_taken_0x2e7238 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7238u;
        // 0x2e723c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7238) {
            ctx->pc = 0x2E7488u;
            goto label_2e7488;
        }
    }
    ctx->pc = 0x2E7240u;
    // 0x2e7240: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e7240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7244: 0x9062000d  lbu         $v0, 0xD($v1)
    ctx->pc = 0x2e7244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x2e7248: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e7248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e724c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E724Cu;
    {
        const bool branch_taken_0x2e724c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E724Cu;
        // 0x2e7250: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e724c) {
            ctx->pc = 0x2E72F0u;
            goto label_2e72f0;
        }
    }
    ctx->pc = 0x2E7254u;
    // 0x2e7254: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2e7254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e7258: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2e7258u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x2e725c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7260: 0xc0b708c  jal         func_2DC230
    ctx->pc = 0x2E7260u;
    SET_GPR_U32(ctx, 31, 0x2E7268u);
    ctx->pc = 0x2E7264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7260u;
    // 0x2e7264: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC230u, 0x2E7260u, 0x2E7268u)) {
        return;
    }
    ctx->pc = 0x2E7268u;
label_2e7268:
    // 0x2e7268: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2e7268u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e726c: 0x12c00087  beqz        $s6, . + 4 + (0x87 << 2)
    ctx->pc = 0x2E726Cu;
    {
        const bool branch_taken_0x2e726c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E726Cu;
        // 0x2e7270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e726c) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E7274u;
    // 0x2e7274: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e7274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e7278: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x2e7278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e727c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2e727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2e7280: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e7280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7284: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x2e7284u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x2e7288: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E7288u;
    {
        const bool branch_taken_0x2e7288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7288u;
        // 0x2e728c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7288) {
            ctx->pc = 0x2E72F4u;
            goto label_2e72f4;
        }
    }
    ctx->pc = 0x2E7290u;
    // 0x2e7290: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2e7290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2e7294: 0x0  nop
    ctx->pc = 0x2e7294u;
    // NOP
label_2e7298:
    // 0x2e7298: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2e7298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e729c: 0x2e28821  addu        $s1, $s7, $v0
    ctx->pc = 0x2e729cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2e72a0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2e72a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e72a4: 0x2721018  mult        $v0, $s3, $s2
    ctx->pc = 0x2e72a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e72a8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E72A8u;
    {
        const bool branch_taken_0x2e72a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72A8u;
        // 0x2e72ac: 0x568021  addu        $s0, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72a8) {
            ctx->pc = 0x2E72D0u;
            goto label_2e72d0;
        }
    }
    ctx->pc = 0x2E72B0u;
label_2e72b0:
    // 0x2e72b0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2e72b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e72b4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2e72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2e72b8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2e72b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e72bc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2e72bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2e72c0: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x2e72c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e72c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e72c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e72c8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E72C8u;
    {
        const bool branch_taken_0x2e72c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72C8u;
        // 0x2e72cc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72c8) {
            ctx->pc = 0x2E72B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e72b0;
        }
    }
    ctx->pc = 0x2E72D0u;
label_2e72d0:
    // 0x2e72d0: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x2e72d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e72d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e72d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e72d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e72d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e72dc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2e72dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e72e0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2E72E0u;
    {
        const bool branch_taken_0x2e72e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72E0u;
        // 0x2e72e4: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72e0) {
            ctx->pc = 0x2E7298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7298;
        }
    }
    ctx->pc = 0x2E72E8u;
    // 0x2e72e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E72E8u;
    {
        const bool branch_taken_0x2e72e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72E8u;
        // 0x2e72ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72e8) {
            ctx->pc = 0x2E72F4u;
            goto label_2e72f4;
        }
    }
    ctx->pc = 0x2E72F0u;
label_2e72f0:
    // 0x2e72f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e72f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e72f4:
    // 0x2e72f4: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E72F4u;
    {
        const bool branch_taken_0x2e72f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72F4u;
        // 0x2e72f8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72f4) {
            ctx->pc = 0x2E736Cu;
            goto label_2e736c;
        }
    }
    ctx->pc = 0x2E72FCu;
    // 0x2e72fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2e72fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7300: 0x2c32021  addu        $a0, $s6, $v1
    ctx->pc = 0x2e7300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2e7304: 0x0  nop
    ctx->pc = 0x2e7304u;
    // NOP
label_2e7308:
    // 0x2e7308: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2e7308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e730c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e730cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7310: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e7310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7314: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e7314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e7318: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e7318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e731c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e731cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7320: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2e7320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2e7324: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x2e7324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2e7328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e732c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E732Cu;
    SET_GPR_U32(ctx, 31, 0x2E7334u);
    ctx->pc = 0x2E7330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E732Cu;
    // 0x2e7330: 0x2f5b821  addu        $s7, $s7, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E732Cu, 0x2E7334u)) {
        return;
    }
    ctx->pc = 0x2E7334u;
label_2e7334:
    // 0x2e7334: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2e7334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e7338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e733c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2e733cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e7340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e7340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7344: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x2e7344u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e7348: 0x2672823  subu        $a1, $s3, $a3
    ctx->pc = 0x2e7348u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2e734c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e734cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7350: 0x2a94823  subu        $t1, $s5, $t1
    ctx->pc = 0x2e7350u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
    // 0x2e7354: 0xc0b9fca  jal         func_2E7F28
    ctx->pc = 0x2E7354u;
    SET_GPR_U32(ctx, 31, 0x2E735Cu);
    ctx->pc = 0x2E7358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7354u;
    // 0x2e7358: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E7F28u, 0x2E7354u, 0x2E735Cu)) {
        return;
    }
    ctx->pc = 0x2E735Cu;
label_2e735c:
    // 0x2e735c: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x2e735cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e7360: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x2e7360u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e7364: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E7364u;
    {
        const bool branch_taken_0x2e7364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7364u;
        // 0x2e7368: 0x2332021  addu        $a0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7364) {
            ctx->pc = 0x2E7308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7308;
        }
    }
    ctx->pc = 0x2E736Cu;
label_2e736c:
    // 0x2e736c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7370: 0x9062000d  lbu         $v0, 0xD($v1)
    ctx->pc = 0x2e7370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x2e7374: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e7374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e7378: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2E7378u;
    {
        const bool branch_taken_0x2e7378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7378u;
        // 0x2e737c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7378) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E7380u;
    // 0x2e7380: 0x9062000d  lbu         $v0, 0xD($v1)
    ctx->pc = 0x2e7380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x2e7384: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e7384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7388: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E7388u;
    {
        const bool branch_taken_0x2e7388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7388u;
        // 0x2e738c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7388) {
            ctx->pc = 0x2E7408u;
            goto label_2e7408;
        }
    }
    ctx->pc = 0x2E7390u;
    // 0x2e7390: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2e7390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2e7394: 0x0  nop
    ctx->pc = 0x2e7394u;
    // NOP
label_2e7398:
    // 0x2e7398: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2e7398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e739c: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x2e739cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2e73a0: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x2e73a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e73a4: 0x2b21018  mult        $v0, $s5, $s2
    ctx->pc = 0x2e73a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e73a8: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E73A8u;
    {
        const bool branch_taken_0x2e73a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73A8u;
        // 0x2e73ac: 0x5e8821  addu        $s1, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73a8) {
            ctx->pc = 0x2E73ECu;
            goto label_2e73ec;
        }
    }
    ctx->pc = 0x2E73B0u;
label_2e73b0:
    // 0x2e73b0: 0x6a250007  ldl         $a1, 0x7($s1)
    ctx->pc = 0x2e73b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2e73b4: 0x6e250000  ldr         $a1, 0x0($s1)
    ctx->pc = 0x2e73b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2e73b8: 0x6a26000f  ldl         $a2, 0xF($s1)
    ctx->pc = 0x2e73b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2e73bc: 0x6e260008  ldr         $a2, 0x8($s1)
    ctx->pc = 0x2e73bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2e73c0: 0xb2050007  sdl         $a1, 0x7($s0)
    ctx->pc = 0x2e73c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e73c4: 0xb6050000  sdr         $a1, 0x0($s0)
    ctx->pc = 0x2e73c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e73c8: 0xb206000f  sdl         $a2, 0xF($s0)
    ctx->pc = 0x2e73c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e73cc: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2e73ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2e73d0: 0xb6060008  sdr         $a2, 0x8($s0)
    ctx->pc = 0x2e73d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e73d4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2e73d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e73d8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2e73d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e73dc: 0x90a2000d  lbu         $v0, 0xD($a1)
    ctx->pc = 0x2e73dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
    // 0x2e73e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e73e4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E73E4u;
    {
        const bool branch_taken_0x2e73e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E73E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73E4u;
        // 0x2e73e8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73e4) {
            ctx->pc = 0x2E73B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e73b0;
        }
    }
    ctx->pc = 0x2E73ECu;
label_2e73ec:
    // 0x2e73ec: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2e73ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e73f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e73f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e73f4: 0x90c2000d  lbu         $v0, 0xD($a2)
    ctx->pc = 0x2e73f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
    // 0x2e73f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e73f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e73fc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2e73fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e7400: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2E7400u;
    {
        const bool branch_taken_0x2e7400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7400u;
        // 0x2e7404: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7400) {
            ctx->pc = 0x2E7398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7398;
        }
    }
    ctx->pc = 0x2E7408u;
label_2e7408:
    // 0x2e7408: 0x2a30018  mult        $zero, $s5, $v1
    ctx->pc = 0x2e7408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e740c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e740cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7410: 0x3012  mflo        $a2
    ctx->pc = 0x2e7410u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2e7414: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2E7414u;
    SET_GPR_U32(ctx, 31, 0x2E741Cu);
    ctx->pc = 0x2E7418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7414u;
    // 0x2e7418: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E7414u, 0x2E741Cu)) {
        return;
    }
    ctx->pc = 0x2E741Cu;
label_2e741c:
    // 0x2e741c: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E741Cu;
    SET_GPR_U32(ctx, 31, 0x2E7424u);
    ctx->pc = 0x2E7420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E741Cu;
    // 0x2e7420: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E741Cu, 0x2E7424u)) {
        return;
    }
    ctx->pc = 0x2E7424u;
label_2e7424:
    // 0x2e7424: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E7424u;
    {
        const bool branch_taken_0x2e7424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7424u;
        // 0x2e7428: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7424) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E742Cu;
label_2e742c:
    // 0x2e742c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2e742cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e7430: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2e7430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2e7434: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e7434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7438: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x2e7438u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e743c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2e743cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2e7440: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2e7440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e7444: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2e7444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2e7448: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e7448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e744c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2e744cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e7450: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2e7450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2e7454: 0x13c0000c  beqz        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x2E7454u;
    {
        const bool branch_taken_0x2e7454 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7454u;
        // 0x2e7458: 0x443023  subu        $a2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7454) {
            ctx->pc = 0x2E7488u;
            goto label_2e7488;
        }
    }
    ctx->pc = 0x2E745Cu;
    // 0x2e745c: 0x3c4f021  addu        $fp, $fp, $a0
    ctx->pc = 0x2e745cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2e7460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7464: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E7464u;
    SET_GPR_U32(ctx, 31, 0x2E746Cu);
    ctx->pc = 0x2E7468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7464u;
    // 0x2e7468: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E7464u, 0x2E746Cu)) {
        return;
    }
    ctx->pc = 0x2E746Cu;
label_2e746c:
    // 0x2e746c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2e746cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e7470: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2e7470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7474: 0x2e6b821  addu        $s7, $s7, $a2
    ctx->pc = 0x2e7474u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x2e7478: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x2e7478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e747c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2e747cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7480: 0xc0ba03c  jal         func_2E80F0
    ctx->pc = 0x2E7480u;
    SET_GPR_U32(ctx, 31, 0x2E7488u);
    ctx->pc = 0x2E7484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7480u;
    // 0x2e7484: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E80F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E80F0u, 0x2E7480u, 0x2E7488u)) {
        return;
    }
    ctx->pc = 0x2E7488u;
label_2e7488:
    // 0x2e7488: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e7488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2e748c:
    // 0x2e748c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2e748cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e7490: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2e7490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e7494: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2e7494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e7498: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2e7498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e749c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2e749cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e74a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e74a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e74a4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2e74a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e74a8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2e74a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e74ac: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2e74acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e74b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e74b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e74b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E74B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74B4u;
        // 0x2e74b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E74B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E74BCu;
    // 0x2e74bc: 0x0  nop
    ctx->pc = 0x2e74bcu;
    // NOP
    ctx->pc = 0x2e74c0u;
}
