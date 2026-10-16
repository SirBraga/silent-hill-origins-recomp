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

// Function: sub_00300E00
// Address: 0x300e00 - 0x3017b8
void sub_00300E00_0x300e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300E00_0x300e00");
#endif

    switch (ctx->pc) {
        case 0x300e10u: goto label_300e10;
        case 0x300e38u: goto label_300e38;
        case 0x300e40u: goto label_300e40;
        case 0x300ec8u: goto label_300ec8;
        case 0x300f2cu: goto label_300f2c;
        case 0x300fc0u: goto label_300fc0;
        case 0x300fe8u: goto label_300fe8;
        case 0x301020u: goto label_301020;
        case 0x3010c0u: goto label_3010c0;
        case 0x3010e4u: goto label_3010e4;
        case 0x301160u: goto label_301160;
        case 0x301180u: goto label_301180;
        case 0x301188u: goto label_301188;
        case 0x301210u: goto label_301210;
        case 0x301254u: goto label_301254;
        case 0x3012f0u: goto label_3012f0;
        case 0x301318u: goto label_301318;
        case 0x301338u: goto label_301338;
        case 0x3013d8u: goto label_3013d8;
        case 0x301404u: goto label_301404;
        case 0x3014b0u: goto label_3014b0;
        case 0x3014d8u: goto label_3014d8;
        case 0x3014e0u: goto label_3014e0;
        case 0x301580u: goto label_301580;
        case 0x3015e4u: goto label_3015e4;
        case 0x3016a0u: goto label_3016a0;
        case 0x3016c8u: goto label_3016c8;
        case 0x301700u: goto label_301700;
        default: break;
    }

    ctx->pc = 0x300e00u;

    // 0x300e00: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x300e00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300e04: 0x3e00008  jr          $ra
    ctx->pc = 0x300E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300E0Cu;
    // 0x300e0c: 0x0  nop
    ctx->pc = 0x300e0cu;
    // NOP
label_300e10:
    // 0x300e10: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x300e10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300e14: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x300e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x300e18: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x300e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x300e1c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x300e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x300e20: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x300e20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x300e24: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x300e24u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x300e28: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x300e28u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x300e2c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x300e2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300e30: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x300e30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x300e34: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x300e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_300e38:
    // 0x300e38: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x300e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x300e3c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x300e3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_300e40:
    // 0x300e40: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x300e40u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300e44: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x300e44u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300e48: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x300e48u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x300e4c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x300e4cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x300e50: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x300e50u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x300e54: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x300e54u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x300e58: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x300e58u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x300e5c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x300e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x300e60: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x300e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x300e64: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x300e64u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x300e68: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x300e68u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x300e6c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x300e6cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x300e70: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x300e70u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x300e74: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x300e74u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x300e78: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x300e78u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x300e7c: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x300e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x300e80: 0x1ce0ffef  bgtz        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x300E80u;
    {
        const bool branch_taken_0x300e80 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x300E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E80u;
        // 0x300e84: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e80) {
            ctx->pc = 0x300E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300e40;
        }
    }
    ctx->pc = 0x300E88u;
    // 0x300e88: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x300e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x300e8c: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x300e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x300e90: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x300e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x300e94: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x300e94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x300e98: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x300E98u;
    {
        const bool branch_taken_0x300e98 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x300E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E98u;
        // 0x300e9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e98) {
            ctx->pc = 0x300E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300e40;
        }
    }
    ctx->pc = 0x300EA0u;
    // 0x300ea0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x300ea0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300ea4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x300ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x300ea8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x300ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x300eac: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x300eacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x300eb0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x300eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x300eb4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x300eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x300eb8: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x300EB8u;
    {
        const bool branch_taken_0x300eb8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x300EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300EB8u;
        // 0x300ebc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300eb8) {
            ctx->pc = 0x300E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300e38;
        }
    }
    ctx->pc = 0x300EC0u;
    // 0x300ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x300EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300EC8u;
label_300ec8:
    // 0x300ec8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x300ec8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300ecc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x300eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x300ed0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x300ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x300ed4: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x300ed4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x300ed8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x300ed8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x300edc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x300edcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x300ee0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x300ee0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x300ee4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x300ee4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x300ee8: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x300ee8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x300eec: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x300eecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300ef0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x300ef0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300ef4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x300ef4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300ef8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x300ef8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x300efc: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x300efcu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x300f00: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x300f00u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x300f04: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x300f04u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x300f08: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x300f08u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x300f0c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x300f0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x300f10: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x300f10u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x300f14: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x300f14u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x300f18: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x300f18u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x300f1c: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x300f1cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x300f20: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x300f20u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x300f24: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x300F24u;
    {
        const bool branch_taken_0x300f24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x300F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F24u;
        // 0x300f28: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f24) {
            ctx->pc = 0x300FA0u;
            goto label_300fa0;
        }
    }
    ctx->pc = 0x300F2Cu;
label_300f2c:
    // 0x300f2c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x300f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x300f30: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x300f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x300f34: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x300f34u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300f38: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x300f38u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300f3c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x300f3cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x300f40: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x300f40u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x300f44: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x300f44u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x300f48: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x300f48u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x300f4c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x300f4cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x300f50: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x300f50u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x300f54: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x300f54u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x300f58: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x300f58u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x300f5c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x300f5cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x300f60: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x300f60u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x300f64: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x300f64u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x300f68: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x300f68u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x300f6c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x300f6cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x300f70: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x300f70u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x300f74: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x300f74u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x300f78: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x300f78u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x300f7c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x300f7cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x300f80: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x300f80u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x300f84: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x300f84u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x300f88: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x300f88u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x300f8c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x300f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x300f90: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x300f90u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x300f94: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x300f94u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x300f98: 0x1ce0ffe4  bgtz        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x300F98u;
    {
        const bool branch_taken_0x300f98 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x300F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F98u;
        // 0x300f9c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f98) {
            ctx->pc = 0x300F2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300f2c;
        }
    }
    ctx->pc = 0x300FA0u;
label_300fa0:
    // 0x300fa0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x300fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x300fa4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x300fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x300fa8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x300fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x300fac: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x300facu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x300fb0: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x300FB0u;
    {
        const bool branch_taken_0x300fb0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x300FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300FB0u;
        // 0x300fb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300fb0) {
            ctx->pc = 0x300F2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300f2c;
        }
    }
    ctx->pc = 0x300FB8u;
    // 0x300fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x300FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300FC0u;
label_300fc0:
    // 0x300fc0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x300fc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300fc4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x300fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x300fc8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x300fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x300fcc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x300fccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x300fd0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x300fd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x300fd4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x300fd4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x300fd8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x300fd8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x300fdc: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x300fdcu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x300fe0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x300fe0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300fe4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x300fe4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300fe8:
    // 0x300fe8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x300fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x300fec: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x300fecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300ff0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x300ff0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300ff4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x300ff4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x300ff8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x300ff8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x300ffc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x300ffcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x301000: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x301000u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x301004: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x301004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x301008: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x301008u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x30100c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x30100cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x301010: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x301010u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x301014: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x301014u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x301018: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x301018u;
    {
        const bool branch_taken_0x301018 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x30101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301018u;
        // 0x30101c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301018) {
            ctx->pc = 0x301074u;
            goto label_301074;
        }
    }
    ctx->pc = 0x301020u;
label_301020:
    // 0x301020: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x301020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x301024: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x301024u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301028: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x301028u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30102c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x30102cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x301030: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x301030u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x301034: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x301034u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x301038: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x301038u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x30103c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x30103cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x301040: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x301040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x301044: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x301044u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x301048: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x301048u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x30104c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x30104cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x301050: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x301050u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x301054: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x301054u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x301058: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x301058u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x30105c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x30105cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x301060: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x301060u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x301064: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x301064u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x301068: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x301068u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x30106c: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x30106Cu;
    {
        const bool branch_taken_0x30106c = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x301070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30106Cu;
        // 0x301070: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30106c) {
            ctx->pc = 0x301020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301020;
        }
    }
    ctx->pc = 0x301074u;
label_301074:
    // 0x301074: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x301074u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x301078: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x301078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x30107c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x30107cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x301080: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x301080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x301084: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x301084u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x301088: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x301088u;
    {
        const bool branch_taken_0x301088 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x30108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301088u;
        // 0x30108c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301088) {
            ctx->pc = 0x301020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301020;
        }
    }
    ctx->pc = 0x301090u;
    // 0x301090: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x301090u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301094: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x301094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x301098: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x301098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x30109c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x30109cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x3010a0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x3010a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x3010a4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x3010a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3010a8: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x3010a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x3010ac: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x3010ACu;
    {
        const bool branch_taken_0x3010ac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3010B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010ACu;
        // 0x3010b0: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010ac) {
            ctx->pc = 0x300FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300fe8;
        }
    }
    ctx->pc = 0x3010B4u;
    // 0x3010b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3010B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3010B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3010BCu;
    // 0x3010bc: 0x0  nop
    ctx->pc = 0x3010bcu;
    // NOP
label_3010c0:
    // 0x3010c0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x3010c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3010c4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3010c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3010c8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x3010c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3010cc: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x3010ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3010d0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x3010d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3010d4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x3010d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3010d8: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x3010d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x3010dc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x3010dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3010e0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x3010e0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_3010e4:
    // 0x3010e4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x3010e4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3010e8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x3010e8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3010ec: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x3010ecu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x3010f0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x3010f0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3010f4: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x3010f4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3010f8: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x3010f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3010fc: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x3010fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x301100: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x301100u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x301104: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x301104u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x301108: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x301108u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30110c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x30110cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x301110: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x301110u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x301114: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x301114u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x301118: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x301118u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x30111c: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x30111cu;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x301120: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x301120u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x301124: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x301124u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x301128: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x301128u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x30112c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x30112cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x301130: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x301130u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x301134: 0x1ce0ffeb  bgtz        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x301134u;
    {
        const bool branch_taken_0x301134 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x301138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301134u;
        // 0x301138: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301134) {
            ctx->pc = 0x3010E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3010e4;
        }
    }
    ctx->pc = 0x30113Cu;
    // 0x30113c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x30113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x301140: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x301140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x301144: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x301144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x301148: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x301148u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x30114c: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x30114Cu;
    {
        const bool branch_taken_0x30114c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x301150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30114Cu;
        // 0x301150: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30114c) {
            ctx->pc = 0x3010E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3010e4;
        }
    }
    ctx->pc = 0x301154u;
    // 0x301154: 0x3e00008  jr          $ra
    ctx->pc = 0x301154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30115Cu;
    // 0x30115c: 0x0  nop
    ctx->pc = 0x30115cu;
    // NOP
label_301160:
    // 0x301160: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x301160u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301164: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x301164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x301168: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x301168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x30116c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x30116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x301170: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x301170u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x301174: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x301174u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x301178: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x301178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30117c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x30117cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_301180:
    // 0x301180: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x301180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x301184: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x301184u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_301188:
    // 0x301188: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x301188u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30118c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x30118cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x301190: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x301190u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x301194: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x301194u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x301198: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x301198u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x30119c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x30119cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x3011a0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3011a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3011a4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3011a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3011a8: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x3011a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3011ac: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x3011acu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x3011b0: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x3011b0u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x3011b4: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x3011b4u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x3011b8: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x3011b8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x3011bc: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x3011bcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x3011c0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x3011c0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x3011c4: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3011C4u;
    {
        const bool branch_taken_0x3011c4 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x3011C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011C4u;
        // 0x3011c8: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011c4) {
            ctx->pc = 0x301188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301188;
        }
    }
    ctx->pc = 0x3011CCu;
    // 0x3011cc: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x3011ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x3011d0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x3011d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x3011d4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x3011d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3011d8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x3011d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x3011dc: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3011DCu;
    {
        const bool branch_taken_0x3011dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3011E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011DCu;
        // 0x3011e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011dc) {
            ctx->pc = 0x301188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301188;
        }
    }
    ctx->pc = 0x3011E4u;
    // 0x3011e4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x3011e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3011e8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3011e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3011ec: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x3011ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3011f0: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x3011f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x3011f4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x3011f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x3011f8: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x3011f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3011fc: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3011FCu;
    {
        const bool branch_taken_0x3011fc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x301200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011FCu;
        // 0x301200: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011fc) {
            ctx->pc = 0x301180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301180;
        }
    }
    ctx->pc = 0x301204u;
    // 0x301204: 0x3e00008  jr          $ra
    ctx->pc = 0x301204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30120Cu;
    // 0x30120c: 0x0  nop
    ctx->pc = 0x30120cu;
    // NOP
label_301210:
    // 0x301210: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x301210u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301214: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x301214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x301218: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x301218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x30121c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x30121cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x301220: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x301220u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x301224: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x301224u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x301228: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x301228u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30122c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x30122cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x301230: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x301230u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301234: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x301234u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x301238: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x301238u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x30123c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x30123cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x301240: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x301240u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x301244: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x301244u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x301248: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x301248u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30124c: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x30124Cu;
    {
        const bool branch_taken_0x30124c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x301250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30124Cu;
        // 0x301250: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30124c) {
            ctx->pc = 0x3012CCu;
            goto label_3012cc;
        }
    }
    ctx->pc = 0x301254u;
label_301254:
    // 0x301254: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x301254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x301258: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x301258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x30125c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x30125cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301260: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x301260u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x301264: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x301264u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x301268: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x301268u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x30126c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x30126cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x301270: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x301270u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x301274: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x301274u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x301278: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x301278u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x30127c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x30127cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x301280: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x301280u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x301284: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x301284u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x301288: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x301288u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x30128c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x30128cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x301290: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x301290u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x301294: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x301294u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x301298: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x301298u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x30129c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x30129cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3012a0: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x3012a0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x3012a4: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x3012a4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x3012a8: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x3012a8u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x3012ac: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x3012acu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3012b0: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x3012b0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x3012b4: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x3012b4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x3012b8: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x3012b8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x3012bc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x3012bcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x3012c0: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x3012c0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x3012c4: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3012C4u;
    {
        const bool branch_taken_0x3012c4 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x3012C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012C4u;
        // 0x3012c8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012c4) {
            ctx->pc = 0x301254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301254;
        }
    }
    ctx->pc = 0x3012CCu;
label_3012cc:
    // 0x3012cc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x3012ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x3012d0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x3012d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x3012d4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x3012d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3012d8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x3012d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x3012dc: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x3012DCu;
    {
        const bool branch_taken_0x3012dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3012E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012DCu;
        // 0x3012e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012dc) {
            ctx->pc = 0x301254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301254;
        }
    }
    ctx->pc = 0x3012E4u;
    // 0x3012e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3012E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3012E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3012ECu;
    // 0x3012ec: 0x0  nop
    ctx->pc = 0x3012ecu;
    // NOP
label_3012f0:
    // 0x3012f0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x3012f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3012f4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3012f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3012f8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x3012f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3012fc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x3012fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x301300: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x301300u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x301304: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x301304u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301308: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x301308u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x30130c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x30130cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301310: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x301310u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x301314: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x301314u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_301318:
    // 0x301318: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x301318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30131c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x30131cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301320: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x301320u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x301324: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x301324u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x301328: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x301328u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x30132c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x30132cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x301330: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x301330u;
    {
        const bool branch_taken_0x301330 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x301334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301330u;
        // 0x301334: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301330) {
            ctx->pc = 0x30138Cu;
            goto label_30138c;
        }
    }
    ctx->pc = 0x301338u;
label_301338:
    // 0x301338: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x301338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x30133c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x30133cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x301340: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x301340u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301344: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x301344u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x301348: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x301348u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x30134c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x30134cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x301350: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x301350u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x301354: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x301354u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x301358: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x301358u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x30135c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x30135cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x301360: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x301360u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x301364: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x301364u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x301368: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x301368u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x30136c: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x30136cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x301370: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x301370u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x301374: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x301374u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x301378: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x301378u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x30137c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x30137cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x301380: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x301380u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x301384: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x301384u;
    {
        const bool branch_taken_0x301384 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x301388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301384u;
        // 0x301388: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301384) {
            ctx->pc = 0x301338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301338;
        }
    }
    ctx->pc = 0x30138Cu;
label_30138c:
    // 0x30138c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x30138cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x301390: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x301390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x301394: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x301394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x301398: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x301398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x30139c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x30139cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x3013a0: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3013A0u;
    {
        const bool branch_taken_0x3013a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3013A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013A0u;
        // 0x3013a4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3013a0) {
            ctx->pc = 0x301338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301338;
        }
    }
    ctx->pc = 0x3013A8u;
    // 0x3013a8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x3013a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3013ac: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3013acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3013b0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x3013b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3013b4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x3013b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x3013b8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x3013b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x3013bc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x3013bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3013c0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x3013c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x3013c4: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x3013C4u;
    {
        const bool branch_taken_0x3013c4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3013C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013C4u;
        // 0x3013c8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3013c4) {
            ctx->pc = 0x301318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301318;
        }
    }
    ctx->pc = 0x3013CCu;
    // 0x3013cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3013CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3013CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3013D4u;
    // 0x3013d4: 0x0  nop
    ctx->pc = 0x3013d4u;
    // NOP
label_3013d8:
    // 0x3013d8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x3013d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3013dc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3013dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3013e0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x3013e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3013e4: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x3013e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3013e8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x3013e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3013ec: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x3013ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3013f0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x3013f0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3013f4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x3013f4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x3013f8: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x3013f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3013fc: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x3013fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x301400: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x301400u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_301404:
    // 0x301404: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x301404u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301408: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x301408u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30140c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x30140cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x301410: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x301410u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x301414: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x301414u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x301418: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x301418u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x30141c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x30141cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x301420: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x301420u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x301424: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x301424u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x301428: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x301428u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x30142c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x30142cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x301430: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x301430u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x301434: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x301434u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x301438: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x301438u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x30143c: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x30143cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x301440: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x301440u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x301444: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x301444u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x301448: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x301448u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x30144c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x30144cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x301450: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x301450u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x301454: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x301454u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x301458: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x301458u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x30145c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x30145cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x301460: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x301460u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x301464: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x301464u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x301468: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x301468u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x30146c: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x30146cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x301470: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x301470u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x301474: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x301474u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x301478: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x301478u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x30147c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x30147cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x301480: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x301480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x301484: 0x1ce0ffdf  bgtz        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x301484u;
    {
        const bool branch_taken_0x301484 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x301488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301484u;
        // 0x301488: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301484) {
            ctx->pc = 0x301404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301404;
        }
    }
    ctx->pc = 0x30148Cu;
    // 0x30148c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x30148cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x301490: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x301490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x301494: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x301494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x301498: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x301498u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x30149c: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x30149Cu;
    {
        const bool branch_taken_0x30149c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3014A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30149Cu;
        // 0x3014a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30149c) {
            ctx->pc = 0x301404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301404;
        }
    }
    ctx->pc = 0x3014A4u;
    // 0x3014a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3014A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3014A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3014ACu;
    // 0x3014ac: 0x0  nop
    ctx->pc = 0x3014acu;
    // NOP
label_3014b0:
    // 0x3014b0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x3014b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3014b4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3014b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3014b8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x3014b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3014bc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3014bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3014c0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x3014c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3014c4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x3014c4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3014c8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x3014c8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x3014cc: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x3014ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3014d0: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x3014d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3014d4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3014d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3014d8:
    // 0x3014d8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x3014d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3014dc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x3014dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3014e0:
    // 0x3014e0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x3014e0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3014e4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x3014e4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3014e8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x3014e8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x3014ec: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x3014ecu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x3014f0: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x3014f0u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x3014f4: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x3014f4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x3014f8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x3014f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x3014fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3014fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x301500: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x301500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x301504: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x301504u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x301508: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x301508u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x30150c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x30150cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x301510: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x301510u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x301514: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x301514u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x301518: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x301518u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x30151c: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x30151cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x301520: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x301520u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x301524: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x301524u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x301528: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x301528u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x30152c: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x30152cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x301530: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x301530u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x301534: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x301534u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x301538: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x301538u;
    {
        const bool branch_taken_0x301538 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x30153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301538u;
        // 0x30153c: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301538) {
            ctx->pc = 0x3014E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3014e0;
        }
    }
    ctx->pc = 0x301540u;
    // 0x301540: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x301540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x301544: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x301544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x301548: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x301548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x30154c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x30154cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x301550: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x301550u;
    {
        const bool branch_taken_0x301550 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x301554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301550u;
        // 0x301554: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301550) {
            ctx->pc = 0x3014E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3014e0;
        }
    }
    ctx->pc = 0x301558u;
    // 0x301558: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x301558u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30155c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x30155cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x301560: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x301560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x301564: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x301564u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x301568: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x301568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x30156c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x30156cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x301570: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x301570u;
    {
        const bool branch_taken_0x301570 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x301574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301570u;
        // 0x301574: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301570) {
            ctx->pc = 0x3014D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3014d8;
        }
    }
    ctx->pc = 0x301578u;
    // 0x301578: 0x3e00008  jr          $ra
    ctx->pc = 0x301578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301580u;
label_301580:
    // 0x301580: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x301580u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301584: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x301584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x301588: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x301588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x30158c: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x30158cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x301590: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x301590u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x301594: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x301594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x301598: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x301598u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30159c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x30159cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x3015a0: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x3015a0u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x3015a4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x3015a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3015a8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x3015a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3015ac: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x3015acu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3015b0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x3015b0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x3015b4: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x3015b4u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x3015b8: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x3015b8u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x3015bc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x3015bcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x3015c0: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x3015c0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x3015c4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x3015c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3015c8: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x3015c8u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x3015cc: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x3015ccu;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x3015d0: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x3015d0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x3015d4: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x3015d4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x3015d8: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x3015d8u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x3015dc: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x3015DCu;
    {
        const bool branch_taken_0x3015dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3015E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015DCu;
        // 0x3015e0: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015dc) {
            ctx->pc = 0x301680u;
            goto label_301680;
        }
    }
    ctx->pc = 0x3015E4u;
label_3015e4:
    // 0x3015e4: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x3015e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x3015e8: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x3015e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x3015ec: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x3015ecu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3015f0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x3015f0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3015f4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x3015f4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x3015f8: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x3015f8u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x3015fc: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x3015fcu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x301600: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x301600u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x301604: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x301604u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x301608: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x301608u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x30160c: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x30160cu;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x301610: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x301610u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x301614: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x301614u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x301618: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x301618u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x30161c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x30161cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x301620: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x301620u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x301624: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x301624u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x301628: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x301628u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x30162c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x30162cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x301630: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x301630u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x301634: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x301634u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x301638: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x301638u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x30163c: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x30163cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x301640: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x301640u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x301644: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x301644u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x301648: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x301648u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x30164c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x30164cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x301650: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x301650u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x301654: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x301654u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301658: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x301658u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x30165c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x30165cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x301660: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x301660u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x301664: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x301664u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x301668: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x301668u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x30166c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x30166cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x301670: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x301670u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x301674: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x301674u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x301678: 0x1ce0ffda  bgtz        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x301678u;
    {
        const bool branch_taken_0x301678 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x30167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301678u;
        // 0x30167c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301678) {
            ctx->pc = 0x3015E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3015e4;
        }
    }
    ctx->pc = 0x301680u;
label_301680:
    // 0x301680: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x301680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x301684: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x301684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x301688: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x301688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x30168c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x30168cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x301690: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x301690u;
    {
        const bool branch_taken_0x301690 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x301694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301690u;
        // 0x301694: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301690) {
            ctx->pc = 0x3015E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3015e4;
        }
    }
    ctx->pc = 0x301698u;
    // 0x301698: 0x3e00008  jr          $ra
    ctx->pc = 0x301698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3016A0u;
label_3016a0:
    // 0x3016a0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x3016a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3016a4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3016a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3016a8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x3016a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3016ac: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x3016acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3016b0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x3016b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3016b4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x3016b4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3016b8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x3016b8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x3016bc: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x3016bcu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x3016c0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x3016c0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3016c4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3016c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3016c8:
    // 0x3016c8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x3016c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3016cc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x3016ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3016d0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x3016d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3016d4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x3016d4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x3016d8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x3016d8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x3016dc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x3016dcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x3016e0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x3016e0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x3016e4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x3016e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x3016e8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x3016e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x3016ec: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x3016ecu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x3016f0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x3016f0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x3016f4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x3016f4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x3016f8: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x3016F8u;
    {
        const bool branch_taken_0x3016f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3016FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016F8u;
        // 0x3016fc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3016f8) {
            ctx->pc = 0x30176Cu;
            goto label_30176c;
        }
    }
    ctx->pc = 0x301700u;
label_301700:
    // 0x301700: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x301700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x301704: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x301704u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301708: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x301708u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30170c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x30170cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x301710: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x301710u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x301714: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x301714u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x301718: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x301718u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x30171c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x30171cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x301720: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x301720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x301724: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x301724u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x301728: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x301728u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x30172c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x30172cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x301730: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x301730u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x301734: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x301734u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x301738: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x301738u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x30173c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x30173cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x301740: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x301740u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x301744: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x301744u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x301748: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x301748u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x30174c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x30174cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x301750: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x301750u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x301754: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x301754u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x301758: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x301758u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x30175c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x30175cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x301760: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x301760u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x301764: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x301764u;
    {
        const bool branch_taken_0x301764 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x301768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301764u;
        // 0x301768: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301764) {
            ctx->pc = 0x301700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301700;
        }
    }
    ctx->pc = 0x30176Cu;
label_30176c:
    // 0x30176c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x30176cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x301770: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x301770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x301774: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x301774u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x301778: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x301778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x30177c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x30177cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x301780: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x301780u;
    {
        const bool branch_taken_0x301780 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x301784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301780u;
        // 0x301784: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301780) {
            ctx->pc = 0x301700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301700;
        }
    }
    ctx->pc = 0x301788u;
    // 0x301788: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x301788u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30178c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x30178cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x301790: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x301790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x301794: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x301794u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x301798: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x301798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x30179c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x30179cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3017a0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x3017a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x3017a4: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3017A4u;
    {
        const bool branch_taken_0x3017a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3017A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017A4u;
        // 0x3017a8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3017a4) {
            ctx->pc = 0x3016C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3016c8;
        }
    }
    ctx->pc = 0x3017ACu;
    // 0x3017ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3017ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3017ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3017B4u;
    // 0x3017b4: 0x0  nop
    ctx->pc = 0x3017b4u;
    // NOP
    ctx->pc = 0x3017b8u;
}
