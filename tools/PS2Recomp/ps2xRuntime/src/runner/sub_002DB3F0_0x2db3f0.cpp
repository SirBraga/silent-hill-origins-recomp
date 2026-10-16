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

// Function: sub_002DB3F0
// Address: 0x2db3f0 - 0x2db590
void sub_002DB3F0_0x2db3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB3F0_0x2db3f0");
#endif

    switch (ctx->pc) {
        case 0x2db458u: goto label_2db458;
        case 0x2db480u: goto label_2db480;
        case 0x2db48cu: goto label_2db48c;
        case 0x2db4b8u: goto label_2db4b8;
        case 0x2db4c4u: goto label_2db4c4;
        case 0x2db514u: goto label_2db514;
        case 0x2db540u: goto label_2db540;
        default: break;
    }

    ctx->pc = 0x2db3f0u;

    // 0x2db3f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2db3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2db3f4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2db3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2db3f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2db3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2db3fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2db3fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db400: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2db400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2db404: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2db404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db408: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2db408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2db40c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2db40cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db410: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2db410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2db414: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2db414u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db418: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2db418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2db41c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2db41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2db420: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2db420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2db424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db428: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2db428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2db42c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB42Cu;
    {
        const bool branch_taken_0x2db42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB42Cu;
        // 0x2db430: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db42c) {
            ctx->pc = 0x2DB460u;
            goto label_2db460;
        }
    }
    ctx->pc = 0x2DB434u;
    // 0x2db434: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2db434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2db438: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DB438u;
    {
        const bool branch_taken_0x2db438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db438) {
            ctx->pc = 0x2DB460u;
            goto label_2db460;
        }
    }
    ctx->pc = 0x2DB440u;
    // 0x2db440: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2db440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2db444: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2db444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2db448: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB448u;
    {
        const bool branch_taken_0x2db448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db448) {
            ctx->pc = 0x2DB44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB448u;
            // 0x2db44c: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB45Cu;
            goto label_2db45c;
        }
    }
    ctx->pc = 0x2DB450u;
    // 0x2db450: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2DB450u;
    SET_GPR_U32(ctx, 31, 0x2DB458u);
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DB450u, 0x2DB458u)) {
        return;
    }
    ctx->pc = 0x2DB458u;
label_2db458:
    // 0x2db458: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2db458u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2db45c:
    // 0x2db45c: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x2db45cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_2db460:
    // 0x2db460: 0x12e00026  beqz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x2DB460u;
    {
        const bool branch_taken_0x2db460 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB460u;
        // 0x2db464: 0x2b41021  addu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db460) {
            ctx->pc = 0x2DB4FCu;
            goto label_2db4fc;
        }
    }
    ctx->pc = 0x2DB468u;
    // 0x2db468: 0x12c00025  beqz        $s6, . + 4 + (0x25 << 2)
    ctx->pc = 0x2DB468u;
    {
        const bool branch_taken_0x2db468 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB468u;
        // 0x2db46c: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db468) {
            ctx->pc = 0x2DB500u;
            goto label_2db500;
        }
    }
    ctx->pc = 0x2DB470u;
    // 0x2db470: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB470u;
    {
        const bool branch_taken_0x2db470 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB470u;
        // 0x2db474: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db470) {
            ctx->pc = 0x2DB4A4u;
            goto label_2db4a4;
        }
    }
    ctx->pc = 0x2DB478u;
    // 0x2db478: 0x26f2000c  addiu       $s2, $s7, 0xC
    ctx->pc = 0x2db478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x2db47c: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x2db47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2db480:
    // 0x2db480: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2db480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2db484: 0xc0b6f84  jal         func_2DBE10
    ctx->pc = 0x2DB484u;
    SET_GPR_U32(ctx, 31, 0x2DB48Cu);
    ctx->pc = 0x2DB488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB484u;
    // 0x2db488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBE10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DBE10u, 0x2DB484u, 0x2DB48Cu)) {
        return;
    }
    ctx->pc = 0x2DB48Cu;
label_2db48c:
    // 0x2db48c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2DB48Cu;
    {
        const bool branch_taken_0x2db48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB48Cu;
        // 0x2db490: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db48c) {
            ctx->pc = 0x2DB520u;
            goto label_2db520;
        }
    }
    ctx->pc = 0x2DB494u;
    // 0x2db494: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x2db494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2db498: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x2db498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2db49c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DB49Cu;
    {
        const bool branch_taken_0x2db49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB49Cu;
        // 0x2db4a0: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db49c) {
            ctx->pc = 0x2DB480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db480;
        }
    }
    ctx->pc = 0x2DB4A4u;
label_2db4a4:
    // 0x2db4a4: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x2DB4A4u;
    {
        const bool branch_taken_0x2db4a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4A4u;
        // 0x2db4a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4a4) {
            ctx->pc = 0x2DB4DCu;
            goto label_2db4dc;
        }
    }
    ctx->pc = 0x2DB4ACu;
    // 0x2db4ac: 0x26d2000c  addiu       $s2, $s6, 0xC
    ctx->pc = 0x2db4acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x2db4b0: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x2db4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4b4: 0x0  nop
    ctx->pc = 0x2db4b4u;
    // NOP
label_2db4b8:
    // 0x2db4b8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2db4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2db4bc: 0xc0b6f84  jal         func_2DBE10
    ctx->pc = 0x2DB4BCu;
    SET_GPR_U32(ctx, 31, 0x2DB4C4u);
    ctx->pc = 0x2DB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB4BCu;
    // 0x2db4c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBE10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DBE10u, 0x2DB4BCu, 0x2DB4C4u)) {
        return;
    }
    ctx->pc = 0x2DB4C4u;
label_2db4c4:
    // 0x2db4c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DB4C4u;
    {
        const bool branch_taken_0x2db4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4C4u;
        // 0x2db4c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4c4) {
            ctx->pc = 0x2DB520u;
            goto label_2db520;
        }
    }
    ctx->pc = 0x2DB4CCu;
    // 0x2db4cc: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x2db4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2db4d0: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x2db4d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2db4d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DB4D4u;
    {
        const bool branch_taken_0x2db4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4D4u;
        // 0x2db4d8: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4d4) {
            ctx->pc = 0x2DB4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db4b8;
        }
    }
    ctx->pc = 0x2DB4DCu;
label_2db4dc:
    // 0x2db4dc: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2db4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2db4e0: 0xae770010  sw          $s7, 0x10($s3)
    ctx->pc = 0x2db4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 23));
    // 0x2db4e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2db4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2db4e8: 0xae76000c  sw          $s6, 0xC($s3)
    ctx->pc = 0x2db4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 22));
    // 0x2db4ec: 0xa6750014  sh          $s5, 0x14($s3)
    ctx->pc = 0x2db4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 21));
    // 0x2db4f0: 0xa6740016  sh          $s4, 0x16($s3)
    ctx->pc = 0x2db4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 22), (uint16_t)GPR_U32(ctx, 20));
    // 0x2db4f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2DB4F4u;
    {
        const bool branch_taken_0x2db4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4F4u;
        // 0x2db4f8: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4f4) {
            ctx->pc = 0x2DB554u;
            goto label_2db554;
        }
    }
    ctx->pc = 0x2DB4FCu;
label_2db4fc:
    // 0x2db4fc: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x2db4fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2db500:
    // 0x2db500: 0x518018  mult        $s0, $v0, $s1
    ctx->pc = 0x2db500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2db504: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2db504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2db508: 0x34a5080a  ori         $a1, $a1, 0x80A
    ctx->pc = 0x2db508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2058);
    // 0x2db50c: 0xc0b7076  jal         func_2DC1D8
    ctx->pc = 0x2DB50Cu;
    SET_GPR_U32(ctx, 31, 0x2DB514u);
    ctx->pc = 0x2DB510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB50Cu;
    // 0x2db510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2DB50Cu, 0x2DB514u)) {
        return;
    }
    ctx->pc = 0x2DB514u;
label_2db514:
    // 0x2db514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db518: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB518u;
    {
        const bool branch_taken_0x2db518 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB518u;
        // 0x2db51c: 0xae640010  sw          $a0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db518) {
            ctx->pc = 0x2DB528u;
            goto label_2db528;
        }
    }
    ctx->pc = 0x2DB520u;
label_2db520:
    // 0x2db520: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DB520u;
    {
        const bool branch_taken_0x2db520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB520u;
        // 0x2db524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db520) {
            ctx->pc = 0x2DB558u;
            goto label_2db558;
        }
    }
    ctx->pc = 0x2DB528u;
label_2db528:
    // 0x2db528: 0x2b11818  mult        $v1, $s5, $s1
    ctx->pc = 0x2db528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2db52c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2db52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2db530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db534: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2db534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2db538: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2DB538u;
    SET_GPR_U32(ctx, 31, 0x2DB540u);
    ctx->pc = 0x2DB53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB538u;
    // 0x2db53c: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2DB538u, 0x2DB540u)) {
        return;
    }
    ctx->pc = 0x2DB540u;
label_2db540:
    // 0x2db540: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2db540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2db544: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2db544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2db548: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2db548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2db54c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2db54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2db550: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x2db550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_2db554:
    // 0x2db554: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2db554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db558:
    // 0x2db558: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2db558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2db55c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2db55cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2db560: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2db560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2db564: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2db564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2db568: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2db568u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db56c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2db56cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db570: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2db570u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db574: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2db574u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db57c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB57Cu;
        // 0x2db580: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB584u;
    // 0x2db584: 0x0  nop
    ctx->pc = 0x2db584u;
    // NOP
    // 0x2db588: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2db588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2db58c: 0x0  nop
    ctx->pc = 0x2db58cu;
    // NOP
    ctx->pc = 0x2db590u;
}
