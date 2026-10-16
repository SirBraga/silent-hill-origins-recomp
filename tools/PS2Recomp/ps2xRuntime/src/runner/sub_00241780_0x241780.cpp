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

// Function: sub_00241780
// Address: 0x241780 - 0x2419d0
void sub_00241780_0x241780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241780_0x241780");
#endif

    switch (ctx->pc) {
        case 0x241814u: goto label_241814;
        case 0x241820u: goto label_241820;
        case 0x241838u: goto label_241838;
        case 0x241904u: goto label_241904;
        case 0x241910u: goto label_241910;
        case 0x241924u: goto label_241924;
        case 0x241954u: goto label_241954;
        case 0x241960u: goto label_241960;
        case 0x241974u: goto label_241974;
        case 0x2419a4u: goto label_2419a4;
        default: break;
    }

    ctx->pc = 0x241780u;

    // 0x241780: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x241780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x241784: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x241784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x241788: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x241788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x24178c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x24178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x241790: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x241790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241794: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x241794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x241798: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x241798u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24179c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x24179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2417a0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2417a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2417a4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2417a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2417a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2417a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2417ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2417acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2417b0: 0x92820023  lbu         $v0, 0x23($s4)
    ctx->pc = 0x2417b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 35)));
    // 0x2417b4: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2417b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2417b8: 0x30440060  andi        $a0, $v0, 0x60
    ctx->pc = 0x2417b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x2417bc: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x2417bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2417c0: 0x10860040  beq         $a0, $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x2417C0u;
    {
        const bool branch_taken_0x2417c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2417C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417C0u;
        // 0x2417c4: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417c0) {
            ctx->pc = 0x2418C4u;
            goto label_2418c4;
        }
    }
    ctx->pc = 0x2417C8u;
    // 0x2417c8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2417c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2417cc: 0x54820076  bnel        $a0, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2417CCu;
    {
        const bool branch_taken_0x2417cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2417cc) {
            ctx->pc = 0x2417D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2417CCu;
            // 0x2417d0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2419A8u;
            goto label_2419a8;
        }
    }
    ctx->pc = 0x2417D4u;
    // 0x2417d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2417d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2417d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2417d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2417dc: 0x1062006e  beq         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2417DCu;
    {
        const bool branch_taken_0x2417dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2417E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417DCu;
        // 0x2417e0: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417dc) {
            ctx->pc = 0x241998u;
            goto label_241998;
        }
    }
    ctx->pc = 0x2417E4u;
    // 0x2417e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2417E4u;
    {
        const bool branch_taken_0x2417e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417E4u;
        // 0x2417e8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417e4) {
            ctx->pc = 0x2417FCu;
            goto label_2417fc;
        }
    }
    ctx->pc = 0x2417ECu;
    // 0x2417ec: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2417ECu;
    {
        const bool branch_taken_0x2417ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2417F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417ECu;
        // 0x2417f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417ec) {
            ctx->pc = 0x24180Cu;
            goto label_24180c;
        }
    }
    ctx->pc = 0x2417F4u;
    // 0x2417f4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2417F4u;
    {
        const bool branch_taken_0x2417f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417F4u;
        // 0x2417f8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417f4) {
            ctx->pc = 0x2419A8u;
            goto label_2419a8;
        }
    }
    ctx->pc = 0x2417FCu;
label_2417fc:
    // 0x2417fc: 0x10660066  beq         $v1, $a2, . + 4 + (0x66 << 2)
    ctx->pc = 0x2417FCu;
    {
        const bool branch_taken_0x2417fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x241800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417FCu;
        // 0x241800: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417fc) {
            ctx->pc = 0x241998u;
            goto label_241998;
        }
    }
    ctx->pc = 0x241804u;
    // 0x241804: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x241804u;
    {
        const bool branch_taken_0x241804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241804u;
        // 0x241808: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241804) {
            ctx->pc = 0x2419ACu;
            goto label_2419ac;
        }
    }
    ctx->pc = 0x24180Cu;
label_24180c:
    // 0x24180c: 0xc090512  jal         func_241448
    ctx->pc = 0x24180Cu;
    SET_GPR_U32(ctx, 31, 0x241814u);
    ctx->pc = 0x241810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24180Cu;
    // 0x241810: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x241448u, 0x24180Cu, 0x241814u)) {
        return;
    }
    ctx->pc = 0x241814u;
label_241814:
    // 0x241814: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x241814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x241818: 0x18400064  blez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x241818u;
    {
        const bool branch_taken_0x241818 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241818u;
        // 0x24181c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241818) {
            ctx->pc = 0x2419ACu;
            goto label_2419ac;
        }
    }
    ctx->pc = 0x241820u;
label_241820:
    // 0x241820: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x241820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x241824: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x241824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241828: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24182c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24182cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241830: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x241830u;
    {
        const bool branch_taken_0x241830 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x241834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241830u;
        // 0x241834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241830) {
            ctx->pc = 0x24189Cu;
            goto label_24189c;
        }
    }
    ctx->pc = 0x241838u;
label_241838:
    // 0x241838: 0x8682001c  lh          $v0, 0x1C($s4)
    ctx->pc = 0x241838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x24183c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x241840: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x241844: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x241844u;
    {
        const bool branch_taken_0x241844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241844u;
        // 0x241848: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241844) {
            ctx->pc = 0x241870u;
            goto label_241870;
        }
    }
    ctx->pc = 0x24184Cu;
    // 0x24184c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x24184cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x241850: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x241850u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x241854: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x241854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x241858: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x241858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24185c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24185cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x241860: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x241860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x241864: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x241864u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x241868: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x241868u;
    {
        const bool branch_taken_0x241868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241868u;
        // 0x24186c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241868) {
            ctx->pc = 0x241888u;
            goto label_241888;
        }
    }
    ctx->pc = 0x241870u;
label_241870:
    // 0x241870: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x241870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x241874: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x241874u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x241878: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x241878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24187c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x24187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x241880: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x241880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x241884: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x241884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_241888:
    // 0x241888: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x241888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24188c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24188cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x241890: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x241890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241894: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x241894u;
    {
        const bool branch_taken_0x241894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241894u;
        // 0x241898: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241894) {
            ctx->pc = 0x241838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241838;
        }
    }
    ctx->pc = 0x24189Cu;
label_24189c:
    // 0x24189c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x24189cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2418a0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2418a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2418a4: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2418a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2418a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2418a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2418ac: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x2418acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2418b0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2418b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2418b4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2418B4u;
    {
        const bool branch_taken_0x2418b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2418B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418B4u;
        // 0x2418b8: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418b4) {
            ctx->pc = 0x241820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241820;
        }
    }
    ctx->pc = 0x2418BCu;
    // 0x2418bc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2418BCu;
    {
        const bool branch_taken_0x2418bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2418C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418BCu;
        // 0x2418c0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418bc) {
            ctx->pc = 0x2419ACu;
            goto label_2419ac;
        }
    }
    ctx->pc = 0x2418C4u;
label_2418c4:
    // 0x2418c4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2418c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2418c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2418c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2418cc: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2418CCu;
    {
        const bool branch_taken_0x2418cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2418D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418CCu;
        // 0x2418d0: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418cc) {
            ctx->pc = 0x241948u;
            goto label_241948;
        }
    }
    ctx->pc = 0x2418D4u;
    // 0x2418d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2418D4u;
    {
        const bool branch_taken_0x2418d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2418D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418D4u;
        // 0x2418d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418d4) {
            ctx->pc = 0x2418ECu;
            goto label_2418ec;
        }
    }
    ctx->pc = 0x2418DCu;
    // 0x2418dc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2418DCu;
    {
        const bool branch_taken_0x2418dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2418E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418DCu;
        // 0x2418e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418dc) {
            ctx->pc = 0x2418FCu;
            goto label_2418fc;
        }
    }
    ctx->pc = 0x2418E4u;
    // 0x2418e4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2418E4u;
    {
        const bool branch_taken_0x2418e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2418E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418E4u;
        // 0x2418e8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418e4) {
            ctx->pc = 0x2419A8u;
            goto label_2419a8;
        }
    }
    ctx->pc = 0x2418ECu;
label_2418ec:
    // 0x2418ec: 0x1064002a  beq         $v1, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2418ECu;
    {
        const bool branch_taken_0x2418ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2418F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418ECu;
        // 0x2418f0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418ec) {
            ctx->pc = 0x241998u;
            goto label_241998;
        }
    }
    ctx->pc = 0x2418F4u;
    // 0x2418f4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2418F4u;
    {
        const bool branch_taken_0x2418f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2418F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418F4u;
        // 0x2418f8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418f4) {
            ctx->pc = 0x2419ACu;
            goto label_2419ac;
        }
    }
    ctx->pc = 0x2418FCu;
label_2418fc:
    // 0x2418fc: 0xc090512  jal         func_241448
    ctx->pc = 0x2418FCu;
    SET_GPR_U32(ctx, 31, 0x241904u);
    ctx->pc = 0x241900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2418FCu;
    // 0x241900: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x241448u, 0x2418FCu, 0x241904u)) {
        return;
    }
    ctx->pc = 0x241904u;
label_241904:
    // 0x241904: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x241904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x241908: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x241908u;
    {
        const bool branch_taken_0x241908 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241908u;
        // 0x24190c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241908) {
            ctx->pc = 0x2419ACu;
            goto label_2419ac;
        }
    }
    ctx->pc = 0x241910u;
label_241910:
    // 0x241910: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x241910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x241914: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241918: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x241918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24191c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x24191Cu;
    SET_GPR_U32(ctx, 31, 0x241924u);
    ctx->pc = 0x241920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24191Cu;
    // 0x241920: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x24191Cu, 0x241924u)) {
        return;
    }
    ctx->pc = 0x241924u;
label_241924:
    // 0x241924: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x241924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x241928: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x241928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x24192c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x24192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x241930: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x241930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x241934: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x241934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241938: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x241938u;
    {
        const bool branch_taken_0x241938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241938u;
        // 0x24193c: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241938) {
            ctx->pc = 0x241910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241910;
        }
    }
    ctx->pc = 0x241940u;
    // 0x241940: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x241940u;
    {
        const bool branch_taken_0x241940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241940u;
        // 0x241944: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241940) {
            ctx->pc = 0x2419ACu;
            goto label_2419ac;
        }
    }
    ctx->pc = 0x241948u;
label_241948:
    // 0x241948: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x241948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24194c: 0xc090512  jal         func_241448
    ctx->pc = 0x24194Cu;
    SET_GPR_U32(ctx, 31, 0x241954u);
    ctx->pc = 0x241950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24194Cu;
    // 0x241950: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x241448u, 0x24194Cu, 0x241954u)) {
        return;
    }
    ctx->pc = 0x241954u;
label_241954:
    // 0x241954: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x241954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x241958: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x241958u;
    {
        const bool branch_taken_0x241958 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241958u;
        // 0x24195c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241958) {
            ctx->pc = 0x2419ACu;
            goto label_2419ac;
        }
    }
    ctx->pc = 0x241960u;
label_241960:
    // 0x241960: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x241960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x241964: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241968: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x241968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24196c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x24196Cu;
    SET_GPR_U32(ctx, 31, 0x241974u);
    ctx->pc = 0x241970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24196Cu;
    // 0x241970: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x24196Cu, 0x241974u)) {
        return;
    }
    ctx->pc = 0x241974u;
label_241974:
    // 0x241974: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x241974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x241978: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x241978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x24197c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x24197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x241980: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x241980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x241984: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x241984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241988: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x241988u;
    {
        const bool branch_taken_0x241988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241988u;
        // 0x24198c: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241988) {
            ctx->pc = 0x241960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241960;
        }
    }
    ctx->pc = 0x241990u;
    // 0x241990: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x241990u;
    {
        const bool branch_taken_0x241990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241990u;
        // 0x241994: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241990) {
            ctx->pc = 0x2419ACu;
            goto label_2419ac;
        }
    }
    ctx->pc = 0x241998u;
label_241998:
    // 0x241998: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x241998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24199c: 0xc0905a8  jal         func_2416A0
    ctx->pc = 0x24199Cu;
    SET_GPR_U32(ctx, 31, 0x2419A4u);
    ctx->pc = 0x2419A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24199Cu;
    // 0x2419a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2416A0u, 0x24199Cu, 0x2419A4u)) {
        return;
    }
    ctx->pc = 0x2419A4u;
label_2419a4:
    // 0x2419a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2419a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2419a8:
    // 0x2419a8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2419a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2419ac:
    // 0x2419ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2419acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2419b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2419b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2419b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2419b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2419b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2419b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2419bc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2419bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2419c0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2419c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2419c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2419c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2419c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2419C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2419CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419C8u;
        // 0x2419cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2419C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2419D0u;
}
