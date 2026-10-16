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

// Function: sub_00179C80
// Address: 0x179c80 - 0x179da0
void sub_00179C80_0x179c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179C80_0x179c80");
#endif

    switch (ctx->pc) {
        case 0x179ca0u: goto label_179ca0;
        case 0x179cb0u: goto label_179cb0;
        case 0x179cbcu: goto label_179cbc;
        case 0x179cccu: goto label_179ccc;
        case 0x179d00u: goto label_179d00;
        case 0x179d18u: goto label_179d18;
        case 0x179d2cu: goto label_179d2c;
        case 0x179d44u: goto label_179d44;
        case 0x179d4cu: goto label_179d4c;
        case 0x179d58u: goto label_179d58;
        case 0x179d60u: goto label_179d60;
        case 0x179d68u: goto label_179d68;
        case 0x179d70u: goto label_179d70;
        case 0x179d7cu: goto label_179d7c;
        default: break;
    }

    ctx->pc = 0x179c80u;

    // 0x179c80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179c84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x179c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x179c88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x179c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x179c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x179c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x179c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x179c98: 0xc05f448  jal         func_17D120
    ctx->pc = 0x179C98u;
    SET_GPR_U32(ctx, 31, 0x179CA0u);
    ctx->pc = 0x179C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C98u;
    // 0x179c9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17D120u, 0x179C98u, 0x179CA0u)) {
        return;
    }
    ctx->pc = 0x179CA0u;
label_179ca0:
    // 0x179ca0: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x179ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x179ca4: 0x52000039  beql        $s0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x179CA4u;
    {
        const bool branch_taken_0x179ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x179ca4) {
            ctx->pc = 0x179CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179CA4u;
            // 0x179ca8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179D8Cu;
            goto label_179d8c;
        }
    }
    ctx->pc = 0x179CACu;
    // 0x179cac: 0x8e1200b4  lw          $s2, 0xB4($s0)
    ctx->pc = 0x179cacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_179cb0:
    // 0x179cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cb4: 0xc05e2b2  jal         func_178AC8
    ctx->pc = 0x179CB4u;
    SET_GPR_U32(ctx, 31, 0x179CBCu);
    ctx->pc = 0x179CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CB4u;
    // 0x179cb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178AC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178AC8u, 0x179CB4u, 0x179CBCu)) {
        return;
    }
    ctx->pc = 0x179CBCu;
label_179cbc:
    // 0x179cbc: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x179CBCu;
    {
        const bool branch_taken_0x179cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179cbc) {
            ctx->pc = 0x179CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179CBCu;
            // 0x179cc0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179D80u;
            goto label_179d80;
        }
    }
    ctx->pc = 0x179CC4u;
    // 0x179cc4: 0xc0760d0  jal         func_1D8340
    ctx->pc = 0x179CC4u;
    SET_GPR_U32(ctx, 31, 0x179CCCu);
    ctx->pc = 0x1D8340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8340u, 0x179CC4u, 0x179CCCu)) {
        return;
    }
    ctx->pc = 0x179CCCu;
label_179ccc:
    // 0x179ccc: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x179cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x179cd0: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x179cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x179cd4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x179CD4u;
    {
        const bool branch_taken_0x179cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CD4u;
        // 0x179cd8: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cd4) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179CDCu;
    // 0x179cdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x179cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x179ce0: 0x24426e20  addiu       $v0, $v0, 0x6E20
    ctx->pc = 0x179ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28192));
    // 0x179ce4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x179ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x179ce8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x179ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179cec: 0x800008  jr          $a0
    ctx->pc = 0x179CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179CF4u: goto label_179cf4;
            case 0x179D08u: goto label_179d08;
            case 0x179D20u: goto label_179d20;
            case 0x179D34u: goto label_179d34;
            case 0x179D44u: goto label_179d44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179CECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x179CF4u;
label_179cf4:
    // 0x179cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cf8: 0xc05e534  jal         func_1794D0
    ctx->pc = 0x179CF8u;
    SET_GPR_U32(ctx, 31, 0x179D00u);
    ctx->pc = 0x179CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CF8u;
    // 0x179cfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1794D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1794D0u, 0x179CF8u, 0x179D00u)) {
        return;
    }
    ctx->pc = 0x179D00u;
label_179d00:
    // 0x179d00: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x179D00u;
    {
        const bool branch_taken_0x179d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179d00) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179D08u;
label_179d08:
    // 0x179d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d10: 0xc05e4ba  jal         func_1792E8
    ctx->pc = 0x179D10u;
    SET_GPR_U32(ctx, 31, 0x179D18u);
    ctx->pc = 0x179D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D10u;
    // 0x179d14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1792E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1792E8u, 0x179D10u, 0x179D18u)) {
        return;
    }
    ctx->pc = 0x179D18u;
label_179d18:
    // 0x179d18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x179D18u;
    {
        const bool branch_taken_0x179d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179d18) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179D20u;
label_179d20:
    // 0x179d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d24: 0xc05e3fc  jal         func_178FF0
    ctx->pc = 0x179D24u;
    SET_GPR_U32(ctx, 31, 0x179D2Cu);
    ctx->pc = 0x179D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D24u;
    // 0x179d28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178FF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178FF0u, 0x179D24u, 0x179D2Cu)) {
        return;
    }
    ctx->pc = 0x179D2Cu;
label_179d2c:
    // 0x179d2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x179D2Cu;
    {
        const bool branch_taken_0x179d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179d2c) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179D34u;
label_179d34:
    // 0x179d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d3c: 0xc05e4ba  jal         func_1792E8
    ctx->pc = 0x179D3Cu;
    SET_GPR_U32(ctx, 31, 0x179D44u);
    ctx->pc = 0x179D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D3Cu;
    // 0x179d40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1792E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1792E8u, 0x179D3Cu, 0x179D44u)) {
        return;
    }
    ctx->pc = 0x179D44u;
label_179d44:
    // 0x179d44: 0xc0760d0  jal         func_1D8340
    ctx->pc = 0x179D44u;
    SET_GPR_U32(ctx, 31, 0x179D4Cu);
    ctx->pc = 0x1D8340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8340u, 0x179D44u, 0x179D4Cu)) {
        return;
    }
    ctx->pc = 0x179D4Cu;
label_179d4c:
    // 0x179d4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d50: 0xc05e556  jal         func_179558
    ctx->pc = 0x179D50u;
    SET_GPR_U32(ctx, 31, 0x179D58u);
    ctx->pc = 0x179D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D50u;
    // 0x179d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179558u, 0x179D50u, 0x179D58u)) {
        return;
    }
    ctx->pc = 0x179D58u;
label_179d58:
    // 0x179d58: 0xc051a20  jal         func_146880
    ctx->pc = 0x179D58u;
    SET_GPR_U32(ctx, 31, 0x179D60u);
    ctx->pc = 0x179D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D58u;
    // 0x179d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146880u, 0x179D58u, 0x179D60u)) {
        return;
    }
    ctx->pc = 0x179D60u;
label_179d60:
    // 0x179d60: 0xc0790ec  jal         func_1E43B0
    ctx->pc = 0x179D60u;
    SET_GPR_U32(ctx, 31, 0x179D68u);
    ctx->pc = 0x179D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D60u;
    // 0x179d64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E43B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E43B0u, 0x179D60u, 0x179D68u)) {
        return;
    }
    ctx->pc = 0x179D68u;
label_179d68:
    // 0x179d68: 0xc0760d0  jal         func_1D8340
    ctx->pc = 0x179D68u;
    SET_GPR_U32(ctx, 31, 0x179D70u);
    ctx->pc = 0x1D8340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8340u, 0x179D68u, 0x179D70u)) {
        return;
    }
    ctx->pc = 0x179D70u;
label_179d70:
    // 0x179d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d74: 0xc05e2d4  jal         func_178B50
    ctx->pc = 0x179D74u;
    SET_GPR_U32(ctx, 31, 0x179D7Cu);
    ctx->pc = 0x179D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D74u;
    // 0x179d78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178B50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178B50u, 0x179D74u, 0x179D7Cu)) {
        return;
    }
    ctx->pc = 0x179D7Cu;
label_179d7c:
    // 0x179d7c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x179d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179d80:
    // 0x179d80: 0x5600ffcb  bnel        $s0, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x179D80u;
    {
        const bool branch_taken_0x179d80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x179d80) {
            ctx->pc = 0x179D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179D80u;
            // 0x179d84: 0x8e1200b4  lw          $s2, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179cb0;
        }
    }
    ctx->pc = 0x179D88u;
    // 0x179d88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x179d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_179d8c:
    // 0x179d8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x179d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179d90: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x179d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179d98: 0x3e00008  jr          $ra
    ctx->pc = 0x179D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D98u;
        // 0x179d9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179DA0u;
}
