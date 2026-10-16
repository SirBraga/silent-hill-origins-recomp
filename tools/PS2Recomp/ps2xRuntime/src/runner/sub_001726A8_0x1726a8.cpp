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

// Function: sub_001726A8
// Address: 0x1726a8 - 0x1727f0
void sub_001726A8_0x1726a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001726A8_0x1726a8");
#endif

    switch (ctx->pc) {
        case 0x1726fcu: goto label_1726fc;
        case 0x172708u: goto label_172708;
        case 0x172714u: goto label_172714;
        case 0x172718u: goto label_172718;
        case 0x172724u: goto label_172724;
        case 0x172748u: goto label_172748;
        case 0x17275cu: goto label_17275c;
        case 0x172778u: goto label_172778;
        case 0x172784u: goto label_172784;
        case 0x172798u: goto label_172798;
        case 0x1727a4u: goto label_1727a4;
        case 0x1727bcu: goto label_1727bc;
        case 0x1727c8u: goto label_1727c8;
        default: break;
    }

    ctx->pc = 0x1726a8u;

    // 0x1726a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1726a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1726ac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1726acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1726b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1726b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1726b4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1726b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1726b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1726b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726bc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1726bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1726c0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1726c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1726c4: 0x24425970  addiu       $v0, $v0, 0x5970
    ctx->pc = 0x1726c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22896));
    // 0x1726c8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1726c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1726cc: 0x24635990  addiu       $v1, $v1, 0x5990
    ctx->pc = 0x1726ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22928));
    // 0x1726d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1726d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1726d4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1726d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726d8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1726d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1726dc: 0x2644005c  addiu       $a0, $s2, 0x5C
    ctx->pc = 0x1726dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x1726e0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1726e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1726e4: 0x2650008c  addiu       $s0, $s2, 0x8C
    ctx->pc = 0x1726e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
    // 0x1726e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1726e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1726ec: 0x26510064  addiu       $s1, $s2, 0x64
    ctx->pc = 0x1726ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x1726f0: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x1726f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x1726f4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1726F4u;
    SET_GPR_U32(ctx, 31, 0x1726FCu);
    ctx->pc = 0x1726F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726F4u;
    // 0x1726f8: 0xae430034  sw          $v1, 0x34($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1726F4u, 0x1726FCu)) {
        return;
    }
    ctx->pc = 0x1726FCu;
label_1726fc:
    // 0x1726fc: 0x26440038  addiu       $a0, $s2, 0x38
    ctx->pc = 0x1726fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x172700: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x172700u;
    SET_GPR_U32(ctx, 31, 0x172708u);
    ctx->pc = 0x172704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172700u;
    // 0x172704: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x172700u, 0x172708u)) {
        return;
    }
    ctx->pc = 0x172708u;
label_172708:
    // 0x172708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17270c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17270Cu;
    SET_GPR_U32(ctx, 31, 0x172714u);
    ctx->pc = 0x172710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17270Cu;
    // 0x172710: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17270Cu, 0x172714u)) {
        return;
    }
    ctx->pc = 0x172714u;
label_172714:
    // 0x172714: 0x0  nop
    ctx->pc = 0x172714u;
    // NOP
label_172718:
    // 0x172718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17271c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17271Cu;
    SET_GPR_U32(ctx, 31, 0x172724u);
    ctx->pc = 0x172720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17271Cu;
    // 0x172720: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17271Cu, 0x172724u)) {
        return;
    }
    ctx->pc = 0x172724u;
label_172724:
    // 0x172724: 0x0  nop
    ctx->pc = 0x172724u;
    // NOP
    // 0x172728: 0x601fffb  bgez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x172728u;
    {
        const bool branch_taken_0x172728 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x17272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172728u;
        // 0x17272c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172728) {
            ctx->pc = 0x172718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172718;
        }
    }
    ctx->pc = 0x172730u;
    // 0x172730: 0x2655005c  addiu       $s5, $s2, 0x5C
    ctx->pc = 0x172730u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x172734: 0x2654008c  addiu       $s4, $s2, 0x8C
    ctx->pc = 0x172734u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
    // 0x172738: 0x26530064  addiu       $s3, $s2, 0x64
    ctx->pc = 0x172738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x17273c: 0x26500094  addiu       $s0, $s2, 0x94
    ctx->pc = 0x17273cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
    // 0x172740: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x172740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x172744: 0x0  nop
    ctx->pc = 0x172744u;
    // NOP
label_172748:
    // 0x172748: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x172748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17274c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17274Cu;
    {
        const bool branch_taken_0x17274c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x172750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17274Cu;
        // 0x172750: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17274c) {
            ctx->pc = 0x172760u;
            goto label_172760;
        }
    }
    ctx->pc = 0x172754u;
    // 0x172754: 0xc0808d4  jal         func_202350
    ctx->pc = 0x172754u;
    SET_GPR_U32(ctx, 31, 0x17275Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x172754u, 0x17275Cu)) {
        return;
    }
    ctx->pc = 0x17275Cu;
label_17275c:
    // 0x17275c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17275cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_172760:
    // 0x172760: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172760u;
    {
        const bool branch_taken_0x172760 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x172764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172760u;
        // 0x172764: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172760) {
            ctx->pc = 0x172748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172748;
        }
    }
    ctx->pc = 0x172768u;
    // 0x172768: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x172768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17276c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x17276cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x172770: 0xc06ca38  jal         func_1B28E0
    ctx->pc = 0x172770u;
    SET_GPR_U32(ctx, 31, 0x172778u);
    ctx->pc = 0x172774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172770u;
    // 0x172774: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28E0u, 0x172770u, 0x172778u)) {
        return;
    }
    ctx->pc = 0x172778u;
label_172778:
    // 0x172778: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x172778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17277c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17277Cu;
    SET_GPR_U32(ctx, 31, 0x172784u);
    ctx->pc = 0x172780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17277Cu;
    // 0x172780: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17277Cu, 0x172784u)) {
        return;
    }
    ctx->pc = 0x172784u;
label_172784:
    // 0x172784: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x172784u;
    {
        const bool branch_taken_0x172784 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x172788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172784u;
        // 0x172788: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172784) {
            ctx->pc = 0x1727B0u;
            goto label_1727b0;
        }
    }
    ctx->pc = 0x17278Cu;
    // 0x17278c: 0x12700009  beq         $s3, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17278Cu;
    {
        const bool branch_taken_0x17278c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x172790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17278Cu;
        // 0x172790: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17278c) {
            ctx->pc = 0x1727B4u;
            goto label_1727b4;
        }
    }
    ctx->pc = 0x172794u;
    // 0x172794: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x172794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_172798:
    // 0x172798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17279c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17279Cu;
    SET_GPR_U32(ctx, 31, 0x1727A4u);
    ctx->pc = 0x1727A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17279Cu;
    // 0x1727a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17279Cu, 0x1727A4u)) {
        return;
    }
    ctx->pc = 0x1727A4u;
label_1727a4:
    // 0x1727a4: 0x0  nop
    ctx->pc = 0x1727a4u;
    // NOP
    // 0x1727a8: 0x1670fffb  bne         $s3, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1727A8u;
    {
        const bool branch_taken_0x1727a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x1727ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727A8u;
        // 0x1727ac: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727a8) {
            ctx->pc = 0x172798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172798;
        }
    }
    ctx->pc = 0x1727B0u;
label_1727b0:
    // 0x1727b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1727b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1727b4:
    // 0x1727b4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1727B4u;
    SET_GPR_U32(ctx, 31, 0x1727BCu);
    ctx->pc = 0x1727B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727B4u;
    // 0x1727b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1727B4u, 0x1727BCu)) {
        return;
    }
    ctx->pc = 0x1727BCu;
label_1727bc:
    // 0x1727bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1727bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727c0: 0xc05d822  jal         func_176088
    ctx->pc = 0x1727C0u;
    SET_GPR_U32(ctx, 31, 0x1727C8u);
    ctx->pc = 0x1727C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727C0u;
    // 0x1727c4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176088u, 0x1727C0u, 0x1727C8u)) {
        return;
    }
    ctx->pc = 0x1727C8u;
label_1727c8:
    // 0x1727c8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1727c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1727cc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1727ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1727d0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1727d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1727d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1727d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1727d8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1727d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1727dc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1727dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1727e0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1727e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1727e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1727e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1727e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1727E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1727ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727E8u;
        // 0x1727ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1727E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1727F0u;
}
