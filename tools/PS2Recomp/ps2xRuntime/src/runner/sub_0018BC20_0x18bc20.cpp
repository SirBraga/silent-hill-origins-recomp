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

// Function: sub_0018BC20
// Address: 0x18bc20 - 0x18bc98
void sub_0018BC20_0x18bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BC20_0x18bc20");
#endif

    switch (ctx->pc) {
        case 0x18bc48u: goto label_18bc48;
        case 0x18bc6cu: goto label_18bc6c;
        case 0x18bc84u: goto label_18bc84;
        default: break;
    }

    ctx->pc = 0x18bc20u;

    // 0x18bc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18bc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18bc24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18bc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18bc28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18bc2c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18BC2Cu;
    {
        const bool branch_taken_0x18bc2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x18BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC2Cu;
        // 0x18bc30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc2c) {
            ctx->pc = 0x18BC84u;
            goto label_18bc84;
        }
    }
    ctx->pc = 0x18BC34u;
    // 0x18bc34: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x18BC34u;
    {
        const bool branch_taken_0x18bc34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC34u;
        // 0x18bc38: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc34) {
            ctx->pc = 0x18BC74u;
            goto label_18bc74;
        }
    }
    ctx->pc = 0x18BC3Cu;
    // 0x18bc3c: 0x26109028  addiu       $s0, $s0, -0x6FD8
    ctx->pc = 0x18bc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938664));
    // 0x18bc40: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x18BC40u;
    SET_GPR_U32(ctx, 31, 0x18BC48u);
    ctx->pc = 0x18BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC40u;
    // 0x18bc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x18BC40u, 0x18BC48u)) {
        return;
    }
    ctx->pc = 0x18BC48u;
label_18bc48:
    // 0x18bc48: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x18bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x18bc4c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18bc50: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18bc50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18bc54: 0xac62bd50  sw          $v0, -0x42B0($v1)
    ctx->pc = 0x18bc54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6CBD50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CBD50u, _value); } while (0);
    // 0x18bc58: 0x2484bd58  addiu       $a0, $a0, -0x42A8
    ctx->pc = 0x18bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950232));
    // 0x18bc5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc60: 0x24c6bc98  addiu       $a2, $a2, -0x4368
    ctx->pc = 0x18bc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950040));
    // 0x18bc64: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x18BC64u;
    SET_GPR_U32(ctx, 31, 0x18BC6Cu);
    ctx->pc = 0x18BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC64u;
    // 0x18bc68: 0x24070130  addiu       $a3, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x18BC64u, 0x18BC6Cu)) {
        return;
    }
    ctx->pc = 0x18BC6Cu;
label_18bc6c:
    // 0x18bc6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18BC6Cu;
    {
        const bool branch_taken_0x18bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC6Cu;
        // 0x18bc70: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc6c) {
            ctx->pc = 0x18BC88u;
            goto label_18bc88;
        }
    }
    ctx->pc = 0x18BC74u;
label_18bc74:
    // 0x18bc74: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18bc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18bc78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18bc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18bc7c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x18BC7Cu;
    SET_GPR_U32(ctx, 31, 0x18BC84u);
    ctx->pc = 0x18BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC7Cu;
    // 0x18bc80: 0x2484bd58  addiu       $a0, $a0, -0x42A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x18BC7Cu, 0x18BC84u)) {
        return;
    }
    ctx->pc = 0x18BC84u;
label_18bc84:
    // 0x18bc84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18bc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18bc88:
    // 0x18bc88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x18BC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC8Cu;
        // 0x18bc90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BC94u;
    // 0x18bc94: 0x0  nop
    ctx->pc = 0x18bc94u;
    // NOP
    ctx->pc = 0x18bc98u;
}
