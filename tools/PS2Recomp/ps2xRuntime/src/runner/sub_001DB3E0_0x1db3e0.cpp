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

// Function: sub_001DB3E0
// Address: 0x1db3e0 - 0x1db638
void sub_001DB3E0_0x1db3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB3E0_0x1db3e0");
#endif

    switch (ctx->pc) {
        case 0x1db448u: goto label_1db448;
        case 0x1db45cu: goto label_1db45c;
        case 0x1db488u: goto label_1db488;
        case 0x1db4a4u: goto label_1db4a4;
        case 0x1db4c8u: goto label_1db4c8;
        case 0x1db4dcu: goto label_1db4dc;
        case 0x1db4f0u: goto label_1db4f0;
        case 0x1db518u: goto label_1db518;
        case 0x1db548u: goto label_1db548;
        case 0x1db564u: goto label_1db564;
        case 0x1db58cu: goto label_1db58c;
        case 0x1db5a4u: goto label_1db5a4;
        case 0x1db5b8u: goto label_1db5b8;
        case 0x1db5c4u: goto label_1db5c4;
        case 0x1db5ecu: goto label_1db5ec;
        case 0x1db608u: goto label_1db608;
        default: break;
    }

    ctx->pc = 0x1db3e0u;

    // 0x1db3e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1db3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1db3e4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1db3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1db3e8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1db3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1db3ec: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1db3ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3f0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1db3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1db3f4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1db3f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1db3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1db3fc: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1db3fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db400: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1db400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1db404: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1db404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1db408: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1db408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1db40c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1db40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1db410: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1db410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1db414: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1db414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1db418: 0x1080007b  beqz        $a0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1DB418u;
    {
        const bool branch_taken_0x1db418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB418u;
        // 0x1db41c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db418) {
            ctx->pc = 0x1DB608u;
            goto label_1db608;
        }
    }
    ctx->pc = 0x1DB420u;
    // 0x1db420: 0x6e00079  bltz        $s7, . + 4 + (0x79 << 2)
    ctx->pc = 0x1DB420u;
    {
        const bool branch_taken_0x1db420 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x1DB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB420u;
        // 0x1db424: 0x2ae20002  slti        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db420) {
            ctx->pc = 0x1DB608u;
            goto label_1db608;
        }
    }
    ctx->pc = 0x1DB428u;
    // 0x1db428: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1DB428u;
    {
        const bool branch_taken_0x1db428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB428u;
        // 0x1db42c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db428) {
            ctx->pc = 0x1DB60Cu;
            goto label_1db60c;
        }
    }
    ctx->pc = 0x1DB430u;
    // 0x1db430: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB430u;
    {
        const bool branch_taken_0x1db430 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db430) {
            ctx->pc = 0x1DB440u;
            goto label_1db440;
        }
    }
    ctx->pc = 0x1DB438u;
    // 0x1db438: 0x13c00075  beqz        $fp, . + 4 + (0x75 << 2)
    ctx->pc = 0x1DB438u;
    {
        const bool branch_taken_0x1db438 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB438u;
        // 0x1db43c: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db438) {
            ctx->pc = 0x1DB610u;
            goto label_1db610;
        }
    }
    ctx->pc = 0x1DB440u;
label_1db440:
    // 0x1db440: 0xc07730e  jal         func_1DCC38
    ctx->pc = 0x1DB440u;
    SET_GPR_U32(ctx, 31, 0x1DB448u);
    ctx->pc = 0x1DB444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB440u;
    // 0x1db444: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCC38u, 0x1DB440u, 0x1DB448u)) {
        return;
    }
    ctx->pc = 0x1DB448u;
label_1db448:
    // 0x1db448: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1db448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db44c: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB44Cu;
    {
        const bool branch_taken_0x1db44c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db44c) {
            ctx->pc = 0x1DB450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB44Cu;
            // 0x1db450: 0x8e950004  lw          $s5, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB46Cu;
            goto label_1db46c;
        }
    }
    ctx->pc = 0x1DB454u;
    // 0x1db454: 0xc076b40  jal         func_1DAD00
    ctx->pc = 0x1DB454u;
    SET_GPR_U32(ctx, 31, 0x1DB45Cu);
    ctx->pc = 0x1DB458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB454u;
    // 0x1db458: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAD00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DAD00u, 0x1DB454u, 0x1DB45Cu)) {
        return;
    }
    ctx->pc = 0x1DB45Cu;
label_1db45c:
    // 0x1db45c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1db45cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db460: 0x5280006a  beql        $s4, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x1DB460u;
    {
        const bool branch_taken_0x1db460 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db460) {
            ctx->pc = 0x1DB464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB460u;
            // 0x1db464: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB60Cu;
            goto label_1db60c;
        }
    }
    ctx->pc = 0x1DB468u;
    // 0x1db468: 0x8e950004  lw          $s5, 0x4($s4)
    ctx->pc = 0x1db468u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1db46c:
    // 0x1db46c: 0x1aa0002e  blez        $s5, . + 4 + (0x2E << 2)
    ctx->pc = 0x1DB46Cu;
    {
        const bool branch_taken_0x1db46c = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x1DB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB46Cu;
        // 0x1db470: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db46c) {
            ctx->pc = 0x1DB528u;
            goto label_1db528;
        }
    }
    ctx->pc = 0x1DB474u;
    // 0x1db474: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x1db474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1db478: 0x26820018  addiu       $v0, $s4, 0x18
    ctx->pc = 0x1db478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x1db47c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1db47cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db480: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1db480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db484: 0x0  nop
    ctx->pc = 0x1db484u;
    // NOP
label_1db488:
    // 0x1db488: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x1db488u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1db48c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1db48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1db490: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1db490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db494: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB494u;
    {
        const bool branch_taken_0x1db494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db494) {
            ctx->pc = 0x1DB4B0u;
            goto label_1db4b0;
        }
    }
    ctx->pc = 0x1DB49Cu;
    // 0x1db49c: 0xc09d90a  jal         func_276428
    ctx->pc = 0x1DB49Cu;
    SET_GPR_U32(ctx, 31, 0x1DB4A4u);
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x1DB49Cu, 0x1DB4A4u)) {
        return;
    }
    ctx->pc = 0x1DB4A4u;
label_1db4a4:
    // 0x1db4a4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1db4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db4a8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1db4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1db4ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1db4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1db4b0:
    // 0x1db4b0: 0x52c0001a  beql        $s6, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DB4B0u;
    {
        const bool branch_taken_0x1db4b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db4b0) {
            ctx->pc = 0x1DB4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB4B0u;
            // 0x1db4b4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB51Cu;
            goto label_1db51c;
        }
    }
    ctx->pc = 0x1DB4B8u;
    // 0x1db4b8: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x1db4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1db4bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1db4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1db4c0: 0xc07811a  jal         func_1E0468
    ctx->pc = 0x1DB4C0u;
    SET_GPR_U32(ctx, 31, 0x1DB4C8u);
    ctx->pc = 0x1DB4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB4C0u;
    // 0x1db4c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0468u, 0x1DB4C0u, 0x1DB4C8u)) {
        return;
    }
    ctx->pc = 0x1DB4C8u;
label_1db4c8:
    // 0x1db4c8: 0x4420014  bltzl       $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DB4C8u;
    {
        const bool branch_taken_0x1db4c8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1db4c8) {
            ctx->pc = 0x1DB4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB4C8u;
            // 0x1db4cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB51Cu;
            goto label_1db51c;
        }
    }
    ctx->pc = 0x1DB4D0u;
    // 0x1db4d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db4d4: 0xc0776fa  jal         func_1DDBE8
    ctx->pc = 0x1DB4D4u;
    SET_GPR_U32(ctx, 31, 0x1DB4DCu);
    ctx->pc = 0x1DB4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB4D4u;
    // 0x1db4d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DDBE8u, 0x1DB4D4u, 0x1DB4DCu)) {
        return;
    }
    ctx->pc = 0x1DB4DCu;
label_1db4dc:
    // 0x1db4dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1db4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db4e0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DB4E0u;
    {
        const bool branch_taken_0x1db4e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4E0u;
        // 0x1db4e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db4e0) {
            ctx->pc = 0x1DB518u;
            goto label_1db518;
        }
    }
    ctx->pc = 0x1DB4E8u;
    // 0x1db4e8: 0xc09d8e0  jal         func_276380
    ctx->pc = 0x1DB4E8u;
    SET_GPR_U32(ctx, 31, 0x1DB4F0u);
    ctx->pc = 0x1DB4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB4E8u;
    // 0x1db4ec: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x1DB4E8u, 0x1DB4F0u)) {
        return;
    }
    ctx->pc = 0x1DB4F0u;
label_1db4f0:
    // 0x1db4f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1db4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db4f4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1db4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1db4f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1db4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1db4fc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1db4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db500: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1db500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1db504: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1db504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db508: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB508u;
    {
        const bool branch_taken_0x1db508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db508) {
            ctx->pc = 0x1DB50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB508u;
            // 0x1db50c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB51Cu;
            goto label_1db51c;
        }
    }
    ctx->pc = 0x1DB510u;
    // 0x1db510: 0xc09d55c  jal         func_275570
    ctx->pc = 0x1DB510u;
    SET_GPR_U32(ctx, 31, 0x1DB518u);
    ctx->pc = 0x1DB514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB510u;
    // 0x1db514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x1DB510u, 0x1DB518u)) {
        return;
    }
    ctx->pc = 0x1DB518u;
label_1db518:
    // 0x1db518: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1db518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1db51c:
    // 0x1db51c: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x1db51cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1db520: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1DB520u;
    {
        const bool branch_taken_0x1db520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db520) {
            ctx->pc = 0x1DB524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB520u;
            // 0x1db524: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db488;
        }
    }
    ctx->pc = 0x1DB528u;
label_1db528:
    // 0x1db528: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x1db528u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1db52c: 0x1aa00033  blez        $s5, . + 4 + (0x33 << 2)
    ctx->pc = 0x1DB52Cu;
    {
        const bool branch_taken_0x1db52c = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x1DB530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB52Cu;
        // 0x1db530: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db52c) {
            ctx->pc = 0x1DB5FCu;
            goto label_1db5fc;
        }
    }
    ctx->pc = 0x1DB534u;
    // 0x1db534: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x1db534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1db538: 0x2682000c  addiu       $v0, $s4, 0xC
    ctx->pc = 0x1db538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x1db53c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1db53cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db540: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1db540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db544: 0x0  nop
    ctx->pc = 0x1db544u;
    // NOP
label_1db548:
    // 0x1db548: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x1db548u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1db54c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1db54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1db550: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1db550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db554: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB554u;
    {
        const bool branch_taken_0x1db554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db554) {
            ctx->pc = 0x1DB570u;
            goto label_1db570;
        }
    }
    ctx->pc = 0x1DB55Cu;
    // 0x1db55c: 0xc09d90a  jal         func_276428
    ctx->pc = 0x1DB55Cu;
    SET_GPR_U32(ctx, 31, 0x1DB564u);
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x1DB55Cu, 0x1DB564u)) {
        return;
    }
    ctx->pc = 0x1DB564u;
label_1db564:
    // 0x1db564: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1db564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db568: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1db568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1db56c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1db56cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1db570:
    // 0x1db570: 0x53c0001f  beql        $fp, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DB570u;
    {
        const bool branch_taken_0x1db570 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db570) {
            ctx->pc = 0x1DB574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB570u;
            // 0x1db574: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB5F0u;
            goto label_1db5f0;
        }
    }
    ctx->pc = 0x1DB578u;
    // 0x1db578: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1db578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1db57c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db580: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1db580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1db584: 0xc0bbdc0  jal         func_2EF700
    ctx->pc = 0x1DB584u;
    SET_GPR_U32(ctx, 31, 0x1DB58Cu);
    ctx->pc = 0x1DB588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB584u;
    // 0x1db588: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF700u, 0x1DB584u, 0x1DB58Cu)) {
        return;
    }
    ctx->pc = 0x1DB58Cu;
label_1db58c:
    // 0x1db58c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB58Cu;
    {
        const bool branch_taken_0x1db58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB58Cu;
        // 0x1db590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db58c) {
            ctx->pc = 0x1DB59Cu;
            goto label_1db59c;
        }
    }
    ctx->pc = 0x1DB594u;
    // 0x1db594: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1db594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db598: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1db598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1db59c:
    // 0x1db59c: 0xc0bbac2  jal         func_2EEB08
    ctx->pc = 0x1DB59Cu;
    SET_GPR_U32(ctx, 31, 0x1DB5A4u);
    ctx->pc = 0x1DB5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB59Cu;
    // 0x1db5a0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EEB08u, 0x1DB59Cu, 0x1DB5A4u)) {
        return;
    }
    ctx->pc = 0x1DB5A4u;
label_1db5a4:
    // 0x1db5a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1db5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5a8: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DB5A8u;
    {
        const bool branch_taken_0x1db5a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db5a8) {
            ctx->pc = 0x1DB5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB5A8u;
            // 0x1db5ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB5F0u;
            goto label_1db5f0;
        }
    }
    ctx->pc = 0x1DB5B0u;
    // 0x1db5b0: 0xc09d8ce  jal         func_276338
    ctx->pc = 0x1DB5B0u;
    SET_GPR_U32(ctx, 31, 0x1DB5B8u);
    ctx->pc = 0x1DB5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB5B0u;
    // 0x1db5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276338u, 0x1DB5B0u, 0x1DB5B8u)) {
        return;
    }
    ctx->pc = 0x1DB5B8u;
label_1db5b8:
    // 0x1db5b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5bc: 0xc09d8e0  jal         func_276380
    ctx->pc = 0x1DB5BCu;
    SET_GPR_U32(ctx, 31, 0x1DB5C4u);
    ctx->pc = 0x1DB5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB5BCu;
    // 0x1db5c0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x1DB5BCu, 0x1DB5C4u)) {
        return;
    }
    ctx->pc = 0x1DB5C4u;
label_1db5c4:
    // 0x1db5c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1db5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db5c8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1db5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1db5cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1db5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1db5d0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1db5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db5d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1db5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1db5d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1db5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db5dc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB5DCu;
    {
        const bool branch_taken_0x1db5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db5dc) {
            ctx->pc = 0x1DB5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB5DCu;
            // 0x1db5e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB5F0u;
            goto label_1db5f0;
        }
    }
    ctx->pc = 0x1DB5E4u;
    // 0x1db5e4: 0xc09d55c  jal         func_275570
    ctx->pc = 0x1DB5E4u;
    SET_GPR_U32(ctx, 31, 0x1DB5ECu);
    ctx->pc = 0x1DB5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB5E4u;
    // 0x1db5e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x1DB5E4u, 0x1DB5ECu)) {
        return;
    }
    ctx->pc = 0x1DB5ECu;
label_1db5ec:
    // 0x1db5ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1db5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1db5f0:
    // 0x1db5f0: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x1db5f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1db5f4: 0x5440ffd4  bnel        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1DB5F4u;
    {
        const bool branch_taken_0x1db5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db5f4) {
            ctx->pc = 0x1DB5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB5F4u;
            // 0x1db5f8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db548;
        }
    }
    ctx->pc = 0x1DB5FCu;
label_1db5fc:
    // 0x1db5fc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1db5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db600: 0xc07732a  jal         func_1DCCA8
    ctx->pc = 0x1DB600u;
    SET_GPR_U32(ctx, 31, 0x1DB608u);
    ctx->pc = 0x1DB604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB600u;
    // 0x1db604: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCCA8u, 0x1DB600u, 0x1DB608u)) {
        return;
    }
    ctx->pc = 0x1DB608u;
label_1db608:
    // 0x1db608: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1db608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1db60c:
    // 0x1db60c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1db60cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1db610:
    // 0x1db610: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1db610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1db614: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1db614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1db618: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1db618u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1db61c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1db61cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db620: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1db620u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db624: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1db624u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db628: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1db628u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db62c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db630: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB630u;
        // 0x1db634: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB638u;
}
