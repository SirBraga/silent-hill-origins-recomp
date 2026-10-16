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

// Function: sub_0026C708
// Address: 0x26c708 - 0x26c850
void sub_0026C708_0x26c708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C708_0x26c708");
#endif

    switch (ctx->pc) {
        case 0x26c730u: goto label_26c730;
        case 0x26c74cu: goto label_26c74c;
        case 0x26c764u: goto label_26c764;
        case 0x26c7a8u: goto label_26c7a8;
        case 0x26c7b8u: goto label_26c7b8;
        case 0x26c7d8u: goto label_26c7d8;
        case 0x26c7f8u: goto label_26c7f8;
        case 0x26c808u: goto label_26c808;
        case 0x26c824u: goto label_26c824;
        default: break;
    }

    ctx->pc = 0x26c708u;

    // 0x26c708: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26c70c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x26c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26c710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26c710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c714: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x26c714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x26c718: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x26c718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x26c71c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x26c71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x26c720: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x26c720u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x26c724: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x26c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x26c728: 0xc09b578  jal         func_26D5E0
    ctx->pc = 0x26C728u;
    SET_GPR_U32(ctx, 31, 0x26C730u);
    ctx->pc = 0x26C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C728u;
    // 0x26c72c: 0xffb40070  sd          $s4, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D5E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D5E0u, 0x26C728u, 0x26C730u)) {
        return;
    }
    ctx->pc = 0x26C730u;
label_26c730:
    // 0x26c730: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26c730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c734: 0x8e71cb58  lw          $s1, -0x34A8($s3)
    ctx->pc = 0x26c734u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953816)));
    // 0x26c738: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26c738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c73c: 0x1222003c  beq         $s1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x26C73Cu;
    {
        const bool branch_taken_0x26c73c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C73Cu;
        // 0x26c740: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c73c) {
            ctx->pc = 0x26C830u;
            goto label_26c830;
        }
    }
    ctx->pc = 0x26C744u;
    // 0x26c744: 0xc09ca24  jal         func_272890
    ctx->pc = 0x26C744u;
    SET_GPR_U32(ctx, 31, 0x26C74Cu);
    ctx->pc = 0x26C748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C744u;
    // 0x26c748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272890u, 0x26C744u, 0x26C74Cu)) {
        return;
    }
    ctx->pc = 0x26C74Cu;
label_26c74c:
    // 0x26c74c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x26C74Cu;
    {
        const bool branch_taken_0x26c74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C74Cu;
        // 0x26c750: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c74c) {
            ctx->pc = 0x26C830u;
            goto label_26c830;
        }
    }
    ctx->pc = 0x26C754u;
    // 0x26c754: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26c754u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c75c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26C75Cu;
    SET_GPR_U32(ctx, 31, 0x26C764u);
    ctx->pc = 0x26C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C75Cu;
    // 0x26c760: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26C75Cu, 0x26C764u)) {
        return;
    }
    ctx->pc = 0x26C764u;
label_26c764:
    // 0x26c764: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x26C764u;
    {
        const bool branch_taken_0x26c764 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x26C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C764u;
        // 0x26c768: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c764) {
            ctx->pc = 0x26C830u;
            goto label_26c830;
        }
    }
    ctx->pc = 0x26C76Cu;
    // 0x26c76c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26c770: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x26c770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x26c774: 0x2442bb20  addiu       $v0, $v0, -0x44E0
    ctx->pc = 0x26c774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949664));
    // 0x26c778: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x26c778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x26c77c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26c780: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C780u;
    {
        const bool branch_taken_0x26c780 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C780u;
        // 0x26c784: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c780) {
            ctx->pc = 0x26C798u;
            goto label_26c798;
        }
    }
    ctx->pc = 0x26C788u;
    // 0x26c788: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26c788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26c78c: 0xdc22bb28  ld          $v0, -0x44D8($at)
    ctx->pc = 0x26c78cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6ABB28u));
    // 0x26c790: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26C790u;
    {
        const bool branch_taken_0x26c790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C790u;
        // 0x26c794: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c790) {
            ctx->pc = 0x26C7ACu;
            goto label_26c7ac;
        }
    }
    ctx->pc = 0x26C798u;
label_26c798:
    // 0x26c798: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26c798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26c79c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7a0: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26C7A0u;
    SET_GPR_U32(ctx, 31, 0x26C7A8u);
    ctx->pc = 0x26C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C7A0u;
    // 0x26c7a4: 0xdc45cb50  ld          $a1, -0x34B0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294953808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26C7A0u, 0x26C7A8u)) {
        return;
    }
    ctx->pc = 0x26C7A8u;
label_26c7a8:
    // 0x26c7a8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x26c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_26c7ac:
    // 0x26c7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7b0: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26C7B0u;
    SET_GPR_U32(ctx, 31, 0x26C7B8u);
    ctx->pc = 0x26C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C7B0u;
    // 0x26c7b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26C7B0u, 0x26C7B8u)) {
        return;
    }
    ctx->pc = 0x26C7B8u;
label_26c7b8:
    // 0x26c7b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C7B8u;
    {
        const bool branch_taken_0x26c7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7B8u;
        // 0x26c7bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7b8) {
            ctx->pc = 0x26C7E0u;
            goto label_26c7e0;
        }
    }
    ctx->pc = 0x26C7C0u;
    // 0x26c7c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c7c4: 0x8e63cb58  lw          $v1, -0x34A8($s3)
    ctx->pc = 0x26c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953816)));
    // 0x26c7c8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C7C8u;
    {
        const bool branch_taken_0x26c7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7C8u;
        // 0x26c7cc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7c8) {
            ctx->pc = 0x26C7F0u;
            goto label_26c7f0;
        }
    }
    ctx->pc = 0x26C7D0u;
    // 0x26c7d0: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26C7D0u;
    SET_GPR_U32(ctx, 31, 0x26C7D8u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26C7D0u, 0x26C7D8u)) {
        return;
    }
    ctx->pc = 0x26C7D8u;
label_26c7d8:
    // 0x26c7d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26C7D8u;
    {
        const bool branch_taken_0x26c7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7D8u;
        // 0x26c7dc: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7d8) {
            ctx->pc = 0x26C80Cu;
            goto label_26c80c;
        }
    }
    ctx->pc = 0x26C7E0u;
label_26c7e0:
    // 0x26c7e0: 0x8e62cb58  lw          $v0, -0x34A8($s3)
    ctx->pc = 0x26c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953816)));
    // 0x26c7e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c7e8: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C7E8u;
    {
        const bool branch_taken_0x26c7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x26C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7E8u;
        // 0x26c7ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7e8) {
            ctx->pc = 0x26C800u;
            goto label_26c800;
        }
    }
    ctx->pc = 0x26C7F0u;
label_26c7f0:
    // 0x26c7f0: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26C7F0u;
    SET_GPR_U32(ctx, 31, 0x26C7F8u);
    ctx->pc = 0x26C7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C7F0u;
    // 0x26c7f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26C7F0u, 0x26C7F8u)) {
        return;
    }
    ctx->pc = 0x26C7F8u;
label_26c7f8:
    // 0x26c7f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C7F8u;
    {
        const bool branch_taken_0x26c7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7F8u;
        // 0x26c7fc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7f8) {
            ctx->pc = 0x26C814u;
            goto label_26c814;
        }
    }
    ctx->pc = 0x26C800u;
label_26c800:
    // 0x26c800: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26C800u;
    SET_GPR_U32(ctx, 31, 0x26C808u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26C800u, 0x26C808u)) {
        return;
    }
    ctx->pc = 0x26C808u;
label_26c808:
    // 0x26c808: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x26c808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_26c80c:
    // 0x26c80c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26c810: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26c810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_26c814:
    // 0x26c814: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C814u;
    {
        const bool branch_taken_0x26c814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C814u;
        // 0x26c818: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c814) {
            ctx->pc = 0x26C830u;
            goto label_26c830;
        }
    }
    ctx->pc = 0x26C81Cu;
    // 0x26c81c: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26C81Cu;
    SET_GPR_U32(ctx, 31, 0x26C824u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26C81Cu, 0x26C824u)) {
        return;
    }
    ctx->pc = 0x26C824u;
label_26c824:
    // 0x26c824: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c828: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26c828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26c82c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x26c82cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_26c830:
    // 0x26c830: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26c830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26c834: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x26c834u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26c838: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x26c838u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26c83c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x26c83cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26c840: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x26c840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c844: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26c844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c848: 0x3e00008  jr          $ra
    ctx->pc = 0x26C848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C848u;
        // 0x26c84c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C850u;
}
