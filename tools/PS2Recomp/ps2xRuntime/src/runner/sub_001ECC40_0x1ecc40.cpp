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

// Function: sub_001ECC40
// Address: 0x1ecc40 - 0x1eccf8
void sub_001ECC40_0x1ecc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECC40_0x1ecc40");
#endif

    switch (ctx->pc) {
        case 0x1ecc40u: goto label_1ecc40;
        case 0x1ecc44u: goto label_1ecc44;
        case 0x1ecc48u: goto label_1ecc48;
        case 0x1ecc4cu: goto label_1ecc4c;
        case 0x1ecc50u: goto label_1ecc50;
        case 0x1ecc54u: goto label_1ecc54;
        case 0x1ecc58u: goto label_1ecc58;
        case 0x1ecc5cu: goto label_1ecc5c;
        case 0x1ecc60u: goto label_1ecc60;
        case 0x1ecc64u: goto label_1ecc64;
        case 0x1ecc68u: goto label_1ecc68;
        case 0x1ecc6cu: goto label_1ecc6c;
        case 0x1ecc70u: goto label_1ecc70;
        case 0x1ecc74u: goto label_1ecc74;
        case 0x1ecc78u: goto label_1ecc78;
        case 0x1ecc7cu: goto label_1ecc7c;
        case 0x1ecc80u: goto label_1ecc80;
        case 0x1ecc84u: goto label_1ecc84;
        case 0x1ecc88u: goto label_1ecc88;
        case 0x1ecc8cu: goto label_1ecc8c;
        case 0x1ecc90u: goto label_1ecc90;
        case 0x1ecc94u: goto label_1ecc94;
        case 0x1ecc98u: goto label_1ecc98;
        case 0x1ecc9cu: goto label_1ecc9c;
        case 0x1ecca0u: goto label_1ecca0;
        case 0x1ecca4u: goto label_1ecca4;
        case 0x1ecca8u: goto label_1ecca8;
        case 0x1eccacu: goto label_1eccac;
        case 0x1eccb0u: goto label_1eccb0;
        case 0x1eccb4u: goto label_1eccb4;
        case 0x1eccb8u: goto label_1eccb8;
        case 0x1eccbcu: goto label_1eccbc;
        case 0x1eccc0u: goto label_1eccc0;
        case 0x1eccc4u: goto label_1eccc4;
        case 0x1eccc8u: goto label_1eccc8;
        case 0x1eccccu: goto label_1ecccc;
        case 0x1eccd0u: goto label_1eccd0;
        case 0x1eccd4u: goto label_1eccd4;
        case 0x1eccd8u: goto label_1eccd8;
        case 0x1eccdcu: goto label_1eccdc;
        case 0x1ecce0u: goto label_1ecce0;
        case 0x1ecce4u: goto label_1ecce4;
        case 0x1ecce8u: goto label_1ecce8;
        case 0x1eccecu: goto label_1eccec;
        case 0x1eccf0u: goto label_1eccf0;
        case 0x1eccf4u: goto label_1eccf4;
        default: break;
    }

    ctx->pc = 0x1ecc40u;

label_1ecc40:
    // 0x1ecc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ecc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ecc44:
    // 0x1ecc44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ecc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ecc48:
    // 0x1ecc48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ecc4c:
    // 0x1ecc4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ecc50:
    // 0x1ecc50: 0xc0932d4  jal         func_24CB50
label_1ecc54:
    if (ctx->pc == 0x1ECC54u) {
        ctx->pc = 0x1ECC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC50u;
        // 0x1ecc54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC58u;
        goto label_1ecc58;
    }
    ctx->pc = 0x1ECC50u;
    SET_GPR_U32(ctx, 31, 0x1ECC58u);
    ctx->pc = 0x1ECC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC50u;
    // 0x1ecc54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1ECC50u, 0x1ECC58u)) {
        return;
    }
    ctx->pc = 0x1ECC58u;
label_1ecc58:
    // 0x1ecc58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ecc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ecc5c:
    // 0x1ecc5c: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x1ecc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1ecc60:
    // 0x1ecc60: 0x40f809  jalr        $v0
label_1ecc64:
    if (ctx->pc == 0x1ECC64u) {
        ctx->pc = 0x1ECC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC60u;
        // 0x1ecc64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC68u;
        goto label_1ecc68;
    }
    ctx->pc = 0x1ECC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ECC68u);
        ctx->pc = 0x1ECC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC60u;
        // 0x1ecc64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECC60u, 0x1ECC68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ECC68u;
label_1ecc68:
    // 0x1ecc68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ecc68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc6c:
    // 0x1ecc6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ecc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc70:
    // 0x1ecc70: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1ecc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1ecc74:
    // 0x1ecc74: 0xc0c493d  jal         func_3124F4
label_1ecc78:
    if (ctx->pc == 0x1ECC78u) {
        ctx->pc = 0x1ECC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC74u;
        // 0x1ecc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC7Cu;
        goto label_1ecc7c;
    }
    ctx->pc = 0x1ECC74u;
    SET_GPR_U32(ctx, 31, 0x1ECC7Cu);
    ctx->pc = 0x1ECC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC74u;
    // 0x1ecc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1ECC74u, 0x1ECC7Cu)) {
        return;
    }
    ctx->pc = 0x1ECC7Cu;
label_1ecc7c:
    // 0x1ecc7c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1ecc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1ecc80:
    // 0x1ecc80: 0xc07b33e  jal         func_1ECCF8
label_1ecc84:
    if (ctx->pc == 0x1ECC84u) {
        ctx->pc = 0x1ECC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC80u;
        // 0x1ecc84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC88u;
        goto label_1ecc88;
    }
    ctx->pc = 0x1ECC80u;
    SET_GPR_U32(ctx, 31, 0x1ECC88u);
    ctx->pc = 0x1ECC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC80u;
    // 0x1ecc84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECCF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECCF8u, 0x1ECC80u, 0x1ECC88u)) {
        return;
    }
    ctx->pc = 0x1ECC88u;
label_1ecc88:
    // 0x1ecc88: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ecc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ecc8c:
    // 0x1ecc8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ecc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc90:
    // 0x1ecc90: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ecc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ecc94:
    // 0x1ecc94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ecc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc98:
    // 0x1ecc98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ecc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ecc9c:
    // 0x1ecc9c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ecc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1ecca0:
    // 0x1ecca0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ecca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ecca4:
    // 0x1ecca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ecca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ecca8:
    // 0x1ecca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ecca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1eccac:
    // 0x1eccac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1eccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1eccb0:
    // 0x1eccb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eccb4:
    // 0x1eccb4: 0xc079fb2  jal         func_1E7EC8
label_1eccb8:
    if (ctx->pc == 0x1ECCB8u) {
        ctx->pc = 0x1ECCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCB4u;
        // 0x1eccb8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECCBCu;
        goto label_1eccbc;
    }
    ctx->pc = 0x1ECCB4u;
    SET_GPR_U32(ctx, 31, 0x1ECCBCu);
    ctx->pc = 0x1ECCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECCB4u;
    // 0x1eccb8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7EC8u, 0x1ECCB4u, 0x1ECCBCu)) {
        return;
    }
    ctx->pc = 0x1ECCBCu;
label_1eccbc:
    // 0x1eccbc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1eccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_1eccc0:
    // 0x1eccc0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1eccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1eccc4:
    // 0x1eccc4: 0x8c83e7b4  lw          $v1, -0x184C($a0)
    ctx->pc = 0x1eccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961076)));
label_1eccc8:
    // 0x1eccc8: 0x8ca2e7b8  lw          $v0, -0x1848($a1)
    ctx->pc = 0x1eccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961080)));
label_1ecccc:
    // 0x1ecccc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eccccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1eccd0:
    // 0x1eccd0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1eccd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1eccd4:
    // 0x1eccd4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1eccd8:
    if (ctx->pc == 0x1ECCD8u) {
        ctx->pc = 0x1ECCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCD4u;
        // 0x1eccd8: 0xac83e7b4  sw          $v1, -0x184C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961076), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECCDCu;
        goto label_1eccdc;
    }
    ctx->pc = 0x1ECCD4u;
    {
        const bool branch_taken_0x1eccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCD4u;
        // 0x1eccd8: 0xac83e7b4  sw          $v1, -0x184C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961076), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eccd4) {
            ctx->pc = 0x1ECCE0u;
            goto label_1ecce0;
        }
    }
    ctx->pc = 0x1ECCDCu;
label_1eccdc:
    // 0x1eccdc: 0xaca3e7b8  sw          $v1, -0x1848($a1)
    ctx->pc = 0x1eccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294961080), GPR_U32(ctx, 3));
label_1ecce0:
    // 0x1ecce0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ecce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ecce4:
    // 0x1ecce4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ecce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ecce8:
    // 0x1ecce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eccec:
    // 0x1eccec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eccecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eccf0:
    // 0x1eccf0: 0x3e00008  jr          $ra
label_1eccf4:
    if (ctx->pc == 0x1ECCF4u) {
        ctx->pc = 0x1ECCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCF0u;
        // 0x1eccf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECCF8u;
        goto label_fallthrough_0x1eccf0;
    }
    ctx->pc = 0x1ECCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCF0u;
        // 0x1eccf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eccf0:
    ctx->pc = 0x1ECCF8u;
}
