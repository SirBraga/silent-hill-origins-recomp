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

// Function: sub_00220DE8
// Address: 0x220de8 - 0x221638
void sub_00220DE8_0x220de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220DE8_0x220de8");
#endif

    switch (ctx->pc) {
        case 0x220e40u: goto label_220e40;
        case 0x220f38u: goto label_220f38;
        case 0x2210dcu: goto label_2210dc;
        case 0x2210f8u: goto label_2210f8;
        case 0x221108u: goto label_221108;
        case 0x221120u: goto label_221120;
        case 0x221228u: goto label_221228;
        case 0x22130cu: goto label_22130c;
        case 0x221440u: goto label_221440;
        case 0x221454u: goto label_221454;
        case 0x221464u: goto label_221464;
        case 0x22147cu: goto label_22147c;
        default: break;
    }

    ctx->pc = 0x220de8u;

    // 0x220de8: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x220de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x220dec: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x220decu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220df0: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x220df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
    // 0x220df4: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x220df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
    // 0x220df8: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x220df8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220dfc: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x220dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
    // 0x220e00: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x220e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
    // 0x220e04: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x220e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
    // 0x220e08: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x220e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
    // 0x220e0c: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x220e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
    // 0x220e10: 0x7fb601a0  sq          $s6, 0x1A0($sp)
    ctx->pc = 0x220e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 22));
    // 0x220e14: 0x7fbe0180  sq          $fp, 0x180($sp)
    ctx->pc = 0x220e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 30));
    // 0x220e18: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x220e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x220e1c: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x220e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x220e20: 0xafa70100  sw          $a3, 0x100($sp)
    ctx->pc = 0x220e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 7));
    // 0x220e24: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x220e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x220e28: 0x8ca50050  lw          $a1, 0x50($a1)
    ctx->pc = 0x220e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x220e2c: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x220e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x220e30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x220e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220e34: 0xafa50138  sw          $a1, 0x138($sp)
    ctx->pc = 0x220e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 5));
    // 0x220e38: 0xafa80104  sw          $t0, 0x104($sp)
    ctx->pc = 0x220e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 8));
    // 0x220e3c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x220e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_220e40:
    // 0x220e40: 0x97230010  lhu         $v1, 0x10($t9)
    ctx->pc = 0x220e40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x220e44: 0x87220010  lh          $v0, 0x10($t9)
    ctx->pc = 0x220e44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x220e48: 0xa7a30150  sh          $v1, 0x150($sp)
    ctx->pc = 0x220e48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 3));
    // 0x220e4c: 0x97230060  lhu         $v1, 0x60($t9)
    ctx->pc = 0x220e4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 96)));
    // 0x220e50: 0x97240020  lhu         $a0, 0x20($t9)
    ctx->pc = 0x220e50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x220e54: 0x97360030  lhu         $s6, 0x30($t9)
    ctx->pc = 0x220e54u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x220e58: 0x97310040  lhu         $s1, 0x40($t9)
    ctx->pc = 0x220e58u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 64)));
    // 0x220e5c: 0x97320050  lhu         $s2, 0x50($t9)
    ctx->pc = 0x220e5cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x220e60: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x220E60u;
    {
        const bool branch_taken_0x220e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E60u;
        // 0x220e64: 0x97300070  lhu         $s0, 0x70($t9) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e60) {
            ctx->pc = 0x220EE0u;
            goto label_220ee0;
        }
    }
    ctx->pc = 0x220E68u;
    // 0x220e68: 0x1480001e  bnez        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x220E68u;
    {
        const bool branch_taken_0x220e68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x220E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E68u;
        // 0x220e6c: 0x8fa50138  lw          $a1, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e68) {
            ctx->pc = 0x220EE4u;
            goto label_220ee4;
        }
    }
    ctx->pc = 0x220E70u;
    // 0x220e70: 0x56c0001d  bnel        $s6, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x220E70u;
    {
        const bool branch_taken_0x220e70 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x220e70) {
            ctx->pc = 0x220E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220E70u;
            // 0x220e74: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220EE8u;
            goto label_220ee8;
        }
    }
    ctx->pc = 0x220E78u;
    // 0x220e78: 0x1620001b  bnez        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x220E78u;
    {
        const bool branch_taken_0x220e78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x220E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E78u;
        // 0x220e7c: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e78) {
            ctx->pc = 0x220EE8u;
            goto label_220ee8;
        }
    }
    ctx->pc = 0x220E80u;
    // 0x220e80: 0x16400019  bnez        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x220E80u;
    {
        const bool branch_taken_0x220e80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x220e80) {
            ctx->pc = 0x220EE8u;
            goto label_220ee8;
        }
    }
    ctx->pc = 0x220E88u;
    // 0x220e88: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x220E88u;
    {
        const bool branch_taken_0x220e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E88u;
        // 0x220e8c: 0x31c00  sll         $v1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e88) {
            ctx->pc = 0x220EECu;
            goto label_220eec;
        }
    }
    ctx->pc = 0x220E90u;
    // 0x220e90: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x220E90u;
    {
        const bool branch_taken_0x220e90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x220e90) {
            ctx->pc = 0x220EECu;
            goto label_220eec;
        }
    }
    ctx->pc = 0x220E98u;
    // 0x220e98: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x220e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x220e9c: 0x87220000  lh          $v0, 0x0($t9)
    ctx->pc = 0x220e9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x220ea0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x220ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x220ea4: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x220ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x220ea8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x220ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x220eac: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x220eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x220eb0: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x220eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
    // 0x220eb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220eb8: 0xaee200e0  sw          $v0, 0xE0($s7)
    ctx->pc = 0x220eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 224), GPR_U32(ctx, 2));
    // 0x220ebc: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x220ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x220ec0: 0xaee20020  sw          $v0, 0x20($s7)
    ctx->pc = 0x220ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 2));
    // 0x220ec4: 0xaee20040  sw          $v0, 0x40($s7)
    ctx->pc = 0x220ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 2));
    // 0x220ec8: 0xaee20060  sw          $v0, 0x60($s7)
    ctx->pc = 0x220ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 96), GPR_U32(ctx, 2));
    // 0x220ecc: 0xaee20080  sw          $v0, 0x80($s7)
    ctx->pc = 0x220eccu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 128), GPR_U32(ctx, 2));
    // 0x220ed0: 0xaee200a0  sw          $v0, 0xA0($s7)
    ctx->pc = 0x220ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 160), GPR_U32(ctx, 2));
    // 0x220ed4: 0xaee200c0  sw          $v0, 0xC0($s7)
    ctx->pc = 0x220ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 192), GPR_U32(ctx, 2));
    // 0x220ed8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x220ED8u;
    {
        const bool branch_taken_0x220ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220ED8u;
        // 0x220edc: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ed8) {
            ctx->pc = 0x221210u;
            goto label_221210;
        }
    }
    ctx->pc = 0x220EE0u;
label_220ee0:
    // 0x220ee0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x220ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_220ee4:
    // 0x220ee4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x220ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_220ee8:
    // 0x220ee8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x220ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_220eec:
    // 0x220eec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x220eecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x220ef0: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x220ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x220ef4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x220ef4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x220ef8: 0x8ca600c0  lw          $a2, 0xC0($a1)
    ctx->pc = 0x220ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x220efc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x220efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x220f00: 0x7fb90160  sq          $t9, 0x160($sp)
    ctx->pc = 0x220f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 25));
    // 0x220f04: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x220f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x220f08: 0x2405c4df  addiu       $a1, $zero, -0x3B21
    ctx->pc = 0x220f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294952159));
    // 0x220f0c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x220f0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f10: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x220f10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f14: 0x295302d  daddu       $a2, $s4, $s5
    ctx->pc = 0x220f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 21));
    // 0x220f18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x220f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f1c: 0x610f8  dsll        $v0, $a2, 3
    ctx->pc = 0x220f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 3);
    // 0x220f20: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x220f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x220f24: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x220f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x220f28: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x220f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x220f2c: 0x21978  dsll        $v1, $v0, 5
    ctx->pc = 0x220f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 5);
    // 0x220f30: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x220F30u;
    SET_GPR_U32(ctx, 31, 0x220F38u);
    ctx->pc = 0x220F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F30u;
    // 0x220f34: 0x62f02f  dsubu       $fp, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x220F30u, 0x220F38u)) {
        return;
    }
    ctx->pc = 0x220F38u;
label_220f38:
    // 0x220f38: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x220f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x220f3c: 0x116400  sll         $t4, $s1, 16
    ctx->pc = 0x220f3cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x220f40: 0x7bb90160  lq          $t9, 0x160($sp)
    ctx->pc = 0x220f40u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x220f44: 0x141878  dsll        $v1, $s4, 1
    ctx->pc = 0x220f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << 1);
    // 0x220f48: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x220f48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x220f4c: 0x74182d  daddu       $v1, $v1, $s4
    ctx->pc = 0x220f4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 20));
    // 0x220f50: 0x8cc40080  lw          $a0, 0x80($a2)
    ctx->pc = 0x220f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x220f54: 0xc6403  sra         $t4, $t4, 16
    ctx->pc = 0x220f54u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 16));
    // 0x220f58: 0x87330000  lh          $s3, 0x0($t9)
    ctx->pc = 0x220f58u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x220f5c: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x220f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x220f60: 0x1846018  mult        $t4, $t4, $a0
    ctx->pc = 0x220f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x220f64: 0x74182d  daddu       $v1, $v1, $s4
    ctx->pc = 0x220f64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 20));
    // 0x220f68: 0x26b9818  mult        $s3, $s3, $t3
    ctx->pc = 0x220f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x220f6c: 0x97a40150  lhu         $a0, 0x150($sp)
    ctx->pc = 0x220f6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x220f70: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x220f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x220f74: 0x125400  sll         $t2, $s2, 16
    ctx->pc = 0x220f74u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x220f78: 0x8cd100e0  lw          $s1, 0xE0($a2)
    ctx->pc = 0x220f78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x220f7c: 0x74182f  dsubu       $v1, $v1, $s4
    ctx->pc = 0x220f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 20));
    // 0x220f80: 0x8cd20060  lw          $s2, 0x60($a2)
    ctx->pc = 0x220f80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x220f84: 0x165c00  sll         $t3, $s6, 16
    ctx->pc = 0x220f84u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x220f88: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x220f88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x220f8c: 0x8cce00a0  lw          $t6, 0xA0($a2)
    ctx->pc = 0x220f8cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x220f90: 0x8ccf0020  lw          $t7, 0x20($a2)
    ctx->pc = 0x220f90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x220f94: 0x180a82d  daddu       $s5, $t4, $zero
    ctx->pc = 0x220f94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f98: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x220f98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f9c: 0x46c00  sll         $t5, $a0, 16
    ctx->pc = 0x220f9cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x220fa0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x220fa0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x220fa4: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x220fa4u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x220fa8: 0x1725818  mult        $t3, $t3, $s2
    ctx->pc = 0x220fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x220fac: 0x295282f  dsubu       $a1, $s4, $s5
    ctx->pc = 0x220facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) - GPR_U64(ctx, 21));
    // 0x220fb0: 0x295202d  daddu       $a0, $s4, $s5
    ctx->pc = 0x220fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 21));
    // 0x220fb4: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x220fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x220fb8: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x220fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x220fbc: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x220fbcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x220fc0: 0xd6c03  sra         $t5, $t5, 16
    ctx->pc = 0x220fc0u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 16));
    // 0x220fc4: 0x14e5018  mult        $t2, $t2, $t6
    ctx->pc = 0x220fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x220fc8: 0x3c3982d  daddu       $s3, $fp, $v1
    ctx->pc = 0x220fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 3));
    // 0x220fcc: 0x3c2902d  daddu       $s2, $fp, $v0
    ctx->pc = 0x220fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 2));
    // 0x220fd0: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x220fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x220fd4: 0x4b378  dsll        $s6, $a0, 13
    ctx->pc = 0x220fd4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) << 13);
    // 0x220fd8: 0x58b78  dsll        $s1, $a1, 13
    ctx->pc = 0x220fd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << 13);
    // 0x220fdc: 0x2d3102f  dsubu       $v0, $s6, $s3
    ctx->pc = 0x220fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) - GPR_U64(ctx, 19));
    // 0x220fe0: 0x232182f  dsubu       $v1, $s1, $s2
    ctx->pc = 0x220fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) - GPR_U64(ctx, 18));
    // 0x220fe4: 0x2d3b02d  daddu       $s6, $s6, $s3
    ctx->pc = 0x220fe4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 19));
    // 0x220fe8: 0x232882d  daddu       $s1, $s1, $s2
    ctx->pc = 0x220fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 18));
    // 0x220fec: 0xffb60108  sd          $s6, 0x108($sp)
    ctx->pc = 0x220fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 22));
    // 0x220ff0: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x220ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x220ff4: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x220ff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ff8: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x220ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ffc: 0x1a0982d  daddu       $s3, $t5, $zero
    ctx->pc = 0x220ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221000: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x221000u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221004: 0x233202d  daddu       $a0, $s1, $s3
    ctx->pc = 0x221004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 19));
    // 0x221008: 0x2d2a82d  daddu       $s5, $s6, $s2
    ctx->pc = 0x221008u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 18));
    // 0x22100c: 0xffa30118  sd          $v1, 0x118($sp)
    ctx->pc = 0x22100cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 3));
    // 0x221010: 0x2a4482d  daddu       $t1, $s5, $a0
    ctx->pc = 0x221010u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 4));
    // 0x221014: 0x122878  dsll        $a1, $s2, 1
    ctx->pc = 0x221014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << 1);
    // 0x221018: 0x930b8  dsll        $a2, $t1, 2
    ctx->pc = 0x221018u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << 2);
    // 0x22101c: 0xffa20120  sd          $v0, 0x120($sp)
    ctx->pc = 0x22101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 2));
    // 0x221020: 0xb2282d  daddu       $a1, $a1, $s2
    ctx->pc = 0x221020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221024: 0x111978  dsll        $v1, $s1, 5
    ctx->pc = 0x221024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << 5);
    // 0x221028: 0xc9302d  daddu       $a2, $a2, $t1
    ctx->pc = 0x221028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 9));
    // 0x22102c: 0xffa40128  sd          $a0, 0x128($sp)
    ctx->pc = 0x22102cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 4));
    // 0x221030: 0x71182d  daddu       $v1, $v1, $s1
    ctx->pc = 0x221030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
    // 0x221034: 0x51138  dsll        $v0, $a1, 4
    ctx->pc = 0x221034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 4);
    // 0x221038: 0x1638f8  dsll        $a3, $s6, 3
    ctx->pc = 0x221038u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) << 3);
    // 0x22103c: 0x62138  dsll        $a0, $a2, 4
    ctx->pc = 0x22103cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 4);
    // 0x221040: 0xf6382d  daddu       $a3, $a3, $s6
    ctx->pc = 0x221040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 22));
    // 0x221044: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x221044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221048: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x221048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x22104c: 0x86202f  dsubu       $a0, $a0, $a2
    ctx->pc = 0x22104cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 6));
    // 0x221050: 0x71182f  dsubu       $v1, $v1, $s1
    ctx->pc = 0x221050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 17));
    // 0x221054: 0x71138  dsll        $v0, $a3, 4
    ctx->pc = 0x221054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 4);
    // 0x221058: 0x134078  dsll        $t0, $s3, 1
    ctx->pc = 0x221058u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << 1);
    // 0x22105c: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x22105cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221060: 0x113402d  daddu       $t0, $t0, $s3
    ctx->pc = 0x221060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 19));
    // 0x221064: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221068: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x221068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
    // 0x22106c: 0x71182f  dsubu       $v1, $v1, $s1
    ctx->pc = 0x22106cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 17));
    // 0x221070: 0x89202d  daddu       $a0, $a0, $t1
    ctx->pc = 0x221070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 9));
    // 0x221074: 0x812b8  dsll        $v0, $t0, 10
    ctx->pc = 0x221074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 10);
    // 0x221078: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x221078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
    // 0x22107c: 0x102402d  daddu       $t0, $t0, $v0
    ctx->pc = 0x22107cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221080: 0xb2282f  dsubu       $a1, $a1, $s2
    ctx->pc = 0x221080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 18));
    // 0x221084: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221088: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x221088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x22108c: 0x71182d  daddu       $v1, $v1, $s1
    ctx->pc = 0x22108cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
    // 0x221090: 0x89202d  daddu       $a0, $a0, $t1
    ctx->pc = 0x221090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 9));
    // 0x221094: 0x51178  dsll        $v0, $a1, 5
    ctx->pc = 0x221094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 5);
    // 0x221098: 0x738f8  dsll        $a3, $a3, 3
    ctx->pc = 0x221098u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 3);
    // 0x22109c: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x22109cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x2210a0: 0xf6382f  dsubu       $a3, $a3, $s6
    ctx->pc = 0x2210a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) - GPR_U64(ctx, 22));
    // 0x2210a4: 0x840b8  dsll        $t0, $t0, 2
    ctx->pc = 0x2210a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 2);
    // 0x2210a8: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x2210a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x2210ac: 0xffa40130  sd          $a0, 0x130($sp)
    ctx->pc = 0x2210acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 4));
    // 0x2210b0: 0x2d3f02d  daddu       $fp, $s6, $s3
    ctx->pc = 0x2210b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2210b4: 0x232a02d  daddu       $s4, $s1, $s2
    ctx->pc = 0x2210b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 18));
    // 0x2210b8: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x2210b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x2210bc: 0x7b078  dsll        $s6, $a3, 1
    ctx->pc = 0x2210bcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) << 1);
    // 0x2210c0: 0x71882f  dsubu       $s1, $v1, $s1
    ctx->pc = 0x2210c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) - GPR_U64(ctx, 17));
    // 0x2210c4: 0x113982f  dsubu       $s3, $t0, $s3
    ctx->pc = 0x2210c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 8) - GPR_U64(ctx, 19));
    // 0x2210c8: 0x7fb90160  sq          $t9, 0x160($sp)
    ctx->pc = 0x2210c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 25));
    // 0x2210cc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2210ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210d0: 0x2405e333  addiu       $a1, $zero, -0x1CCD
    ctx->pc = 0x2210d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959923));
    // 0x2210d4: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x2210D4u;
    SET_GPR_U32(ctx, 31, 0x2210DCu);
    ctx->pc = 0x2210D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210D4u;
    // 0x2210d8: 0x290b8  dsll        $s2, $v0, 2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x2210D4u, 0x2210DCu)) {
        return;
    }
    ctx->pc = 0x2210DCu;
label_2210dc:
    // 0x2210dc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2210dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2210e0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2210e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2210e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2210e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2210ec: 0xafa50138  sw          $a1, 0x138($sp)
    ctx->pc = 0x2210ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 5));
    // 0x2210f0: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x2210F0u;
    SET_GPR_U32(ctx, 31, 0x2210F8u);
    ctx->pc = 0x2210F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210F0u;
    // 0x2210f4: 0x2405adfd  addiu       $a1, $zero, -0x5203 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294946301));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x2210F0u, 0x2210F8u)) {
        return;
    }
    ctx->pc = 0x2210F8u;
label_2210f8:
    // 0x2210f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2210f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2210fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221100: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221100u;
    SET_GPR_U32(ctx, 31, 0x221108u);
    ctx->pc = 0x221104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221100u;
    // 0x221104: 0x2405c13b  addiu       $a1, $zero, -0x3EC5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294951227));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221100u, 0x221108u)) {
        return;
    }
    ctx->pc = 0x221108u;
label_221108:
    // 0x221108: 0xdfa60130  ld          $a2, 0x130($sp)
    ctx->pc = 0x221108u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x22110c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x22110cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221110: 0xdfa40128  ld          $a0, 0x128($sp)
    ctx->pc = 0x221110u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x221114: 0x2405f384  addiu       $a1, $zero, -0xC7C
    ctx->pc = 0x221114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964100));
    // 0x221118: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221118u;
    SET_GPR_U32(ctx, 31, 0x221120u);
    ctx->pc = 0x22111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221118u;
    // 0x22111c: 0x2a6a82d  daddu       $s5, $s5, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221118u, 0x221120u)) {
        return;
    }
    ctx->pc = 0x221120u;
label_221120:
    // 0x221120: 0xdfaa0130  ld          $t2, 0x130($sp)
    ctx->pc = 0x221120u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x221124: 0x295202d  daddu       $a0, $s4, $s5
    ctx->pc = 0x221124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 21));
    // 0x221128: 0x244902d  daddu       $s2, $s2, $a0
    ctx->pc = 0x221128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 4));
    // 0x22112c: 0x4a102d  daddu       $v0, $v0, $t2
    ctx->pc = 0x22112cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x221130: 0xdfa40120  ld          $a0, 0x120($sp)
    ctx->pc = 0x221130u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x221134: 0xffa20128  sd          $v0, 0x128($sp)
    ctx->pc = 0x221134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 2));
    // 0x221138: 0x3c2282d  daddu       $a1, $fp, $v0
    ctx->pc = 0x221138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 2));
    // 0x22113c: 0xdfaa0110  ld          $t2, 0x110($sp)
    ctx->pc = 0x22113cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x221140: 0x3d5102d  daddu       $v0, $fp, $s5
    ctx->pc = 0x221140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 21));
    // 0x221144: 0xdfa60128  ld          $a2, 0x128($sp)
    ctx->pc = 0x221144u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x221148: 0x2c2b02d  daddu       $s6, $s6, $v0
    ctx->pc = 0x221148u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 2));
    // 0x22114c: 0x265982d  daddu       $s3, $s3, $a1
    ctx->pc = 0x22114cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 5));
    // 0x221150: 0xdfa20108  ld          $v0, 0x108($sp)
    ctx->pc = 0x221150u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x221154: 0x286182d  daddu       $v1, $s4, $a2
    ctx->pc = 0x221154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 6));
    // 0x221158: 0xdfa50118  ld          $a1, 0x118($sp)
    ctx->pc = 0x221158u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x22115c: 0x223882d  daddu       $s1, $s1, $v1
    ctx->pc = 0x22115cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x221160: 0x152382f  dsubu       $a3, $t2, $s2
    ctx->pc = 0x221160u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) - GPR_U64(ctx, 18));
    // 0x221164: 0xdfa30118  ld          $v1, 0x118($sp)
    ctx->pc = 0x221164u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x221168: 0x96482f  dsubu       $t1, $a0, $s6
    ctx->pc = 0x221168u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) - GPR_U64(ctx, 22));
    // 0x22116c: 0x53302f  dsubu       $a2, $v0, $s3
    ctx->pc = 0x22116cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) - GPR_U64(ctx, 19));
    // 0x221170: 0xb1202d  daddu       $a0, $a1, $s1
    ctx->pc = 0x221170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 17));
    // 0x221174: 0x71402f  dsubu       $t0, $v1, $s1
    ctx->pc = 0x221174u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) - GPR_U64(ctx, 17));
    // 0x221178: 0x53102d  daddu       $v0, $v0, $s3
    ctx->pc = 0x221178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 19));
    // 0x22117c: 0x152182d  daddu       $v1, $t2, $s2
    ctx->pc = 0x22117cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221180: 0x64420400  daddiu      $v0, $v0, 0x400
    ctx->pc = 0x221180u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1024);
    // 0x221184: 0xdfaa0120  ld          $t2, 0x120($sp)
    ctx->pc = 0x221184u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x221188: 0x64c60400  daddiu      $a2, $a2, 0x400
    ctx->pc = 0x221188u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1024);
    // 0x22118c: 0x64630400  daddiu      $v1, $v1, 0x400
    ctx->pc = 0x22118cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1024);
    // 0x221190: 0x64e70400  daddiu      $a3, $a3, 0x400
    ctx->pc = 0x221190u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1024);
    // 0x221194: 0x156282d  daddu       $a1, $t2, $s6
    ctx->pc = 0x221194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 22));
    // 0x221198: 0x64840400  daddiu      $a0, $a0, 0x400
    ctx->pc = 0x221198u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1024);
    // 0x22119c: 0x65080400  daddiu      $t0, $t0, 0x400
    ctx->pc = 0x22119cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1024);
    // 0x2211a0: 0x64a50400  daddiu      $a1, $a1, 0x400
    ctx->pc = 0x2211a0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1024);
    // 0x2211a4: 0x65290400  daddiu      $t1, $t1, 0x400
    ctx->pc = 0x2211a4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1024);
    // 0x2211a8: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x2211a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x2211ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2211acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2211b0: 0x63578  dsll        $a2, $a2, 21
    ctx->pc = 0x2211b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 21);
    // 0x2211b4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2211b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2211b8: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x2211b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x2211bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2211bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2211c0: 0x73d78  dsll        $a3, $a3, 21
    ctx->pc = 0x2211c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 21);
    // 0x2211c4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2211c4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2211c8: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x2211c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x2211cc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2211ccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2211d0: 0x84578  dsll        $t0, $t0, 21
    ctx->pc = 0x2211d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 21);
    // 0x2211d4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2211d4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2211d8: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x2211d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
    // 0x2211dc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2211dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2211e0: 0x94d78  dsll        $t1, $t1, 21
    ctx->pc = 0x2211e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 21);
    // 0x2211e4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2211e4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2211e8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2211e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2211ec: 0xaee600e0  sw          $a2, 0xE0($s7)
    ctx->pc = 0x2211ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 224), GPR_U32(ctx, 6));
    // 0x2211f0: 0xaee30020  sw          $v1, 0x20($s7)
    ctx->pc = 0x2211f0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 3));
    // 0x2211f4: 0xaee700c0  sw          $a3, 0xC0($s7)
    ctx->pc = 0x2211f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 192), GPR_U32(ctx, 7));
    // 0x2211f8: 0xaee40040  sw          $a0, 0x40($s7)
    ctx->pc = 0x2211f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 4));
    // 0x2211fc: 0xaee800a0  sw          $t0, 0xA0($s7)
    ctx->pc = 0x2211fcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 160), GPR_U32(ctx, 8));
    // 0x221200: 0xaee50060  sw          $a1, 0x60($s7)
    ctx->pc = 0x221200u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 96), GPR_U32(ctx, 5));
    // 0x221204: 0xaee90080  sw          $t1, 0x80($s7)
    ctx->pc = 0x221204u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 128), GPR_U32(ctx, 9));
    // 0x221208: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x221208u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x22120c: 0x7bb90160  lq          $t9, 0x160($sp)
    ctx->pc = 0x22120cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_221210:
    // 0x221210: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x221210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x221214: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x221214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x221218: 0x1c40ff09  bgtz        $v0, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x221218u;
    {
        const bool branch_taken_0x221218 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x22121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221218u;
        // 0x22121c: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221218) {
            ctx->pc = 0x220E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220e40;
        }
    }
    ctx->pc = 0x221220u;
    // 0x221220: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x221220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x221224: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x221224u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_221228:
    // 0x221228: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x221228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x22122c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x22122cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x221230: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x221230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x221234: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x221234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x221238: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x221238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22123c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x22123cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x221240: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x221240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221244: 0x14800025  bnez        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x221244u;
    {
        const bool branch_taken_0x221244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x221248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221244u;
        // 0x221248: 0x668021  addu        $s0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221244) {
            ctx->pc = 0x2212DCu;
            goto label_2212dc;
        }
    }
    ctx->pc = 0x22124Cu;
    // 0x22124c: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x22124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x221250: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x221250u;
    {
        const bool branch_taken_0x221250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221250) {
            ctx->pc = 0x221254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221250u;
            // 0x221254: 0x8ef40008  lw          $s4, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2212E0u;
            goto label_2212e0;
        }
    }
    ctx->pc = 0x221258u;
    // 0x221258: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x221258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x22125c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x22125Cu;
    {
        const bool branch_taken_0x22125c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22125c) {
            ctx->pc = 0x221260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22125Cu;
            // 0x221260: 0x8ef40008  lw          $s4, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2212E0u;
            goto label_2212e0;
        }
    }
    ctx->pc = 0x221264u;
    // 0x221264: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x221264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x221268: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x221268u;
    {
        const bool branch_taken_0x221268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221268) {
            ctx->pc = 0x22126Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221268u;
            // 0x22126c: 0x8ef40008  lw          $s4, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2212E0u;
            goto label_2212e0;
        }
    }
    ctx->pc = 0x221270u;
    // 0x221270: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x221270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x221274: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x221274u;
    {
        const bool branch_taken_0x221274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221274) {
            ctx->pc = 0x221278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221274u;
            // 0x221278: 0x8ef40008  lw          $s4, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2212E0u;
            goto label_2212e0;
        }
    }
    ctx->pc = 0x22127Cu;
    // 0x22127c: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x22127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x221280: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x221280u;
    {
        const bool branch_taken_0x221280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221280) {
            ctx->pc = 0x221284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221280u;
            // 0x221284: 0x8ef40008  lw          $s4, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2212E0u;
            goto label_2212e0;
        }
    }
    ctx->pc = 0x221288u;
    // 0x221288: 0x8ee2001c  lw          $v0, 0x1C($s7)
    ctx->pc = 0x221288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x22128c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x22128Cu;
    {
        const bool branch_taken_0x22128c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22128c) {
            ctx->pc = 0x221290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22128Cu;
            // 0x221290: 0x8ef40008  lw          $s4, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2212E0u;
            goto label_2212e0;
        }
    }
    ctx->pc = 0x221294u;
    // 0x221294: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x221294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x221298: 0x8faa013c  lw          $t2, 0x13C($sp)
    ctx->pc = 0x221298u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x22129c: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x22129cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x2212a0: 0x64420010  daddiu      $v0, $v0, 0x10
    ctx->pc = 0x2212a0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)16);
    // 0x2212a4: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x2212a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x2212a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2212a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2212ac: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2212acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2212b0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2212b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2212b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2212b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2212b8: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x2212b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x2212bc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2212bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2212c0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2212c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2212c4: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x2212c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2212c8: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x2212c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2212cc: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x2212ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2212d0: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x2212d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2212d4: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2212D4u;
    {
        const bool branch_taken_0x2212d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2212D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212D4u;
        // 0x2212d8: 0xa2030006  sb          $v1, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2212d4) {
            ctx->pc = 0x2215F4u;
            goto label_2215f4;
        }
    }
    ctx->pc = 0x2212DCu;
label_2212dc:
    // 0x2212dc: 0x8ef40008  lw          $s4, 0x8($s7)
    ctx->pc = 0x2212dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_2212e0:
    // 0x2212e0: 0x2405c4df  addiu       $a1, $zero, -0x3B21
    ctx->pc = 0x2212e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294952159));
    // 0x2212e4: 0x8ef50018  lw          $s5, 0x18($s7)
    ctx->pc = 0x2212e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x2212e8: 0x295302d  daddu       $a2, $s4, $s5
    ctx->pc = 0x2212e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 21));
    // 0x2212ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2212ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212f0: 0x610f8  dsll        $v0, $a2, 3
    ctx->pc = 0x2212f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 3);
    // 0x2212f4: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x2212f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2212f8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x2212f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x2212fc: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x2212fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x221300: 0x21978  dsll        $v1, $v0, 5
    ctx->pc = 0x221300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 5);
    // 0x221304: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221304u;
    SET_GPR_U32(ctx, 31, 0x22130Cu);
    ctx->pc = 0x221308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221304u;
    // 0x221308: 0x62f02f  dsubu       $fp, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221304u, 0x22130Cu)) {
        return;
    }
    ctx->pc = 0x22130Cu;
label_22130c:
    // 0x22130c: 0x141878  dsll        $v1, $s4, 1
    ctx->pc = 0x22130cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << 1);
    // 0x221310: 0x8ee50010  lw          $a1, 0x10($s7)
    ctx->pc = 0x221310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x221314: 0x74182d  daddu       $v1, $v1, $s4
    ctx->pc = 0x221314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 20));
    // 0x221318: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x221318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x22131c: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x22131cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x221320: 0x3c2902d  daddu       $s2, $fp, $v0
    ctx->pc = 0x221320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221324: 0x74182d  daddu       $v1, $v1, $s4
    ctx->pc = 0x221324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 20));
    // 0x221328: 0x85102f  dsubu       $v0, $a0, $a1
    ctx->pc = 0x221328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
    // 0x22132c: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x22132cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x221330: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x221330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
    // 0x221334: 0x74182f  dsubu       $v1, $v1, $s4
    ctx->pc = 0x221334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 20));
    // 0x221338: 0x4b378  dsll        $s6, $a0, 13
    ctx->pc = 0x221338u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) << 13);
    // 0x22133c: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x22133cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x221340: 0x28b78  dsll        $s1, $v0, 13
    ctx->pc = 0x221340u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << 13);
    // 0x221344: 0x3c3982d  daddu       $s3, $fp, $v1
    ctx->pc = 0x221344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 3));
    // 0x221348: 0x232102f  dsubu       $v0, $s1, $s2
    ctx->pc = 0x221348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 18));
    // 0x22134c: 0x2d3182f  dsubu       $v1, $s6, $s3
    ctx->pc = 0x22134cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) - GPR_U64(ctx, 19));
    // 0x221350: 0x232882d  daddu       $s1, $s1, $s2
    ctx->pc = 0x221350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221354: 0x2d3b02d  daddu       $s6, $s6, $s3
    ctx->pc = 0x221354u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 19));
    // 0x221358: 0xffa20118  sd          $v0, 0x118($sp)
    ctx->pc = 0x221358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 2));
    // 0x22135c: 0xffa30120  sd          $v1, 0x120($sp)
    ctx->pc = 0x22135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 3));
    // 0x221360: 0x2405e333  addiu       $a1, $zero, -0x1CCD
    ctx->pc = 0x221360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959923));
    // 0x221364: 0xffb60108  sd          $s6, 0x108($sp)
    ctx->pc = 0x221364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 22));
    // 0x221368: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x221368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x22136c: 0x8ef10014  lw          $s1, 0x14($s7)
    ctx->pc = 0x22136cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x221370: 0x8ef6001c  lw          $s6, 0x1C($s7)
    ctx->pc = 0x221370u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x221374: 0x8ef2000c  lw          $s2, 0xC($s7)
    ctx->pc = 0x221374u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x221378: 0x111978  dsll        $v1, $s1, 5
    ctx->pc = 0x221378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << 5);
    // 0x22137c: 0x8ef30004  lw          $s3, 0x4($s7)
    ctx->pc = 0x22137cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x221380: 0x71182d  daddu       $v1, $v1, $s1
    ctx->pc = 0x221380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
    // 0x221384: 0x2d2a82d  daddu       $s5, $s6, $s2
    ctx->pc = 0x221384u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221388: 0x123878  dsll        $a3, $s2, 1
    ctx->pc = 0x221388u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << 1);
    // 0x22138c: 0x233202d  daddu       $a0, $s1, $s3
    ctx->pc = 0x22138cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 19));
    // 0x221390: 0xf2382d  daddu       $a3, $a3, $s2
    ctx->pc = 0x221390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221394: 0x2a4502d  daddu       $t2, $s5, $a0
    ctx->pc = 0x221394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 4));
    // 0x221398: 0xffa40128  sd          $a0, 0x128($sp)
    ctx->pc = 0x221398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 4));
    // 0x22139c: 0xa20b8  dsll        $a0, $t2, 2
    ctx->pc = 0x22139cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << 2);
    // 0x2213a0: 0x71138  dsll        $v0, $a3, 4
    ctx->pc = 0x2213a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 4);
    // 0x2213a4: 0x1648f8  dsll        $t1, $s6, 3
    ctx->pc = 0x2213a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) << 3);
    // 0x2213a8: 0x8a202d  daddu       $a0, $a0, $t2
    ctx->pc = 0x2213a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 10));
    // 0x2213ac: 0x136482d  daddu       $t1, $t1, $s6
    ctx->pc = 0x2213acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 22));
    // 0x2213b0: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x2213b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2213b4: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x2213b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x2213b8: 0x43138  dsll        $a2, $a0, 4
    ctx->pc = 0x2213b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 4);
    // 0x2213bc: 0x71182f  dsubu       $v1, $v1, $s1
    ctx->pc = 0x2213bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 17));
    // 0x2213c0: 0x91138  dsll        $v0, $t1, 4
    ctx->pc = 0x2213c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << 4);
    // 0x2213c4: 0x134078  dsll        $t0, $s3, 1
    ctx->pc = 0x2213c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << 1);
    // 0x2213c8: 0xc4302f  dsubu       $a2, $a2, $a0
    ctx->pc = 0x2213c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 4));
    // 0x2213cc: 0x113402d  daddu       $t0, $t0, $s3
    ctx->pc = 0x2213ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2213d0: 0x122482d  daddu       $t1, $t1, $v0
    ctx->pc = 0x2213d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2213d4: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x2213d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x2213d8: 0x812b8  dsll        $v0, $t0, 10
    ctx->pc = 0x2213d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 10);
    // 0x2213dc: 0x71182f  dsubu       $v1, $v1, $s1
    ctx->pc = 0x2213dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 17));
    // 0x2213e0: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x2213e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
    // 0x2213e4: 0x630b8  dsll        $a2, $a2, 2
    ctx->pc = 0x2213e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 2);
    // 0x2213e8: 0xf2382f  dsubu       $a3, $a3, $s2
    ctx->pc = 0x2213e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) - GPR_U64(ctx, 18));
    // 0x2213ec: 0xca302d  daddu       $a2, $a2, $t2
    ctx->pc = 0x2213ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 10));
    // 0x2213f0: 0x102402d  daddu       $t0, $t0, $v0
    ctx->pc = 0x2213f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2213f4: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x2213f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x2213f8: 0x71178  dsll        $v0, $a3, 5
    ctx->pc = 0x2213f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 5);
    // 0x2213fc: 0x71182d  daddu       $v1, $v1, $s1
    ctx->pc = 0x2213fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
    // 0x221400: 0x948f8  dsll        $t1, $t1, 3
    ctx->pc = 0x221400u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 3);
    // 0x221404: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x221404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x221408: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x22140c: 0xca302d  daddu       $a2, $a2, $t2
    ctx->pc = 0x22140cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 10));
    // 0x221410: 0x136482f  dsubu       $t1, $t1, $s6
    ctx->pc = 0x221410u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) - GPR_U64(ctx, 22));
    // 0x221414: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x221414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x221418: 0x840b8  dsll        $t0, $t0, 2
    ctx->pc = 0x221418u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 2);
    // 0x22141c: 0x2d3f02d  daddu       $fp, $s6, $s3
    ctx->pc = 0x22141cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 19));
    // 0x221420: 0x232a02d  daddu       $s4, $s1, $s2
    ctx->pc = 0x221420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221424: 0x71882f  dsubu       $s1, $v1, $s1
    ctx->pc = 0x221424u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) - GPR_U64(ctx, 17));
    // 0x221428: 0xffa60130  sd          $a2, 0x130($sp)
    ctx->pc = 0x221428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 6));
    // 0x22142c: 0x9b078  dsll        $s6, $t1, 1
    ctx->pc = 0x22142cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) << 1);
    // 0x221430: 0x113982f  dsubu       $s3, $t0, $s3
    ctx->pc = 0x221430u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 8) - GPR_U64(ctx, 19));
    // 0x221434: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x221434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221438: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221438u;
    SET_GPR_U32(ctx, 31, 0x221440u);
    ctx->pc = 0x22143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221438u;
    // 0x22143c: 0x290b8  dsll        $s2, $v0, 2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221438u, 0x221440u)) {
        return;
    }
    ctx->pc = 0x221440u;
label_221440:
    // 0x221440: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x221440u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x221444: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x221444u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221448: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22144c: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x22144Cu;
    SET_GPR_U32(ctx, 31, 0x221454u);
    ctx->pc = 0x221450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22144Cu;
    // 0x221450: 0x2405adfd  addiu       $a1, $zero, -0x5203 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294946301));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x22144Cu, 0x221454u)) {
        return;
    }
    ctx->pc = 0x221454u;
label_221454:
    // 0x221454: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x221454u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221458: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x221458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22145c: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x22145Cu;
    SET_GPR_U32(ctx, 31, 0x221464u);
    ctx->pc = 0x221460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22145Cu;
    // 0x221460: 0x2405c13b  addiu       $a1, $zero, -0x3EC5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294951227));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x22145Cu, 0x221464u)) {
        return;
    }
    ctx->pc = 0x221464u;
label_221464:
    // 0x221464: 0xdfa60130  ld          $a2, 0x130($sp)
    ctx->pc = 0x221464u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x221468: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x221468u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22146c: 0xdfa40128  ld          $a0, 0x128($sp)
    ctx->pc = 0x22146cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x221470: 0x2405f384  addiu       $a1, $zero, -0xC7C
    ctx->pc = 0x221470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964100));
    // 0x221474: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221474u;
    SET_GPR_U32(ctx, 31, 0x22147Cu);
    ctx->pc = 0x221478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221474u;
    // 0x221478: 0x2a6a82d  daddu       $s5, $s5, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221474u, 0x22147Cu)) {
        return;
    }
    ctx->pc = 0x22147Cu;
label_22147c:
    // 0x22147c: 0xdfaa0130  ld          $t2, 0x130($sp)
    ctx->pc = 0x22147cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x221480: 0xdfa60110  ld          $a2, 0x110($sp)
    ctx->pc = 0x221480u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x221484: 0x4a102d  daddu       $v0, $v0, $t2
    ctx->pc = 0x221484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x221488: 0xffa20128  sd          $v0, 0x128($sp)
    ctx->pc = 0x221488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 2));
    // 0x22148c: 0xdfaa0108  ld          $t2, 0x108($sp)
    ctx->pc = 0x22148cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x221490: 0x295102d  daddu       $v0, $s4, $s5
    ctx->pc = 0x221490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 21));
    // 0x221494: 0xdfa40128  ld          $a0, 0x128($sp)
    ctx->pc = 0x221494u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x221498: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x221498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x22149c: 0xd2282d  daddu       $a1, $a2, $s2
    ctx->pc = 0x22149cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 18));
    // 0x2214a0: 0x3c4182d  daddu       $v1, $fp, $a0
    ctx->pc = 0x2214a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2214a4: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x2214a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2214a8: 0x263982d  daddu       $s3, $s3, $v1
    ctx->pc = 0x2214a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2214ac: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2214acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2214b0: 0x153102d  daddu       $v0, $t2, $s3
    ctx->pc = 0x2214b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2214b4: 0x153182f  dsubu       $v1, $t2, $s3
    ctx->pc = 0x2214b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 19));
    // 0x2214b8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x2214b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2214bc: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x2214bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2214c0: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2214c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2214c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2214c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2214c8: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x2214c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x2214cc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2214ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2214d0: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2214d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2214d4: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x2214d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2214d8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2214d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2214dc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2214dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2214e0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2214e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2214e4: 0xa4282d  daddu       $a1, $a1, $a0
    ctx->pc = 0x2214e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2214e8: 0xdfaa0110  ld          $t2, 0x110($sp)
    ctx->pc = 0x2214e8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2214ec: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x2214ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x2214f0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2214f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2214f4: 0xa2060000  sb          $a2, 0x0($s0)
    ctx->pc = 0x2214f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2214f8: 0x30a503ff  andi        $a1, $a1, 0x3FF
    ctx->pc = 0x2214f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1023);
    // 0x2214fc: 0x152202f  dsubu       $a0, $t2, $s2
    ctx->pc = 0x2214fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) - GPR_U64(ctx, 18));
    // 0x221500: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x221500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x221504: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x221504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x221508: 0x86202d  daddu       $a0, $a0, $a2
    ctx->pc = 0x221508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 6));
    // 0x22150c: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x22150cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221510: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x221510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x221514: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x221514u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x221518: 0xdfaa0128  ld          $t2, 0x128($sp)
    ctx->pc = 0x221518u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x22151c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x22151cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x221520: 0xa2060007  sb          $a2, 0x7($s0)
    ctx->pc = 0x221520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x221524: 0x308403ff  andi        $a0, $a0, 0x3FF
    ctx->pc = 0x221524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x221528: 0x28a102d  daddu       $v0, $s4, $t2
    ctx->pc = 0x221528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 10));
    // 0x22152c: 0xdfa60118  ld          $a2, 0x118($sp)
    ctx->pc = 0x22152cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x221530: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x221530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221534: 0xdfa30118  ld          $v1, 0x118($sp)
    ctx->pc = 0x221534u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x221538: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x221538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x22153c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x22153cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x221540: 0x71102d  daddu       $v0, $v1, $s1
    ctx->pc = 0x221540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
    // 0x221544: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x221544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x221548: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x221548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x22154c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x22154cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x221550: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x221550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x221554: 0xd1282f  dsubu       $a1, $a2, $s1
    ctx->pc = 0x221554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) - GPR_U64(ctx, 17));
    // 0x221558: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x221558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x22155c: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x22155cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x221560: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x221560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x221564: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x221564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x221568: 0x8faa013c  lw          $t2, 0x13C($sp)
    ctx->pc = 0x221568u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x22156c: 0xa3282d  daddu       $a1, $a1, $v1
    ctx->pc = 0x22156cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x221570: 0xa2060006  sb          $a2, 0x6($s0)
    ctx->pc = 0x221570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x221574: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x221574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x221578: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x221578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x22157c: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x22157cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x221580: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x221580u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x221584: 0xdfa40120  ld          $a0, 0x120($sp)
    ctx->pc = 0x221584u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x221588: 0x3d5182d  daddu       $v1, $fp, $s5
    ctx->pc = 0x221588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 21));
    // 0x22158c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x22158cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221590: 0x30a503ff  andi        $a1, $a1, 0x3FF
    ctx->pc = 0x221590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1023);
    // 0x221594: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x221594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x221598: 0x2c3b02d  daddu       $s6, $s6, $v1
    ctx->pc = 0x221598u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 3));
    // 0x22159c: 0xa2060002  sb          $a2, 0x2($s0)
    ctx->pc = 0x22159cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x2215a0: 0x96182d  daddu       $v1, $a0, $s6
    ctx->pc = 0x2215a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 22));
    // 0x2215a4: 0x3c0a0002  lui         $t2, 0x2
    ctx->pc = 0x2215a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2 << 16));
    // 0x2215a8: 0x96202f  dsubu       $a0, $a0, $s6
    ctx->pc = 0x2215a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 22));
    // 0x2215ac: 0x6a182d  daddu       $v1, $v1, $t2
    ctx->pc = 0x2215acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 10));
    // 0x2215b0: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x2215b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2215b4: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x2215b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x2215b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2215b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2215bc: 0x8a202d  daddu       $a0, $a0, $t2
    ctx->pc = 0x2215bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 10));
    // 0x2215c0: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x2215c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2215c4: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x2215c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x2215c8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2215c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2215cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2215ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2215d0: 0x308403ff  andi        $a0, $a0, 0x3FF
    ctx->pc = 0x2215d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x2215d4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2215d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2215d8: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x2215d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2215dc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2215dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2215e0: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x2215e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2215e4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2215e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2215e8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2215e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2215ec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2215ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2215f0: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x2215f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_2215f4:
    // 0x2215f4: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x2215f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2215f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2215f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2215fc: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x2215fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x221600: 0x1440ff09  bnez        $v0, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x221600u;
    {
        const bool branch_taken_0x221600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221600u;
        // 0x221604: 0xafa60140  sw          $a2, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221600) {
            ctx->pc = 0x221228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221228;
        }
    }
    ctx->pc = 0x221608u;
    // 0x221608: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x221608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x22160c: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x22160cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x221610: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x221610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x221614: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x221614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x221618: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x221618u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x22161c: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x22161cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x221620: 0x7bb601a0  lq          $s6, 0x1A0($sp)
    ctx->pc = 0x221620u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x221624: 0x7bb70190  lq          $s7, 0x190($sp)
    ctx->pc = 0x221624u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x221628: 0x7bbe0180  lq          $fp, 0x180($sp)
    ctx->pc = 0x221628u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x22162c: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x22162cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x221630: 0x3e00008  jr          $ra
    ctx->pc = 0x221630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221630u;
        // 0x221634: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221638u;
}
