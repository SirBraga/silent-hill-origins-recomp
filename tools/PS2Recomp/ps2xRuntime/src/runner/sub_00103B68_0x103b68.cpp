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

// Function: sub_00103B68
// Address: 0x103b68 - 0x103cb8
void sub_00103B68_0x103b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103B68_0x103b68");
#endif

    switch (ctx->pc) {
        case 0x103b84u: goto label_103b84;
        case 0x103b90u: goto label_103b90;
        case 0x103ba8u: goto label_103ba8;
        case 0x103bb8u: goto label_103bb8;
        case 0x103bd0u: goto label_103bd0;
        case 0x103becu: goto label_103bec;
        case 0x103c04u: goto label_103c04;
        case 0x103c2cu: goto label_103c2c;
        case 0x103c3cu: goto label_103c3c;
        case 0x103c54u: goto label_103c54;
        case 0x103c5cu: goto label_103c5c;
        case 0x103c88u: goto label_103c88;
        case 0x103ca0u: goto label_103ca0;
        default: break;
    }

    ctx->pc = 0x103b68u;

    // 0x103b68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103b6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x103b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x103b70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x103b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x103b74: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x103b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x103b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x103b7c: 0xc04ee4a  jal         func_13B928
    ctx->pc = 0x103B7Cu;
    SET_GPR_U32(ctx, 31, 0x103B84u);
    ctx->pc = 0x103B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B7Cu;
    // 0x103b80: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B928u, 0x103B7Cu, 0x103B84u)) {
        return;
    }
    ctx->pc = 0x103B84u;
label_103b84:
    // 0x103b84: 0x8e300104  lw          $s0, 0x104($s1)
    ctx->pc = 0x103b84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x103b88: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x103B88u;
    SET_GPR_U32(ctx, 31, 0x103B90u);
    ctx->pc = 0x103B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B88u;
    // 0x103b8c: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x103B88u, 0x103B90u)) {
        return;
    }
    ctx->pc = 0x103B90u;
label_103b90:
    // 0x103b90: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x103B90u;
    {
        const bool branch_taken_0x103b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103b90) {
            ctx->pc = 0x103B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103B90u;
            // 0x103b94: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103BBCu;
            goto label_103bbc;
        }
    }
    ctx->pc = 0x103B98u;
    // 0x103b98: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103B98u;
    {
        const bool branch_taken_0x103b98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x103b98) {
            ctx->pc = 0x103BB0u;
            goto label_103bb0;
        }
    }
    ctx->pc = 0x103BA0u;
    // 0x103ba0: 0xc07795e  jal         func_1DE578
    ctx->pc = 0x103BA0u;
    SET_GPR_U32(ctx, 31, 0x103BA8u);
    ctx->pc = 0x103BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BA0u;
    // 0x103ba4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE578u, 0x103BA0u, 0x103BA8u)) {
        return;
    }
    ctx->pc = 0x103BA8u;
label_103ba8:
    // 0x103ba8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x103BA8u;
    {
        const bool branch_taken_0x103ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BA8u;
        // 0x103bac: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ba8) {
            ctx->pc = 0x103BBCu;
            goto label_103bbc;
        }
    }
    ctx->pc = 0x103BB0u;
label_103bb0:
    // 0x103bb0: 0xc077968  jal         func_1DE5A0
    ctx->pc = 0x103BB0u;
    SET_GPR_U32(ctx, 31, 0x103BB8u);
    ctx->pc = 0x103BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BB0u;
    // 0x103bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE5A0u, 0x103BB0u, 0x103BB8u)) {
        return;
    }
    ctx->pc = 0x103BB8u;
label_103bb8:
    // 0x103bb8: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x103bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_103bbc:
    // 0x103bbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103BBCu;
    {
        const bool branch_taken_0x103bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BBCu;
        // 0x103bc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bbc) {
            ctx->pc = 0x103BD0u;
            goto label_103bd0;
        }
    }
    ctx->pc = 0x103BC4u;
    // 0x103bc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x103bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103bc8: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x103BC8u;
    SET_GPR_U32(ctx, 31, 0x103BD0u);
    ctx->pc = 0x103BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BC8u;
    // 0x103bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x103BC8u, 0x103BD0u)) {
        return;
    }
    ctx->pc = 0x103BD0u;
label_103bd0:
    // 0x103bd0: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x103bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x103bd4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x103BD4u;
    {
        const bool branch_taken_0x103bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BD4u;
        // 0x103bd8: 0x2630004c  addiu       $s0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bd4) {
            ctx->pc = 0x103BF4u;
            goto label_103bf4;
        }
    }
    ctx->pc = 0x103BDCu;
    // 0x103bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103be4: 0xc041f0c  jal         func_107C30
    ctx->pc = 0x103BE4u;
    SET_GPR_U32(ctx, 31, 0x103BECu);
    ctx->pc = 0x103BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BE4u;
    // 0x103be8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C30u, 0x103BE4u, 0x103BECu)) {
        return;
    }
    ctx->pc = 0x103BECu;
label_103bec:
    // 0x103bec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x103BECu;
    {
        const bool branch_taken_0x103bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BECu;
        // 0x103bf0: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bec) {
            ctx->pc = 0x103C0Cu;
            goto label_103c0c;
        }
    }
    ctx->pc = 0x103BF4u;
label_103bf4:
    // 0x103bf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x103bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x103bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103bfc: 0xc041f0c  jal         func_107C30
    ctx->pc = 0x103BFCu;
    SET_GPR_U32(ctx, 31, 0x103C04u);
    ctx->pc = 0x103C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BFCu;
    // 0x103c00: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C30u, 0x103BFCu, 0x103C04u)) {
        return;
    }
    ctx->pc = 0x103C04u;
label_103c04:
    // 0x103c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103c08: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x103c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_103c0c:
    // 0x103c0c: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x103c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x103c10: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x103C10u;
    {
        const bool branch_taken_0x103c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103c10) {
            ctx->pc = 0x103C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103C10u;
            // 0x103c14: 0x8e2200fc  lw          $v0, 0xFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103C60u;
            goto label_103c60;
        }
    }
    ctx->pc = 0x103C18u;
    // 0x103c18: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x103c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x103c1c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x103C1Cu;
    {
        const bool branch_taken_0x103c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103c1c) {
            ctx->pc = 0x103C54u;
            goto label_103c54;
        }
    }
    ctx->pc = 0x103C24u;
    // 0x103c24: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x103C24u;
    SET_GPR_U32(ctx, 31, 0x103C2Cu);
    ctx->pc = 0x103C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C24u;
    // 0x103c28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x103C24u, 0x103C2Cu)) {
        return;
    }
    ctx->pc = 0x103C2Cu;
label_103c2c:
    // 0x103c2c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x103C2Cu;
    {
        const bool branch_taken_0x103c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103c2c) {
            ctx->pc = 0x103C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103C2Cu;
            // 0x103c30: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103C40u;
            goto label_103c40;
        }
    }
    ctx->pc = 0x103C34u;
    // 0x103c34: 0xc07795e  jal         func_1DE578
    ctx->pc = 0x103C34u;
    SET_GPR_U32(ctx, 31, 0x103C3Cu);
    ctx->pc = 0x103C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C34u;
    // 0x103c38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE578u, 0x103C34u, 0x103C3Cu)) {
        return;
    }
    ctx->pc = 0x103C3Cu;
label_103c3c:
    // 0x103c3c: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x103c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_103c40:
    // 0x103c40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103C40u;
    {
        const bool branch_taken_0x103c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C40u;
        // 0x103c44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c40) {
            ctx->pc = 0x103C54u;
            goto label_103c54;
        }
    }
    ctx->pc = 0x103C48u;
    // 0x103c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c4c: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x103C4Cu;
    SET_GPR_U32(ctx, 31, 0x103C54u);
    ctx->pc = 0x103C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C4Cu;
    // 0x103c50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x103C4Cu, 0x103C54u)) {
        return;
    }
    ctx->pc = 0x103C54u;
label_103c54:
    // 0x103c54: 0xc041f10  jal         func_107C40
    ctx->pc = 0x103C54u;
    SET_GPR_U32(ctx, 31, 0x103C5Cu);
    ctx->pc = 0x103C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C54u;
    // 0x103c58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C40u, 0x103C54u, 0x103C5Cu)) {
        return;
    }
    ctx->pc = 0x103C5Cu;
label_103c5c:
    // 0x103c5c: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x103c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_103c60:
    // 0x103c60: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x103C60u;
    {
        const bool branch_taken_0x103c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C60u;
        // 0x103c64: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c60) {
            ctx->pc = 0x103CA0u;
            goto label_103ca0;
        }
    }
    ctx->pc = 0x103C68u;
    // 0x103c68: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x103c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x103c6c: 0x261095a0  addiu       $s0, $s0, -0x6A60
    ctx->pc = 0x103c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940064));
    // 0x103c70: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x103c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x103c74: 0x24a5bcf0  addiu       $a1, $a1, -0x4310
    ctx->pc = 0x103c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950128));
    // 0x103c78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x103c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c80: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x103C80u;
    SET_GPR_U32(ctx, 31, 0x103C88u);
    ctx->pc = 0x103C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C80u;
    // 0x103c84: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x103C80u, 0x103C88u)) {
        return;
    }
    ctx->pc = 0x103C88u;
label_103c88:
    // 0x103c88: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x103c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x103c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c90: 0x24a5bcf8  addiu       $a1, $a1, -0x4308
    ctx->pc = 0x103c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950136));
    // 0x103c94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x103c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c98: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x103C98u;
    SET_GPR_U32(ctx, 31, 0x103CA0u);
    ctx->pc = 0x103C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C98u;
    // 0x103c9c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x103C98u, 0x103CA0u)) {
        return;
    }
    ctx->pc = 0x103CA0u;
label_103ca0:
    // 0x103ca0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x103ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103ca4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x103ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103ca8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x103ca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x103CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CB0u;
        // 0x103cb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103CB8u;
}
