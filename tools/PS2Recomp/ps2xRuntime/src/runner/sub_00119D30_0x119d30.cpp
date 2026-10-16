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

// Function: sub_00119D30
// Address: 0x119d30 - 0x119da8
void sub_00119D30_0x119d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119D30_0x119d30");
#endif

    switch (ctx->pc) {
        case 0x119d58u: goto label_119d58;
        case 0x119d7cu: goto label_119d7c;
        case 0x119d94u: goto label_119d94;
        default: break;
    }

    ctx->pc = 0x119d30u;

    // 0x119d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119d34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x119d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x119d38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x119d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x119d3c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x119D3Cu;
    {
        const bool branch_taken_0x119d3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x119D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D3Cu;
        // 0x119d40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d3c) {
            ctx->pc = 0x119D94u;
            goto label_119d94;
        }
    }
    ctx->pc = 0x119D44u;
    // 0x119d44: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x119D44u;
    {
        const bool branch_taken_0x119d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D44u;
        // 0x119d48: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d44) {
            ctx->pc = 0x119D84u;
            goto label_119d84;
        }
    }
    ctx->pc = 0x119D4Cu;
    // 0x119d4c: 0x2610af28  addiu       $s0, $s0, -0x50D8
    ctx->pc = 0x119d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946600));
    // 0x119d50: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x119D50u;
    SET_GPR_U32(ctx, 31, 0x119D58u);
    ctx->pc = 0x119D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D50u;
    // 0x119d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x119D50u, 0x119D58u)) {
        return;
    }
    ctx->pc = 0x119D58u;
label_119d58:
    // 0x119d58: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x119d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x119d5c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x119d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x119d60: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x119d60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x119d64: 0xac624538  sw          $v0, 0x4538($v1)
    ctx->pc = 0x119d64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4538u, _value); } while (0);
    // 0x119d68: 0x24844540  addiu       $a0, $a0, 0x4540
    ctx->pc = 0x119d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17728));
    // 0x119d6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d70: 0x24c69da8  addiu       $a2, $a2, -0x6258
    ctx->pc = 0x119d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942120));
    // 0x119d74: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x119D74u;
    SET_GPR_U32(ctx, 31, 0x119D7Cu);
    ctx->pc = 0x119D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D74u;
    // 0x119d78: 0x240700c0  addiu       $a3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x119D74u, 0x119D7Cu)) {
        return;
    }
    ctx->pc = 0x119D7Cu;
label_119d7c:
    // 0x119d7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x119D7Cu;
    {
        const bool branch_taken_0x119d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D7Cu;
        // 0x119d80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d7c) {
            ctx->pc = 0x119D98u;
            goto label_119d98;
        }
    }
    ctx->pc = 0x119D84u;
label_119d84:
    // 0x119d84: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x119d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x119d88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x119d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119d8c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x119D8Cu;
    SET_GPR_U32(ctx, 31, 0x119D94u);
    ctx->pc = 0x119D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D8Cu;
    // 0x119d90: 0x24844540  addiu       $a0, $a0, 0x4540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x119D8Cu, 0x119D94u)) {
        return;
    }
    ctx->pc = 0x119D94u;
label_119d94:
    // 0x119d94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x119d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119d98:
    // 0x119d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x119D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D9Cu;
        // 0x119da0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119DA4u;
    // 0x119da4: 0x0  nop
    ctx->pc = 0x119da4u;
    // NOP
    ctx->pc = 0x119da8u;
}
