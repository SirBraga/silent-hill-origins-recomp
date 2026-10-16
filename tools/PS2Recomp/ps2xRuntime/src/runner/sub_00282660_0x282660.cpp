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

// Function: sub_00282660
// Address: 0x282660 - 0x282790
void sub_00282660_0x282660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282660_0x282660");
#endif

    switch (ctx->pc) {
        case 0x2826e0u: goto label_2826e0;
        case 0x2826f8u: goto label_2826f8;
        case 0x282710u: goto label_282710;
        case 0x282724u: goto label_282724;
        case 0x282740u: goto label_282740;
        case 0x282750u: goto label_282750;
        case 0x282768u: goto label_282768;
        default: break;
    }

    ctx->pc = 0x282660u;

    // 0x282660: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x282660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x282664: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x282664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x282668: 0x8c62e6e8  lw          $v0, -0x1918($v1)
    ctx->pc = 0x282668u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x67E6E8u));
    // 0x28266c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x28266cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282670: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x282670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x282674: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282678: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x282678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x28267c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28267cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x282680: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x282680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x282684: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x282684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282688: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x282688u;
    {
        const bool branch_taken_0x282688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282688u;
        // 0x28268c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282688) {
            ctx->pc = 0x282774u;
            goto label_282774;
        }
    }
    ctx->pc = 0x282690u;
    // 0x282690: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x282690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x282694: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x282694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x282698: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x282698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28269c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x28269Cu;
    {
        const bool branch_taken_0x28269c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2826A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28269Cu;
        // 0x2826a0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28269c) {
            ctx->pc = 0x282760u;
            goto label_282760;
        }
    }
    ctx->pc = 0x2826A4u;
    // 0x2826a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2826a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2826a8: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x2826a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x2826ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2826acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2826b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2826b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2826b4: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x2826b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2826b8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2826b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2826bc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2826bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2826c0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2826c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2826c4: 0x8cf20014  lw          $s2, 0x14($a3)
    ctx->pc = 0x2826c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2826c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2826c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2826cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2826ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826d0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2826d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2826d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2826d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2826d8: 0xc092782  jal         func_249E08
    ctx->pc = 0x2826D8u;
    SET_GPR_U32(ctx, 31, 0x2826E0u);
    ctx->pc = 0x2826DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2826D8u;
    // 0x2826dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x2826D8u, 0x2826E0u)) {
        return;
    }
    ctx->pc = 0x2826E0u;
label_2826e0:
    // 0x2826e0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2826E0u;
    {
        const bool branch_taken_0x2826e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2826E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826E0u;
        // 0x2826e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826e0) {
            ctx->pc = 0x282778u;
            goto label_282778;
        }
    }
    ctx->pc = 0x2826E8u;
    // 0x2826e8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2826e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2826ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2826ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826f0: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x2826F0u;
    SET_GPR_U32(ctx, 31, 0x2826F8u);
    ctx->pc = 0x2826F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2826F0u;
    // 0x2826f4: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x2826F0u, 0x2826F8u)) {
        return;
    }
    ctx->pc = 0x2826F8u;
label_2826f8:
    // 0x2826f8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2826F8u;
    {
        const bool branch_taken_0x2826f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2826FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826F8u;
        // 0x2826fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826f8) {
            ctx->pc = 0x282778u;
            goto label_282778;
        }
    }
    ctx->pc = 0x282700u;
    // 0x282700: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x282700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x282704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282708: 0xc092782  jal         func_249E08
    ctx->pc = 0x282708u;
    SET_GPR_U32(ctx, 31, 0x282710u);
    ctx->pc = 0x28270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282708u;
    // 0x28270c: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x282708u, 0x282710u)) {
        return;
    }
    ctx->pc = 0x282710u;
label_282710:
    // 0x282710: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x282710u;
    {
        const bool branch_taken_0x282710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282710u;
        // 0x282714: 0x123100  sll         $a2, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282710) {
            ctx->pc = 0x282758u;
            goto label_282758;
        }
    }
    ctx->pc = 0x282718u;
    // 0x282718: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x282718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x28271c: 0xc09275c  jal         func_249D70
    ctx->pc = 0x28271Cu;
    SET_GPR_U32(ctx, 31, 0x282724u);
    ctx->pc = 0x282720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28271Cu;
    // 0x282720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x28271Cu, 0x282724u)) {
        return;
    }
    ctx->pc = 0x282724u;
label_282724:
    // 0x282724: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x282724u;
    {
        const bool branch_taken_0x282724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282724u;
        // 0x282728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282724) {
            ctx->pc = 0x282778u;
            goto label_282778;
        }
    }
    ctx->pc = 0x28272Cu;
    // 0x28272c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x28272cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x282730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282734: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x282734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x282738: 0xc09275c  jal         func_249D70
    ctx->pc = 0x282738u;
    SET_GPR_U32(ctx, 31, 0x282740u);
    ctx->pc = 0x28273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282738u;
    // 0x28273c: 0x63180  sll         $a2, $a2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x282738u, 0x282740u)) {
        return;
    }
    ctx->pc = 0x282740u;
label_282740:
    // 0x282740: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282740u;
    {
        const bool branch_taken_0x282740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282740u;
        // 0x282744: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282740) {
            ctx->pc = 0x282758u;
            goto label_282758;
        }
    }
    ctx->pc = 0x282748u;
    // 0x282748: 0xc0a0f1a  jal         func_283C68
    ctx->pc = 0x282748u;
    SET_GPR_U32(ctx, 31, 0x282750u);
    ctx->pc = 0x28274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282748u;
    // 0x28274c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283C68u, 0x282748u, 0x282750u)) {
        return;
    }
    ctx->pc = 0x282750u;
label_282750:
    // 0x282750: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x282750u;
    {
        const bool branch_taken_0x282750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282750u;
        // 0x282754: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282750) {
            ctx->pc = 0x282778u;
            goto label_282778;
        }
    }
    ctx->pc = 0x282758u;
label_282758:
    // 0x282758: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x282758u;
    {
        const bool branch_taken_0x282758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282758u;
        // 0x28275c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282758) {
            ctx->pc = 0x282778u;
            goto label_282778;
        }
    }
    ctx->pc = 0x282760u;
label_282760:
    // 0x282760: 0xc0a0d84  jal         func_283610
    ctx->pc = 0x282760u;
    SET_GPR_U32(ctx, 31, 0x282768u);
    ctx->pc = 0x282764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282760u;
    // 0x282764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283610u, 0x282760u, 0x282768u)) {
        return;
    }
    ctx->pc = 0x282768u;
label_282768:
    // 0x282768: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x282768u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28276c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28276Cu;
    {
        const bool branch_taken_0x28276c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28276Cu;
        // 0x282770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28276c) {
            ctx->pc = 0x282778u;
            goto label_282778;
        }
    }
    ctx->pc = 0x282774u;
label_282774:
    // 0x282774: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x282774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_282778:
    // 0x282778: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x282778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28277c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28277cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282780: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282788: 0x3e00008  jr          $ra
    ctx->pc = 0x282788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282788u;
        // 0x28278c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282790u;
}
