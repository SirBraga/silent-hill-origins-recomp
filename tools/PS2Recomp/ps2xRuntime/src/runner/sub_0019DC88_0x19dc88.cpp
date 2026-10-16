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

// Function: sub_0019DC88
// Address: 0x19dc88 - 0x19dd90
void sub_0019DC88_0x19dc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DC88_0x19dc88");
#endif

    switch (ctx->pc) {
        case 0x19dcb0u: goto label_19dcb0;
        case 0x19dcbcu: goto label_19dcbc;
        case 0x19dcd0u: goto label_19dcd0;
        case 0x19dcd8u: goto label_19dcd8;
        case 0x19dcecu: goto label_19dcec;
        case 0x19dcfcu: goto label_19dcfc;
        case 0x19dd08u: goto label_19dd08;
        case 0x19dd10u: goto label_19dd10;
        case 0x19dd1cu: goto label_19dd1c;
        case 0x19dd28u: goto label_19dd28;
        case 0x19dd30u: goto label_19dd30;
        case 0x19dd3cu: goto label_19dd3c;
        case 0x19dd44u: goto label_19dd44;
        case 0x19dd58u: goto label_19dd58;
        case 0x19dd6cu: goto label_19dd6c;
        default: break;
    }

    ctx->pc = 0x19dc88u;

    // 0x19dc88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19dc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19dc8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19dc90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19dc94: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19dc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19dc98: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19dc9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19dca0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19dca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19dca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19dca8: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19DCA8u;
    SET_GPR_U32(ctx, 31, 0x19DCB0u);
    ctx->pc = 0x19DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCA8u;
    // 0x19dcac: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19DCA8u, 0x19DCB0u)) {
        return;
    }
    ctx->pc = 0x19DCB0u;
label_19dcb0:
    // 0x19dcb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19dcb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcb4: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19DCB4u;
    SET_GPR_U32(ctx, 31, 0x19DCBCu);
    ctx->pc = 0x19DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCB4u;
    // 0x19dcb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19DCB4u, 0x19DCBCu)) {
        return;
    }
    ctx->pc = 0x19DCBCu;
label_19dcbc:
    // 0x19dcbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19dcc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19dcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcc4: 0x2463abf8  addiu       $v1, $v1, -0x5408
    ctx->pc = 0x19dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945784));
    // 0x19dcc8: 0xc095674  jal         func_2559D0
    ctx->pc = 0x19DCC8u;
    SET_GPR_U32(ctx, 31, 0x19DCD0u);
    ctx->pc = 0x19DCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCC8u;
    // 0x19dccc: 0xae63003c  sw          $v1, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2559D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2559D0u, 0x19DCC8u, 0x19DCD0u)) {
        return;
    }
    ctx->pc = 0x19DCD0u;
label_19dcd0:
    // 0x19dcd0: 0xc0955ca  jal         func_255728
    ctx->pc = 0x19DCD0u;
    SET_GPR_U32(ctx, 31, 0x19DCD8u);
    ctx->pc = 0x19DCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCD0u;
    // 0x19dcd4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255728u, 0x19DCD0u, 0x19DCD8u)) {
        return;
    }
    ctx->pc = 0x19DCD8u;
label_19dcd8:
    // 0x19dcd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19dcd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcdc: 0x5220001a  beql        $s1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x19DCDCu;
    {
        const bool branch_taken_0x19dcdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dcdc) {
            ctx->pc = 0x19DCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DCDCu;
            // 0x19dce0: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DD48u;
            goto label_19dd48;
        }
    }
    ctx->pc = 0x19DCE4u;
    // 0x19dce4: 0xc089892  jal         func_226248
    ctx->pc = 0x19DCE4u;
    SET_GPR_U32(ctx, 31, 0x19DCECu);
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x19DCE4u, 0x19DCECu)) {
        return;
    }
    ctx->pc = 0x19DCECu;
label_19dcec:
    // 0x19dcec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19dcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19dcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcf4: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x19DCF4u;
    SET_GPR_U32(ctx, 31, 0x19DCFCu);
    ctx->pc = 0x19DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCF4u;
    // 0x19dcf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x19DCF4u, 0x19DCFCu)) {
        return;
    }
    ctx->pc = 0x19DCFCu;
label_19dcfc:
    // 0x19dcfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19dcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd00: 0xc095622  jal         func_255888
    ctx->pc = 0x19DD00u;
    SET_GPR_U32(ctx, 31, 0x19DD08u);
    ctx->pc = 0x19DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD00u;
    // 0x19dd04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255888u, 0x19DD00u, 0x19DD08u)) {
        return;
    }
    ctx->pc = 0x19DD08u;
label_19dd08:
    // 0x19dd08: 0xc076198  jal         func_1D8660
    ctx->pc = 0x19DD08u;
    SET_GPR_U32(ctx, 31, 0x19DD10u);
    ctx->pc = 0x1D8660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8660u, 0x19DD08u, 0x19DD10u)) {
        return;
    }
    ctx->pc = 0x19DD10u;
label_19dd10:
    // 0x19dd10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19dd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd14: 0xc0a4b48  jal         func_292D20
    ctx->pc = 0x19DD14u;
    SET_GPR_U32(ctx, 31, 0x19DD1Cu);
    ctx->pc = 0x19DD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD14u;
    // 0x19dd18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x292D20u, 0x19DD14u, 0x19DD1Cu)) {
        return;
    }
    ctx->pc = 0x19DD1Cu;
label_19dd1c:
    // 0x19dd1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19dd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd20: 0xc09562e  jal         func_2558B8
    ctx->pc = 0x19DD20u;
    SET_GPR_U32(ctx, 31, 0x19DD28u);
    ctx->pc = 0x19DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD20u;
    // 0x19dd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2558B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2558B8u, 0x19DD20u, 0x19DD28u)) {
        return;
    }
    ctx->pc = 0x19DD28u;
label_19dd28:
    // 0x19dd28: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x19DD28u;
    SET_GPR_U32(ctx, 31, 0x19DD30u);
    ctx->pc = 0x19DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD28u;
    // 0x19dd2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x19DD28u, 0x19DD30u)) {
        return;
    }
    ctx->pc = 0x19DD30u;
label_19dd30:
    // 0x19dd30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19dd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd34: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x19DD34u;
    SET_GPR_U32(ctx, 31, 0x19DD3Cu);
    ctx->pc = 0x19DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD34u;
    // 0x19dd38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x19DD34u, 0x19DD3Cu)) {
        return;
    }
    ctx->pc = 0x19DD3Cu;
label_19dd3c:
    // 0x19dd3c: 0xc0898d2  jal         func_226348
    ctx->pc = 0x19DD3Cu;
    SET_GPR_U32(ctx, 31, 0x19DD44u);
    ctx->pc = 0x19DD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD3Cu;
    // 0x19dd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x19DD3Cu, 0x19DD44u)) {
        return;
    }
    ctx->pc = 0x19DD44u;
label_19dd44:
    // 0x19dd44: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x19dd44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_19dd48:
    // 0x19dd48: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x19DD48u;
    {
        const bool branch_taken_0x19dd48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dd48) {
            ctx->pc = 0x19DD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DD48u;
            // 0x19dd4c: 0xae720018  sw          $s2, 0x18($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DD70u;
            goto label_19dd70;
        }
    }
    ctx->pc = 0x19DD50u;
    // 0x19dd50: 0xc086cea  jal         func_21B3A8
    ctx->pc = 0x19DD50u;
    SET_GPR_U32(ctx, 31, 0x19DD58u);
    ctx->pc = 0x19DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD50u;
    // 0x19dd54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B3A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B3A8u, 0x19DD50u, 0x19DD58u)) {
        return;
    }
    ctx->pc = 0x19DD58u;
label_19dd58:
    // 0x19dd58: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x19dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x19dd5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19dd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd60: 0x24a5db38  addiu       $a1, $a1, -0x24C8
    ctx->pc = 0x19dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957880));
    // 0x19dd64: 0xc095966  jal         func_256598
    ctx->pc = 0x19DD64u;
    SET_GPR_U32(ctx, 31, 0x19DD6Cu);
    ctx->pc = 0x19DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD64u;
    // 0x19dd68: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256598u, 0x19DD64u, 0x19DD6Cu)) {
        return;
    }
    ctx->pc = 0x19DD6Cu;
label_19dd6c:
    // 0x19dd6c: 0xae720018  sw          $s2, 0x18($s3)
    ctx->pc = 0x19dd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 18));
label_19dd70:
    // 0x19dd70: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x19dd70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19dd74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19dd78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19dd78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dd7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19dd7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dd80: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19dd80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dd84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19dd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dd88: 0x3e00008  jr          $ra
    ctx->pc = 0x19DD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD88u;
        // 0x19dd8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DD90u;
}
