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

// Function: sub_001925E8
// Address: 0x1925e8 - 0x192738
void sub_001925E8_0x1925e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001925E8_0x1925e8");
#endif

    switch (ctx->pc) {
        case 0x192628u: goto label_192628;
        case 0x192630u: goto label_192630;
        case 0x192688u: goto label_192688;
        case 0x1926a0u: goto label_1926a0;
        case 0x1926c8u: goto label_1926c8;
        case 0x1926d8u: goto label_1926d8;
        case 0x1926e8u: goto label_1926e8;
        case 0x1926f4u: goto label_1926f4;
        case 0x192710u: goto label_192710;
        default: break;
    }

    ctx->pc = 0x1925e8u;

    // 0x1925e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1925e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1925ec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1925ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1925f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1925f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1925f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1925f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1925f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1925f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1925fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1925fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192600: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x192600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x192604: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x192604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192608: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x192608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x19260c: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x19260cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x192610: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x192610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x192614: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x192614u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19261c: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x19261cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x192620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192624: 0x0  nop
    ctx->pc = 0x192624u;
    // NOP
label_192628:
    // 0x192628: 0xc0a4fa4  jal         func_293E90
    ctx->pc = 0x192628u;
    SET_GPR_U32(ctx, 31, 0x192630u);
    ctx->pc = 0x19262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192628u;
    // 0x19262c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293E90u, 0x192628u, 0x192630u)) {
        return;
    }
    ctx->pc = 0x192630u;
label_192630:
    // 0x192630: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192634: 0x10550003  beq         $v0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x192634u;
    {
        const bool branch_taken_0x192634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x192638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192634u;
        // 0x192638: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192634) {
            ctx->pc = 0x192644u;
            goto label_192644;
        }
    }
    ctx->pc = 0x19263Cu;
    // 0x19263c: 0x14540002  bne         $v0, $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x19263Cu;
    {
        const bool branch_taken_0x19263c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x19263c) {
            ctx->pc = 0x192648u;
            goto label_192648;
        }
    }
    ctx->pc = 0x192644u;
label_192644:
    // 0x192644: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x192644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192648:
    // 0x192648: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x192648u;
    {
        const bool branch_taken_0x192648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x19264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192648u;
        // 0x19264c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192648) {
            ctx->pc = 0x19265Cu;
            goto label_19265c;
        }
    }
    ctx->pc = 0x192650u;
    // 0x192650: 0x2e020032  sltiu       $v0, $s0, 0x32
    ctx->pc = 0x192650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x192654: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x192654u;
    {
        const bool branch_taken_0x192654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192654) {
            ctx->pc = 0x192660u;
            goto label_192660;
        }
    }
    ctx->pc = 0x19265Cu;
label_19265c:
    // 0x19265c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192660:
    // 0x192660: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192660u;
    {
        const bool branch_taken_0x192660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x192664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192660u;
        // 0x192664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192660) {
            ctx->pc = 0x192678u;
            goto label_192678;
        }
    }
    ctx->pc = 0x192668u;
    // 0x192668: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x192668u;
    {
        const bool branch_taken_0x192668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192668) {
            ctx->pc = 0x192628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192628;
        }
    }
    ctx->pc = 0x192670u;
    // 0x192670: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x192670u;
    {
        const bool branch_taken_0x192670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192670u;
        // 0x192674: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192670) {
            ctx->pc = 0x192714u;
            goto label_192714;
        }
    }
    ctx->pc = 0x192678u;
label_192678:
    // 0x192678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19267c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19267cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192680: 0xc0a500c  jal         func_294030
    ctx->pc = 0x192680u;
    SET_GPR_U32(ctx, 31, 0x192688u);
    ctx->pc = 0x192684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192680u;
    // 0x192684: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294030u, 0x192680u, 0x192688u)) {
        return;
    }
    ctx->pc = 0x192688u;
label_192688:
    // 0x192688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19268c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19268cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192694: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x192694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192698: 0xc0a500c  jal         func_294030
    ctx->pc = 0x192698u;
    SET_GPR_U32(ctx, 31, 0x1926A0u);
    ctx->pc = 0x19269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192698u;
    // 0x19269c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294030u, 0x192698u, 0x1926A0u)) {
        return;
    }
    ctx->pc = 0x1926A0u;
label_1926a0:
    // 0x1926a0: 0x28430001  slti        $v1, $v0, 0x1
    ctx->pc = 0x1926a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x1926a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1926a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1926a8: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x1926a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
    // 0x1926ac: 0x16040019  bne         $s0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1926ACu;
    {
        const bool branch_taken_0x1926ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x1926B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926ACu;
        // 0x1926b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926ac) {
            ctx->pc = 0x192714u;
            goto label_192714;
        }
    }
    ctx->pc = 0x1926B4u;
    // 0x1926b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1926b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1926b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1926bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1926c0: 0xc0a500c  jal         func_294030
    ctx->pc = 0x1926C0u;
    SET_GPR_U32(ctx, 31, 0x1926C8u);
    ctx->pc = 0x1926C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1926C0u;
    // 0x1926c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294030u, 0x1926C0u, 0x1926C8u)) {
        return;
    }
    ctx->pc = 0x1926C8u;
label_1926c8:
    // 0x1926c8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1926C8u;
    {
        const bool branch_taken_0x1926c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1926CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926C8u;
        // 0x1926cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926c8) {
            ctx->pc = 0x192708u;
            goto label_192708;
        }
    }
    ctx->pc = 0x1926D0u;
    // 0x1926d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1926d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926d4: 0x0  nop
    ctx->pc = 0x1926d4u;
    // NOP
label_1926d8:
    // 0x1926d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1926d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1926dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1926e0: 0xc0a505a  jal         func_294168
    ctx->pc = 0x1926E0u;
    SET_GPR_U32(ctx, 31, 0x1926E8u);
    ctx->pc = 0x1926E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1926E0u;
    // 0x1926e4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294168u, 0x1926E0u, 0x1926E8u)) {
        return;
    }
    ctx->pc = 0x1926E8u;
label_1926e8:
    // 0x1926e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1926e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926ec: 0xc0a4ff2  jal         func_293FC8
    ctx->pc = 0x1926ECu;
    SET_GPR_U32(ctx, 31, 0x1926F4u);
    ctx->pc = 0x1926F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1926ECu;
    // 0x1926f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293FC8u, 0x1926ECu, 0x1926F4u)) {
        return;
    }
    ctx->pc = 0x1926F4u;
label_1926f4:
    // 0x1926f4: 0x1050fff8  beq         $v0, $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1926F4u;
    {
        const bool branch_taken_0x1926f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1926F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926F4u;
        // 0x1926f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926f4) {
            ctx->pc = 0x1926D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1926d8;
        }
    }
    ctx->pc = 0x1926FCu;
    // 0x1926fc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1926fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x192700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192700u;
    {
        const bool branch_taken_0x192700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192700u;
        // 0x192704: 0xac408b38  sw          $zero, -0x74C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192700) {
            ctx->pc = 0x192710u;
            goto label_192710;
        }
    }
    ctx->pc = 0x192708u;
label_192708:
    // 0x192708: 0xc064930  jal         func_1924C0
    ctx->pc = 0x192708u;
    SET_GPR_U32(ctx, 31, 0x192710u);
    ctx->pc = 0x1924C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1924C0u, 0x192708u, 0x192710u)) {
        return;
    }
    ctx->pc = 0x192710u;
label_192710:
    // 0x192710: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x192710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_192714:
    // 0x192714: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x192714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192718: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x192718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19271c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19271cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192720: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x192720u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192724: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x192724u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19272c: 0x3e00008  jr          $ra
    ctx->pc = 0x19272Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19272Cu;
        // 0x192730: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19272Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192734u;
    // 0x192734: 0x0  nop
    ctx->pc = 0x192734u;
    // NOP
    ctx->pc = 0x192738u;
}
