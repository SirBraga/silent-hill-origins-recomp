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

// Function: sub_001515F8
// Address: 0x1515f8 - 0x151818
void sub_001515F8_0x1515f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001515F8_0x1515f8");
#endif

    switch (ctx->pc) {
        case 0x151640u: goto label_151640;
        case 0x151660u: goto label_151660;
        case 0x1516b4u: goto label_1516b4;
        case 0x1516c8u: goto label_1516c8;
        case 0x1516dcu: goto label_1516dc;
        case 0x1516f0u: goto label_1516f0;
        case 0x151744u: goto label_151744;
        case 0x151754u: goto label_151754;
        case 0x151764u: goto label_151764;
        case 0x151774u: goto label_151774;
        case 0x1517c4u: goto label_1517c4;
        case 0x1517d4u: goto label_1517d4;
        case 0x1517e4u: goto label_1517e4;
        case 0x15180cu: goto label_15180c;
        default: break;
    }

    ctx->pc = 0x1515f8u;

    // 0x1515f8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1515f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1515fc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1515fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x151600: 0x8c45bda8  lw          $a1, -0x4258($v0)
    ctx->pc = 0x151600u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6CBDA8u));
    // 0x151604: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x151604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x151608: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x151608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15160c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x15160cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x151610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x151610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151614: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x151614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x151618: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15161c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x151620: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x151620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x151624: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x151624u;
    {
        const bool branch_taken_0x151624 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x151628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151624u;
        // 0x151628: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151624) {
            ctx->pc = 0x151640u;
            goto label_151640;
        }
    }
    ctx->pc = 0x15162Cu;
    // 0x15162c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151630: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151630u;
    {
        const bool branch_taken_0x151630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151630u;
        // 0x151634: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151630) {
            ctx->pc = 0x151644u;
            goto label_151644;
        }
    }
    ctx->pc = 0x151638u;
    // 0x151638: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x151638u;
    SET_GPR_U32(ctx, 31, 0x151640u);
    ctx->pc = 0x15163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151638u;
    // 0x15163c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x151638u, 0x151640u)) {
        return;
    }
    ctx->pc = 0x151640u;
label_151640:
    // 0x151640: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x151640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_151644:
    // 0x151644: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x151644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x151648: 0x8c4385b8  lw          $v1, -0x7A48($v0)
    ctx->pc = 0x151648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935992)));
    // 0x15164c: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x15164cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x151650: 0xac5085b8  sw          $s0, -0x7A48($v0)
    ctx->pc = 0x151650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935992), GPR_U32(ctx, 16));
    // 0x151654: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x151654u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x151658: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x151658u;
    SET_GPR_U32(ctx, 31, 0x151660u);
    ctx->pc = 0x15165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151658u;
    // 0x15165c: 0x2038024  and         $s0, $s0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE480u, 0x151658u, 0x151660u)) {
        return;
    }
    ctx->pc = 0x151660u;
label_151660:
    // 0x151660: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x151660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x151664: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x151664u;
    {
        const bool branch_taken_0x151664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151664u;
        // 0x151668: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151664) {
            ctx->pc = 0x151700u;
            goto label_151700;
        }
    }
    ctx->pc = 0x15166Cu;
    // 0x15166c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x15166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151670: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x151670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x151674: 0x26448500  addiu       $a0, $s2, -0x7B00
    ctx->pc = 0x151674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935808));
    // 0x151678: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x151678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15167c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x151680: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x151680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151684: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x151684u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x151688: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x151688u;
    {
        const bool branch_taken_0x151688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151688u;
        // 0x15168c: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151688) {
            ctx->pc = 0x1516F4u;
            goto label_1516f4;
        }
    }
    ctx->pc = 0x151690u;
    // 0x151690: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x151690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x151694: 0x244223e0  addiu       $v0, $v0, 0x23E0
    ctx->pc = 0x151694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9184));
    // 0x151698: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15169c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15169cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1516a0: 0x800008  jr          $a0
    ctx->pc = 0x1516A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1516A8u: goto label_1516a8;
            case 0x1516BCu: goto label_1516bc;
            case 0x1516D0u: goto label_1516d0;
            case 0x1516E4u: goto label_1516e4;
            case 0x1516F4u: goto label_1516f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1516A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1516A8u;
label_1516a8:
    // 0x1516a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1516a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1516ac: 0xc0547b0  jal         func_151EC0
    ctx->pc = 0x1516ACu;
    SET_GPR_U32(ctx, 31, 0x1516B4u);
    ctx->pc = 0x1516B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516ACu;
    // 0x1516b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151EC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151EC0u, 0x1516ACu, 0x1516B4u)) {
        return;
    }
    ctx->pc = 0x1516B4u;
label_1516b4:
    // 0x1516b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1516B4u;
    {
        const bool branch_taken_0x1516b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516B4u;
        // 0x1516b8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516b4) {
            ctx->pc = 0x1516F4u;
            goto label_1516f4;
        }
    }
    ctx->pc = 0x1516BCu;
label_1516bc:
    // 0x1516bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1516bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1516c0: 0xc0547e0  jal         func_151F80
    ctx->pc = 0x1516C0u;
    SET_GPR_U32(ctx, 31, 0x1516C8u);
    ctx->pc = 0x1516C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516C0u;
    // 0x1516c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151F80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151F80u, 0x1516C0u, 0x1516C8u)) {
        return;
    }
    ctx->pc = 0x1516C8u;
label_1516c8:
    // 0x1516c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1516C8u;
    {
        const bool branch_taken_0x1516c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516C8u;
        // 0x1516cc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516c8) {
            ctx->pc = 0x1516F4u;
            goto label_1516f4;
        }
    }
    ctx->pc = 0x1516D0u;
label_1516d0:
    // 0x1516d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1516d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1516d4: 0xc05487c  jal         func_1521F0
    ctx->pc = 0x1516D4u;
    SET_GPR_U32(ctx, 31, 0x1516DCu);
    ctx->pc = 0x1516D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516D4u;
    // 0x1516d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1521F0u, 0x1516D4u, 0x1516DCu)) {
        return;
    }
    ctx->pc = 0x1516DCu;
label_1516dc:
    // 0x1516dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1516DCu;
    {
        const bool branch_taken_0x1516dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516DCu;
        // 0x1516e0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516dc) {
            ctx->pc = 0x1516F4u;
            goto label_1516f4;
        }
    }
    ctx->pc = 0x1516E4u;
label_1516e4:
    // 0x1516e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1516e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1516e8: 0xc054890  jal         func_152240
    ctx->pc = 0x1516E8u;
    SET_GPR_U32(ctx, 31, 0x1516F0u);
    ctx->pc = 0x1516ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516E8u;
    // 0x1516ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152240u, 0x1516E8u, 0x1516F0u)) {
        return;
    }
    ctx->pc = 0x1516F0u;
label_1516f0:
    // 0x1516f0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1516f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1516f4:
    // 0x1516f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1516f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1516f8: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1516F8u;
    {
        const bool branch_taken_0x1516f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516F8u;
        // 0x1516fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516f8) {
            ctx->pc = 0x151824u;
            return;
        }
    }
    ctx->pc = 0x151700u;
label_151700:
    // 0x151700: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x151700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151704: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x151704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x151708: 0x26448500  addiu       $a0, $s2, -0x7B00
    ctx->pc = 0x151708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935808));
    // 0x15170c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15170cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x151710: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x151710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x151714: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x151714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151718: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x151718u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x15171c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x15171Cu;
    {
        const bool branch_taken_0x15171c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x151720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15171Cu;
        // 0x151720: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15171c) {
            ctx->pc = 0x151774u;
            goto label_151774;
        }
    }
    ctx->pc = 0x151724u;
    // 0x151724: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x151724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x151728: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x151728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
    // 0x15172c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151730: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x151730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151734: 0x800008  jr          $a0
    ctx->pc = 0x151734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15173Cu: goto label_15173c;
            case 0x15174Cu: goto label_15174c;
            case 0x15175Cu: goto label_15175c;
            case 0x15176Cu: goto label_15176c;
            case 0x151774u: goto label_151774;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151734u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15173Cu;
label_15173c:
    // 0x15173c: 0xc0547d4  jal         func_151F50
    ctx->pc = 0x15173Cu;
    SET_GPR_U32(ctx, 31, 0x151744u);
    ctx->pc = 0x151740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15173Cu;
    // 0x151740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151F50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151F50u, 0x15173Cu, 0x151744u)) {
        return;
    }
    ctx->pc = 0x151744u;
label_151744:
    // 0x151744: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x151744u;
    {
        const bool branch_taken_0x151744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151744u;
        // 0x151748: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151744) {
            ctx->pc = 0x151778u;
            goto label_151778;
        }
    }
    ctx->pc = 0x15174Cu;
label_15174c:
    // 0x15174c: 0xc054852  jal         func_152148
    ctx->pc = 0x15174Cu;
    SET_GPR_U32(ctx, 31, 0x151754u);
    ctx->pc = 0x151750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15174Cu;
    // 0x151750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152148u, 0x15174Cu, 0x151754u)) {
        return;
    }
    ctx->pc = 0x151754u;
label_151754:
    // 0x151754: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151754u;
    {
        const bool branch_taken_0x151754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151754u;
        // 0x151758: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151754) {
            ctx->pc = 0x151778u;
            goto label_151778;
        }
    }
    ctx->pc = 0x15175Cu;
label_15175c:
    // 0x15175c: 0xc054886  jal         func_152218
    ctx->pc = 0x15175Cu;
    SET_GPR_U32(ctx, 31, 0x151764u);
    ctx->pc = 0x151760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15175Cu;
    // 0x151760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152218u, 0x15175Cu, 0x151764u)) {
        return;
    }
    ctx->pc = 0x151764u;
label_151764:
    // 0x151764: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x151764u;
    {
        const bool branch_taken_0x151764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151764u;
        // 0x151768: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151764) {
            ctx->pc = 0x151778u;
            goto label_151778;
        }
    }
    ctx->pc = 0x15176Cu;
label_15176c:
    // 0x15176c: 0xc0548a0  jal         func_152280
    ctx->pc = 0x15176Cu;
    SET_GPR_U32(ctx, 31, 0x151774u);
    ctx->pc = 0x151770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15176Cu;
    // 0x151770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152280u, 0x15176Cu, 0x151774u)) {
        return;
    }
    ctx->pc = 0x151774u;
label_151774:
    // 0x151774: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x151774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_151778:
    // 0x151778: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x151778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15177c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x15177cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x151780: 0x26448500  addiu       $a0, $s2, -0x7B00
    ctx->pc = 0x151780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935808));
    // 0x151784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151788: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x151788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15178c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x15178cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x151790: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x151790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151794: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x151794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151798: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x151798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x15179c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15179Cu;
    {
        const bool branch_taken_0x15179c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1517A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15179Cu;
        // 0x1517a0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15179c) {
            ctx->pc = 0x151820u;
            return;
        }
    }
    ctx->pc = 0x1517A4u;
    // 0x1517a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1517a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1517a8: 0x24422420  addiu       $v0, $v0, 0x2420
    ctx->pc = 0x1517a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9248));
    // 0x1517ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1517acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1517b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1517b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1517b4: 0x800008  jr          $a0
    ctx->pc = 0x1517B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1517BCu: goto label_1517bc;
            case 0x1517CCu: goto label_1517cc;
            case 0x1517DCu: goto label_1517dc;
            case 0x1517ECu: goto label_1517ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1517B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1517BCu;
label_1517bc:
    // 0x1517bc: 0xc05478a  jal         func_151E28
    ctx->pc = 0x1517BCu;
    SET_GPR_U32(ctx, 31, 0x1517C4u);
    ctx->pc = 0x1517C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517BCu;
    // 0x1517c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151E28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151E28u, 0x1517BCu, 0x1517C4u)) {
        return;
    }
    ctx->pc = 0x1517C4u;
label_1517c4:
    // 0x1517c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1517C4u;
    {
        const bool branch_taken_0x1517c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1517C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517C4u;
        // 0x1517c8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517c4) {
            ctx->pc = 0x151810u;
            goto label_151810;
        }
    }
    ctx->pc = 0x1517CCu;
label_1517cc:
    // 0x1517cc: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x1517CCu;
    SET_GPR_U32(ctx, 31, 0x1517D4u);
    ctx->pc = 0x1517D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517CCu;
    // 0x1517d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151F70u, 0x1517CCu, 0x1517D4u)) {
        return;
    }
    ctx->pc = 0x1517D4u;
label_1517d4:
    // 0x1517d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1517D4u;
    {
        const bool branch_taken_0x1517d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1517D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517D4u;
        // 0x1517d8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517d4) {
            ctx->pc = 0x151810u;
            goto label_151810;
        }
    }
    ctx->pc = 0x1517DCu;
label_1517dc:
    // 0x1517dc: 0xc054870  jal         func_1521C0
    ctx->pc = 0x1517DCu;
    SET_GPR_U32(ctx, 31, 0x1517E4u);
    ctx->pc = 0x1517E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517DCu;
    // 0x1517e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1521C0u, 0x1517DCu, 0x1517E4u)) {
        return;
    }
    ctx->pc = 0x1517E4u;
label_1517e4:
    // 0x1517e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1517E4u;
    {
        const bool branch_taken_0x1517e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1517E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517E4u;
        // 0x1517e8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517e4) {
            ctx->pc = 0x151810u;
            goto label_151810;
        }
    }
    ctx->pc = 0x1517ECu;
label_1517ec:
    // 0x1517ec: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1517ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1517f0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1517f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1517f4: 0x26428500  addiu       $v0, $s2, -0x7B00
    ctx->pc = 0x1517f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935808));
    // 0x1517f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1517f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517fc: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1517fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x151800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151804: 0xc054888  jal         func_152220
    ctx->pc = 0x151804u;
    SET_GPR_U32(ctx, 31, 0x15180Cu);
    ctx->pc = 0x151808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151804u;
    // 0x151808: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152220u, 0x151804u, 0x15180Cu)) {
        return;
    }
    ctx->pc = 0x15180Cu;
label_15180c:
    // 0x15180c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15180cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_151810:
    // 0x151810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151810u;
    {
        const bool branch_taken_0x151810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151810u;
        // 0x151814: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151810) {
            ctx->pc = 0x151820u;
            return;
        }
    }
    ctx->pc = 0x151818u;
}
