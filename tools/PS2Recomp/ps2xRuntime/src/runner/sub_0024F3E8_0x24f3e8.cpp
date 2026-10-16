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

// Function: sub_0024F3E8
// Address: 0x24f3e8 - 0x24f4f8
void sub_0024F3E8_0x24f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F3E8_0x24f3e8");
#endif

    switch (ctx->pc) {
        case 0x24f3e8u: goto label_24f3e8;
        case 0x24f3ecu: goto label_24f3ec;
        case 0x24f3f0u: goto label_24f3f0;
        case 0x24f3f4u: goto label_24f3f4;
        case 0x24f3f8u: goto label_24f3f8;
        case 0x24f3fcu: goto label_24f3fc;
        case 0x24f400u: goto label_24f400;
        case 0x24f404u: goto label_24f404;
        case 0x24f408u: goto label_24f408;
        case 0x24f40cu: goto label_24f40c;
        case 0x24f410u: goto label_24f410;
        case 0x24f414u: goto label_24f414;
        case 0x24f418u: goto label_24f418;
        case 0x24f41cu: goto label_24f41c;
        case 0x24f420u: goto label_24f420;
        case 0x24f424u: goto label_24f424;
        case 0x24f428u: goto label_24f428;
        case 0x24f42cu: goto label_24f42c;
        case 0x24f430u: goto label_24f430;
        case 0x24f434u: goto label_24f434;
        case 0x24f438u: goto label_24f438;
        case 0x24f43cu: goto label_24f43c;
        case 0x24f440u: goto label_24f440;
        case 0x24f444u: goto label_24f444;
        case 0x24f448u: goto label_24f448;
        case 0x24f44cu: goto label_24f44c;
        case 0x24f450u: goto label_24f450;
        case 0x24f454u: goto label_24f454;
        case 0x24f458u: goto label_24f458;
        case 0x24f45cu: goto label_24f45c;
        case 0x24f460u: goto label_24f460;
        case 0x24f464u: goto label_24f464;
        case 0x24f468u: goto label_24f468;
        case 0x24f46cu: goto label_24f46c;
        case 0x24f470u: goto label_24f470;
        case 0x24f474u: goto label_24f474;
        case 0x24f478u: goto label_24f478;
        case 0x24f47cu: goto label_24f47c;
        case 0x24f480u: goto label_24f480;
        case 0x24f484u: goto label_24f484;
        case 0x24f488u: goto label_24f488;
        case 0x24f48cu: goto label_24f48c;
        case 0x24f490u: goto label_24f490;
        case 0x24f494u: goto label_24f494;
        case 0x24f498u: goto label_24f498;
        case 0x24f49cu: goto label_24f49c;
        case 0x24f4a0u: goto label_24f4a0;
        case 0x24f4a4u: goto label_24f4a4;
        case 0x24f4a8u: goto label_24f4a8;
        case 0x24f4acu: goto label_24f4ac;
        case 0x24f4b0u: goto label_24f4b0;
        case 0x24f4b4u: goto label_24f4b4;
        case 0x24f4b8u: goto label_24f4b8;
        case 0x24f4bcu: goto label_24f4bc;
        case 0x24f4c0u: goto label_24f4c0;
        case 0x24f4c4u: goto label_24f4c4;
        case 0x24f4c8u: goto label_24f4c8;
        case 0x24f4ccu: goto label_24f4cc;
        case 0x24f4d0u: goto label_24f4d0;
        case 0x24f4d4u: goto label_24f4d4;
        case 0x24f4d8u: goto label_24f4d8;
        case 0x24f4dcu: goto label_24f4dc;
        case 0x24f4e0u: goto label_24f4e0;
        case 0x24f4e4u: goto label_24f4e4;
        case 0x24f4e8u: goto label_24f4e8;
        case 0x24f4ecu: goto label_24f4ec;
        case 0x24f4f0u: goto label_24f4f0;
        case 0x24f4f4u: goto label_24f4f4;
        default: break;
    }

    ctx->pc = 0x24f3e8u;

label_24f3e8:
    // 0x24f3e8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x24f3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_24f3ec:
    // 0x24f3ec: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x24f3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_24f3f0:
    // 0x24f3f0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x24f3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_24f3f4:
    // 0x24f3f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24f3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24f3f8:
    // 0x24f3f8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x24f3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_24f3fc:
    // 0x24f3fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24f3fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24f400:
    // 0x24f400: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x24f400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_24f404:
    // 0x24f404: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x24f404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24f408:
    // 0x24f408: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x24f408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_24f40c:
    // 0x24f40c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x24f40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_24f410:
    // 0x24f410: 0x16600015  bnez        $s3, . + 4 + (0x15 << 2)
label_24f414:
    if (ctx->pc == 0x24F414u) {
        ctx->pc = 0x24F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F410u;
        // 0x24f414: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F418u;
        goto label_24f418;
    }
    ctx->pc = 0x24F410u;
    {
        const bool branch_taken_0x24f410 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F410u;
        // 0x24f414: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f410) {
            ctx->pc = 0x24F468u;
            goto label_24f468;
        }
    }
    ctx->pc = 0x24F418u;
label_24f418:
    // 0x24f418: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24f418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24f41c:
    // 0x24f41c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x24f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_24f420:
    // 0x24f420: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x24f420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_24f424:
    // 0x24f424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24f424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24f428:
    // 0x24f428: 0x40f809  jalr        $v0
label_24f42c:
    if (ctx->pc == 0x24F42Cu) {
        ctx->pc = 0x24F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F428u;
        // 0x24f42c: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F430u;
        goto label_24f430;
    }
    ctx->pc = 0x24F428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F430u);
        ctx->pc = 0x24F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F428u;
        // 0x24f42c: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F428u, 0x24F430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F430u;
label_24f430:
    // 0x24f430: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24f430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24f434:
    // 0x24f434: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
label_24f438:
    if (ctx->pc == 0x24F438u) {
        ctx->pc = 0x24F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F434u;
        // 0x24f438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F43Cu;
        goto label_24f43c;
    }
    ctx->pc = 0x24F434u;
    {
        const bool branch_taken_0x24f434 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F434u;
        // 0x24f438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f434) {
            ctx->pc = 0x24F468u;
            goto label_24f468;
        }
    }
    ctx->pc = 0x24F43Cu;
label_24f43c:
    // 0x24f43c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24f440:
    // 0x24f440: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x24f440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_24f444:
    // 0x24f444: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24f444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24f448:
    // 0x24f448: 0xc092848  jal         func_24A120
label_24f44c:
    if (ctx->pc == 0x24F44Cu) {
        ctx->pc = 0x24F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F448u;
        // 0x24f44c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F450u;
        goto label_24f450;
    }
    ctx->pc = 0x24F448u;
    SET_GPR_U32(ctx, 31, 0x24F450u);
    ctx->pc = 0x24F44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F448u;
    // 0x24f44c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24F448u, 0x24F450u)) {
        return;
    }
    ctx->pc = 0x24F450u;
label_24f450:
    // 0x24f450: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x24f450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_24f454:
    // 0x24f454: 0xc09281a  jal         func_24A068
label_24f458:
    if (ctx->pc == 0x24F458u) {
        ctx->pc = 0x24F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F454u;
        // 0x24f458: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F45Cu;
        goto label_24f45c;
    }
    ctx->pc = 0x24F454u;
    SET_GPR_U32(ctx, 31, 0x24F45Cu);
    ctx->pc = 0x24F458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F454u;
    // 0x24f458: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24F454u, 0x24F45Cu)) {
        return;
    }
    ctx->pc = 0x24F45Cu;
label_24f45c:
    // 0x24f45c: 0x0  nop
    ctx->pc = 0x24f45cu;
    // NOP
label_24f460:
    // 0x24f460: 0x1000001b  b           . + 4 + (0x1B << 2)
label_24f464:
    if (ctx->pc == 0x24F464u) {
        ctx->pc = 0x24F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F460u;
        // 0x24f464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F468u;
        goto label_24f468;
    }
    ctx->pc = 0x24F460u;
    {
        const bool branch_taken_0x24f460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F460u;
        // 0x24f464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f460) {
            ctx->pc = 0x24F4D0u;
            goto label_24f4d0;
        }
    }
    ctx->pc = 0x24F468u;
label_24f468:
    // 0x24f468: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_24f46c:
    if (ctx->pc == 0x24F46Cu) {
        ctx->pc = 0x24F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F468u;
        // 0x24f46c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F470u;
        goto label_24f470;
    }
    ctx->pc = 0x24F468u;
    {
        const bool branch_taken_0x24f468 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F468u;
        // 0x24f46c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f468) {
            ctx->pc = 0x24F4CCu;
            goto label_24f4cc;
        }
    }
    ctx->pc = 0x24F470u;
label_24f470:
    // 0x24f470: 0x24150040  addiu       $s5, $zero, 0x40
    ctx->pc = 0x24f470u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_24f474:
    // 0x24f474: 0x0  nop
    ctx->pc = 0x24f474u;
    // NOP
label_24f478:
    // 0x24f478: 0x2e220041  sltiu       $v0, $s1, 0x41
    ctx->pc = 0x24f478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_24f47c:
    // 0x24f47c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x24f47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24f480:
    // 0x24f480: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x24f480u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17));
label_24f484:
    // 0x24f484: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24f484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24f488:
    // 0x24f488: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24f488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24f48c:
    // 0x24f48c: 0xc093546  jal         func_24D518
label_24f490:
    if (ctx->pc == 0x24F490u) {
        ctx->pc = 0x24F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F48Cu;
        // 0x24f490: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F494u;
        goto label_24f494;
    }
    ctx->pc = 0x24F48Cu;
    SET_GPR_U32(ctx, 31, 0x24F494u);
    ctx->pc = 0x24F490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F48Cu;
    // 0x24f490: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x24F48Cu, 0x24F494u)) {
        return;
    }
    ctx->pc = 0x24F494u;
label_24f494:
    // 0x24f494: 0x1450fff2  bne         $v0, $s0, . + 4 + (-0xE << 2)
label_24f498:
    if (ctx->pc == 0x24F498u) {
        ctx->pc = 0x24F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F494u;
        // 0x24f498: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F49Cu;
        goto label_24f49c;
    }
    ctx->pc = 0x24F494u;
    {
        const bool branch_taken_0x24f494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x24F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F494u;
        // 0x24f498: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f494) {
            ctx->pc = 0x24F460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f460;
        }
    }
    ctx->pc = 0x24F49Cu;
label_24f49c:
    // 0x24f49c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24f49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f4a0:
    // 0x24f4a0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_24f4a4:
    if (ctx->pc == 0x24F4A4u) {
        ctx->pc = 0x24F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4A0u;
        // 0x24f4a4: 0x2503021  addu        $a2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F4A8u;
        goto label_24f4a8;
    }
    ctx->pc = 0x24F4A0u;
    {
        const bool branch_taken_0x24f4a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4A0u;
        // 0x24f4a4: 0x2503021  addu        $a2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4a0) {
            ctx->pc = 0x24F4C4u;
            goto label_24f4c4;
        }
    }
    ctx->pc = 0x24F4A8u;
label_24f4a8:
    // 0x24f4a8: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x24f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_24f4ac:
    // 0x24f4ac: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x24f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_24f4b0:
    // 0x24f4b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24f4b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_24f4b4:
    // 0x24f4b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24f4b8:
    // 0x24f4b8: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x24f4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_24f4bc:
    // 0x24f4bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_24f4c0:
    if (ctx->pc == 0x24F4C0u) {
        ctx->pc = 0x24F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4BCu;
        // 0x24f4c0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F4C4u;
        goto label_24f4c4;
    }
    ctx->pc = 0x24F4BCu;
    {
        const bool branch_taken_0x24f4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4BCu;
        // 0x24f4c0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4bc) {
            ctx->pc = 0x24F4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f4a8;
        }
    }
    ctx->pc = 0x24F4C4u;
label_24f4c4:
    // 0x24f4c4: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
label_24f4c8:
    if (ctx->pc == 0x24F4C8u) {
        ctx->pc = 0x24F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4C4u;
        // 0x24f4c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F4CCu;
        goto label_24f4cc;
    }
    ctx->pc = 0x24F4C4u;
    {
        const bool branch_taken_0x24f4c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4C4u;
        // 0x24f4c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4c4) {
            ctx->pc = 0x24F478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f478;
        }
    }
    ctx->pc = 0x24F4CCu;
label_24f4cc:
    // 0x24f4cc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24f4ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24f4d0:
    // 0x24f4d0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x24f4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_24f4d4:
    // 0x24f4d4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x24f4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24f4d8:
    // 0x24f4d8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x24f4d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24f4dc:
    // 0x24f4dc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x24f4dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24f4e0:
    // 0x24f4e0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x24f4e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24f4e4:
    // 0x24f4e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x24f4e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24f4e8:
    // 0x24f4e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24f4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24f4ec:
    // 0x24f4ec: 0x3e00008  jr          $ra
label_24f4f0:
    if (ctx->pc == 0x24F4F0u) {
        ctx->pc = 0x24F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4ECu;
        // 0x24f4f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F4F4u;
        goto label_24f4f4;
    }
    ctx->pc = 0x24F4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4ECu;
        // 0x24f4f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F4F4u;
label_24f4f4:
    // 0x24f4f4: 0x0  nop
    ctx->pc = 0x24f4f4u;
    // NOP
    ctx->pc = 0x24f4f8u;
}
