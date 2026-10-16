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

// Function: sub_001FD730
// Address: 0x1fd730 - 0x1fd888
void sub_001FD730_0x1fd730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD730_0x1fd730");
#endif

    switch (ctx->pc) {
        case 0x1fd750u: goto label_1fd750;
        case 0x1fd760u: goto label_1fd760;
        case 0x1fd768u: goto label_1fd768;
        case 0x1fd790u: goto label_1fd790;
        case 0x1fd7c8u: goto label_1fd7c8;
        case 0x1fd800u: goto label_1fd800;
        case 0x1fd818u: goto label_1fd818;
        case 0x1fd834u: goto label_1fd834;
        case 0x1fd864u: goto label_1fd864;
        default: break;
    }

    ctx->pc = 0x1fd730u;

    // 0x1fd730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fd730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fd734: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1fd734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1fd738: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1fd738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1fd73c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fd73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd740: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1fd740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1fd744: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fd744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fd748: 0xc07f2f2  jal         func_1FCBC8
    ctx->pc = 0x1FD748u;
    SET_GPR_U32(ctx, 31, 0x1FD750u);
    ctx->pc = 0x1FD74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD748u;
    // 0x1fd74c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FD748u, 0x1FD750u)) {
        return;
    }
    ctx->pc = 0x1FD750u;
label_1fd750:
    // 0x1fd750: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fd750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd754: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fd754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd758: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1FD758u;
    {
        const bool branch_taken_0x1fd758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD758u;
        // 0x1fd75c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd758) {
            ctx->pc = 0x1FD7F8u;
            goto label_1fd7f8;
        }
    }
    ctx->pc = 0x1FD760u;
label_1fd760:
    // 0x1fd760: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FD760u;
    SET_GPR_U32(ctx, 31, 0x1FD768u);
    ctx->pc = 0x1FD764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD760u;
    // 0x1fd764: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FD760u, 0x1FD768u)) {
        return;
    }
    ctx->pc = 0x1FD768u;
label_1fd768:
    // 0x1fd768: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fd768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd76c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1fd76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1fd770: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fd770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fd774: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FD774u;
    {
        const bool branch_taken_0x1fd774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD774u;
        // 0x1fd778: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd774) {
            ctx->pc = 0x1FD7B0u;
            goto label_1fd7b0;
        }
    }
    ctx->pc = 0x1FD77Cu;
    // 0x1fd77c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1fd77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1fd780: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1fd780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fd784: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FD784u;
    {
        const bool branch_taken_0x1fd784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD784u;
        // 0x1fd788: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd784) {
            ctx->pc = 0x1FD7F4u;
            goto label_1fd7f4;
        }
    }
    ctx->pc = 0x1FD78Cu;
    // 0x1fd78c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd790:
    // 0x1fd790: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fd790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fd794: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1fd794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1fd798: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fd798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd79c: 0x0  nop
    ctx->pc = 0x1fd79cu;
    // NOP
    // 0x1fd7a0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD7A0u;
    {
        const bool branch_taken_0x1fd7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd7a0) {
            ctx->pc = 0x1FD7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD7A0u;
            // 0x1fd7a4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd790;
        }
    }
    ctx->pc = 0x1FD7A8u;
    // 0x1fd7a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD7A8u;
    {
        const bool branch_taken_0x1fd7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7A8u;
        // 0x1fd7ac: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7a8) {
            ctx->pc = 0x1FD7F4u;
            goto label_1fd7f4;
        }
    }
    ctx->pc = 0x1FD7B0u;
label_1fd7b0:
    // 0x1fd7b0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1fd7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fd7b4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fd7b8: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD7B8u;
    {
        const bool branch_taken_0x1fd7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd7b8) {
            ctx->pc = 0x1FD7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD7B8u;
            // 0x1fd7bc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD7E4u;
            goto label_1fd7e4;
        }
    }
    ctx->pc = 0x1FD7C0u;
    // 0x1fd7c0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1fd7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1fd7c4: 0x0  nop
    ctx->pc = 0x1fd7c4u;
    // NOP
label_1fd7c8:
    // 0x1fd7c8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fd7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fd7cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fd7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd7d0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fd7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fd7d4: 0x0  nop
    ctx->pc = 0x1fd7d4u;
    // NOP
    // 0x1fd7d8: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD7D8u;
    {
        const bool branch_taken_0x1fd7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd7d8) {
            ctx->pc = 0x1FD7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD7D8u;
            // 0x1fd7dc: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd7c8;
        }
    }
    ctx->pc = 0x1FD7E0u;
    // 0x1fd7e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fd7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd7e4:
    // 0x1fd7e4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fd7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fd7e8: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD7E8u;
    {
        const bool branch_taken_0x1fd7e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1fd7e8) {
            ctx->pc = 0x1FD7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD7E8u;
            // 0x1fd7ec: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD7F0u;
            goto label_1fd7f0;
        }
    }
    ctx->pc = 0x1FD7F0u;
label_1fd7f0:
    // 0x1fd7f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fd7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd7f4:
    // 0x1fd7f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fd7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fd7f8:
    // 0x1fd7f8: 0xc07f2f2  jal         func_1FCBC8
    ctx->pc = 0x1FD7F8u;
    SET_GPR_U32(ctx, 31, 0x1FD800u);
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FD7F8u, 0x1FD800u)) {
        return;
    }
    ctx->pc = 0x1FD800u;
label_1fd800:
    // 0x1fd800: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fd800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd804: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fd804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd808: 0x1483ffd5  bne         $a0, $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1FD808u;
    {
        const bool branch_taken_0x1fd808 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD808u;
        // 0x1fd80c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd808) {
            ctx->pc = 0x1FD760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd760;
        }
    }
    ctx->pc = 0x1FD810u;
    // 0x1fd810: 0xc07f2f2  jal         func_1FCBC8
    ctx->pc = 0x1FD810u;
    SET_GPR_U32(ctx, 31, 0x1FD818u);
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FD810u, 0x1FD818u)) {
        return;
    }
    ctx->pc = 0x1FD818u;
label_1fd818:
    // 0x1fd818: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd81c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fd81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fd820: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD820u;
    {
        const bool branch_taken_0x1fd820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD820u;
        // 0x1fd824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd820) {
            ctx->pc = 0x1FD850u;
            goto label_1fd850;
        }
    }
    ctx->pc = 0x1FD828u;
    // 0x1fd828: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fd828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fd82c: 0xc07f88e  jal         func_1FE238
    ctx->pc = 0x1FD82Cu;
    SET_GPR_U32(ctx, 31, 0x1FD834u);
    ctx->pc = 0x1FD830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD82Cu;
    // 0x1fd830: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE238u, 0x1FD82Cu, 0x1FD834u)) {
        return;
    }
    ctx->pc = 0x1FD834u;
label_1fd834:
    // 0x1fd834: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fd834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fd838: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1fd838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
    // 0x1fd83c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fd83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fd840: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1fd840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1fd844: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fd844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fd848: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1fd848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
    // 0x1fd84c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1fd84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1fd850:
    // 0x1fd850: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1fd850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1fd854: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD854u;
    {
        const bool branch_taken_0x1fd854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD854u;
        // 0x1fd858: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd854) {
            ctx->pc = 0x1FD868u;
            goto label_1fd868;
        }
    }
    ctx->pc = 0x1FD85Cu;
    // 0x1fd85c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FD85Cu;
    SET_GPR_U32(ctx, 31, 0x1FD864u);
    ctx->pc = 0x1FD860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD85Cu;
    // 0x1fd860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FD85Cu, 0x1FD864u)) {
        return;
    }
    ctx->pc = 0x1FD864u;
label_1fd864:
    // 0x1fd864: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1fd864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fd868:
    // 0x1fd868: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1fd868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd86c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1fd86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd870: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fd870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd874: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD874u;
        // 0x1fd878: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD87Cu;
    // 0x1fd87c: 0x0  nop
    ctx->pc = 0x1fd87cu;
    // NOP
    // 0x1fd880: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1fd880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fd884: 0x0  nop
    ctx->pc = 0x1fd884u;
    // NOP
    ctx->pc = 0x1fd888u;
}
