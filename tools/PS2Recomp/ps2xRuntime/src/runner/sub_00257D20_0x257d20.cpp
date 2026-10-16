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

// Function: sub_00257D20
// Address: 0x257d20 - 0x257da8
void sub_00257D20_0x257d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257D20_0x257d20");
#endif

    switch (ctx->pc) {
        case 0x257d20u: goto label_257d20;
        case 0x257d24u: goto label_257d24;
        case 0x257d28u: goto label_257d28;
        case 0x257d2cu: goto label_257d2c;
        case 0x257d30u: goto label_257d30;
        case 0x257d34u: goto label_257d34;
        case 0x257d38u: goto label_257d38;
        case 0x257d3cu: goto label_257d3c;
        case 0x257d40u: goto label_257d40;
        case 0x257d44u: goto label_257d44;
        case 0x257d48u: goto label_257d48;
        case 0x257d4cu: goto label_257d4c;
        case 0x257d50u: goto label_257d50;
        case 0x257d54u: goto label_257d54;
        case 0x257d58u: goto label_257d58;
        case 0x257d5cu: goto label_257d5c;
        case 0x257d60u: goto label_257d60;
        case 0x257d64u: goto label_257d64;
        case 0x257d68u: goto label_257d68;
        case 0x257d6cu: goto label_257d6c;
        case 0x257d70u: goto label_257d70;
        case 0x257d74u: goto label_257d74;
        case 0x257d78u: goto label_257d78;
        case 0x257d7cu: goto label_257d7c;
        case 0x257d80u: goto label_257d80;
        case 0x257d84u: goto label_257d84;
        case 0x257d88u: goto label_257d88;
        case 0x257d8cu: goto label_257d8c;
        case 0x257d90u: goto label_257d90;
        case 0x257d94u: goto label_257d94;
        case 0x257d98u: goto label_257d98;
        case 0x257d9cu: goto label_257d9c;
        case 0x257da0u: goto label_257da0;
        case 0x257da4u: goto label_257da4;
        default: break;
    }

    ctx->pc = 0x257d20u;

label_257d20:
    // 0x257d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_257d24:
    // 0x257d24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x257d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257d28:
    // 0x257d28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x257d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_257d2c:
    // 0x257d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_257d30:
    // 0x257d30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x257d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_257d34:
    // 0x257d34: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x257d34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_257d38:
    // 0x257d38: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_257d3c:
    if (ctx->pc == 0x257D3Cu) {
        ctx->pc = 0x257D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D38u;
        // 0x257d3c: 0x96040018  lhu         $a0, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257D40u;
        goto label_257d40;
    }
    ctx->pc = 0x257D38u;
    {
        const bool branch_taken_0x257d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x257D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D38u;
        // 0x257d3c: 0x96040018  lhu         $a0, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d38) {
            ctx->pc = 0x257D88u;
            goto label_257d88;
        }
    }
    ctx->pc = 0x257D40u;
label_257d40:
    // 0x257d40: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x257d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_257d44:
    // 0x257d44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x257d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257d48:
    // 0x257d48: 0xc09397e  jal         func_24E5F8
label_257d4c:
    if (ctx->pc == 0x257D4Cu) {
        ctx->pc = 0x257D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D48u;
        // 0x257d4c: 0x24841240  addiu       $a0, $a0, 0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257D50u;
        goto label_257d50;
    }
    ctx->pc = 0x257D48u;
    SET_GPR_U32(ctx, 31, 0x257D50u);
    ctx->pc = 0x257D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D48u;
    // 0x257d4c: 0x24841240  addiu       $a0, $a0, 0x1240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x257D48u, 0x257D50u)) {
        return;
    }
    ctx->pc = 0x257D50u;
label_257d50:
    // 0x257d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257d54:
    // 0x257d54: 0xc095f6a  jal         func_257DA8
label_257d58:
    if (ctx->pc == 0x257D58u) {
        ctx->pc = 0x257D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D54u;
        // 0x257d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257D5Cu;
        goto label_257d5c;
    }
    ctx->pc = 0x257D54u;
    SET_GPR_U32(ctx, 31, 0x257D5Cu);
    ctx->pc = 0x257D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D54u;
    // 0x257d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257DA8u, 0x257D54u, 0x257D5Cu)) {
        return;
    }
    ctx->pc = 0x257D5Cu;
label_257d5c:
    // 0x257d5c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x257d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_257d60:
    // 0x257d60: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x257d60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_257d64:
    // 0x257d64: 0x8cc63fc8  lw          $a2, 0x3FC8($a2)
    ctx->pc = 0x257d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16328)));
label_257d68:
    // 0x257d68: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x257d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_257d6c:
    // 0x257d6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x257d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257d70:
    // 0x257d70: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x257d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_257d74:
    // 0x257d74: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x257d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_257d78:
    // 0x257d78: 0x40f809  jalr        $v0
label_257d7c:
    if (ctx->pc == 0x257D7Cu) {
        ctx->pc = 0x257D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D78u;
        // 0x257d7c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257D80u;
        goto label_257d80;
    }
    ctx->pc = 0x257D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x257D80u);
        ctx->pc = 0x257D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D78u;
        // 0x257d7c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257D78u, 0x257D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x257D80u;
label_257d80:
    // 0x257d80: 0x10000004  b           . + 4 + (0x4 << 2)
label_257d84:
    if (ctx->pc == 0x257D84u) {
        ctx->pc = 0x257D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D80u;
        // 0x257d84: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257D88u;
        goto label_257d88;
    }
    ctx->pc = 0x257D80u;
    {
        const bool branch_taken_0x257d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D80u;
        // 0x257d84: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d80) {
            ctx->pc = 0x257D94u;
            goto label_257d94;
        }
    }
    ctx->pc = 0x257D88u;
label_257d88:
    // 0x257d88: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x257d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_257d8c:
    // 0x257d8c: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x257d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
label_257d90:
    // 0x257d90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x257d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_257d94:
    // 0x257d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257d98:
    // 0x257d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_257d9c:
    // 0x257d9c: 0x3e00008  jr          $ra
label_257da0:
    if (ctx->pc == 0x257DA0u) {
        ctx->pc = 0x257DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D9Cu;
        // 0x257da0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257DA4u;
        goto label_257da4;
    }
    ctx->pc = 0x257D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D9Cu;
        // 0x257da0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257DA4u;
label_257da4:
    // 0x257da4: 0x0  nop
    ctx->pc = 0x257da4u;
    // NOP
    ctx->pc = 0x257da8u;
}
