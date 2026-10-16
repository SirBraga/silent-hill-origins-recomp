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

// Function: sub_002B0168
// Address: 0x2b0168 - 0x2b07f0
void sub_002B0168_0x2b0168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0168_0x2b0168");
#endif

    switch (ctx->pc) {
        case 0x2b01e8u: goto label_2b01e8;
        case 0x2b0220u: goto label_2b0220;
        case 0x2b0248u: goto label_2b0248;
        case 0x2b0600u: goto label_2b0600;
        case 0x2b0618u: goto label_2b0618;
        case 0x2b0664u: goto label_2b0664;
        case 0x2b0688u: goto label_2b0688;
        case 0x2b06b0u: goto label_2b06b0;
        case 0x2b06fcu: goto label_2b06fc;
        case 0x2b0730u: goto label_2b0730;
        case 0x2b0790u: goto label_2b0790;
        case 0x2b07a4u: goto label_2b07a4;
        default: break;
    }

    ctx->pc = 0x2b0168u;

    // 0x2b0168: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2b0168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2b016c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2b016cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2b0170: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2b0170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2b0174: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2b0174u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0178: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2b0178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2b017c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2b017cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0180: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2b0180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x2b0184: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2b0184u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0188: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2b0188u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2b018c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b018cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0190: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2b0190u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2b0194: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2b0194u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2b0198: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2b0198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2b019c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2b019cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2b01a0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2b01a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2b01a4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2b01a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2b01a8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2b01a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2b01ac: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2b01acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2b01b0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2b01b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x2b01b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b01b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b01b8: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x2b01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x2b01bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b01c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b01c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b01c4: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x2b01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x2b01c8: 0xafa90028  sw          $t1, 0x28($sp)
    ctx->pc = 0x2b01c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    // 0x2b01cc: 0xafaa002c  sw          $t2, 0x2C($sp)
    ctx->pc = 0x2b01ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 10));
    // 0x2b01d0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2b01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2b01d4: 0x8fbe0100  lw          $fp, 0x100($sp)
    ctx->pc = 0x2b01d4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b01d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b01d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b01dc: 0x10400176  beqz        $v0, . + 4 + (0x176 << 2)
    ctx->pc = 0x2B01DCu;
    {
        const bool branch_taken_0x2b01dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01DCu;
        // 0x2b01e0: 0xafab0030  sw          $t3, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01dc) {
            ctx->pc = 0x2B07B8u;
            goto label_2b07b8;
        }
    }
    ctx->pc = 0x2B01E4u;
    // 0x2b01e4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2b01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2b01e8:
    // 0x2b01e8: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x2b01e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b01ec: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2b01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2b01f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b01f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b01f4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2b01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b01f8: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x2b01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x2b01fc: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x2b01fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b0200: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2b0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2b0204: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b0204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2b0208: 0x54400167  bnel        $v0, $zero, . + 4 + (0x167 << 2)
    ctx->pc = 0x2B0208u;
    {
        const bool branch_taken_0x2b0208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0208) {
            ctx->pc = 0x2B020Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0208u;
            // 0x2b020c: 0x8fa400f8  lw          $a0, 0xF8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B07A8u;
            goto label_2b07a8;
        }
    }
    ctx->pc = 0x2B0210u;
    // 0x2b0210: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2b0210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2b0214: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2B0214u;
    {
        const bool branch_taken_0x2b0214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0214u;
        // 0x2b0218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0214) {
            ctx->pc = 0x2B05F0u;
            goto label_2b05f0;
        }
    }
    ctx->pc = 0x2B021Cu;
    // 0x2b021c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b0220:
    // 0x2b0220: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2b0220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b0224: 0x26170001  addiu       $s7, $s0, 0x1
    ctx->pc = 0x2b0224u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b0228: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b0228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b022c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2b022cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0230: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2b0230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b0234: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2B0234u;
    {
        const bool branch_taken_0x2b0234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0234u;
        // 0x2b0238: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0234) {
            ctx->pc = 0x2B05DCu;
            goto label_2b05dc;
        }
    }
    ctx->pc = 0x2B023Cu;
    // 0x2b023c: 0x8ecc0000  lw          $t4, 0x0($s6)
    ctx->pc = 0x2b023cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2b0240: 0x240d0030  addiu       $t5, $zero, 0x30
    ctx->pc = 0x2b0240u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b0244: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2b0244u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0248:
    // 0x2b0248: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2b0248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b024c: 0x96c30004  lhu         $v1, 0x4($s6)
    ctx->pc = 0x2b024cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2b0250: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2b0250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2b0254: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2b0254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b0258: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x2b0258u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b025c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0260: 0xa5430020  sh          $v1, 0x20($t2)
    ctx->pc = 0x2b0260u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b0264: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x2b0264u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b0268: 0x8d490004  lw          $t1, 0x4($t2)
    ctx->pc = 0x2b0268u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2b026c: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x2b026cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2b0270: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b0270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0274: 0x12d3818  mult        $a3, $t1, $t5
    ctx->pc = 0x2b0274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2b0278: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2b0278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b027c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2b027cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b0280: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2b0280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2b0284: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b0284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b0288: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2b0288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b028c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2b028cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2b0290: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x2b0290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x2b0294: 0xaec40004  sw          $a0, 0x4($s6)
    ctx->pc = 0x2b0294u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 4));
    // 0x2b0298: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2b0298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b029c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2b029cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b02a0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2b02a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2b02a4: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x2b02a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b02a8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2b02a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b02ac: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x2b02acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b02b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b02b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b02b4: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x2b02b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b02b8: 0xc5050008  lwc1        $f5, 0x8($t0)
    ctx->pc = 0x2b02b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b02bc: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2b02bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2b02c0: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x2b02c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2b02c4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2b02c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b02c8: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x2b02c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b02cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b02ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b02d0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2b02d0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2b02d4: 0xe5040004  swc1        $f4, 0x4($t0)
    ctx->pc = 0x2b02d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2b02d8: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x2b02d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b02dc: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2b02dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b02e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b02e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b02e4: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2b02e4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2b02e8: 0xe5050008  swc1        $f5, 0x8($t0)
    ctx->pc = 0x2b02e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2b02ec: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2b02ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b02f0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2b02f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2b02f4: 0xc5420014  lwc1        $f2, 0x14($t2)
    ctx->pc = 0x2b02f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b02f8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b02f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b02fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b02fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b0300: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b0304: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b0304u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b0308: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x2b0308u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2b030c: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2b030cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0310: 0xc5420014  lwc1        $f2, 0x14($t2)
    ctx->pc = 0x2b0310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0314: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2b0314u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2b0318: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b0318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b031c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b031cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b0320: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b0324: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b0324u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b0328: 0xe5040004  swc1        $f4, 0x4($t0)
    ctx->pc = 0x2b0328u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2b032c: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2b032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0330: 0xc5420014  lwc1        $f2, 0x14($t2)
    ctx->pc = 0x2b0330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0334: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2b0334u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2b0338: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b0338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b033c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b033cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b0340: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b0344: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2b0344u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2b0348: 0xe5050008  swc1        $f5, 0x8($t0)
    ctx->pc = 0x2b0348u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2b034c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2b034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b0350: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b0350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0354: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2b0354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b0358: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b0358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b035c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0360: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2b0360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b0364: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x2B0364u;
    {
        const bool branch_taken_0x2b0364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0364u;
        // 0x2b0368: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0364) {
            ctx->pc = 0x2B0558u;
            goto label_2b0558;
        }
    }
    ctx->pc = 0x2B036Cu;
    // 0x2b036c: 0xc4a80010  lwc1        $f8, 0x10($a1)
    ctx->pc = 0x2b036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b0370: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b0370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0374: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x2b0374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x2b0378: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x2b0378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b037c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0380: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2b0380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0384: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2b0384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0388: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2b0388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b038c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2b038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0390: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x2b0390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b0394: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x2b0394u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2b0398: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b0398u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b039c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b03a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b03a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b03a4: 0x46024200  add.s       $f8, $f8, $f2
    ctx->pc = 0x2b03a4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x2b03a8: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x2b03a8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x2b03ac: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x2b03acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b03b0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2b03b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b03b4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2b03b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b03b8: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x2b03b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b03bc: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2b03bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b03c0: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2b03c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b03c4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2b03c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b03c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b03c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b03cc: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2b03ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b03d0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b03d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b03d4: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2b03d4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x2b03d8: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2b03d8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2b03dc: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x2b03dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b03e0: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2b03e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b03e4: 0xc4a70010  lwc1        $f7, 0x10($a1)
    ctx->pc = 0x2b03e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b03e8: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x2b03e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b03ec: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2b03ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b03f0: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x2b03f0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2b03f4: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2b03f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b03f8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b03f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b03fc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b03fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0400: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b0400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b0404: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x2b0404u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x2b0408: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x2b0408u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x2b040c: 0xe7a70008  swc1        $f7, 0x8($sp)
    ctx->pc = 0x2b040cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b0410: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2b0410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0414: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x2b0414u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x2b0418: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2b0418u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b041c: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x2b041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b0420: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x2b0420u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x2b0424: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x2b0424u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b0428: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2b0428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b042c: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x2b042cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x2b0430: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2b0430u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b0434: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2b0434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0438: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2b0438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2b043c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b043cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b0440: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2b0440u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b0444: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x2b0444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0448: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2b0448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2b044c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2b044cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2b0450: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x2b0450u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b0454: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2b0454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0458: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2b0458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2b045c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b045cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b0460: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2b0460u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b0464: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2b0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0468: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2b0468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2b046c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b046cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b0470: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2b0470u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b0474: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x2b0474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0478: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2b0478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2b047c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2b047cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2b0480: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x2b0480u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b0484: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x2b0484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0488: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2b0488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2b048c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b048cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b0490: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2b0490u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b0494: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x2b0494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b0498: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2b0498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b049c: 0x46061982  mul.s       $f6, $f3, $f6
    ctx->pc = 0x2b049cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2b04a0: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2b04a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b04a4: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2b04a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2b04a8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2b04a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b04ac: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2b04acu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x2b04b0: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2b04b0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2b04b4: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x2b04b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b04b8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2b04b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b04bc: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x2b04bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b04c0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b04c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b04c4: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2b04c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b04c8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2b04c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2b04cc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2b04ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2b04d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b04d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b04d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b04d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b04d8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2b04d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b04dc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2b04dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b04e0: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x2b04e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b04e4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2b04e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b04e8: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x2b04e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b04ec: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2b04ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2b04f0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b04f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b04f4: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2b04f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2b04f8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2b04f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2b04fc: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2b04fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b0500: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x2b0500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0504: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b0504u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b0508: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x2b0508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b050c: 0xc5020014  lwc1        $f2, 0x14($t0)
    ctx->pc = 0x2b050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0510: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x2b0510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0514: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2b0514u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b0518: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2b0518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2b051c: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x2b051cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2b0520: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x2b0520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0524: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2b0524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0528: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b0528u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b052c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b052cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b0530: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2b0530u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2b0534: 0xe5020014  swc1        $f2, 0x14($t0)
    ctx->pc = 0x2b0534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x2b0538: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x2b0538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b053c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2b053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0540: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b0540u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b0544: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b0544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b0548: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2b0548u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2b054c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2B054Cu;
    {
        const bool branch_taken_0x2b054c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B054Cu;
        // 0x2b0550: 0xe5030018  swc1        $f3, 0x18($t0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b054c) {
            ctx->pc = 0x2B05C8u;
            goto label_2b05c8;
        }
    }
    ctx->pc = 0x2B0554u;
    // 0x2b0554: 0x0  nop
    ctx->pc = 0x2b0554u;
    // NOP
label_2b0558:
    // 0x2b0558: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x2b0558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b055c: 0xc5440018  lwc1        $f4, 0x18($t2)
    ctx->pc = 0x2b055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b0560: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b0560u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b0564: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2b0564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0568: 0xc5020010  lwc1        $f2, 0x10($t0)
    ctx->pc = 0x2b0568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b056c: 0xc5030014  lwc1        $f3, 0x14($t0)
    ctx->pc = 0x2b056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0570: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b0570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b0574: 0xc5050018  lwc1        $f5, 0x18($t0)
    ctx->pc = 0x2b0574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b0578: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b0578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b057c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2b057cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2b0580: 0xe5020010  swc1        $f2, 0x10($t0)
    ctx->pc = 0x2b0580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2b0584: 0xc4c1002c  lwc1        $f1, 0x2C($a2)
    ctx->pc = 0x2b0584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0588: 0xc5420018  lwc1        $f2, 0x18($t2)
    ctx->pc = 0x2b0588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b058c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2b058cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2b0590: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2b0590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0594: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b0594u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b0598: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b059c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b059cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b05a0: 0xe5030014  swc1        $f3, 0x14($t0)
    ctx->pc = 0x2b05a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x2b05a4: 0xc4c1002c  lwc1        $f1, 0x2C($a2)
    ctx->pc = 0x2b05a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b05a8: 0xc5420018  lwc1        $f2, 0x18($t2)
    ctx->pc = 0x2b05a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b05ac: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2b05acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2b05b0: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2b05b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b05b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b05b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b05b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b05b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b05bc: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2b05bcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2b05c0: 0xe5050018  swc1        $f5, 0x18($t0)
    ctx->pc = 0x2b05c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x2b05c4: 0x0  nop
    ctx->pc = 0x2b05c4u;
    // NOP
label_2b05c8:
    // 0x2b05c8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2b05c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b05cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b05ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b05d0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2b05d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b05d4: 0x1440ff1c  bnez        $v0, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x2B05D4u;
    {
        const bool branch_taken_0x2b05d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05D4u;
        // 0x2b05d8: 0x256b000c  addiu       $t3, $t3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05d4) {
            ctx->pc = 0x2B0248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0248;
        }
    }
    ctx->pc = 0x2B05DCu;
label_2b05dc:
    // 0x2b05dc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2b05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2b05e0: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x2b05e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b05e4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2b05e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b05e8: 0x5440ff0d  bnel        $v0, $zero, . + 4 + (-0xF3 << 2)
    ctx->pc = 0x2B05E8u;
    {
        const bool branch_taken_0x2b05e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b05e8) {
            ctx->pc = 0x2B05ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B05E8u;
            // 0x2b05ec: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0220;
        }
    }
    ctx->pc = 0x2B05F0u;
label_2b05f0:
    // 0x2b05f0: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2b05f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b05f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b05f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b05f8: 0xc0af77e  jal         func_2BDDF8
    ctx->pc = 0x2B05F8u;
    SET_GPR_U32(ctx, 31, 0x2B0600u);
    ctx->pc = 0x2B05FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B05F8u;
    // 0x2b05fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BDDF8u, 0x2B05F8u, 0x2B0600u)) {
        return;
    }
    ctx->pc = 0x2B0600u;
label_2b0600:
    // 0x2b0600: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2b0600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b0604: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B0604u;
    {
        const bool branch_taken_0x2b0604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0604) {
            ctx->pc = 0x2B0608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0604u;
            // 0x2b0608: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0678u;
            goto label_2b0678;
        }
    }
    ctx->pc = 0x2B060Cu;
    // 0x2b060c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b060cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0610: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2b0610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b0614: 0x0  nop
    ctx->pc = 0x2b0614u;
    // NOP
label_2b0618:
    // 0x2b0618: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b0618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b061c: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x2b061cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2b0620: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b0620u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2b0624: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2b0624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2b0628: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2b0628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b062c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b062cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0630: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2b0630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b0634: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b0634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b0638: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b0638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b063c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x2b063cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2b0640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b0640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b0644: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b0644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b0648: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b0648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b064c: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x2b064cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
    // 0x2b0650: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2b0650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b0654: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b0654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b0658: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b0658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b065c: 0xc0ae9ce  jal         func_2BA738
    ctx->pc = 0x2B065Cu;
    SET_GPR_U32(ctx, 31, 0x2B0664u);
    ctx->pc = 0x2B0660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B065Cu;
    // 0x2b0660: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BA738u, 0x2B065Cu, 0x2B0664u)) {
        return;
    }
    ctx->pc = 0x2B0664u;
label_2b0664:
    // 0x2b0664: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2b0664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b0668: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2b0668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b066c: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2B066Cu;
    {
        const bool branch_taken_0x2b066c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b066c) {
            ctx->pc = 0x2B0670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B066Cu;
            // 0x2b0670: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0618;
        }
    }
    ctx->pc = 0x2B0674u;
    // 0x2b0674: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2b0674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2b0678:
    // 0x2b0678: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2B0678u;
    {
        const bool branch_taken_0x2b0678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0678u;
        // 0x2b067c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0678) {
            ctx->pc = 0x2B0720u;
            goto label_2b0720;
        }
    }
    ctx->pc = 0x2B0680u;
    // 0x2b0680: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b0684: 0x0  nop
    ctx->pc = 0x2b0684u;
    // NOP
label_2b0688:
    // 0x2b0688: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2b0688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b068c: 0x26170001  addiu       $s7, $s0, 0x1
    ctx->pc = 0x2b068cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b0690: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b0690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0694: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2b0694u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0698: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x2b0698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2b069c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B069Cu;
    {
        const bool branch_taken_0x2b069c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B069Cu;
        // 0x2b06a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b069c) {
            ctx->pc = 0x2B070Cu;
            goto label_2b070c;
        }
    }
    ctx->pc = 0x2B06A4u;
    // 0x2b06a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b06a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b06a8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2b06a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2b06ac: 0x0  nop
    ctx->pc = 0x2b06acu;
    // NOP
label_2b06b0:
    // 0x2b06b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b06b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b06b4: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x2b06b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2b06b8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b06b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2b06bc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2b06bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b06c0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2b06c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b06c4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b06c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b06c8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2b06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b06cc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b06d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b06d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b06d4: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x2b06d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2b06d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b06d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b06dc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b06e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b06e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b06e4: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x2b06e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
    // 0x2b06e8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2b06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2b06ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b06f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b06f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b06f4: 0xc0ae9ce  jal         func_2BA738
    ctx->pc = 0x2B06F4u;
    SET_GPR_U32(ctx, 31, 0x2B06FCu);
    ctx->pc = 0x2B06F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B06F4u;
    // 0x2b06f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BA738u, 0x2B06F4u, 0x2B06FCu)) {
        return;
    }
    ctx->pc = 0x2B06FCu;
label_2b06fc:
    // 0x2b06fc: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x2b06fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2b0700: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2b0700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b0704: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2B0704u;
    {
        const bool branch_taken_0x2b0704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0704) {
            ctx->pc = 0x2B0708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0704u;
            // 0x2b0708: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B06B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b06b0;
        }
    }
    ctx->pc = 0x2B070Cu;
label_2b070c:
    // 0x2b070c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2b070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2b0710: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x2b0710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0714: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2b0714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b0718: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2B0718u;
    {
        const bool branch_taken_0x2b0718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0718) {
            ctx->pc = 0x2B071Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0718u;
            // 0x2b071c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0688;
        }
    }
    ctx->pc = 0x2B0720u;
label_2b0720:
    // 0x2b0720: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2b0720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b0724: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B0724u;
    {
        const bool branch_taken_0x2b0724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0724) {
            ctx->pc = 0x2B079Cu;
            goto label_2b079c;
        }
    }
    ctx->pc = 0x2B072Cu;
    // 0x2b072c: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x2b072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_2b0730:
    // 0x2b0730: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B0730u;
    {
        const bool branch_taken_0x2b0730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0730u;
        // 0x2b0734: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0730) {
            ctx->pc = 0x2B0790u;
            goto label_2b0790;
        }
    }
    ctx->pc = 0x2B0738u;
    // 0x2b0738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b073c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0740: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b0740u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2b0744: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2b0744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b0748: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b0748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b074c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b074cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0750: 0x8ea70108  lw          $a3, 0x108($s5)
    ctx->pc = 0x2b0750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
    // 0x2b0754: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2b0754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b0758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b0758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b075c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b075cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b0760: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b0760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b0764: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b0764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0768: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x2b0768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x2b076c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2b076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2b0770: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2b0770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b0774: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b0774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0778: 0x8e0700b0  lw          $a3, 0xB0($s0)
    ctx->pc = 0x2b0778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2b077c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b0780: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b0780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b0784: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b0784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b0788: 0xc0ae588  jal         func_2B9620
    ctx->pc = 0x2B0788u;
    SET_GPR_U32(ctx, 31, 0x2B0790u);
    ctx->pc = 0x2B078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0788u;
    // 0x2b078c: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B9620u, 0x2B0788u, 0x2B0790u)) {
        return;
    }
    ctx->pc = 0x2B0790u;
label_2b0790:
    // 0x2b0790: 0x8e1000dc  lw          $s0, 0xDC($s0)
    ctx->pc = 0x2b0790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x2b0794: 0x5600ffe6  bnel        $s0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2B0794u;
    {
        const bool branch_taken_0x2b0794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0794) {
            ctx->pc = 0x2B0798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0794u;
            // 0x2b0798: 0x8e0200ac  lw          $v0, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0730;
        }
    }
    ctx->pc = 0x2B079Cu;
label_2b079c:
    // 0x2b079c: 0xc0af794  jal         func_2BDE50
    ctx->pc = 0x2B079Cu;
    SET_GPR_U32(ctx, 31, 0x2B07A4u);
    ctx->pc = 0x2B07A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B079Cu;
    // 0x2b07a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDE50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BDE50u, 0x2B079Cu, 0x2B07A4u)) {
        return;
    }
    ctx->pc = 0x2B07A4u;
label_2b07a4:
    // 0x2b07a4: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2b07a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_2b07a8:
    // 0x2b07a8: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x2b07a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2b07ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b07acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b07b0: 0x14a2fe8d  bne         $a1, $v0, . + 4 + (-0x173 << 2)
    ctx->pc = 0x2B07B0u;
    {
        const bool branch_taken_0x2b07b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07B0u;
        // 0x2b07b4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07b0) {
            ctx->pc = 0x2B01E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b01e8;
        }
    }
    ctx->pc = 0x2B07B8u;
label_2b07b8:
    // 0x2b07b8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2b07b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b07bc: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2b07bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b07c0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2b07c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b07c4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2b07c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b07c8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2b07c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b07cc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2b07ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b07d0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2b07d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b07d4: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2b07d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b07d8: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2b07d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b07dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b07dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b07e0: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2b07e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b07e4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2b07e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b07e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B07E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07E8u;
        // 0x2b07ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B07E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B07F0u;
}
