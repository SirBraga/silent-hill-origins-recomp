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

// Function: sub_0031A3F8
// Address: 0x31a3f8 - 0x31aa80
void sub_0031A3F8_0x31a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A3F8_0x31a3f8");
#endif

    switch (ctx->pc) {
        case 0x31a498u: goto label_31a498;
        case 0x31a4b0u: goto label_31a4b0;
        case 0x31a4ccu: goto label_31a4cc;
        case 0x31a51cu: goto label_31a51c;
        case 0x31a540u: goto label_31a540;
        case 0x31a550u: goto label_31a550;
        case 0x31a560u: goto label_31a560;
        case 0x31a568u: goto label_31a568;
        case 0x31a580u: goto label_31a580;
        case 0x31a588u: goto label_31a588;
        case 0x31a5b0u: goto label_31a5b0;
        case 0x31a5bcu: goto label_31a5bc;
        case 0x31a5e0u: goto label_31a5e0;
        case 0x31a5f4u: goto label_31a5f4;
        case 0x31a610u: goto label_31a610;
        case 0x31a668u: goto label_31a668;
        case 0x31a670u: goto label_31a670;
        case 0x31a680u: goto label_31a680;
        case 0x31a694u: goto label_31a694;
        case 0x31a6b8u: goto label_31a6b8;
        case 0x31a6e8u: goto label_31a6e8;
        case 0x31a740u: goto label_31a740;
        case 0x31a74cu: goto label_31a74c;
        case 0x31a758u: goto label_31a758;
        case 0x31a764u: goto label_31a764;
        case 0x31a770u: goto label_31a770;
        case 0x31a780u: goto label_31a780;
        case 0x31a798u: goto label_31a798;
        case 0x31a7b0u: goto label_31a7b0;
        case 0x31a7bcu: goto label_31a7bc;
        case 0x31a7f0u: goto label_31a7f0;
        case 0x31a828u: goto label_31a828;
        case 0x31a854u: goto label_31a854;
        case 0x31a8a8u: goto label_31a8a8;
        case 0x31a920u: goto label_31a920;
        case 0x31aa2cu: goto label_31aa2c;
        default: break;
    }

    ctx->pc = 0x31a3f8u;

    // 0x31a3f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31a3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x31a3fc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x31a3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x31a400: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x31a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x31a404: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x31a404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a408: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x31a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x31a40c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31a40cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a410: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x31a410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x31a414: 0x30deffff  andi        $fp, $a2, 0xFFFF
    ctx->pc = 0x31a414u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x31a418: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x31a418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x31a41c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x31a41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x31a420: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x31a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x31a424: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x31a424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x31a428: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31a428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31a42c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x31a42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x31a430: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x31a430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x31a434: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31a434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a438: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x31a438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a43c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x31a43cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x31a440: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31a440u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31a444: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x31a444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x31a448: 0x22502  srl         $a0, $v0, 20
    ctx->pc = 0x31a448u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x31a44c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31a44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31a450: 0x30850800  andi        $a1, $a0, 0x800
    ctx->pc = 0x31a450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x31a454: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x31a454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31a458: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x31a458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x31a45c: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x31a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x31a460: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x31A460u;
    {
        const bool branch_taken_0x31a460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A460u;
        // 0x31a464: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a460) {
            ctx->pc = 0x31A4B8u;
            goto label_31a4b8;
        }
    }
    ctx->pc = 0x31A468u;
    // 0x31a468: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x31A468u;
    {
        const bool branch_taken_0x31a468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A468u;
        // 0x31a46c: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a468) {
            ctx->pc = 0x31A4A0u;
            goto label_31a4a0;
        }
    }
    ctx->pc = 0x31A470u;
    // 0x31a470: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x31A470u;
    {
        const bool branch_taken_0x31a470 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a470) {
            ctx->pc = 0x31A474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A470u;
            // 0x31a474: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A4A4u;
            goto label_31a4a4;
        }
    }
    ctx->pc = 0x31A478u;
    // 0x31a478: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A478u;
    {
        const bool branch_taken_0x31a478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A478u;
        // 0x31a47c: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a478) {
            ctx->pc = 0x31A488u;
            goto label_31a488;
        }
    }
    ctx->pc = 0x31A480u;
    // 0x31a480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31A480u;
    {
        const bool branch_taken_0x31a480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A480u;
        // 0x31a484: 0x24a51cf0  addiu       $a1, $a1, 0x1CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a480) {
            ctx->pc = 0x31A490u;
            goto label_31a490;
        }
    }
    ctx->pc = 0x31A488u;
label_31a488:
    // 0x31a488: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x31a488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x31a48c: 0x24a51d00  addiu       $a1, $a1, 0x1D00
    ctx->pc = 0x31a48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7424));
label_31a490:
    // 0x31a490: 0xc0c8364  jal         func_320D90
    ctx->pc = 0x31A490u;
    SET_GPR_U32(ctx, 31, 0x31A498u);
    ctx->pc = 0x31A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A490u;
    // 0x31a494: 0x260490e8  addiu       $a0, $s0, -0x6F18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320D90u, 0x31A490u, 0x31A498u)) {
        return;
    }
    ctx->pc = 0x31A498u;
label_31a498:
    // 0x31a498: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x31A498u;
    {
        const bool branch_taken_0x31a498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A498u;
        // 0x31a49c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a498) {
            ctx->pc = 0x31AA48u;
            goto label_31aa48;
        }
    }
    ctx->pc = 0x31A4A0u;
label_31a4a0:
    // 0x31a4a0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x31a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_31a4a4:
    // 0x31a4a4: 0x24a51d08  addiu       $a1, $a1, 0x1D08
    ctx->pc = 0x31a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7432));
    // 0x31a4a8: 0xc0c8364  jal         func_320D90
    ctx->pc = 0x31A4A8u;
    SET_GPR_U32(ctx, 31, 0x31A4B0u);
    ctx->pc = 0x31A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4A8u;
    // 0x31a4ac: 0x260490e8  addiu       $a0, $s0, -0x6F18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320D90u, 0x31A4A8u, 0x31A4B0u)) {
        return;
    }
    ctx->pc = 0x31A4B0u;
label_31a4b0:
    // 0x31a4b0: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x31A4B0u;
    {
        const bool branch_taken_0x31a4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A4B0u;
        // 0x31a4b4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a4b0) {
            ctx->pc = 0x31AA48u;
            goto label_31aa48;
        }
    }
    ctx->pc = 0x31A4B8u;
label_31a4b8:
    // 0x31a4b8: 0x8fb50000  lw          $s5, 0x0($sp)
    ctx->pc = 0x31a4b8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a4bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31a4bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31a4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4c4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31A4C4u;
    SET_GPR_U32(ctx, 31, 0x31A4CCu);
    ctx->pc = 0x31A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4C4u;
    // 0x31a4c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31A4C4u, 0x31A4CCu)) {
        return;
    }
    ctx->pc = 0x31A4CCu;
label_31a4cc:
    // 0x31a4cc: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x31A4CCu;
    {
        const bool branch_taken_0x31a4cc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x31A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A4CCu;
        // 0x31a4d0: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a4cc) {
            ctx->pc = 0x31A524u;
            goto label_31a524;
        }
    }
    ctx->pc = 0x31A4D4u;
    // 0x31a4d4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31A4D4u;
    {
        const bool branch_taken_0x31a4d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A4D4u;
        // 0x31a4d8: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a4d4) {
            ctx->pc = 0x31A4F4u;
            goto label_31a4f4;
        }
    }
    ctx->pc = 0x31A4DCu;
    // 0x31a4dc: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x31a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x31a4e0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x31a4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x31a4e4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x31a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x31a4e8: 0x248290e8  addiu       $v0, $a0, -0x6F18
    ctx->pc = 0x31a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938856));
    // 0x31a4ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31A4ECu;
    {
        const bool branch_taken_0x31a4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A4ECu;
        // 0x31a4f0: 0xac629230  sw          $v0, -0x6DD0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294939184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a4ec) {
            ctx->pc = 0x31A510u;
            goto label_31a510;
        }
    }
    ctx->pc = 0x31A4F4u;
label_31a4f4:
    // 0x31a4f4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x31a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x31a4f8: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x31a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x31a4fc: 0x246290e8  addiu       $v0, $v1, -0x6F18
    ctx->pc = 0x31a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938856));
    // 0x31a500: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x31a500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x31a504: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x31a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x31a508: 0xa46490e8  sh          $a0, -0x6F18($v1)
    ctx->pc = 0x31a508u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7290E8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7290E8u, _value); } while (0);
    // 0x31a50c: 0xaca29230  sw          $v0, -0x6DD0($a1)
    ctx->pc = 0x31a50cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x729230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729230u, _value); } while (0);
label_31a510:
    // 0x31a510: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31a510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a514: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31A514u;
    SET_GPR_U32(ctx, 31, 0x31A51Cu);
    ctx->pc = 0x31A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A514u;
    // 0x31a518: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31A514u, 0x31A51Cu)) {
        return;
    }
    ctx->pc = 0x31A51Cu;
label_31a51c:
    // 0x31a51c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31A51Cu;
    {
        const bool branch_taken_0x31a51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A51Cu;
        // 0x31a520: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a51c) {
            ctx->pc = 0x31A530u;
            goto label_31a530;
        }
    }
    ctx->pc = 0x31A524u;
label_31a524:
    // 0x31a524: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x31a524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x31a528: 0x244390e8  addiu       $v1, $v0, -0x6F18
    ctx->pc = 0x31a528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938856));
    // 0x31a52c: 0xac839230  sw          $v1, -0x6DD0($a0)
    ctx->pc = 0x31a52cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x729230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729230u, _value); } while (0);
label_31a530:
    // 0x31a530: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x31a530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x31a534: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x31a534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x31a538: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31A538u;
    SET_GPR_U32(ctx, 31, 0x31A540u);
    ctx->pc = 0x31A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A538u;
    // 0x31a53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31A538u, 0x31A540u)) {
        return;
    }
    ctx->pc = 0x31A540u;
label_31a540:
    // 0x31a540: 0x4400043  bltz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x31A540u;
    {
        const bool branch_taken_0x31a540 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A540u;
        // 0x31a544: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a540) {
            ctx->pc = 0x31A650u;
            goto label_31a650;
        }
    }
    ctx->pc = 0x31A548u;
    // 0x31a548: 0xc0c79da  jal         func_31E768
    ctx->pc = 0x31A548u;
    SET_GPR_U32(ctx, 31, 0x31A550u);
    ctx->pc = 0x31A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A548u;
    // 0x31a54c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E768u, 0x31A548u, 0x31A550u)) {
        return;
    }
    ctx->pc = 0x31A550u;
label_31a550:
    // 0x31a550: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31a550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31a554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a558: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31A558u;
    SET_GPR_U32(ctx, 31, 0x31A560u);
    ctx->pc = 0x31A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A558u;
    // 0x31a55c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31A558u, 0x31A560u)) {
        return;
    }
    ctx->pc = 0x31A560u;
label_31a560:
    // 0x31a560: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31a560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a564: 0x2a8200a3  slti        $v0, $s4, 0xA3
    ctx->pc = 0x31a564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)163) ? 1 : 0);
label_31a568:
    // 0x31a568: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31A568u;
    {
        const bool branch_taken_0x31a568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A568u;
        // 0x31a56c: 0x2688ffff  addiu       $t0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a568) {
            ctx->pc = 0x31A600u;
            goto label_31a600;
        }
    }
    ctx->pc = 0x31A570u;
    // 0x31a570: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x31a570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x31a574: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x31a574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x31a578: 0xc0c7a56  jal         func_31E958
    ctx->pc = 0x31A578u;
    SET_GPR_U32(ctx, 31, 0x31A580u);
    ctx->pc = 0x31A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A578u;
    // 0x31a57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E958u, 0x31A578u, 0x31A580u)) {
        return;
    }
    ctx->pc = 0x31A580u;
label_31a580:
    // 0x31a580: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x31A580u;
    SET_GPR_U32(ctx, 31, 0x31A588u);
    ctx->pc = 0x31A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A580u;
    // 0x31a584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x31A580u, 0x31A588u)) {
        return;
    }
    ctx->pc = 0x31A588u;
label_31a588:
    // 0x31a588: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x31a588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x31a58c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a590: 0x8c649230  lw          $a0, -0x6DD0($v1)
    ctx->pc = 0x31a590u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x729230u));
    // 0x31a594: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x31a594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x31a598: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x31a598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x31a59c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31a59cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x31a5a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31a5a4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x31a5a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x31a5a8: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x31A5A8u;
    SET_GPR_U32(ctx, 31, 0x31A5B0u);
    ctx->pc = 0x31A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A5A8u;
    // 0x31a5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x31A5A8u, 0x31A5B0u)) {
        return;
    }
    ctx->pc = 0x31A5B0u;
label_31a5b0:
    // 0x31a5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a5b4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31A5B4u;
    SET_GPR_U32(ctx, 31, 0x31A5BCu);
    ctx->pc = 0x31A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A5B4u;
    // 0x31a5b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31A5B4u, 0x31A5BCu)) {
        return;
    }
    ctx->pc = 0x31A5BCu;
label_31a5bc:
    // 0x31a5bc: 0x3405fee6  ori         $a1, $zero, 0xFEE6
    ctx->pc = 0x31a5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65254);
    // 0x31a5c0: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x31a5c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x31a5c4: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x31a5c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x31a5c8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31a5c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31a5cc: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x31a5ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x31a5d0: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x31a5d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x31a5d4: 0x34a5199a  ori         $a1, $a1, 0x199A
    ctx->pc = 0x31a5d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6554);
    // 0x31a5d8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31A5D8u;
    SET_GPR_U32(ctx, 31, 0x31A5E0u);
    ctx->pc = 0x31A5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A5D8u;
    // 0x31a5dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31A5D8u, 0x31A5E0u)) {
        return;
    }
    ctx->pc = 0x31A5E0u;
label_31a5e0:
    // 0x31a5e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31a5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a5e4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x31a5e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x31a5e8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x31a5e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x31a5ec: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31A5ECu;
    SET_GPR_U32(ctx, 31, 0x31A5F4u);
    ctx->pc = 0x31A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A5ECu;
    // 0x31a5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31A5ECu, 0x31A5F4u)) {
        return;
    }
    ctx->pc = 0x31A5F4u;
label_31a5f4:
    // 0x31a5f4: 0x441ffdc  bgez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x31A5F4u;
    {
        const bool branch_taken_0x31a5f4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x31A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A5F4u;
        // 0x31a5f8: 0x2a8200a3  slti        $v0, $s4, 0xA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)163) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a5f4) {
            ctx->pc = 0x31A568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a568;
        }
    }
    ctx->pc = 0x31A5FCu;
    // 0x31a5fc: 0x2688ffff  addiu       $t0, $s4, -0x1
    ctx->pc = 0x31a5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_31a600:
    // 0x31a600: 0x19000012  blez        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31A600u;
    {
        const bool branch_taken_0x31a600 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x31A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A600u;
        // 0x31a604: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a600) {
            ctx->pc = 0x31A64Cu;
            goto label_31a64c;
        }
    }
    ctx->pc = 0x31A608u;
    // 0x31a608: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x31a608u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x31a60c: 0x0  nop
    ctx->pc = 0x31a60cu;
    // NOP
label_31a610:
    // 0x31a610: 0x8d259230  lw          $a1, -0x6DD0($t1)
    ctx->pc = 0x31a610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294939184)));
    // 0x31a614: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x31a614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x31a618: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x31a618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31a61c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x31a61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x31a620: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x31a620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31a624: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31a624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31a628: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x31a628u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a62c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31a62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31a630: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x31a630u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a634: 0x208382a  slt         $a3, $s0, $t0
    ctx->pc = 0x31a634u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x31a638: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x31a638u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x31a63c: 0x8d229230  lw          $v0, -0x6DD0($t1)
    ctx->pc = 0x31a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294939184)));
    // 0x31a640: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31a644: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x31A644u;
    {
        const bool branch_taken_0x31a644 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A644u;
        // 0x31a648: 0xa4850000  sh          $a1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a644) {
            ctx->pc = 0x31A610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a610;
        }
    }
    ctx->pc = 0x31A64Cu;
label_31a64c:
    // 0x31a64c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x31a64cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31a650:
    // 0x31a650: 0x1660002c  bnez        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x31A650u;
    {
        const bool branch_taken_0x31a650 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A650u;
        // 0x31a654: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a650) {
            ctx->pc = 0x31A704u;
            goto label_31a704;
        }
    }
    ctx->pc = 0x31A658u;
    // 0x31a658: 0x13c20025  beq         $fp, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31A658u;
    {
        const bool branch_taken_0x31a658 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A658u;
        // 0x31a65c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a658) {
            ctx->pc = 0x31A6F0u;
            goto label_31a6f0;
        }
    }
    ctx->pc = 0x31A660u;
    // 0x31a660: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31A660u;
    SET_GPR_U32(ctx, 31, 0x31A668u);
    ctx->pc = 0x31A664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A660u;
    // 0x31a664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31A660u, 0x31A668u)) {
        return;
    }
    ctx->pc = 0x31A668u;
label_31a668:
    // 0x31a668: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x31A668u;
    {
        const bool branch_taken_0x31a668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a668) {
            ctx->pc = 0x31A6A8u;
            goto label_31a6a8;
        }
    }
    ctx->pc = 0x31A670u;
label_31a670:
    // 0x31a670: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x31a670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x31a674: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x31a674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x31a678: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31A678u;
    SET_GPR_U32(ctx, 31, 0x31A680u);
    ctx->pc = 0x31A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A678u;
    // 0x31a67c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31A678u, 0x31A680u)) {
        return;
    }
    ctx->pc = 0x31A680u;
label_31a680:
    // 0x31a680: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31a680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a684: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x31a684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x31a688: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x31a688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x31a68c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31A68Cu;
    SET_GPR_U32(ctx, 31, 0x31A694u);
    ctx->pc = 0x31A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A68Cu;
    // 0x31a690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31A68Cu, 0x31A694u)) {
        return;
    }
    ctx->pc = 0x31A694u;
label_31a694:
    // 0x31a694: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A694u;
    {
        const bool branch_taken_0x31a694 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x31A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A694u;
        // 0x31a698: 0x2a62fc04  slti        $v0, $s3, -0x3FC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294966276) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a694) {
            ctx->pc = 0x31A6A4u;
            goto label_31a6a4;
        }
    }
    ctx->pc = 0x31A69Cu;
    // 0x31a69c: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x31A69Cu;
    {
        const bool branch_taken_0x31a69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a69c) {
            ctx->pc = 0x31A6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A69Cu;
            // 0x31a6a0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a670;
        }
    }
    ctx->pc = 0x31A6A4u;
label_31a6a4:
    // 0x31a6a4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x31a6a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_31a6a8:
    // 0x31a6a8: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x31a6a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x31a6ac: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x31a6acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x31a6b0: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31A6B0u;
    SET_GPR_U32(ctx, 31, 0x31A6B8u);
    ctx->pc = 0x31A6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A6B0u;
    // 0x31a6b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31A6B0u, 0x31A6B8u)) {
        return;
    }
    ctx->pc = 0x31A6B8u;
label_31a6b8:
    // 0x31a6b8: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31A6B8u;
    {
        const bool branch_taken_0x31a6b8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A6B8u;
        // 0x31a6bc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a6b8) {
            ctx->pc = 0x31A704u;
            goto label_31a704;
        }
    }
    ctx->pc = 0x31A6C0u;
    // 0x31a6c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31a6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a6c4: 0x3405fee6  ori         $a1, $zero, 0xFEE6
    ctx->pc = 0x31a6c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65254);
    // 0x31a6c8: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x31a6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x31a6cc: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x31a6ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x31a6d0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31a6d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31a6d4: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x31a6d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x31a6d8: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x31a6d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x31a6dc: 0x34a5199a  ori         $a1, $a1, 0x199A
    ctx->pc = 0x31a6dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6554);
    // 0x31a6e0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31A6E0u;
    SET_GPR_U32(ctx, 31, 0x31A6E8u);
    ctx->pc = 0x31A6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A6E0u;
    // 0x31a6e4: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31A6E0u, 0x31A6E8u)) {
        return;
    }
    ctx->pc = 0x31A6E8u;
label_31a6e8:
    // 0x31a6e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31A6E8u;
    {
        const bool branch_taken_0x31a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A6E8u;
        // 0x31a6ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a6e8) {
            ctx->pc = 0x31A704u;
            goto label_31a704;
        }
    }
    ctx->pc = 0x31A6F0u;
label_31a6f0:
    // 0x31a6f0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x31a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x31a6f4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x31a6f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a6f8: 0x8c439230  lw          $v1, -0x6DD0($v0)
    ctx->pc = 0x31a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x729230u));
    // 0x31a6fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x31a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x31a700: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x31a700u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_31a704:
    // 0x31a704: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A704u;
    {
        const bool branch_taken_0x31a704 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x31A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A704u;
        // 0x31a708: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a704) {
            ctx->pc = 0x31A714u;
            goto label_31a714;
        }
    }
    ctx->pc = 0x31A70Cu;
    // 0x31a70c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31A70Cu;
    {
        const bool branch_taken_0x31a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A70Cu;
        // 0x31a710: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a70c) {
            ctx->pc = 0x31A72Cu;
            goto label_31a72c;
        }
    }
    ctx->pc = 0x31A714u;
label_31a714:
    // 0x31a714: 0x17c20005  bne         $fp, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A714u;
    {
        const bool branch_taken_0x31a714 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A714u;
        // 0x31a718: 0x26b10001  addiu       $s1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a714) {
            ctx->pc = 0x31A72Cu;
            goto label_31a72c;
        }
    }
    ctx->pc = 0x31A71Cu;
    // 0x31a71c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a720: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x31a720u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x31a724: 0x263100b  movn        $v0, $s3, $v1
    ctx->pc = 0x31a724u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19));
    // 0x31a728: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x31a728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_31a72c:
    // 0x31a72c: 0x3415f240  ori         $s5, $zero, 0xF240
    ctx->pc = 0x31a72cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x31a730: 0x15abbc  dsll32      $s5, $s5, 14
    ctx->pc = 0x31a730u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 14));
    // 0x31a734: 0x26370001  addiu       $s7, $s1, 0x1
    ctx->pc = 0x31a734u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31a738: 0x34168048  ori         $s6, $zero, 0x8048
    ctx->pc = 0x31a738u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x31a73c: 0x16b3fc  dsll32      $s6, $s6, 15
    ctx->pc = 0x31a73cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 15));
label_31a740:
    // 0x31a740: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x31a740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a744: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31A744u;
    SET_GPR_U32(ctx, 31, 0x31A74Cu);
    ctx->pc = 0x31A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A744u;
    // 0x31a748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31A744u, 0x31A74Cu)) {
        return;
    }
    ctx->pc = 0x31A74Cu;
label_31a74c:
    // 0x31a74c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31a74cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a750: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x31A750u;
    SET_GPR_U32(ctx, 31, 0x31A758u);
    ctx->pc = 0x31A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A750u;
    // 0x31a754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x31A750u, 0x31A758u)) {
        return;
    }
    ctx->pc = 0x31A758u;
label_31a758:
    // 0x31a758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a75c: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x31A75Cu;
    SET_GPR_U32(ctx, 31, 0x31A764u);
    ctx->pc = 0x31A760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A75Cu;
    // 0x31a760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x31A75Cu, 0x31A764u)) {
        return;
    }
    ctx->pc = 0x31A764u;
label_31a764:
    // 0x31a764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31a764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a768: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31A768u;
    SET_GPR_U32(ctx, 31, 0x31A770u);
    ctx->pc = 0x31A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A768u;
    // 0x31a76c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31A768u, 0x31A770u)) {
        return;
    }
    ctx->pc = 0x31A770u;
label_31a770:
    // 0x31a770: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31a770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a774: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31a774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a778: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31A778u;
    SET_GPR_U32(ctx, 31, 0x31A780u);
    ctx->pc = 0x31A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A778u;
    // 0x31a77c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31A778u, 0x31A780u)) {
        return;
    }
    ctx->pc = 0x31A780u;
label_31a780:
    // 0x31a780: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31a780u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a784: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x31a784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x31a788: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x31A788u;
    {
        const bool branch_taken_0x31a788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A788u;
        // 0x31a78c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a788) {
            ctx->pc = 0x31A7E0u;
            goto label_31a7e0;
        }
    }
    ctx->pc = 0x31A790u;
    // 0x31a790: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31A790u;
    SET_GPR_U32(ctx, 31, 0x31A798u);
    ctx->pc = 0x31A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A790u;
    // 0x31a794: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31A790u, 0x31A798u)) {
        return;
    }
    ctx->pc = 0x31A798u;
label_31a798:
    // 0x31a798: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31A798u;
    {
        const bool branch_taken_0x31a798 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x31a798) {
            ctx->pc = 0x31A7E0u;
            goto label_31a7e0;
        }
    }
    ctx->pc = 0x31A7A0u;
    // 0x31a7a0: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x31a7a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x31a7a4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x31a7a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x31a7a8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31A7A8u;
    SET_GPR_U32(ctx, 31, 0x31A7B0u);
    ctx->pc = 0x31A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A7A8u;
    // 0x31a7ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31A7A8u, 0x31A7B0u)) {
        return;
    }
    ctx->pc = 0x31A7B0u;
label_31a7b0:
    // 0x31a7b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31a7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a7b4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31A7B4u;
    SET_GPR_U32(ctx, 31, 0x31A7BCu);
    ctx->pc = 0x31A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A7B4u;
    // 0x31a7b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31A7B4u, 0x31A7BCu)) {
        return;
    }
    ctx->pc = 0x31A7BCu;
label_31a7bc:
    // 0x31a7bc: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31A7BCu;
    {
        const bool branch_taken_0x31a7bc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x31A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A7BCu;
        // 0x31a7c0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a7bc) {
            ctx->pc = 0x31A7E0u;
            goto label_31a7e0;
        }
    }
    ctx->pc = 0x31A7C4u;
    // 0x31a7c4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x31a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x31a7c8: 0x8c629230  lw          $v0, -0x6DD0($v1)
    ctx->pc = 0x31a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939184)));
    // 0x31a7cc: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x31a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x31a7d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31a7d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31a7d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x31a7d8: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x31A7D8u;
    {
        const bool branch_taken_0x31a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A7D8u;
        // 0x31a7dc: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a7d8) {
            ctx->pc = 0x31A740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a740;
        }
    }
    ctx->pc = 0x31A7E0u;
label_31a7e0:
    // 0x31a7e0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x31a7e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x31a7e4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x31a7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x31a7e8: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31A7E8u;
    SET_GPR_U32(ctx, 31, 0x31A7F0u);
    ctx->pc = 0x31A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A7E8u;
    // 0x31a7ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31A7E8u, 0x31A7F0u)) {
        return;
    }
    ctx->pc = 0x31A7F0u;
label_31a7f0:
    // 0x31a7f0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x31a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x31a7f4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x31a7f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x31a7f8: 0x8c659230  lw          $a1, -0x6DD0($v1)
    ctx->pc = 0x31a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939184)));
    // 0x31a7fc: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x31a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31a800: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x31a800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x31a804: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x31a804u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4));
    // 0x31a808: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31a808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31a80c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x31a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x31a810: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31a810u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x31a814: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x31a814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x31a818: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31A818u;
    {
        const bool branch_taken_0x31a818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A818u;
        // 0x31a81c: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a818) {
            ctx->pc = 0x31A844u;
            goto label_31a844;
        }
    }
    ctx->pc = 0x31A820u;
    // 0x31a820: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x31a820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x31a824: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x31a824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_31a828:
    // 0x31a828: 0x8cc29230  lw          $v0, -0x6DD0($a2)
    ctx->pc = 0x31a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939184)));
    // 0x31a82c: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x31a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x31a830: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31a830u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x31a834: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31a834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31a838: 0x234202a  slt         $a0, $s1, $s4
    ctx->pc = 0x31a838u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x31a83c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31A83Cu;
    {
        const bool branch_taken_0x31a83c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A83Cu;
        // 0x31a840: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a83c) {
            ctx->pc = 0x31A828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a828;
        }
    }
    ctx->pc = 0x31A844u;
label_31a844:
    // 0x31a844: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x31a844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x31a848: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x31a848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a84c: 0xc0c689a  jal         func_31A268
    ctx->pc = 0x31A84Cu;
    SET_GPR_U32(ctx, 31, 0x31A854u);
    ctx->pc = 0x31A850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A84Cu;
    // 0x31a850: 0x8c449230  lw          $a0, -0x6DD0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31A268u, 0x31A84Cu, 0x31A854u)) {
        return;
    }
    ctx->pc = 0x31A854u;
label_31a854:
    // 0x31a854: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31A854u;
    {
        const bool branch_taken_0x31a854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A854u;
        // 0x31a858: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a854) {
            ctx->pc = 0x31A878u;
            goto label_31a878;
        }
    }
    ctx->pc = 0x31A85Cu;
    // 0x31a85c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x31a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x31a860: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x31a860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a864: 0x8c439230  lw          $v1, -0x6DD0($v0)
    ctx->pc = 0x31a864u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x729230u));
    // 0x31a868: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31a868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31a86c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x31a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x31a870: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x31a870u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x31a874: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x31a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31a878:
    // 0x31a878: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x31A878u;
    {
        const bool branch_taken_0x31a878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A878u;
        // 0x31a87c: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a878) {
            ctx->pc = 0x31A8E0u;
            goto label_31a8e0;
        }
    }
    ctx->pc = 0x31A880u;
    // 0x31a880: 0x17c20003  bne         $fp, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A880u;
    {
        const bool branch_taken_0x31a880 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A880u;
        // 0x31a884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a880) {
            ctx->pc = 0x31A890u;
            goto label_31a890;
        }
    }
    ctx->pc = 0x31A888u;
    // 0x31a888: 0x2a620001  slti        $v0, $s3, 0x1
    ctx->pc = 0x31a888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x31a88c: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x31a88cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19));
label_31a890:
    // 0x31a890: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x31a890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a894: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x31a894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x31a898: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31A898u;
    {
        const bool branch_taken_0x31a898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A898u;
        // 0x31a89c: 0x53840  sll         $a3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a898) {
            ctx->pc = 0x31A8C8u;
            goto label_31a8c8;
        }
    }
    ctx->pc = 0x31A8A0u;
    // 0x31a8a0: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x31a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x31a8a4: 0x0  nop
    ctx->pc = 0x31a8a4u;
    // NOP
label_31a8a8:
    // 0x31a8a8: 0x8cc29230  lw          $v0, -0x6DD0($a2)
    ctx->pc = 0x31a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939184)));
    // 0x31a8ac: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x31a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x31a8b0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x31a8b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x31a8b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31a8b8: 0xb4202a  slt         $a0, $a1, $s4
    ctx->pc = 0x31a8b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x31a8bc: 0x9462fffe  lhu         $v0, -0x2($v1)
    ctx->pc = 0x31a8bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x31a8c0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x31A8C0u;
    {
        const bool branch_taken_0x31a8c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8C0u;
        // 0x31a8c4: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8c0) {
            ctx->pc = 0x31A8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a8a8;
        }
    }
    ctx->pc = 0x31A8C8u;
label_31a8c8:
    // 0x31a8c8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x31a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x31a8cc: 0x8c629230  lw          $v0, -0x6DD0($v1)
    ctx->pc = 0x31a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x729230u));
    // 0x31a8d0: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x31a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x31a8d4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x31a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x31a8d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31A8D8u;
    {
        const bool branch_taken_0x31a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8D8u;
        // 0x31a8dc: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8d8) {
            ctx->pc = 0x31A8E4u;
            goto label_31a8e4;
        }
    }
    ctx->pc = 0x31A8E0u;
label_31a8e0:
    // 0x31a8e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x31a8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_31a8e4:
    // 0x31a8e4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x31a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31a8e8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31A8E8u;
    {
        const bool branch_taken_0x31a8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8E8u;
        // 0x31a8ec: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8e8) {
            ctx->pc = 0x31A95Cu;
            goto label_31a95c;
        }
    }
    ctx->pc = 0x31A8F0u;
    // 0x31a8f0: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x31A8F0u;
    {
        const bool branch_taken_0x31a8f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8F0u;
        // 0x31a8f4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8f0) {
            ctx->pc = 0x31A938u;
            goto label_31a938;
        }
    }
    ctx->pc = 0x31A8F8u;
    // 0x31a8f8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x31a8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x31a8fc: 0x8c649230  lw          $a0, -0x6DD0($v1)
    ctx->pc = 0x31a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939184)));
    // 0x31a900: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x31a900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x31a904: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31a904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31a908: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x31a908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a90c: 0x1445000b  bne         $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x31A90Cu;
    {
        const bool branch_taken_0x31a90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x31A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A90Cu;
        // 0x31a910: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a90c) {
            ctx->pc = 0x31A93Cu;
            goto label_31a93c;
        }
    }
    ctx->pc = 0x31A914u;
    // 0x31a914: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x31a914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x31a918: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x31a918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x31a91c: 0x0  nop
    ctx->pc = 0x31a91cu;
    // NOP
label_31a920:
    // 0x31a920: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A920u;
    {
        const bool branch_taken_0x31a920 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A920u;
        // 0x31a924: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a920) {
            ctx->pc = 0x31A938u;
            goto label_31a938;
        }
    }
    ctx->pc = 0x31A928u;
    // 0x31a928: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x31a928u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a92c: 0x0  nop
    ctx->pc = 0x31a92cu;
    // NOP
    // 0x31a930: 0x5044fffb  beql        $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31A930u;
    {
        const bool branch_taken_0x31a930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x31a930) {
            ctx->pc = 0x31A934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A930u;
            // 0x31a934: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a920;
        }
    }
    ctx->pc = 0x31A938u;
label_31a938:
    // 0x31a938: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x31a938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_31a93c:
    // 0x31a93c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x31a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x31a940: 0x8c449230  lw          $a0, -0x6DD0($v0)
    ctx->pc = 0x31a940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939184)));
    // 0x31a944: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x31a944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x31a948: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31a948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31a94c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x31a94cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a950: 0x3842002e  xori        $v0, $v0, 0x2E
    ctx->pc = 0x31a950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)46);
    // 0x31a954: 0xa2880a  movz        $s1, $a1, $v0
    ctx->pc = 0x31a954u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5));
    // 0x31a958: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x31a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_31a95c:
    // 0x31a95c: 0x13c20035  beq         $fp, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x31A95Cu;
    {
        const bool branch_taken_0x31a95c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A95Cu;
        // 0x31a960: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a95c) {
            ctx->pc = 0x31AA34u;
            goto label_31aa34;
        }
    }
    ctx->pc = 0x31A964u;
    // 0x31a964: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31a964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31a968: 0x8c439230  lw          $v1, -0x6DD0($v0)
    ctx->pc = 0x31a968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939184)));
    // 0x31a96c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x31a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x31a970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31a974: 0x6600014  bltz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x31A974u;
    {
        const bool branch_taken_0x31a974 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x31A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A974u;
        // 0x31a978: 0xa45e0000  sh          $fp, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a974) {
            ctx->pc = 0x31A9C8u;
            goto label_31a9c8;
        }
    }
    ctx->pc = 0x31A97Cu;
    // 0x31a97c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x31a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x31a980: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31a980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31a984: 0x8c649230  lw          $a0, -0x6DD0($v1)
    ctx->pc = 0x31a984u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x729230u));
    // 0x31a988: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x31a988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x31a98c: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x31a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x31a990: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31a990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31a994: 0x73980b  movn        $s3, $v1, $s3
    ctx->pc = 0x31a994u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
    // 0x31a998: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x31a998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x31a99c: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x31a99cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x31a9a0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x31A9A0u;
    {
        const bool branch_taken_0x31a9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9A0u;
        // 0x31a9a4: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a9a0) {
            ctx->pc = 0x31AA0Cu;
            goto label_31aa0c;
        }
    }
    ctx->pc = 0x31A9A8u;
    // 0x31a9a8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x31a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x31a9ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31a9acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31a9b0: 0x8c629230  lw          $v0, -0x6DD0($v1)
    ctx->pc = 0x31a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x729230u));
    // 0x31a9b4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x31a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x31a9b8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x31a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x31a9bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31a9c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31A9C0u;
    {
        const bool branch_taken_0x31a9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9C0u;
        // 0x31a9c4: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a9c0) {
            ctx->pc = 0x31AA0Cu;
            goto label_31aa0c;
        }
    }
    ctx->pc = 0x31A9C8u;
label_31a9c8:
    // 0x31a9c8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x31a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x31a9cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31a9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31a9d0: 0x8c459230  lw          $a1, -0x6DD0($v0)
    ctx->pc = 0x31a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x729230u));
    // 0x31a9d4: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x31a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x31a9d8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x31a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x31a9dc: 0x2a63fff7  slti        $v1, $s3, -0x9
    ctx->pc = 0x31a9dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x31a9e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x31a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31a9e4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31A9E4u;
    {
        const bool branch_taken_0x31a9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9E4u;
        // 0x31a9e8: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a9e4) {
            ctx->pc = 0x31AA08u;
            goto label_31aa08;
        }
    }
    ctx->pc = 0x31A9ECu;
    // 0x31a9ec: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x31a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x31a9f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31a9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31a9f4: 0x8c629230  lw          $v0, -0x6DD0($v1)
    ctx->pc = 0x31a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x729230u));
    // 0x31a9f8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x31a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x31a9fc: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x31a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x31aa00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31aa04: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x31aa04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_31aa08:
    // 0x31aa08: 0x139823  negu        $s3, $s3
    ctx->pc = 0x31aa08u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_31aa0c:
    // 0x31aa0c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x31aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x31aa10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31aa10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31aa14: 0x8c629230  lw          $v0, -0x6DD0($v1)
    ctx->pc = 0x31aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x729230u));
    // 0x31aa18: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x31aa18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x31aa1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31aa1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa20: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x31aa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31aa24: 0xc0c68d4  jal         func_31A350
    ctx->pc = 0x31AA24u;
    SET_GPR_U32(ctx, 31, 0x31AA2Cu);
    ctx->pc = 0x31AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AA24u;
    // 0x31aa28: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31A350u, 0x31AA24u, 0x31AA2Cu)) {
        return;
    }
    ctx->pc = 0x31AA2Cu;
label_31aa2c:
    // 0x31aa2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31AA2Cu;
    {
        const bool branch_taken_0x31aa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA2Cu;
        // 0x31aa30: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa2c) {
            ctx->pc = 0x31AA48u;
            goto label_31aa48;
        }
    }
    ctx->pc = 0x31AA34u;
label_31aa34:
    // 0x31aa34: 0x8c439230  lw          $v1, -0x6DD0($v0)
    ctx->pc = 0x31aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939184)));
    // 0x31aa38: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x31aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x31aa3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31aa40: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x31aa40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x31aa44: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x31aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_31aa48:
    // 0x31aa48: 0x246290e8  addiu       $v0, $v1, -0x6F18
    ctx->pc = 0x31aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938856));
    // 0x31aa4c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x31aa4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31aa50: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x31aa50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31aa54: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x31aa54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31aa58: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x31aa58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31aa5c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x31aa5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31aa60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31aa60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31aa64: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x31aa64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31aa68: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x31aa68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31aa6c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x31aa6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31aa70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31aa70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31aa74: 0x3e00008  jr          $ra
    ctx->pc = 0x31AA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA74u;
        // 0x31aa78: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AA7Cu;
    // 0x31aa7c: 0x0  nop
    ctx->pc = 0x31aa7cu;
    // NOP
    ctx->pc = 0x31aa80u;
}
