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

// Function: sub_0022C2A8
// Address: 0x22c2a8 - 0x22c4e0
void sub_0022C2A8_0x22c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C2A8_0x22c2a8");
#endif

    switch (ctx->pc) {
        case 0x22c40cu: goto label_22c40c;
        case 0x22c428u: goto label_22c428;
        case 0x22c49cu: goto label_22c49c;
        default: break;
    }

    ctx->pc = 0x22c2a8u;

label_22c2a8:
    // 0x22c2a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22c2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x22c2ac: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x22c2acu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2b0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x22c2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x22c2b4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x22c2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x22c2b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22c2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2bc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x22c2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x22c2c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22c2c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2c4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x22c2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x22c2c8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x22c2c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2cc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x22c2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x22c2d0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x22c2d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2d4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x22c2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x22c2d8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x22c2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x22c2dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22c2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22c2e0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x22c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x22c2e4: 0x13000071  beqz        $t8, . + 4 + (0x71 << 2)
    ctx->pc = 0x22C2E4u;
    {
        const bool branch_taken_0x22c2e4 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2E4u;
        // 0x22c2e8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2e4) {
            ctx->pc = 0x22C4ACu;
            goto label_22c4ac;
        }
    }
    ctx->pc = 0x22C2ECu;
    // 0x22c2ec: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x22c2ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c2f4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x22c2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22c2f8: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x22c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x22c2fc: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x22c2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22c300: 0x1226821  addu        $t5, $t1, $v0
    ctx->pc = 0x22c300u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x22c304: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x22c304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22c308: 0x1025821  addu        $t3, $t0, $v0
    ctx->pc = 0x22c308u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22c30c: 0x8e970000  lw          $s7, 0x0($s4)
    ctx->pc = 0x22c30cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22c310: 0xe26021  addu        $t4, $a3, $v0
    ctx->pc = 0x22c310u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22c314: 0x8e950004  lw          $s5, 0x4($s4)
    ctx->pc = 0x22c314u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x22c318: 0xc25021  addu        $t2, $a2, $v0
    ctx->pc = 0x22c318u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22c31c: 0x8e960008  lw          $s6, 0x8($s4)
    ctx->pc = 0x22c31cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x22c320: 0x1b72823  subu        $a1, $t5, $s7
    ctx->pc = 0x22c320u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 23)));
    // 0x22c324: 0x8e99000c  lw          $t9, 0xC($s4)
    ctx->pc = 0x22c324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x22c328: 0x1752023  subu        $a0, $t3, $s5
    ctx->pc = 0x22c328u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 21)));
    // 0x22c32c: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x22c32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x22c330: 0x1961823  subu        $v1, $t4, $s6
    ctx->pc = 0x22c330u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 22)));
    // 0x22c334: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x22c334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x22c338: 0x1591023  subu        $v0, $t2, $t9
    ctx->pc = 0x22c338u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x22c33c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x22c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x22c340: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x22c340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x22c344: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x22c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x22c348: 0xafab0014  sw          $t3, 0x14($sp)
    ctx->pc = 0x22c348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 11));
    // 0x22c34c: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x22c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x22c350: 0x18a00056  blez        $a1, . + 4 + (0x56 << 2)
    ctx->pc = 0x22C350u;
    {
        const bool branch_taken_0x22c350 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x22C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C350u;
        // 0x22c354: 0xafaa001c  sw          $t2, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c350) {
            ctx->pc = 0x22C4ACu;
            goto label_22c4ac;
        }
    }
    ctx->pc = 0x22C358u;
    // 0x22c358: 0x18800055  blez        $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x22C358u;
    {
        const bool branch_taken_0x22c358 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x22C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C358u;
        // 0x22c35c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c358) {
            ctx->pc = 0x22C4B0u;
            goto label_22c4b0;
        }
    }
    ctx->pc = 0x22C360u;
    // 0x22c360: 0x58600054  blezl       $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x22C360u;
    {
        const bool branch_taken_0x22c360 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x22c360) {
            ctx->pc = 0x22C364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C360u;
            // 0x22c364: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C4B4u;
            goto label_22c4b4;
        }
    }
    ctx->pc = 0x22C368u;
    // 0x22c368: 0x58400052  blezl       $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x22C368u;
    {
        const bool branch_taken_0x22c368 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x22c368) {
            ctx->pc = 0x22C36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C368u;
            // 0x22c36c: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C4B4u;
            goto label_22c4b4;
        }
    }
    ctx->pc = 0x22C370u;
    // 0x22c370: 0x8e8f0010  lw          $t7, 0x10($s4)
    ctx->pc = 0x22c370u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x22c374: 0x8e900014  lw          $s0, 0x14($s4)
    ctx->pc = 0x22c374u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x22c378: 0x8e930018  lw          $s3, 0x18($s4)
    ctx->pc = 0x22c378u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x22c37c: 0x12f2823  subu        $a1, $t1, $t7
    ctx->pc = 0x22c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x22c380: 0x8e8e001c  lw          $t6, 0x1C($s4)
    ctx->pc = 0x22c380u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x22c384: 0x1102023  subu        $a0, $t0, $s0
    ctx->pc = 0x22c384u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x22c388: 0xf31823  subu        $v1, $a3, $s3
    ctx->pc = 0x22c388u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x22c38c: 0x4a10047  bgez        $a1, . + 4 + (0x47 << 2)
    ctx->pc = 0x22C38Cu;
    {
        const bool branch_taken_0x22c38c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x22C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C38Cu;
        // 0x22c390: 0xce1023  subu        $v0, $a2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c38c) {
            ctx->pc = 0x22C4ACu;
            goto label_22c4ac;
        }
    }
    ctx->pc = 0x22C394u;
    // 0x22c394: 0x4830046  bgezl       $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x22C394u;
    {
        const bool branch_taken_0x22c394 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x22c394) {
            ctx->pc = 0x22C398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C394u;
            // 0x22c398: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C4B0u;
            goto label_22c4b0;
        }
    }
    ctx->pc = 0x22C39Cu;
    // 0x22c39c: 0x4630044  bgezl       $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x22C39Cu;
    {
        const bool branch_taken_0x22c39c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x22c39c) {
            ctx->pc = 0x22C3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C39Cu;
            // 0x22c3a0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C4B0u;
            goto label_22c4b0;
        }
    }
    ctx->pc = 0x22C3A4u;
    // 0x22c3a4: 0x4430042  bgezl       $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x22C3A4u;
    {
        const bool branch_taken_0x22c3a4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x22c3a4) {
            ctx->pc = 0x22C3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C3A4u;
            // 0x22c3a8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C4B0u;
            goto label_22c4b0;
        }
    }
    ctx->pc = 0x22C3ACu;
    // 0x22c3ac: 0x1372823  subu        $a1, $t1, $s7
    ctx->pc = 0x22c3acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 23)));
    // 0x22c3b0: 0x1152023  subu        $a0, $t0, $s5
    ctx->pc = 0x22c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 21)));
    // 0x22c3b4: 0xf61823  subu        $v1, $a3, $s6
    ctx->pc = 0x22c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    // 0x22c3b8: 0x4a00016  bltz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x22C3B8u;
    {
        const bool branch_taken_0x22c3b8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x22C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3B8u;
        // 0x22c3bc: 0xd91023  subu        $v0, $a2, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3b8) {
            ctx->pc = 0x22C414u;
            goto label_22c414;
        }
    }
    ctx->pc = 0x22C3C0u;
    // 0x22c3c0: 0x4800014  bltz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22C3C0u;
    {
        const bool branch_taken_0x22c3c0 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x22c3c0) {
            ctx->pc = 0x22C414u;
            goto label_22c414;
        }
    }
    ctx->pc = 0x22C3C8u;
    // 0x22c3c8: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x22C3C8u;
    {
        const bool branch_taken_0x22c3c8 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x22c3c8) {
            ctx->pc = 0x22C414u;
            goto label_22c414;
        }
    }
    ctx->pc = 0x22C3D0u;
    // 0x22c3d0: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22C3D0u;
    {
        const bool branch_taken_0x22c3d0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x22C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3D0u;
        // 0x22c3d4: 0x1ed2823  subu        $a1, $t7, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3d0) {
            ctx->pc = 0x22C414u;
            goto label_22c414;
        }
    }
    ctx->pc = 0x22C3D8u;
    // 0x22c3d8: 0x20b2023  subu        $a0, $s0, $t3
    ctx->pc = 0x22c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
    // 0x22c3dc: 0x26c1823  subu        $v1, $s3, $t4
    ctx->pc = 0x22c3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x22c3e0: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x22C3E0u;
    {
        const bool branch_taken_0x22c3e0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x22C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3E0u;
        // 0x22c3e4: 0x1ca1023  subu        $v0, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3e0) {
            ctx->pc = 0x22C414u;
            goto label_22c414;
        }
    }
    ctx->pc = 0x22C3E8u;
    // 0x22c3e8: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x22C3E8u;
    {
        const bool branch_taken_0x22c3e8 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x22c3e8) {
            ctx->pc = 0x22C414u;
            goto label_22c414;
        }
    }
    ctx->pc = 0x22C3F0u;
    // 0x22c3f0: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22C3F0u;
    {
        const bool branch_taken_0x22c3f0 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x22c3f0) {
            ctx->pc = 0x22C414u;
            goto label_22c414;
        }
    }
    ctx->pc = 0x22C3F8u;
    // 0x22c3f8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C3F8u;
    {
        const bool branch_taken_0x22c3f8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x22C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3F8u;
        // 0x22c3fc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3f8) {
            ctx->pc = 0x22C414u;
            goto label_22c414;
        }
    }
    ctx->pc = 0x22C400u;
    // 0x22c400: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x22c400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c404: 0xc08ae6e  jal         func_22B9B8
    ctx->pc = 0x22C404u;
    SET_GPR_U32(ctx, 31, 0x22C40Cu);
    ctx->pc = 0x22C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C404u;
    // 0x22c408: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B9B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B9B8u, 0x22C404u, 0x22C40Cu)) {
        return;
    }
    ctx->pc = 0x22C40Cu;
label_22c40c:
    // 0x22c40c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x22C40Cu;
    {
        const bool branch_taken_0x22c40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C40Cu;
        // 0x22c410: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c40c) {
            ctx->pc = 0x22C4B0u;
            goto label_22c4b0;
        }
    }
    ctx->pc = 0x22C414u;
label_22c414:
    // 0x22c414: 0x1a200025  blez        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x22C414u;
    {
        const bool branch_taken_0x22c414 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x22C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C414u;
        // 0x22c418: 0x2713001c  addiu       $s3, $t8, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 24), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c414) {
            ctx->pc = 0x22C4ACu;
            goto label_22c4ac;
        }
    }
    ctx->pc = 0x22C41Cu;
    // 0x22c41c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22c41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22c420: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22c420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c424: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x22c424u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22c428:
    // 0x22c428: 0x102043  sra         $a0, $s0, 1
    ctx->pc = 0x22c428u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
    // 0x22c42c: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x22c42cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22c430: 0x1010c3  sra         $v0, $s0, 3
    ctx->pc = 0x22c430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 3));
    // 0x22c434: 0x101883  sra         $v1, $s0, 2
    ctx->pc = 0x22c434u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
    // 0x22c438: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x22c438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x22c43c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x22c43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c440: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x22c440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22c444: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x22c444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x22c448: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22c448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22c44c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22c44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22c450: 0x8e49000c  lw          $t1, 0xC($s2)
    ctx->pc = 0x22c450u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22c454: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x22c454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x22c458: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x22c458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x22c45c: 0x32050001  andi        $a1, $s0, 0x1
    ctx->pc = 0x22c45cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x22c460: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x22c460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x22c464: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x22c464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22c468: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x22c468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22c46c: 0x2252804  sllv        $a1, $a1, $s1
    ctx->pc = 0x22c46cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x22c470: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x22c470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22c474: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x22c474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x22c478: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x22c478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x22c47c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22c47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c480: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x22c480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x22c484: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22c484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c488: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x22c488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x22c48c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22c48cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c490: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x22c490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x22c494: 0xc08b0aa  jal         func_22C2A8
    ctx->pc = 0x22C494u;
    SET_GPR_U32(ctx, 31, 0x22C49Cu);
    ctx->pc = 0x22C498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C494u;
    // 0x22c498: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C2A8u;
    goto label_22c2a8;
    ctx->pc = 0x22C49Cu;
label_22c49c:
    // 0x22c49c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22c49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22c4a0: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x22c4a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x22c4a4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x22C4A4u;
    {
        const bool branch_taken_0x22c4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4A4u;
        // 0x22c4a8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c4a4) {
            ctx->pc = 0x22C428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c428;
        }
    }
    ctx->pc = 0x22C4ACu;
label_22c4ac:
    // 0x22c4ac: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x22c4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_22c4b0:
    // 0x22c4b0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x22c4b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_22c4b4:
    // 0x22c4b4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x22c4b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22c4b8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x22c4b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22c4bc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x22c4bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22c4c0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x22c4c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22c4c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22c4c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c4c8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x22c4c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c4cc: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x22c4ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c4d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22c4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x22C4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4D4u;
        // 0x22c4d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C4DCu;
    // 0x22c4dc: 0x0  nop
    ctx->pc = 0x22c4dcu;
    // NOP
    ctx->pc = 0x22c4e0u;
}
