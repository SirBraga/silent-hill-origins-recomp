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

// Function: sub_001F5688
// Address: 0x1f5688 - 0x1f58f0
void sub_001F5688_0x1f5688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5688_0x1f5688");
#endif

    switch (ctx->pc) {
        case 0x1f56ecu: goto label_1f56ec;
        case 0x1f56f8u: goto label_1f56f8;
        case 0x1f5728u: goto label_1f5728;
        case 0x1f5748u: goto label_1f5748;
        case 0x1f5758u: goto label_1f5758;
        case 0x1f576cu: goto label_1f576c;
        case 0x1f5778u: goto label_1f5778;
        case 0x1f5798u: goto label_1f5798;
        case 0x1f57b8u: goto label_1f57b8;
        case 0x1f57c8u: goto label_1f57c8;
        case 0x1f57dcu: goto label_1f57dc;
        case 0x1f57e8u: goto label_1f57e8;
        case 0x1f5808u: goto label_1f5808;
        case 0x1f5828u: goto label_1f5828;
        case 0x1f5838u: goto label_1f5838;
        case 0x1f584cu: goto label_1f584c;
        case 0x1f5858u: goto label_1f5858;
        case 0x1f5878u: goto label_1f5878;
        case 0x1f5898u: goto label_1f5898;
        case 0x1f58a8u: goto label_1f58a8;
        case 0x1f58b0u: goto label_1f58b0;
        default: break;
    }

    ctx->pc = 0x1f5688u;

    // 0x1f5688: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x1f5688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
    // 0x1f568c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1f568cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1f5690: 0x7fb40450  sq          $s4, 0x450($sp)
    ctx->pc = 0x1f5690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 20));
    // 0x1f5694: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f5694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f5698: 0x7fb50440  sq          $s5, 0x440($sp)
    ctx->pc = 0x1f5698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 21));
    // 0x1f569c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f569cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56a0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f56a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56a4: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1f56a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x1f56a8: 0x7fb00490  sq          $s0, 0x490($sp)
    ctx->pc = 0x1f56a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 16));
    // 0x1f56ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f56acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56b0: 0x7fb10480  sq          $s1, 0x480($sp)
    ctx->pc = 0x1f56b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 17));
    // 0x1f56b4: 0x24e72a48  addiu       $a3, $a3, 0x2A48
    ctx->pc = 0x1f56b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10824));
    // 0x1f56b8: 0x7fb20470  sq          $s2, 0x470($sp)
    ctx->pc = 0x1f56b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 18));
    // 0x1f56bc: 0x24a52a38  addiu       $a1, $a1, 0x2A38
    ctx->pc = 0x1f56bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10808));
    // 0x1f56c0: 0x7fb30460  sq          $s3, 0x460($sp)
    ctx->pc = 0x1f56c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 19));
    // 0x1f56c4: 0x24c62a20  addiu       $a2, $a2, 0x2A20
    ctx->pc = 0x1f56c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10784));
    // 0x1f56c8: 0x7fb60430  sq          $s6, 0x430($sp)
    ctx->pc = 0x1f56c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 22));
    // 0x1f56cc: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1f56ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x1f56d0: 0x7fbe0410  sq          $fp, 0x410($sp)
    ctx->pc = 0x1f56d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 30));
    // 0x1f56d4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1f56d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56d8: 0x7fb70420  sq          $s7, 0x420($sp)
    ctx->pc = 0x1f56d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 23));
    // 0x1f56dc: 0x3c16006a  lui         $s6, 0x6A
    ctx->pc = 0x1f56dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)106 << 16));
    // 0x1f56e0: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x1f56e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
    // 0x1f56e4: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F56E4u;
    SET_GPR_U32(ctx, 31, 0x1F56ECu);
    ctx->pc = 0x1F56E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56E4u;
    // 0x1f56e8: 0x3c1e006a  lui         $fp, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)106 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F56E4u, 0x1F56ECu)) {
        return;
    }
    ctx->pc = 0x1F56ECu;
label_1f56ec:
    // 0x1f56ec: 0x26052a40  addiu       $a1, $s0, 0x2A40
    ctx->pc = 0x1f56ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10816));
    // 0x1f56f0: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F56F0u;
    SET_GPR_U32(ctx, 31, 0x1F56F8u);
    ctx->pc = 0x1F56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56F0u;
    // 0x1f56f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F56F0u, 0x1F56F8u)) {
        return;
    }
    ctx->pc = 0x1F56F8u;
label_1f56f8:
    // 0x1f56f8: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1f56f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x1f56fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f5700: 0x83a50000  lb          $a1, 0x0($sp)
    ctx->pc = 0x1f5700u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5704: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1f5704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5708: 0x24722a58  addiu       $s2, $v1, 0x2A58
    ctx->pc = 0x1f5708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 10840));
    // 0x1f570c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F570Cu;
    {
        const bool branch_taken_0x1f570c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F570Cu;
        // 0x1f5710: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f570c) {
            ctx->pc = 0x1F5740u;
            goto label_1f5740;
        }
    }
    ctx->pc = 0x1F5714u;
    // 0x1f5714: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1f5714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1f5718: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5718u;
    {
        const bool branch_taken_0x1f5718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5718u;
        // 0x1f571c: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5718) {
            ctx->pc = 0x1F5740u;
            goto label_1f5740;
        }
    }
    ctx->pc = 0x1F5720u;
    // 0x1f5720: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f5724: 0x0  nop
    ctx->pc = 0x1f5724u;
    // NOP
label_1f5728:
    // 0x1f5728: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f5728u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f572c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F572Cu;
    {
        const bool branch_taken_0x1f572c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f572c) {
            ctx->pc = 0x1F5740u;
            goto label_1f5740;
        }
    }
    ctx->pc = 0x1F5734u;
    // 0x1f5734: 0x0  nop
    ctx->pc = 0x1f5734u;
    // NOP
    // 0x1f5738: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5738u;
    {
        const bool branch_taken_0x1f5738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5738) {
            ctx->pc = 0x1F573Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5738u;
            // 0x1f573c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5728;
        }
    }
    ctx->pc = 0x1F5740u;
label_1f5740:
    // 0x1f5740: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F5740u;
    SET_GPR_U32(ctx, 31, 0x1F5748u);
    ctx->pc = 0x1F5744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5740u;
    // 0x1f5744: 0x26372a58  addiu       $s7, $s1, 0x2A58 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 10840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F5740u, 0x1F5748u)) {
        return;
    }
    ctx->pc = 0x1F5748u;
label_1f5748:
    // 0x1f5748: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f574c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f574cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5750: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x1F5750u;
    SET_GPR_U32(ctx, 31, 0x1F5758u);
    ctx->pc = 0x1F5754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5750u;
    // 0x1f5754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326B90u, 0x1F5750u, 0x1F5758u)) {
        return;
    }
    ctx->pc = 0x1F5758u;
label_1f5758:
    // 0x1f5758: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f575c: 0x26072a60  addiu       $a3, $s0, 0x2A60
    ctx->pc = 0x1f575cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 10848));
    // 0x1f5760: 0x26852a38  addiu       $a1, $s4, 0x2A38
    ctx->pc = 0x1f5760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 10808));
    // 0x1f5764: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F5764u;
    SET_GPR_U32(ctx, 31, 0x1F576Cu);
    ctx->pc = 0x1F5768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5764u;
    // 0x1f5768: 0x26a62a20  addiu       $a2, $s5, 0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 10784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F5764u, 0x1F576Cu)) {
        return;
    }
    ctx->pc = 0x1F576Cu;
label_1f576c:
    // 0x1f576c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5770: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F5770u;
    SET_GPR_U32(ctx, 31, 0x1F5778u);
    ctx->pc = 0x1F5774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5770u;
    // 0x1f5774: 0x26652a40  addiu       $a1, $s3, 0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 10816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F5770u, 0x1F5778u)) {
        return;
    }
    ctx->pc = 0x1F5778u;
label_1f5778:
    // 0x1f5778: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1f5778u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f577c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F577Cu;
    {
        const bool branch_taken_0x1f577c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F577Cu;
        // 0x1f5780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f577c) {
            ctx->pc = 0x1F57B0u;
            goto label_1f57b0;
        }
    }
    ctx->pc = 0x1F5784u;
    // 0x1f5784: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1f5784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1f5788: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5788u;
    {
        const bool branch_taken_0x1f5788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5788u;
        // 0x1f578c: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5788) {
            ctx->pc = 0x1F57B0u;
            goto label_1f57b0;
        }
    }
    ctx->pc = 0x1F5790u;
    // 0x1f5790: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f5794: 0x0  nop
    ctx->pc = 0x1f5794u;
    // NOP
label_1f5798:
    // 0x1f5798: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f5798u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f579c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F579Cu;
    {
        const bool branch_taken_0x1f579c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f579c) {
            ctx->pc = 0x1F57B0u;
            goto label_1f57b0;
        }
    }
    ctx->pc = 0x1F57A4u;
    // 0x1f57a4: 0x0  nop
    ctx->pc = 0x1f57a4u;
    // NOP
    // 0x1f57a8: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F57A8u;
    {
        const bool branch_taken_0x1f57a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f57a8) {
            ctx->pc = 0x1F57ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F57A8u;
            // 0x1f57ac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5798;
        }
    }
    ctx->pc = 0x1F57B0u;
label_1f57b0:
    // 0x1f57b0: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F57B0u;
    SET_GPR_U32(ctx, 31, 0x1F57B8u);
    ctx->pc = 0x1F57B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57B0u;
    // 0x1f57b4: 0x26302a58  addiu       $s0, $s1, 0x2A58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 10840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F57B0u, 0x1F57B8u)) {
        return;
    }
    ctx->pc = 0x1F57B8u;
label_1f57b8:
    // 0x1f57b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f57b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57bc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1f57bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57c0: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x1F57C0u;
    SET_GPR_U32(ctx, 31, 0x1F57C8u);
    ctx->pc = 0x1F57C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57C0u;
    // 0x1f57c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326B90u, 0x1F57C0u, 0x1F57C8u)) {
        return;
    }
    ctx->pc = 0x1F57C8u;
label_1f57c8:
    // 0x1f57c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f57c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57cc: 0x26c72a70  addiu       $a3, $s6, 0x2A70
    ctx->pc = 0x1f57ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 10864));
    // 0x1f57d0: 0x26852a38  addiu       $a1, $s4, 0x2A38
    ctx->pc = 0x1f57d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 10808));
    // 0x1f57d4: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F57D4u;
    SET_GPR_U32(ctx, 31, 0x1F57DCu);
    ctx->pc = 0x1F57D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57D4u;
    // 0x1f57d8: 0x26a62a20  addiu       $a2, $s5, 0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 10784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F57D4u, 0x1F57DCu)) {
        return;
    }
    ctx->pc = 0x1F57DCu;
label_1f57dc:
    // 0x1f57dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f57dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57e0: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F57E0u;
    SET_GPR_U32(ctx, 31, 0x1F57E8u);
    ctx->pc = 0x1F57E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57E0u;
    // 0x1f57e4: 0x26652a40  addiu       $a1, $s3, 0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 10816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F57E0u, 0x1F57E8u)) {
        return;
    }
    ctx->pc = 0x1F57E8u;
label_1f57e8:
    // 0x1f57e8: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1f57e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f57ec: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F57ECu;
    {
        const bool branch_taken_0x1f57ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F57F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57ECu;
        // 0x1f57f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57ec) {
            ctx->pc = 0x1F5820u;
            goto label_1f5820;
        }
    }
    ctx->pc = 0x1F57F4u;
    // 0x1f57f4: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1f57f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1f57f8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F57F8u;
    {
        const bool branch_taken_0x1f57f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57F8u;
        // 0x1f57fc: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57f8) {
            ctx->pc = 0x1F5820u;
            goto label_1f5820;
        }
    }
    ctx->pc = 0x1F5800u;
    // 0x1f5800: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f5804: 0x0  nop
    ctx->pc = 0x1f5804u;
    // NOP
label_1f5808:
    // 0x1f5808: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f5808u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f580c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F580Cu;
    {
        const bool branch_taken_0x1f580c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f580c) {
            ctx->pc = 0x1F5820u;
            goto label_1f5820;
        }
    }
    ctx->pc = 0x1F5814u;
    // 0x1f5814: 0x0  nop
    ctx->pc = 0x1f5814u;
    // NOP
    // 0x1f5818: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5818u;
    {
        const bool branch_taken_0x1f5818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5818) {
            ctx->pc = 0x1F581Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5818u;
            // 0x1f581c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5808;
        }
    }
    ctx->pc = 0x1F5820u;
label_1f5820:
    // 0x1f5820: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F5820u;
    SET_GPR_U32(ctx, 31, 0x1F5828u);
    ctx->pc = 0x1F5824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5820u;
    // 0x1f5824: 0x26312a58  addiu       $s1, $s1, 0x2A58 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F5820u, 0x1F5828u)) {
        return;
    }
    ctx->pc = 0x1F5828u;
label_1f5828:
    // 0x1f5828: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f582c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f582cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5830: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x1F5830u;
    SET_GPR_U32(ctx, 31, 0x1F5838u);
    ctx->pc = 0x1F5834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5830u;
    // 0x1f5834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326B90u, 0x1F5830u, 0x1F5838u)) {
        return;
    }
    ctx->pc = 0x1F5838u;
label_1f5838:
    // 0x1f5838: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f583c: 0x26852a38  addiu       $a1, $s4, 0x2A38
    ctx->pc = 0x1f583cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 10808));
    // 0x1f5840: 0x26a62a20  addiu       $a2, $s5, 0x2A20
    ctx->pc = 0x1f5840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 10784));
    // 0x1f5844: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F5844u;
    SET_GPR_U32(ctx, 31, 0x1F584Cu);
    ctx->pc = 0x1F5848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5844u;
    // 0x1f5848: 0x27c72a80  addiu       $a3, $fp, 0x2A80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 10880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F5844u, 0x1F584Cu)) {
        return;
    }
    ctx->pc = 0x1F584Cu;
label_1f584c:
    // 0x1f584c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f584cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5850: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F5850u;
    SET_GPR_U32(ctx, 31, 0x1F5858u);
    ctx->pc = 0x1F5854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5850u;
    // 0x1f5854: 0x26652a40  addiu       $a1, $s3, 0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 10816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F5850u, 0x1F5858u)) {
        return;
    }
    ctx->pc = 0x1F5858u;
label_1f5858:
    // 0x1f5858: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1f5858u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f585c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F585Cu;
    {
        const bool branch_taken_0x1f585c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F585Cu;
        // 0x1f5860: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f585c) {
            ctx->pc = 0x1F5890u;
            goto label_1f5890;
        }
    }
    ctx->pc = 0x1F5864u;
    // 0x1f5864: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1f5864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1f5868: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5868u;
    {
        const bool branch_taken_0x1f5868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5868u;
        // 0x1f586c: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5868) {
            ctx->pc = 0x1F5890u;
            goto label_1f5890;
        }
    }
    ctx->pc = 0x1F5870u;
    // 0x1f5870: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f5874: 0x0  nop
    ctx->pc = 0x1f5874u;
    // NOP
label_1f5878:
    // 0x1f5878: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f5878u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f587c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F587Cu;
    {
        const bool branch_taken_0x1f587c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f587c) {
            ctx->pc = 0x1F5890u;
            goto label_1f5890;
        }
    }
    ctx->pc = 0x1F5884u;
    // 0x1f5884: 0x0  nop
    ctx->pc = 0x1f5884u;
    // NOP
    // 0x1f5888: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5888u;
    {
        const bool branch_taken_0x1f5888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5888) {
            ctx->pc = 0x1F588Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5888u;
            // 0x1f588c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5878;
        }
    }
    ctx->pc = 0x1F5890u;
label_1f5890:
    // 0x1f5890: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F5890u;
    SET_GPR_U32(ctx, 31, 0x1F5898u);
    ctx->pc = 0x1F5894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5890u;
    // 0x1f5894: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F5890u, 0x1F5898u)) {
        return;
    }
    ctx->pc = 0x1F5898u;
label_1f5898:
    // 0x1f5898: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f5898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f589c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f589cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f58a0: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x1F58A0u;
    SET_GPR_U32(ctx, 31, 0x1F58A8u);
    ctx->pc = 0x1F58A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58A0u;
    // 0x1f58a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326B90u, 0x1F58A0u, 0x1F58A8u)) {
        return;
    }
    ctx->pc = 0x1F58A8u;
label_1f58a8:
    // 0x1f58a8: 0xc0be012  jal         func_2F8048
    ctx->pc = 0x1F58A8u;
    SET_GPR_U32(ctx, 31, 0x1F58B0u);
    ctx->pc = 0x2F8048u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8048u, 0x1F58A8u, 0x1F58B0u)) {
        return;
    }
    ctx->pc = 0x1F58B0u;
label_1f58b0:
    // 0x1f58b0: 0x0  nop
    ctx->pc = 0x1f58b0u;
    // NOP
    // 0x1f58b4: 0x0  nop
    ctx->pc = 0x1f58b4u;
    // NOP
    // 0x1f58b8: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F58B8u;
    {
        const bool branch_taken_0x1f58b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1F58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58B8u;
        // 0x1f58bc: 0x7bb10480  lq          $s1, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f58b8) {
            ctx->pc = 0x1F58A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f58a8;
        }
    }
    ctx->pc = 0x1F58C0u;
    // 0x1f58c0: 0x7bb00490  lq          $s0, 0x490($sp)
    ctx->pc = 0x1f58c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1f58c4: 0x7bb20470  lq          $s2, 0x470($sp)
    ctx->pc = 0x1f58c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1f58c8: 0x7bb30460  lq          $s3, 0x460($sp)
    ctx->pc = 0x1f58c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1f58cc: 0x7bb40450  lq          $s4, 0x450($sp)
    ctx->pc = 0x1f58ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1f58d0: 0x7bb50440  lq          $s5, 0x440($sp)
    ctx->pc = 0x1f58d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1f58d4: 0x7bb60430  lq          $s6, 0x430($sp)
    ctx->pc = 0x1f58d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1f58d8: 0x7bb70420  lq          $s7, 0x420($sp)
    ctx->pc = 0x1f58d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1f58dc: 0x7bbe0410  lq          $fp, 0x410($sp)
    ctx->pc = 0x1f58dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1f58e0: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x1f58e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1f58e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F58E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58E4u;
        // 0x1f58e8: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F58E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F58ECu;
    // 0x1f58ec: 0x0  nop
    ctx->pc = 0x1f58ecu;
    // NOP
    ctx->pc = 0x1f58f0u;
}
