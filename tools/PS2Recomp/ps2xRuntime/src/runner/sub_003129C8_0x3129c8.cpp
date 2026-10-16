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

// Function: sub_003129C8
// Address: 0x3129c8 - 0x312ae0
void sub_003129C8_0x3129c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003129C8_0x3129c8");
#endif

    switch (ctx->pc) {
        case 0x312a4cu: goto label_312a4c;
        case 0x312a98u: goto label_312a98;
        case 0x312ac0u: goto label_312ac0;
        default: break;
    }

    ctx->pc = 0x3129c8u;

    // 0x3129c8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3129c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129cc: 0xa74025  or          $t0, $a1, $a3
    ctx->pc = 0x3129ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x3129d0: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x3129d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x3129d4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3129D4u;
    {
        const bool branch_taken_0x3129d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3129D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129D4u;
        // 0x3129d8: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3129d4) {
            ctx->pc = 0x312AC0u;
            goto label_312ac0;
        }
    }
    ctx->pc = 0x3129DCu;
    // 0x3129dc: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x3129dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x3129e0: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x3129e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3129e4: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3129e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3129e8: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3129e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3129ec: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3129ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3129f0: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3129f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3129f4: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x3129f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x3129f8: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x3129f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x3129fc: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3129fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312a00: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312a04: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312a08: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312a0c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312a10: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312a14: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312a18: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x312A18u;
    {
        const bool branch_taken_0x312a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312a18) {
            ctx->pc = 0x312A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312A18u;
            // 0x312a1c: 0xdcaa0000  ld          $t2, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312A80u;
            goto label_312a80;
        }
    }
    ctx->pc = 0x312A20u;
    // 0x312a20: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x312a20u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x312a24: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x312a24u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312a28: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x312a28u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x312a2c: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x312a2cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x312a30: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x312a30u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x312a34: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x312a34u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x312a38: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x312a38u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x312a3c: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x312a3cu;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x312a40: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x312a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x312a44: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x312A44u;
    {
        const bool branch_taken_0x312a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A44u;
        // 0x312a48: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a44) {
            ctx->pc = 0x312ABCu;
            goto label_312abc;
        }
    }
    ctx->pc = 0x312A4Cu;
label_312a4c:
    // 0x312a4c: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x312a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x312a50: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x312a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x312a54: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x312a54u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312a58: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x312a58u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x312a5c: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x312a5cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x312a60: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x312a60u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x312a64: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x312a64u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x312a68: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x312a68u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x312a6c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x312a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x312a70: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x312A70u;
    {
        const bool branch_taken_0x312a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x312A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A70u;
        // 0x312a74: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a70) {
            ctx->pc = 0x312A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312a4c;
        }
    }
    ctx->pc = 0x312A78u;
    // 0x312a78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x312A78u;
    {
        const bool branch_taken_0x312a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A78u;
        // 0x312a7c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a78) {
            ctx->pc = 0x312AC0u;
            goto label_312ac0;
        }
    }
    ctx->pc = 0x312A80u;
label_312a80:
    // 0x312a80: 0x149102f  dsubu       $v0, $t2, $t1
    ctx->pc = 0x312a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x312a84: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x312a84u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x312a88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x312a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x312a8c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x312a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x312a90: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x312A90u;
    {
        const bool branch_taken_0x312a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A90u;
        // 0x312a94: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a90) {
            ctx->pc = 0x312ABCu;
            goto label_312abc;
        }
    }
    ctx->pc = 0x312A98u;
label_312a98:
    // 0x312a98: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x312a98u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x312a9c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x312a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x312aa0: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x312aa0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312aa4: 0xa1027  nor         $v0, $zero, $t2
    ctx->pc = 0x312aa4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x312aa8: 0x149182f  dsubu       $v1, $t2, $t1
    ctx->pc = 0x312aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x312aac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x312aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312ab0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x312ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x312ab4: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x312AB4u;
    {
        const bool branch_taken_0x312ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x312AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AB4u;
        // 0x312ab8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ab4) {
            ctx->pc = 0x312A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312a98;
        }
    }
    ctx->pc = 0x312ABCu;
label_312abc:
    // 0x312abc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x312abcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_312ac0:
    // 0x312ac0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x312ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312ac4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x312ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x312ac8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x312ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x312acc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x312accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x312ad0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x312AD0u;
    {
        const bool branch_taken_0x312ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AD0u;
        // 0x312ad4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ad0) {
            ctx->pc = 0x312AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312ac0;
        }
    }
    ctx->pc = 0x312AD8u;
    // 0x312ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x312AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AD8u;
        // 0x312adc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312AE0u;
}
