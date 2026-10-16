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

// Function: sub_0013C758
// Address: 0x13c758 - 0x13c8b0
void sub_0013C758_0x13c758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C758_0x13c758");
#endif

    switch (ctx->pc) {
        case 0x13c7c4u: goto label_13c7c4;
        case 0x13c7ccu: goto label_13c7cc;
        case 0x13c7d8u: goto label_13c7d8;
        case 0x13c7e0u: goto label_13c7e0;
        case 0x13c7f0u: goto label_13c7f0;
        case 0x13c800u: goto label_13c800;
        case 0x13c810u: goto label_13c810;
        case 0x13c840u: goto label_13c840;
        case 0x13c86cu: goto label_13c86c;
        case 0x13c878u: goto label_13c878;
        case 0x13c884u: goto label_13c884;
        case 0x13c890u: goto label_13c890;
        default: break;
    }

    ctx->pc = 0x13c758u;

    // 0x13c758: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13c758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13c75c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13c760: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13c760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x13c764: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13c764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13c768: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c76c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13c76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13c770: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13c770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13c774: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13c774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13c778: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13c778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x13c77c: 0x2484f9f8  addiu       $a0, $a0, -0x608
    ctx->pc = 0x13c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965752));
    // 0x13c780: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x13c780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x13c784: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13c784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13c788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c78c: 0x2442f810  addiu       $v0, $v0, -0x7F0
    ctx->pc = 0x13c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965264));
    // 0x13c790: 0x2463f9b8  addiu       $v1, $v1, -0x648
    ctx->pc = 0x13c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965688));
    // 0x13c794: 0x24c6f930  addiu       $a2, $a2, -0x6D0
    ctx->pc = 0x13c794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965552));
    // 0x13c798: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x13c798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13c79c: 0x263200d8  addiu       $s2, $s1, 0xD8
    ctx->pc = 0x13c79cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    // 0x13c7a0: 0xae24003c  sw          $a0, 0x3C($s1)
    ctx->pc = 0x13c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
    // 0x13c7a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13c7a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7a8: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x13c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x13c7ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13c7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7b0: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x13c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x13c7b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7b8: 0xae260034  sw          $a2, 0x34($s1)
    ctx->pc = 0x13c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 6));
    // 0x13c7bc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13C7BCu;
    SET_GPR_U32(ctx, 31, 0x13C7C4u);
    ctx->pc = 0x13C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7BCu;
    // 0x13c7c0: 0x263300e0  addiu       $s3, $s1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13C7BCu, 0x13C7C4u)) {
        return;
    }
    ctx->pc = 0x13C7C4u;
label_13c7c4:
    // 0x13c7c4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13C7C4u;
    SET_GPR_U32(ctx, 31, 0x13C7CCu);
    ctx->pc = 0x13C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7C4u;
    // 0x13c7c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13C7C4u, 0x13C7CCu)) {
        return;
    }
    ctx->pc = 0x13C7CCu;
label_13c7cc:
    // 0x13c7cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13c7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7d0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13C7D0u;
    SET_GPR_U32(ctx, 31, 0x13C7D8u);
    ctx->pc = 0x13C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7D0u;
    // 0x13c7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13C7D0u, 0x13C7D8u)) {
        return;
    }
    ctx->pc = 0x13C7D8u;
label_13c7d8:
    // 0x13c7d8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13C7D8u;
    SET_GPR_U32(ctx, 31, 0x13C7E0u);
    ctx->pc = 0x13C7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7D8u;
    // 0x13c7dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13C7D8u, 0x13C7E0u)) {
        return;
    }
    ctx->pc = 0x13C7E0u;
label_13c7e0:
    // 0x13c7e0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13c7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13c7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7e8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13C7E8u;
    SET_GPR_U32(ctx, 31, 0x13C7F0u);
    ctx->pc = 0x13C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7E8u;
    // 0x13c7ec: 0x24a5f880  addiu       $a1, $a1, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13C7E8u, 0x13C7F0u)) {
        return;
    }
    ctx->pc = 0x13C7F0u;
label_13c7f0:
    // 0x13c7f0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x13c7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x13c7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7f8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13C7F8u;
    SET_GPR_U32(ctx, 31, 0x13C800u);
    ctx->pc = 0x13C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7F8u;
    // 0x13c7fc: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13C7F8u, 0x13C800u)) {
        return;
    }
    ctx->pc = 0x13C800u;
label_13c800:
    // 0x13c800: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13c800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13c804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c808: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13C808u;
    SET_GPR_U32(ctx, 31, 0x13C810u);
    ctx->pc = 0x13C80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C808u;
    // 0x13c80c: 0x24a5f888  addiu       $a1, $a1, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13C808u, 0x13C810u)) {
        return;
    }
    ctx->pc = 0x13C810u;
label_13c810:
    // 0x13c810: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x13c810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x13c814: 0x8c628420  lw          $v0, -0x7BE0($v1)
    ctx->pc = 0x13c814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338420u));
    // 0x13c818: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C818u;
    {
        const bool branch_taken_0x13c818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x13C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C818u;
        // 0x13c81c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c818) {
            ctx->pc = 0x13C830u;
            goto label_13c830;
        }
    }
    ctx->pc = 0x13C820u;
    // 0x13c820: 0x8e22018c  lw          $v0, 0x18C($s1)
    ctx->pc = 0x13c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x13c824: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x13c824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c828: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13C828u;
    {
        const bool branch_taken_0x13c828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C828u;
        // 0x13c82c: 0xac628420  sw          $v0, -0x7BE0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294935584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c828) {
            ctx->pc = 0x13C864u;
            goto label_13c864;
        }
    }
    ctx->pc = 0x13C830u;
label_13c830:
    // 0x13c830: 0x8c82018c  lw          $v0, 0x18C($a0)
    ctx->pc = 0x13c830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x13c834: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C834u;
    {
        const bool branch_taken_0x13c834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x13C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C834u;
        // 0x13c838: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c834) {
            ctx->pc = 0x13C85Cu;
            goto label_13c85c;
        }
    }
    ctx->pc = 0x13C83Cu;
    // 0x13c83c: 0x8c84018c  lw          $a0, 0x18C($a0)
    ctx->pc = 0x13c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 396)));
label_13c840:
    // 0x13c840: 0x8c82018c  lw          $v0, 0x18C($a0)
    ctx->pc = 0x13c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x13c844: 0x0  nop
    ctx->pc = 0x13c844u;
    // NOP
    // 0x13c848: 0x0  nop
    ctx->pc = 0x13c848u;
    // NOP
    // 0x13c84c: 0x0  nop
    ctx->pc = 0x13c84cu;
    // NOP
    // 0x13c850: 0x5451fffb  bnel        $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13C850u;
    {
        const bool branch_taken_0x13c850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x13c850) {
            ctx->pc = 0x13C854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C850u;
            // 0x13c854: 0x8c84018c  lw          $a0, 0x18C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 396)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c840;
        }
    }
    ctx->pc = 0x13C858u;
    // 0x13c858: 0x8c82018c  lw          $v0, 0x18C($a0)
    ctx->pc = 0x13c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 396)));
label_13c85c:
    // 0x13c85c: 0x8c43018c  lw          $v1, 0x18C($v0)
    ctx->pc = 0x13c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x13c860: 0xac83018c  sw          $v1, 0x18C($a0)
    ctx->pc = 0x13c860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 396), GPR_U32(ctx, 3));
label_13c864:
    // 0x13c864: 0xc04f54c  jal         func_13D530
    ctx->pc = 0x13C864u;
    SET_GPR_U32(ctx, 31, 0x13C86Cu);
    ctx->pc = 0x13C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C864u;
    // 0x13c868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13D530u, 0x13C864u, 0x13C86Cu)) {
        return;
    }
    ctx->pc = 0x13C86Cu;
label_13c86c:
    // 0x13c86c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c870: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13C870u;
    SET_GPR_U32(ctx, 31, 0x13C878u);
    ctx->pc = 0x13C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C870u;
    // 0x13c874: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13C870u, 0x13C878u)) {
        return;
    }
    ctx->pc = 0x13C878u;
label_13c878:
    // 0x13c878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13c878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c87c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13C87Cu;
    SET_GPR_U32(ctx, 31, 0x13C884u);
    ctx->pc = 0x13C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C87Cu;
    // 0x13c880: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13C87Cu, 0x13C884u)) {
        return;
    }
    ctx->pc = 0x13C884u;
label_13c884:
    // 0x13c884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c888: 0xc04ee16  jal         func_13B858
    ctx->pc = 0x13C888u;
    SET_GPR_U32(ctx, 31, 0x13C890u);
    ctx->pc = 0x13C88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C888u;
    // 0x13c88c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B858u, 0x13C888u, 0x13C890u)) {
        return;
    }
    ctx->pc = 0x13C890u;
label_13c890:
    // 0x13c890: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13c890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c894: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13c894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c898: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13c898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c89c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13c89cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c8a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x13c8a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c8a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x13C8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8A8u;
        // 0x13c8ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C8B0u;
}
