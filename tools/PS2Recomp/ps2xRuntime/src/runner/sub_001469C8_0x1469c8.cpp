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

// Function: sub_001469C8
// Address: 0x1469c8 - 0x146a70
void sub_001469C8_0x1469c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001469C8_0x1469c8");
#endif

    switch (ctx->pc) {
        case 0x1469c8u: goto label_1469c8;
        case 0x1469ccu: goto label_1469cc;
        case 0x1469d0u: goto label_1469d0;
        case 0x1469d4u: goto label_1469d4;
        case 0x1469d8u: goto label_1469d8;
        case 0x1469dcu: goto label_1469dc;
        case 0x1469e0u: goto label_1469e0;
        case 0x1469e4u: goto label_1469e4;
        case 0x1469e8u: goto label_1469e8;
        case 0x1469ecu: goto label_1469ec;
        case 0x1469f0u: goto label_1469f0;
        case 0x1469f4u: goto label_1469f4;
        case 0x1469f8u: goto label_1469f8;
        case 0x1469fcu: goto label_1469fc;
        case 0x146a00u: goto label_146a00;
        case 0x146a04u: goto label_146a04;
        case 0x146a08u: goto label_146a08;
        case 0x146a0cu: goto label_146a0c;
        case 0x146a10u: goto label_146a10;
        case 0x146a14u: goto label_146a14;
        case 0x146a18u: goto label_146a18;
        case 0x146a1cu: goto label_146a1c;
        case 0x146a20u: goto label_146a20;
        case 0x146a24u: goto label_146a24;
        case 0x146a28u: goto label_146a28;
        case 0x146a2cu: goto label_146a2c;
        case 0x146a30u: goto label_146a30;
        case 0x146a34u: goto label_146a34;
        case 0x146a38u: goto label_146a38;
        case 0x146a3cu: goto label_146a3c;
        case 0x146a40u: goto label_146a40;
        case 0x146a44u: goto label_146a44;
        case 0x146a48u: goto label_146a48;
        case 0x146a4cu: goto label_146a4c;
        case 0x146a50u: goto label_146a50;
        case 0x146a54u: goto label_146a54;
        case 0x146a58u: goto label_146a58;
        case 0x146a5cu: goto label_146a5c;
        case 0x146a60u: goto label_146a60;
        case 0x146a64u: goto label_146a64;
        case 0x146a68u: goto label_146a68;
        case 0x146a6cu: goto label_146a6c;
        default: break;
    }

    ctx->pc = 0x1469c8u;

label_1469c8:
    // 0x1469c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1469c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1469cc:
    // 0x1469cc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1469ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1469d0:
    // 0x1469d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1469d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1469d4:
    // 0x1469d4: 0x8c50847c  lw          $s0, -0x7B84($v0)
    ctx->pc = 0x1469d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935676)));
label_1469d8:
    // 0x1469d8: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1469dc:
    if (ctx->pc == 0x1469DCu) {
        ctx->pc = 0x1469DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469D8u;
        // 0x1469dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1469E0u;
        goto label_1469e0;
    }
    ctx->pc = 0x1469D8u;
    {
        const bool branch_taken_0x1469d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1469DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469D8u;
        // 0x1469dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469d8) {
            ctx->pc = 0x146A2Cu;
            goto label_146a2c;
        }
    }
    ctx->pc = 0x1469E0u;
label_1469e0:
    // 0x1469e0: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1469e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_1469e4:
    // 0x1469e4: 0x0  nop
    ctx->pc = 0x1469e4u;
    // NOP
label_1469e8:
    // 0x1469e8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1469ec:
    if (ctx->pc == 0x1469ECu) {
        ctx->pc = 0x1469ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469E8u;
        // 0x1469ec: 0x8e1000ec  lw          $s0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1469F0u;
        goto label_1469f0;
    }
    ctx->pc = 0x1469E8u;
    {
        const bool branch_taken_0x1469e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1469e8) {
            ctx->pc = 0x1469ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1469E8u;
            // 0x1469ec: 0x8e1000ec  lw          $s0, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146A24u;
            goto label_146a24;
        }
    }
    ctx->pc = 0x1469F0u;
label_1469f0:
    // 0x1469f0: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x1469f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1469f4:
    // 0x1469f4: 0xc097ae8  jal         func_25EBA0
label_1469f8:
    if (ctx->pc == 0x1469F8u) {
        ctx->pc = 0x1469F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469F4u;
        // 0x1469f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1469FCu;
        goto label_1469fc;
    }
    ctx->pc = 0x1469F4u;
    SET_GPR_U32(ctx, 31, 0x1469FCu);
    ctx->pc = 0x1469F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1469F4u;
    // 0x1469f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EBA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EBA0u, 0x1469F4u, 0x1469FCu)) {
        return;
    }
    ctx->pc = 0x1469FCu;
label_1469fc:
    // 0x1469fc: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x1469fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_146a00:
    // 0x146a00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_146a04:
    if (ctx->pc == 0x146A04u) {
        ctx->pc = 0x146A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A00u;
        // 0x146a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146A08u;
        goto label_146a08;
    }
    ctx->pc = 0x146A00u;
    {
        const bool branch_taken_0x146a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A00u;
        // 0x146a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a00) {
            ctx->pc = 0x146A18u;
            goto label_146a18;
        }
    }
    ctx->pc = 0x146A08u;
label_146a08:
    // 0x146a08: 0xc050d0c  jal         func_143430
label_146a0c:
    if (ctx->pc == 0x146A0Cu) {
        ctx->pc = 0x146A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A08u;
        // 0x146a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146A10u;
        goto label_146a10;
    }
    ctx->pc = 0x146A08u;
    SET_GPR_U32(ctx, 31, 0x146A10u);
    ctx->pc = 0x146A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146A08u;
    // 0x146a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x143430u, 0x146A08u, 0x146A10u)) {
        return;
    }
    ctx->pc = 0x146A10u;
label_146a10:
    // 0x146a10: 0x10000004  b           . + 4 + (0x4 << 2)
label_146a14:
    if (ctx->pc == 0x146A14u) {
        ctx->pc = 0x146A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A10u;
        // 0x146a14: 0x8e1000ec  lw          $s0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146A18u;
        goto label_146a18;
    }
    ctx->pc = 0x146A10u;
    {
        const bool branch_taken_0x146a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A10u;
        // 0x146a14: 0x8e1000ec  lw          $s0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a10) {
            ctx->pc = 0x146A24u;
            goto label_146a24;
        }
    }
    ctx->pc = 0x146A18u;
label_146a18:
    // 0x146a18: 0xc050d0c  jal         func_143430
label_146a1c:
    if (ctx->pc == 0x146A1Cu) {
        ctx->pc = 0x146A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A18u;
        // 0x146a1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146A20u;
        goto label_146a20;
    }
    ctx->pc = 0x146A18u;
    SET_GPR_U32(ctx, 31, 0x146A20u);
    ctx->pc = 0x146A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146A18u;
    // 0x146a1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x143430u, 0x146A18u, 0x146A20u)) {
        return;
    }
    ctx->pc = 0x146A20u;
label_146a20:
    // 0x146a20: 0x8e1000ec  lw          $s0, 0xEC($s0)
    ctx->pc = 0x146a20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_146a24:
    // 0x146a24: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
label_146a28:
    if (ctx->pc == 0x146A28u) {
        ctx->pc = 0x146A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A24u;
        // 0x146a28: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146A2Cu;
        goto label_146a2c;
    }
    ctx->pc = 0x146A24u;
    {
        const bool branch_taken_0x146a24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x146a24) {
            ctx->pc = 0x146A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146A24u;
            // 0x146a28: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1469E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1469e8;
        }
    }
    ctx->pc = 0x146A2Cu;
label_146a2c:
    // 0x146a2c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x146a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_146a30:
    // 0x146a30: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x146a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_146a34:
    // 0x146a34: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x146a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_146a38:
    // 0x146a38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x146a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_146a3c:
    // 0x146a3c: 0x40f809  jalr        $v0
label_146a40:
    if (ctx->pc == 0x146A40u) {
        ctx->pc = 0x146A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A3Cu;
        // 0x146a40: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146A44u;
        goto label_146a44;
    }
    ctx->pc = 0x146A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x146A44u);
        ctx->pc = 0x146A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A3Cu;
        // 0x146a40: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146A3Cu, 0x146A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146A44u;
label_146a44:
    // 0x146a44: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x146a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_146a48:
    // 0x146a48: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x146a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_146a4c:
    // 0x146a4c: 0x40f809  jalr        $v0
label_146a50:
    if (ctx->pc == 0x146A50u) {
        ctx->pc = 0x146A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A4Cu;
        // 0x146a50: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146A54u;
        goto label_146a54;
    }
    ctx->pc = 0x146A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x146A54u);
        ctx->pc = 0x146A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A4Cu;
        // 0x146a50: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146A4Cu, 0x146A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146A54u;
label_146a54:
    // 0x146a54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x146a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_146a58:
    // 0x146a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_146a5c:
    // 0x146a5c: 0x3e00008  jr          $ra
label_146a60:
    if (ctx->pc == 0x146A60u) {
        ctx->pc = 0x146A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A5Cu;
        // 0x146a60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146A64u;
        goto label_146a64;
    }
    ctx->pc = 0x146A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A5Cu;
        // 0x146a60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146A64u;
label_146a64:
    // 0x146a64: 0x0  nop
    ctx->pc = 0x146a64u;
    // NOP
label_146a68:
    // 0x146a68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x146a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_146a6c:
    // 0x146a6c: 0x0  nop
    ctx->pc = 0x146a6cu;
    // NOP
    ctx->pc = 0x146a70u;
}
