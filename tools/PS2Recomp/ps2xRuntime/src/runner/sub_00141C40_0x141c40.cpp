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

// Function: sub_00141C40
// Address: 0x141c40 - 0x141cb8
void sub_00141C40_0x141c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141C40_0x141c40");
#endif

    switch (ctx->pc) {
        case 0x141c68u: goto label_141c68;
        case 0x141c8cu: goto label_141c8c;
        case 0x141ca4u: goto label_141ca4;
        default: break;
    }

    ctx->pc = 0x141c40u;

    // 0x141c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141c44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x141c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x141c48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x141c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x141c4c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x141C4Cu;
    {
        const bool branch_taken_0x141c4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x141C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C4Cu;
        // 0x141c50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c4c) {
            ctx->pc = 0x141CA4u;
            goto label_141ca4;
        }
    }
    ctx->pc = 0x141C54u;
    // 0x141c54: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x141C54u;
    {
        const bool branch_taken_0x141c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C54u;
        // 0x141c58: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c54) {
            ctx->pc = 0x141C94u;
            goto label_141c94;
        }
    }
    ctx->pc = 0x141C5Cu;
    // 0x141c5c: 0x26100ce0  addiu       $s0, $s0, 0xCE0
    ctx->pc = 0x141c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3296));
    // 0x141c60: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x141C60u;
    SET_GPR_U32(ctx, 31, 0x141C68u);
    ctx->pc = 0x141C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C60u;
    // 0x141c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x141C60u, 0x141C68u)) {
        return;
    }
    ctx->pc = 0x141C68u;
label_141c68:
    // 0x141c68: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x141c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x141c6c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x141c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x141c70: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x141c70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x141c74: 0xac624860  sw          $v0, 0x4860($v1)
    ctx->pc = 0x141c74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4860u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4860u, _value); } while (0);
    // 0x141c78: 0x24844868  addiu       $a0, $a0, 0x4868
    ctx->pc = 0x141c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18536));
    // 0x141c7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c80: 0x24c61cb8  addiu       $a2, $a2, 0x1CB8
    ctx->pc = 0x141c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7352));
    // 0x141c84: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x141C84u;
    SET_GPR_U32(ctx, 31, 0x141C8Cu);
    ctx->pc = 0x141C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C84u;
    // 0x141c88: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x141C84u, 0x141C8Cu)) {
        return;
    }
    ctx->pc = 0x141C8Cu;
label_141c8c:
    // 0x141c8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x141C8Cu;
    {
        const bool branch_taken_0x141c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C8Cu;
        // 0x141c90: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c8c) {
            ctx->pc = 0x141CA8u;
            goto label_141ca8;
        }
    }
    ctx->pc = 0x141C94u;
label_141c94:
    // 0x141c94: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x141c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x141c98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x141c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141c9c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x141C9Cu;
    SET_GPR_U32(ctx, 31, 0x141CA4u);
    ctx->pc = 0x141CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C9Cu;
    // 0x141ca0: 0x24844868  addiu       $a0, $a0, 0x4868 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x141C9Cu, 0x141CA4u)) {
        return;
    }
    ctx->pc = 0x141CA4u;
label_141ca4:
    // 0x141ca4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x141ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_141ca8:
    // 0x141ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141cac: 0x3e00008  jr          $ra
    ctx->pc = 0x141CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CACu;
        // 0x141cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141CB4u;
    // 0x141cb4: 0x0  nop
    ctx->pc = 0x141cb4u;
    // NOP
    ctx->pc = 0x141cb8u;
}
