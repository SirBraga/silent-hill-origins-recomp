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

// Function: sub_00188CF8
// Address: 0x188cf8 - 0x188ed0
void sub_00188CF8_0x188cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188CF8_0x188cf8");
#endif

    switch (ctx->pc) {
        case 0x188d18u: goto label_188d18;
        case 0x188d24u: goto label_188d24;
        case 0x188d38u: goto label_188d38;
        case 0x188d50u: goto label_188d50;
        case 0x188da0u: goto label_188da0;
        case 0x188db8u: goto label_188db8;
        case 0x188df0u: goto label_188df0;
        case 0x188e48u: goto label_188e48;
        case 0x188ea8u: goto label_188ea8;
        default: break;
    }

    ctx->pc = 0x188cf8u;

    // 0x188cf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x188cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x188cfc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x188cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x188d00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x188d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x188d04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x188d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x188d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x188d10: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x188D10u;
    SET_GPR_U32(ctx, 31, 0x188D18u);
    ctx->pc = 0x188D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D10u;
    // 0x188d14: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x188D10u, 0x188D18u)) {
        return;
    }
    ctx->pc = 0x188D18u;
label_188d18:
    // 0x188d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x188d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d1c: 0xc061fca  jal         func_187F28
    ctx->pc = 0x188D1Cu;
    SET_GPR_U32(ctx, 31, 0x188D24u);
    ctx->pc = 0x188D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D1Cu;
    // 0x188d20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x187F28u, 0x188D1Cu, 0x188D24u)) {
        return;
    }
    ctx->pc = 0x188D24u;
label_188d24:
    // 0x188d24: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x188d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x188d28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x188d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d2c: 0x8c46bd20  lw          $a2, -0x42E0($v0)
    ctx->pc = 0x188d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6CBD20u));
    // 0x188d30: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x188D30u;
    SET_GPR_U32(ctx, 31, 0x188D38u);
    ctx->pc = 0x188D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D30u;
    // 0x188d34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x188D30u, 0x188D38u)) {
        return;
    }
    ctx->pc = 0x188D38u;
label_188d38:
    // 0x188d38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x188d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188d3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x188d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188d40: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x188D40u;
    {
        const bool branch_taken_0x188d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D40u;
        // 0x188d44: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d40) {
            ctx->pc = 0x188EBCu;
            goto label_188ebc;
        }
    }
    ctx->pc = 0x188D48u;
    // 0x188d48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188d4c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x188d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188d50:
    // 0x188d50: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x188d50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x188d54: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x188D54u;
    {
        const bool branch_taken_0x188d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D54u;
        // 0x188d58: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d54) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188D5Cu;
    // 0x188d5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x188d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x188d60: 0x24428b20  addiu       $v0, $v0, -0x74E0
    ctx->pc = 0x188d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937376));
    // 0x188d64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x188d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188d68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x188d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188d6c: 0x800008  jr          $a0
    ctx->pc = 0x188D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188D74u: goto label_188d74;
            case 0x188D80u: goto label_188d80;
            case 0x188D8Cu: goto label_188d8c;
            case 0x188DA8u: goto label_188da8;
            case 0x188DC0u: goto label_188dc0;
            case 0x188DE0u: goto label_188de0;
            case 0x188DF8u: goto label_188df8;
            case 0x188E18u: goto label_188e18;
            case 0x188E38u: goto label_188e38;
            case 0x188E50u: goto label_188e50;
            case 0x188E70u: goto label_188e70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188D6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x188D74u;
label_188d74:
    // 0x188d74: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x188d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188d78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188D78u;
    {
        const bool branch_taken_0x188d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D78u;
        // 0x188d7c: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d78) {
            ctx->pc = 0x188D94u;
            goto label_188d94;
        }
    }
    ctx->pc = 0x188D80u;
label_188d80:
    // 0x188d80: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x188d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188d84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x188D84u;
    {
        const bool branch_taken_0x188d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D84u;
        // 0x188d88: 0x2624008c  addiu       $a0, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d84) {
            ctx->pc = 0x188D94u;
            goto label_188d94;
        }
    }
    ctx->pc = 0x188D8Cu;
label_188d8c:
    // 0x188d8c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x188d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188d90: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x188d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_188d94:
    // 0x188d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x188d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d98: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x188D98u;
    SET_GPR_U32(ctx, 31, 0x188DA0u);
    ctx->pc = 0x188D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D98u;
    // 0x188d9c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x188D98u, 0x188DA0u)) {
        return;
    }
    ctx->pc = 0x188DA0u;
label_188da0:
    // 0x188da0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x188DA0u;
    {
        const bool branch_taken_0x188da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DA0u;
        // 0x188da4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188da0) {
            ctx->pc = 0x188E90u;
            goto label_188e90;
        }
    }
    ctx->pc = 0x188DA8u;
label_188da8:
    // 0x188da8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x188da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188db0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x188DB0u;
    SET_GPR_U32(ctx, 31, 0x188DB8u);
    ctx->pc = 0x188DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DB0u;
    // 0x188db4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x188DB0u, 0x188DB8u)) {
        return;
    }
    ctx->pc = 0x188DB8u;
label_188db8:
    // 0x188db8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x188DB8u;
    {
        const bool branch_taken_0x188db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DB8u;
        // 0x188dbc: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188db8) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188DC0u;
label_188dc0:
    // 0x188dc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188dc4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x188dc8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188DC8u;
    {
        const bool branch_taken_0x188dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DC8u;
        // 0x188dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188dc8) {
            ctx->pc = 0x188DD8u;
            goto label_188dd8;
        }
    }
    ctx->pc = 0x188DD0u;
    // 0x188dd0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x188DD0u;
    {
        const bool branch_taken_0x188dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DD0u;
        // 0x188dd4: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188dd0) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188DD8u;
label_188dd8:
    // 0x188dd8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x188DD8u;
    {
        const bool branch_taken_0x188dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DD8u;
        // 0x188ddc: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188dd8) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188DE0u;
label_188de0:
    // 0x188de0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x188de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188de8: 0xc081b56  jal         func_206D58
    ctx->pc = 0x188DE8u;
    SET_GPR_U32(ctx, 31, 0x188DF0u);
    ctx->pc = 0x188DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DE8u;
    // 0x188dec: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x188DE8u, 0x188DF0u)) {
        return;
    }
    ctx->pc = 0x188DF0u;
label_188df0:
    // 0x188df0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x188DF0u;
    {
        const bool branch_taken_0x188df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DF0u;
        // 0x188df4: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188df0) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188DF8u;
label_188df8:
    // 0x188df8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188dfc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x188e00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188E00u;
    {
        const bool branch_taken_0x188e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E00u;
        // 0x188e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e00) {
            ctx->pc = 0x188E10u;
            goto label_188e10;
        }
    }
    ctx->pc = 0x188E08u;
    // 0x188e08: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x188E08u;
    {
        const bool branch_taken_0x188e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E08u;
        // 0x188e0c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e08) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188E10u;
label_188e10:
    // 0x188e10: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x188E10u;
    {
        const bool branch_taken_0x188e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E10u;
        // 0x188e14: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e10) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188E18u;
label_188e18:
    // 0x188e18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188e1c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x188e20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188E20u;
    {
        const bool branch_taken_0x188e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E20u;
        // 0x188e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e20) {
            ctx->pc = 0x188E30u;
            goto label_188e30;
        }
    }
    ctx->pc = 0x188E28u;
    // 0x188e28: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x188E28u;
    {
        const bool branch_taken_0x188e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E28u;
        // 0x188e2c: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e28) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188E30u;
label_188e30:
    // 0x188e30: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x188E30u;
    {
        const bool branch_taken_0x188e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E30u;
        // 0x188e34: 0xae2000a4  sw          $zero, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e30) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188E38u;
label_188e38:
    // 0x188e38: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x188e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e40: 0xc081b56  jal         func_206D58
    ctx->pc = 0x188E40u;
    SET_GPR_U32(ctx, 31, 0x188E48u);
    ctx->pc = 0x188E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E40u;
    // 0x188e44: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x188E40u, 0x188E48u)) {
        return;
    }
    ctx->pc = 0x188E48u;
label_188e48:
    // 0x188e48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x188E48u;
    {
        const bool branch_taken_0x188e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E48u;
        // 0x188e4c: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e48) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188E50u;
label_188e50:
    // 0x188e50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188e54: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x188e58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188E58u;
    {
        const bool branch_taken_0x188e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E58u;
        // 0x188e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e58) {
            ctx->pc = 0x188E68u;
            goto label_188e68;
        }
    }
    ctx->pc = 0x188E60u;
    // 0x188e60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x188E60u;
    {
        const bool branch_taken_0x188e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E60u;
        // 0x188e64: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e60) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188E68u;
label_188e68:
    // 0x188e68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x188E68u;
    {
        const bool branch_taken_0x188e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E68u;
        // 0x188e6c: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e68) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188E70u;
label_188e70:
    // 0x188e70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188e74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x188e78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188E78u;
    {
        const bool branch_taken_0x188e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E78u;
        // 0x188e7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e78) {
            ctx->pc = 0x188E88u;
            goto label_188e88;
        }
    }
    ctx->pc = 0x188E80u;
    // 0x188e80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188E80u;
    {
        const bool branch_taken_0x188e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E80u;
        // 0x188e84: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e80) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188E88u;
label_188e88:
    // 0x188e88: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x188e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_188e8c:
    // 0x188e8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x188e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_188e90:
    // 0x188e90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x188e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x188e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188e98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x188e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188e9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x188e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188ea0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x188EA0u;
    SET_GPR_U32(ctx, 31, 0x188EA8u);
    ctx->pc = 0x188EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EA0u;
    // 0x188ea4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x188EA0u, 0x188EA8u)) {
        return;
    }
    ctx->pc = 0x188EA8u;
label_188ea8:
    // 0x188ea8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188eac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188eb0: 0x5460ffa7  bnel        $v1, $zero, . + 4 + (-0x59 << 2)
    ctx->pc = 0x188EB0u;
    {
        const bool branch_taken_0x188eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188eb0) {
            ctx->pc = 0x188EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188EB0u;
            // 0x188eb4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188d50;
        }
    }
    ctx->pc = 0x188EB8u;
    // 0x188eb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x188eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_188ebc:
    // 0x188ebc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x188ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x188ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x188EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EC4u;
        // 0x188ec8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188ECCu;
    // 0x188ecc: 0x0  nop
    ctx->pc = 0x188eccu;
    // NOP
    ctx->pc = 0x188ed0u;
}
