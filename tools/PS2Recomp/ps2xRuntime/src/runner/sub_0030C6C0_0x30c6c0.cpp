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

// Function: sub_0030C6C0
// Address: 0x30c6c0 - 0x30c888
void sub_0030C6C0_0x30c6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C6C0_0x30c6c0");
#endif

    switch (ctx->pc) {
        case 0x30c6ecu: goto label_30c6ec;
        case 0x30c71cu: goto label_30c71c;
        case 0x30c748u: goto label_30c748;
        case 0x30c788u: goto label_30c788;
        case 0x30c7b4u: goto label_30c7b4;
        case 0x30c7f4u: goto label_30c7f4;
        case 0x30c820u: goto label_30c820;
        default: break;
    }

    ctx->pc = 0x30c6c0u;

    // 0x30c6c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30c6c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30c6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30c6c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30c6cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30c6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30c6d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30c6d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30c6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30c6dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c6e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c6e4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C6E4u;
    SET_GPR_U32(ctx, 31, 0x30C6ECu);
    ctx->pc = 0x30C6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C6E4u;
    // 0x30c6e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C6E4u, 0x30C6ECu)) {
        return;
    }
    ctx->pc = 0x30C6ECu;
label_30c6ec:
    // 0x30c6ec: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x30C6ECu;
    {
        const bool branch_taken_0x30c6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C6ECu;
        // 0x30c6f0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c6ec) {
            ctx->pc = 0x30C850u;
            goto label_30c850;
        }
    }
    ctx->pc = 0x30C6F4u;
    // 0x30c6f4: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x30c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x30c6f8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c6fc: 0x14430054  bne         $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x30C6FCu;
    {
        const bool branch_taken_0x30c6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C6FCu;
        // 0x30c700: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c6fc) {
            ctx->pc = 0x30C850u;
            goto label_30c850;
        }
    }
    ctx->pc = 0x30C704u;
    // 0x30c704: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x30C704u;
    {
        const bool branch_taken_0x30c704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C704u;
        // 0x30c708: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c704) {
            ctx->pc = 0x30C850u;
            goto label_30c850;
        }
    }
    ctx->pc = 0x30C70Cu;
    // 0x30c70c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c710: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c714: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C714u;
    SET_GPR_U32(ctx, 31, 0x30C71Cu);
    ctx->pc = 0x30C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C714u;
    // 0x30c718: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C714u, 0x30C71Cu)) {
        return;
    }
    ctx->pc = 0x30C71Cu;
label_30c71c:
    // 0x30c71c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30C71Cu;
    {
        const bool branch_taken_0x30c71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C71Cu;
        // 0x30c720: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c71c) {
            ctx->pc = 0x30C750u;
            goto label_30c750;
        }
    }
    ctx->pc = 0x30C724u;
    // 0x30c724: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30c724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c728: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c72c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30C72Cu;
    {
        const bool branch_taken_0x30c72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C72Cu;
        // 0x30c730: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c72c) {
            ctx->pc = 0x30C750u;
            goto label_30c750;
        }
    }
    ctx->pc = 0x30C734u;
    // 0x30c734: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C734u;
    {
        const bool branch_taken_0x30c734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C734u;
        // 0x30c738: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c734) {
            ctx->pc = 0x30C750u;
            goto label_30c750;
        }
    }
    ctx->pc = 0x30C73Cu;
    // 0x30c73c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c740: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C740u;
    SET_GPR_U32(ctx, 31, 0x30C748u);
    ctx->pc = 0x30C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C740u;
    // 0x30c744: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C740u, 0x30C748u)) {
        return;
    }
    ctx->pc = 0x30C748u;
label_30c748:
    // 0x30c748: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C748u;
    {
        const bool branch_taken_0x30c748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c748) {
            ctx->pc = 0x30C758u;
            goto label_30c758;
        }
    }
    ctx->pc = 0x30C750u;
label_30c750:
    // 0x30c750: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C750u;
    {
        const bool branch_taken_0x30c750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C750u;
        // 0x30c754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c750) {
            ctx->pc = 0x30C770u;
            goto label_30c770;
        }
    }
    ctx->pc = 0x30C758u;
label_30c758:
    // 0x30c758: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C758u;
    {
        const bool branch_taken_0x30c758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C758u;
        // 0x30c75c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c758) {
            ctx->pc = 0x30C770u;
            goto label_30c770;
        }
    }
    ctx->pc = 0x30C760u;
    // 0x30c760: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c764: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c768: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c76c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c770:
    // 0x30c770: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x30C770u;
    {
        const bool branch_taken_0x30c770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C770u;
        // 0x30c774: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c770) {
            ctx->pc = 0x30C850u;
            goto label_30c850;
        }
    }
    ctx->pc = 0x30C778u;
    // 0x30c778: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c77c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c780: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C780u;
    SET_GPR_U32(ctx, 31, 0x30C788u);
    ctx->pc = 0x30C784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C780u;
    // 0x30c784: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C780u, 0x30C788u)) {
        return;
    }
    ctx->pc = 0x30C788u;
label_30c788:
    // 0x30c788: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C788u;
    {
        const bool branch_taken_0x30c788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C788u;
        // 0x30c78c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c788) {
            ctx->pc = 0x30C7C0u;
            goto label_30c7c0;
        }
    }
    ctx->pc = 0x30C790u;
    // 0x30c790: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c794: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c798: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C798u;
    {
        const bool branch_taken_0x30c798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C798u;
        // 0x30c79c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c798) {
            ctx->pc = 0x30C7C0u;
            goto label_30c7c0;
        }
    }
    ctx->pc = 0x30C7A0u;
    // 0x30c7a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C7A0u;
    {
        const bool branch_taken_0x30c7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7A0u;
        // 0x30c7a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7a0) {
            ctx->pc = 0x30C7C0u;
            goto label_30c7c0;
        }
    }
    ctx->pc = 0x30C7A8u;
    // 0x30c7a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c7ac: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C7ACu;
    SET_GPR_U32(ctx, 31, 0x30C7B4u);
    ctx->pc = 0x30C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7ACu;
    // 0x30c7b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C7ACu, 0x30C7B4u)) {
        return;
    }
    ctx->pc = 0x30C7B4u;
label_30c7b4:
    // 0x30c7b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C7B4u;
    {
        const bool branch_taken_0x30c7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c7b4) {
            ctx->pc = 0x30C7C8u;
            goto label_30c7c8;
        }
    }
    ctx->pc = 0x30C7BCu;
    // 0x30c7bc: 0x0  nop
    ctx->pc = 0x30c7bcu;
    // NOP
label_30c7c0:
    // 0x30c7c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C7C0u;
    {
        const bool branch_taken_0x30c7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7C0u;
        // 0x30c7c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7c0) {
            ctx->pc = 0x30C7E0u;
            goto label_30c7e0;
        }
    }
    ctx->pc = 0x30C7C8u;
label_30c7c8:
    // 0x30c7c8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C7C8u;
    {
        const bool branch_taken_0x30c7c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7C8u;
        // 0x30c7cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7c8) {
            ctx->pc = 0x30C7E0u;
            goto label_30c7e0;
        }
    }
    ctx->pc = 0x30C7D0u;
    // 0x30c7d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c7d4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c7d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c7dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c7e0:
    // 0x30c7e0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x30C7E0u;
    {
        const bool branch_taken_0x30c7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7E0u;
        // 0x30c7e4: 0x37a5000c  ori         $a1, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7e0) {
            ctx->pc = 0x30C850u;
            goto label_30c850;
        }
    }
    ctx->pc = 0x30C7E8u;
    // 0x30c7e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c7ec: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C7ECu;
    SET_GPR_U32(ctx, 31, 0x30C7F4u);
    ctx->pc = 0x30C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7ECu;
    // 0x30c7f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C7ECu, 0x30C7F4u)) {
        return;
    }
    ctx->pc = 0x30C7F4u;
label_30c7f4:
    // 0x30c7f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30C7F4u;
    {
        const bool branch_taken_0x30c7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7F4u;
        // 0x30c7f8: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7f4) {
            ctx->pc = 0x30C828u;
            goto label_30c828;
        }
    }
    ctx->pc = 0x30C7FCu;
    // 0x30c7fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30c7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c800: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c804: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30C804u;
    {
        const bool branch_taken_0x30c804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C804u;
        // 0x30c808: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c804) {
            ctx->pc = 0x30C828u;
            goto label_30c828;
        }
    }
    ctx->pc = 0x30C80Cu;
    // 0x30c80c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C80Cu;
    {
        const bool branch_taken_0x30c80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C80Cu;
        // 0x30c810: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c80c) {
            ctx->pc = 0x30C828u;
            goto label_30c828;
        }
    }
    ctx->pc = 0x30C814u;
    // 0x30c814: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c818: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C818u;
    SET_GPR_U32(ctx, 31, 0x30C820u);
    ctx->pc = 0x30C81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C818u;
    // 0x30c81c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C818u, 0x30C820u)) {
        return;
    }
    ctx->pc = 0x30C820u;
label_30c820:
    // 0x30c820: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C820u;
    {
        const bool branch_taken_0x30c820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c820) {
            ctx->pc = 0x30C830u;
            goto label_30c830;
        }
    }
    ctx->pc = 0x30C828u;
label_30c828:
    // 0x30c828: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C828u;
    {
        const bool branch_taken_0x30c828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C828u;
        // 0x30c82c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c828) {
            ctx->pc = 0x30C848u;
            goto label_30c848;
        }
    }
    ctx->pc = 0x30C830u;
label_30c830:
    // 0x30c830: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C830u;
    {
        const bool branch_taken_0x30c830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C830u;
        // 0x30c834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c830) {
            ctx->pc = 0x30C848u;
            goto label_30c848;
        }
    }
    ctx->pc = 0x30C838u;
    // 0x30c838: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c83c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c840: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c848:
    // 0x30c848: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C848u;
    {
        const bool branch_taken_0x30c848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c848) {
            ctx->pc = 0x30C858u;
            goto label_30c858;
        }
    }
    ctx->pc = 0x30C850u;
label_30c850:
    // 0x30c850: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C850u;
    {
        const bool branch_taken_0x30c850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C850u;
        // 0x30c854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c850) {
            ctx->pc = 0x30C870u;
            goto label_30c870;
        }
    }
    ctx->pc = 0x30C858u;
label_30c858:
    // 0x30c858: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C858u;
    {
        const bool branch_taken_0x30c858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C858u;
        // 0x30c85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c858) {
            ctx->pc = 0x30C870u;
            goto label_30c870;
        }
    }
    ctx->pc = 0x30C860u;
    // 0x30c860: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c864: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30c864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30c868: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c870:
    // 0x30c870: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30c870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c874: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30c874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c878: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30c878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c87c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30c87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c880: 0x3e00008  jr          $ra
    ctx->pc = 0x30C880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C880u;
        // 0x30c884: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C888u;
}
