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

// Function: sub_002D5388
// Address: 0x2d5388 - 0x2d5570
void sub_002D5388_0x2d5388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5388_0x2d5388");
#endif

    switch (ctx->pc) {
        case 0x2d53c8u: goto label_2d53c8;
        case 0x2d5400u: goto label_2d5400;
        case 0x2d5480u: goto label_2d5480;
        default: break;
    }

    ctx->pc = 0x2d5388u;

    // 0x2d5388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d5388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d538c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x2d538cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5390: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d5390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d5394: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d5394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d5398: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d5398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d539c: 0x7fb30000  sq          $s3, 0x0($sp)
    ctx->pc = 0x2d539cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 19));
    // 0x2d53a0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2d53a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d53a4: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2D53A4u;
    {
        const bool branch_taken_0x2d53a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53A4u;
        // 0x2d53a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d53a4) {
            ctx->pc = 0x2D5554u;
            goto label_2d5554;
        }
    }
    ctx->pc = 0x2D53ACu;
    // 0x2d53ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2d53acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2d53b0: 0x8cb30010  lw          $s3, 0x10($a1)
    ctx->pc = 0x2d53b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d53b4: 0xc4473b78  lwc1        $f7, 0x3B78($v0)
    ctx->pc = 0x2d53b4u;
    { uint32_t bits = FAST_READ32(0x6B3B78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d53b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d53b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d53bc: 0x24120028  addiu       $s2, $zero, 0x28
    ctx->pc = 0x2d53bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2d53c0: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x2d53c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d53c4: 0x0  nop
    ctx->pc = 0x2d53c4u;
    // NOP
label_2d53c8:
    // 0x2d53c8: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x2d53c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d53cc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2d53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d53d0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2d53d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d53d4: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2D53D4u;
    {
        const bool branch_taken_0x2d53d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53D4u;
        // 0x2d53d8: 0x24790001  addiu       $t9, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d53d4) {
            ctx->pc = 0x2D5544u;
            goto label_2d5544;
        }
    }
    ctx->pc = 0x2D53DCu;
    // 0x2d53dc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x2d53dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d53e0: 0x50e00059  beql        $a3, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x2D53E0u;
    {
        const bool branch_taken_0x2d53e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d53e0) {
            ctx->pc = 0x2D53E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D53E0u;
            // 0x2d53e4: 0x320182d  daddu       $v1, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5548u;
            goto label_2d5548;
        }
    }
    ctx->pc = 0x2D53E8u;
    // 0x2d53e8: 0x3c0c001f  lui         $t4, 0x1F
    ctx->pc = 0x2d53e8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)31 << 16));
    // 0x2d53ec: 0x3418ffff  ori         $t8, $zero, 0xFFFF
    ctx->pc = 0x2d53ecu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d53f0: 0x358cffe0  ori         $t4, $t4, 0xFFE0
    ctx->pc = 0x2d53f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65504);
    // 0x2d53f4: 0x24103ffd  addiu       $s0, $zero, 0x3FFD
    ctx->pc = 0x2d53f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16381));
    // 0x2d53f8: 0x46003986  mov.s       $f6, $f7
    ctx->pc = 0x2d53f8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[7]);
    // 0x2d53fc: 0x94e400b8  lhu         $a0, 0xB8($a3)
    ctx->pc = 0x2d53fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 184)));
label_2d5400:
    // 0x2d5400: 0x46003146  mov.s       $f5, $f6
    ctx->pc = 0x2d5400u;
    ctx->f[5] = FPU_MOV_S(ctx->f[6]);
    // 0x2d5404: 0x10980006  beq         $a0, $t8, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5404u;
    {
        const bool branch_taken_0x2d5404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 24));
        ctx->pc = 0x2D5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5404u;
        // 0x2d5408: 0xace000d0  sw          $zero, 0xD0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5404) {
            ctx->pc = 0x2D5420u;
            goto label_2d5420;
        }
    }
    ctx->pc = 0x2D540Cu;
    // 0x2d540c: 0x8ce300b4  lw          $v1, 0xB4($a3)
    ctx->pc = 0x2d540cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x2d5410: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x2d5410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d5414: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d5414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d5418: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5418u;
    {
        const bool branch_taken_0x2d5418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5418u;
        // 0x2d541c: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5418) {
            ctx->pc = 0x2D5424u;
            goto label_2d5424;
        }
    }
    ctx->pc = 0x2D5420u;
label_2d5420:
    // 0x2d5420: 0x8c2821  addu        $a1, $a0, $t4
    ctx->pc = 0x2d5420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_2d5424:
    // 0x2d5424: 0x94e400c0  lhu         $a0, 0xC0($a3)
    ctx->pc = 0x2d5424u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x2d5428: 0x50980005  beql        $a0, $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5428u;
    {
        const bool branch_taken_0x2d5428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 24));
        if (branch_taken_0x2d5428) {
            ctx->pc = 0x2D542Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5428u;
            // 0x2d542c: 0x8c1021  addu        $v0, $a0, $t4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5440u;
            goto label_2d5440;
        }
    }
    ctx->pc = 0x2D5430u;
    // 0x2d5430: 0x8ce300bc  lw          $v1, 0xBC($a3)
    ctx->pc = 0x2d5430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x2d5434: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x2d5434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d5438: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d5438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d543c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d5440:
    // 0x2d5440: 0xb01818  mult        $v1, $a1, $s0
    ctx->pc = 0x2d5440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d5444: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x2d5444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2d5448: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d5448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d544c: 0x8de30004  lw          $v1, 0x4($t7)
    ctx->pc = 0x2d544cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x2d5450: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d5450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d5454: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d5454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d5458: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d5458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d545c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d545cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d5460: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2d5460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5464: 0x50a00035  beql        $a1, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2D5464u;
    {
        const bool branch_taken_0x2d5464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5464) {
            ctx->pc = 0x2D5468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5464u;
            // 0x2d5468: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D553Cu;
            goto label_2d553c;
        }
    }
    ctx->pc = 0x2D546Cu;
    // 0x2d546c: 0x24eb00b4  addiu       $t3, $a3, 0xB4
    ctx->pc = 0x2d546cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 180));
    // 0x2d5470: 0x24ee00bc  addiu       $t6, $a3, 0xBC
    ctx->pc = 0x2d5470u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 188));
    // 0x2d5474: 0x956d0004  lhu         $t5, 0x4($t3)
    ctx->pc = 0x2d5474u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2d5478: 0x94a90004  lhu         $t1, 0x4($a1)
    ctx->pc = 0x2d5478u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d547c: 0x0  nop
    ctx->pc = 0x2d547cu;
    // NOP
label_2d5480:
    // 0x2d5480: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d5480u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5484: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d5484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5488: 0x152d0008  bne         $t1, $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5488u;
    {
        const bool branch_taken_0x2d5488 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 13));
        ctx->pc = 0x2D548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5488u;
        // 0x2d548c: 0x24e800bc  addiu       $t0, $a3, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5488) {
            ctx->pc = 0x2D54ACu;
            goto label_2d54ac;
        }
    }
    ctx->pc = 0x2D5490u;
    // 0x2d5490: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x2d5490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d5494: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d5494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5498: 0x95c30004  lhu         $v1, 0x4($t6)
    ctx->pc = 0x2d5498u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2d549c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2d549cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2d54a0: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x2d54a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x2d54a4: 0x5480000d  bnel        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D54A4u;
    {
        const bool branch_taken_0x2d54a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d54a4) {
            ctx->pc = 0x2D54A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D54A4u;
            // 0x2d54a8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D54DCu;
            goto label_2d54dc;
        }
    }
    ctx->pc = 0x2D54ACu;
label_2d54ac:
    // 0x2d54ac: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x2d54acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d54b0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2d54b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54b4: 0x1221026  xor         $v0, $t1, $v0
    ctx->pc = 0x2d54b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
    // 0x2d54b8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2d54b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x2d54bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D54BCu;
    {
        const bool branch_taken_0x2d54bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54BCu;
        // 0x2d54c0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54bc) {
            ctx->pc = 0x2D54DCu;
            goto label_2d54dc;
        }
    }
    ctx->pc = 0x2D54C4u;
    // 0x2d54c4: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x2d54c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d54c8: 0x95630004  lhu         $v1, 0x4($t3)
    ctx->pc = 0x2d54c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2d54cc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2d54ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2d54d0: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x2d54d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x2d54d4: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D54D4u;
    {
        const bool branch_taken_0x2d54d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d54d4) {
            ctx->pc = 0x2D54D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D54D4u;
            // 0x2d54d8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D54DCu;
            goto label_2d54dc;
        }
    }
    ctx->pc = 0x2D54DCu;
label_2d54dc:
    // 0x2d54dc: 0x51400014  beql        $t2, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D54DCu;
    {
        const bool branch_taken_0x2d54dc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d54dc) {
            ctx->pc = 0x2D54E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D54DCu;
            // 0x2d54e0: 0x8ca50024  lw          $a1, 0x24($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5530u;
            goto label_2d5530;
        }
    }
    ctx->pc = 0x2D54E4u;
    // 0x2d54e4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2d54e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d54e8: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2d54e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d54ec: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x2d54ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d54f0: 0xc4a40018  lwc1        $f4, 0x18($a1)
    ctx->pc = 0x2d54f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d54f4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2d54f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d54f8: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2d54f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d54fc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2d54fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2d5500: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x2d5500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5504: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d5504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d5508: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2d5508u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2d550c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2d550cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d5510: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x2d5510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5514: 0x0  nop
    ctx->pc = 0x2d5514u;
    // NOP
    // 0x2d5518: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5518u;
    {
        const bool branch_taken_0x2d5518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5518) {
            ctx->pc = 0x2D551Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5518u;
            // 0x2d551c: 0x8ca50024  lw          $a1, 0x24($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5530u;
            goto label_2d5530;
        }
    }
    ctx->pc = 0x2D5520u;
    // 0x2d5520: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2d5520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5524: 0x46001146  mov.s       $f5, $f2
    ctx->pc = 0x2d5524u;
    ctx->f[5] = FPU_MOV_S(ctx->f[2]);
    // 0x2d5528: 0xe4e000d0  swc1        $f0, 0xD0($a3)
    ctx->pc = 0x2d5528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 208), bits); }
    // 0x2d552c: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x2d552cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2d5530:
    // 0x2d5530: 0x54a0ffd3  bnel        $a1, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2D5530u;
    {
        const bool branch_taken_0x2d5530 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5530) {
            ctx->pc = 0x2D5534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5530u;
            // 0x2d5534: 0x94a90004  lhu         $t1, 0x4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5480;
        }
    }
    ctx->pc = 0x2D5538u;
    // 0x2d5538: 0x8ce700dc  lw          $a3, 0xDC($a3)
    ctx->pc = 0x2d5538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
label_2d553c:
    // 0x2d553c: 0x54e0ffb0  bnel        $a3, $zero, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2D553Cu;
    {
        const bool branch_taken_0x2d553c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d553c) {
            ctx->pc = 0x2D5540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D553Cu;
            // 0x2d5540: 0x94e400b8  lhu         $a0, 0xB8($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5400;
        }
    }
    ctx->pc = 0x2D5544u;
label_2d5544:
    // 0x2d5544: 0x320182d  daddu       $v1, $t9, $zero
    ctx->pc = 0x2d5544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_2d5548:
    // 0x2d5548: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x2d5548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d554c: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x2D554Cu;
    {
        const bool branch_taken_0x2d554c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D554Cu;
        // 0x2d5550: 0x721018  mult        $v0, $v1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d554c) {
            ctx->pc = 0x2D53C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d53c8;
        }
    }
    ctx->pc = 0x2D5554u;
label_2d5554:
    // 0x2d5554: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d5554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5558: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x2d5558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d555c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d555cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5560: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d5560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5564: 0x7bb30000  lq          $s3, 0x0($sp)
    ctx->pc = 0x2d5564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5568: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5568u;
        // 0x2d556c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5570u;
}
