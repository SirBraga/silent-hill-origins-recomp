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

// Function: sub_0016CC08
// Address: 0x16cc08 - 0x16ce40
void sub_0016CC08_0x16cc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CC08_0x16cc08");
#endif

    switch (ctx->pc) {
        case 0x16cc24u: goto label_16cc24;
        case 0x16cc38u: goto label_16cc38;
        case 0x16cc50u: goto label_16cc50;
        case 0x16cc84u: goto label_16cc84;
        case 0x16ccecu: goto label_16ccec;
        case 0x16cd74u: goto label_16cd74;
        case 0x16cdbcu: goto label_16cdbc;
        case 0x16ce1cu: goto label_16ce1c;
        default: break;
    }

    ctx->pc = 0x16cc08u;

    // 0x16cc08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16cc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16cc0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16cc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16cc10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16cc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16cc14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16cc14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16cc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16cc1c: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16CC1Cu;
    SET_GPR_U32(ctx, 31, 0x16CC24u);
    ctx->pc = 0x16CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CC1Cu;
    // 0x16cc20: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16CC1Cu, 0x16CC24u)) {
        return;
    }
    ctx->pc = 0x16CC24u;
label_16cc24:
    // 0x16cc24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16cc28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16cc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc2c: 0x8c46f6a0  lw          $a2, -0x960($v0)
    ctx->pc = 0x16cc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF6A0u));
    // 0x16cc30: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16CC30u;
    SET_GPR_U32(ctx, 31, 0x16CC38u);
    ctx->pc = 0x16CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CC30u;
    // 0x16cc34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16CC30u, 0x16CC38u)) {
        return;
    }
    ctx->pc = 0x16CC38u;
label_16cc38:
    // 0x16cc38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cc3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cc40: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x16CC40u;
    {
        const bool branch_taken_0x16cc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC40u;
        // 0x16cc44: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc40) {
            ctx->pc = 0x16CE30u;
            goto label_16ce30;
        }
    }
    ctx->pc = 0x16CC48u;
    // 0x16cc48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cc4c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x16cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16cc50:
    // 0x16cc50: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x16cc50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x16cc54: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x16CC54u;
    {
        const bool branch_taken_0x16cc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC54u;
        // 0x16cc58: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc54) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CC5Cu;
    // 0x16cc5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16cc60: 0x24424b30  addiu       $v0, $v0, 0x4B30
    ctx->pc = 0x16cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19248));
    // 0x16cc64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cc68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cc6c: 0x800008  jr          $a0
    ctx->pc = 0x16CC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CC74u: goto label_16cc74;
            case 0x16CC8Cu: goto label_16cc8c;
            case 0x16CCA0u: goto label_16cca0;
            case 0x16CCB4u: goto label_16ccb4;
            case 0x16CCC4u: goto label_16ccc4;
            case 0x16CCD4u: goto label_16ccd4;
            case 0x16CCF4u: goto label_16ccf4;
            case 0x16CD00u: goto label_16cd00;
            case 0x16CD0Cu: goto label_16cd0c;
            case 0x16CD18u: goto label_16cd18;
            case 0x16CD24u: goto label_16cd24;
            case 0x16CD30u: goto label_16cd30;
            case 0x16CD3Cu: goto label_16cd3c;
            case 0x16CD48u: goto label_16cd48;
            case 0x16CD54u: goto label_16cd54;
            case 0x16CD60u: goto label_16cd60;
            case 0x16CD7Cu: goto label_16cd7c;
            case 0x16CD8Cu: goto label_16cd8c;
            case 0x16CD9Cu: goto label_16cd9c;
            case 0x16CDACu: goto label_16cdac;
            case 0x16CDC4u: goto label_16cdc4;
            case 0x16CDE4u: goto label_16cde4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CC6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16CC74u;
label_16cc74:
    // 0x16cc74: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cc78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc7c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x16CC7Cu;
    SET_GPR_U32(ctx, 31, 0x16CC84u);
    ctx->pc = 0x16CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CC7Cu;
    // 0x16cc80: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x16CC7Cu, 0x16CC84u)) {
        return;
    }
    ctx->pc = 0x16CC84u;
label_16cc84:
    // 0x16cc84: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x16CC84u;
    {
        const bool branch_taken_0x16cc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC84u;
        // 0x16cc88: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc84) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CC8Cu;
label_16cc8c:
    // 0x16cc8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cc90: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16cc94: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16cc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16cc98: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x16CC98u;
    {
        const bool branch_taken_0x16cc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC98u;
        // 0x16cc9c: 0xae2200cc  sw          $v0, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc98) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CCA0u;
label_16cca0:
    // 0x16cca0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cca4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16cca8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16cca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16ccac: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x16CCACu;
    {
        const bool branch_taken_0x16ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCACu;
        // 0x16ccb0: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccac) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CCB4u;
label_16ccb4:
    // 0x16ccb4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16ccb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ccb8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16ccbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16CCBCu;
    {
        const bool branch_taken_0x16ccbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCBCu;
        // 0x16ccc0: 0x262500b8  addiu       $a1, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccbc) {
            ctx->pc = 0x16CCE0u;
            goto label_16cce0;
        }
    }
    ctx->pc = 0x16CCC4u;
label_16ccc4:
    // 0x16ccc4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16ccc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ccc8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16cccc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16CCCCu;
    {
        const bool branch_taken_0x16cccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCCCu;
        // 0x16ccd0: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cccc) {
            ctx->pc = 0x16CCE0u;
            goto label_16cce0;
        }
    }
    ctx->pc = 0x16CCD4u;
label_16ccd4:
    // 0x16ccd4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16ccd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ccd8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16ccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16ccdc: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x16ccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_16cce0:
    // 0x16cce0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16cce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cce4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16CCE4u;
    SET_GPR_U32(ctx, 31, 0x16CCECu);
    ctx->pc = 0x16CCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CCE4u;
    // 0x16cce8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16CCE4u, 0x16CCECu)) {
        return;
    }
    ctx->pc = 0x16CCECu;
label_16ccec:
    // 0x16ccec: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x16CCECu;
    {
        const bool branch_taken_0x16ccec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCECu;
        // 0x16ccf0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccec) {
            ctx->pc = 0x16CE04u;
            goto label_16ce04;
        }
    }
    ctx->pc = 0x16CCF4u;
label_16ccf4:
    // 0x16ccf4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ccf8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16CCF8u;
    {
        const bool branch_taken_0x16ccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCF8u;
        // 0x16ccfc: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccf8) {
            ctx->pc = 0x16CD68u;
            goto label_16cd68;
        }
    }
    ctx->pc = 0x16CD00u;
label_16cd00:
    // 0x16cd00: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16cd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd04: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16CD04u;
    {
        const bool branch_taken_0x16cd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD04u;
        // 0x16cd08: 0x26240054  addiu       $a0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd04) {
            ctx->pc = 0x16CD68u;
            goto label_16cd68;
        }
    }
    ctx->pc = 0x16CD0Cu;
label_16cd0c:
    // 0x16cd0c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16cd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd10: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16CD10u;
    {
        const bool branch_taken_0x16cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD10u;
        // 0x16cd14: 0x2624005c  addiu       $a0, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd10) {
            ctx->pc = 0x16CD68u;
            goto label_16cd68;
        }
    }
    ctx->pc = 0x16CD18u;
label_16cd18:
    // 0x16cd18: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16cd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd1c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16CD1Cu;
    {
        const bool branch_taken_0x16cd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD1Cu;
        // 0x16cd20: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd1c) {
            ctx->pc = 0x16CD68u;
            goto label_16cd68;
        }
    }
    ctx->pc = 0x16CD24u;
label_16cd24:
    // 0x16cd24: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16cd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16CD28u;
    {
        const bool branch_taken_0x16cd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD28u;
        // 0x16cd2c: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd28) {
            ctx->pc = 0x16CD68u;
            goto label_16cd68;
        }
    }
    ctx->pc = 0x16CD30u;
label_16cd30:
    // 0x16cd30: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd34: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16CD34u;
    {
        const bool branch_taken_0x16cd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD34u;
        // 0x16cd38: 0x26240074  addiu       $a0, $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd34) {
            ctx->pc = 0x16CD68u;
            goto label_16cd68;
        }
    }
    ctx->pc = 0x16CD3Cu;
label_16cd3c:
    // 0x16cd3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16cd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16CD40u;
    {
        const bool branch_taken_0x16cd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD40u;
        // 0x16cd44: 0x2624007c  addiu       $a0, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd40) {
            ctx->pc = 0x16CD68u;
            goto label_16cd68;
        }
    }
    ctx->pc = 0x16CD48u;
label_16cd48:
    // 0x16cd48: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16cd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16CD4Cu;
    {
        const bool branch_taken_0x16cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD4Cu;
        // 0x16cd50: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd4c) {
            ctx->pc = 0x16CD68u;
            goto label_16cd68;
        }
    }
    ctx->pc = 0x16CD54u;
label_16cd54:
    // 0x16cd54: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16cd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16CD58u;
    {
        const bool branch_taken_0x16cd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD58u;
        // 0x16cd5c: 0x2624008c  addiu       $a0, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd58) {
            ctx->pc = 0x16CD68u;
            goto label_16cd68;
        }
    }
    ctx->pc = 0x16CD60u;
label_16cd60:
    // 0x16cd60: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd64: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x16cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_16cd68:
    // 0x16cd68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16cd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd6c: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x16CD6Cu;
    SET_GPR_U32(ctx, 31, 0x16CD74u);
    ctx->pc = 0x16CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD6Cu;
    // 0x16cd70: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x16CD6Cu, 0x16CD74u)) {
        return;
    }
    ctx->pc = 0x16CD74u;
label_16cd74:
    // 0x16cd74: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x16CD74u;
    {
        const bool branch_taken_0x16cd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD74u;
        // 0x16cd78: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd74) {
            ctx->pc = 0x16CE04u;
            goto label_16ce04;
        }
    }
    ctx->pc = 0x16CD7Cu;
label_16cd7c:
    // 0x16cd7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd80: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16cd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cd84: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x16CD84u;
    {
        const bool branch_taken_0x16cd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD84u;
        // 0x16cd88: 0xe62000a4  swc1        $f0, 0xA4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd84) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CD8Cu;
label_16cd8c:
    // 0x16cd8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd90: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cd94: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16CD94u;
    {
        const bool branch_taken_0x16cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD94u;
        // 0x16cd98: 0xae2300a0  sw          $v1, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd94) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CD9Cu;
label_16cd9c:
    // 0x16cd9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cda0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cda4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16CDA4u;
    {
        const bool branch_taken_0x16cda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDA4u;
        // 0x16cda8: 0xae2300b0  sw          $v1, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cda4) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CDACu;
label_16cdac:
    // 0x16cdac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cdb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cdb4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x16CDB4u;
    SET_GPR_U32(ctx, 31, 0x16CDBCu);
    ctx->pc = 0x16CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CDB4u;
    // 0x16cdb8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x16CDB4u, 0x16CDBCu)) {
        return;
    }
    ctx->pc = 0x16CDBCu;
label_16cdbc:
    // 0x16cdbc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16CDBCu;
    {
        const bool branch_taken_0x16cdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDBCu;
        // 0x16cdc0: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdbc) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CDC4u;
label_16cdc4:
    // 0x16cdc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cdc8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cdcc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CDCCu;
    {
        const bool branch_taken_0x16cdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDCCu;
        // 0x16cdd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdcc) {
            ctx->pc = 0x16CDDCu;
            goto label_16cddc;
        }
    }
    ctx->pc = 0x16CDD4u;
    // 0x16cdd4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16CDD4u;
    {
        const bool branch_taken_0x16cdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDD4u;
        // 0x16cdd8: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdd4) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CDDCu;
label_16cddc:
    // 0x16cddc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16CDDCu;
    {
        const bool branch_taken_0x16cddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDDCu;
        // 0x16cde0: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cddc) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CDE4u;
label_16cde4:
    // 0x16cde4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cde8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cdec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CDECu;
    {
        const bool branch_taken_0x16cdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDECu;
        // 0x16cdf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdec) {
            ctx->pc = 0x16CDFCu;
            goto label_16cdfc;
        }
    }
    ctx->pc = 0x16CDF4u;
    // 0x16cdf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16CDF4u;
    {
        const bool branch_taken_0x16cdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDF4u;
        // 0x16cdf8: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdf4) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CDFCu;
label_16cdfc:
    // 0x16cdfc: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x16cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
label_16ce00:
    // 0x16ce00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16ce04:
    // 0x16ce04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16ce04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16ce08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ce0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ce10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ce14: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16CE14u;
    SET_GPR_U32(ctx, 31, 0x16CE1Cu);
    ctx->pc = 0x16CE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE14u;
    // 0x16ce18: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16CE14u, 0x16CE1Cu)) {
        return;
    }
    ctx->pc = 0x16CE1Cu;
label_16ce1c:
    // 0x16ce1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ce20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ce24: 0x5460ff8a  bnel        $v1, $zero, . + 4 + (-0x76 << 2)
    ctx->pc = 0x16CE24u;
    {
        const bool branch_taken_0x16ce24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ce24) {
            ctx->pc = 0x16CE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CE24u;
            // 0x16ce28: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cc50;
        }
    }
    ctx->pc = 0x16CE2Cu;
    // 0x16ce2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16ce2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16ce30:
    // 0x16ce30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16ce30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ce34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ce34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ce38: 0x3e00008  jr          $ra
    ctx->pc = 0x16CE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE38u;
        // 0x16ce3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CE40u;
}
