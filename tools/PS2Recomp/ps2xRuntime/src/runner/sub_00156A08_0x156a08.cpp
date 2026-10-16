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

// Function: sub_00156A08
// Address: 0x156a08 - 0x156a80
void sub_00156A08_0x156a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156A08_0x156a08");
#endif

    switch (ctx->pc) {
        case 0x156a30u: goto label_156a30;
        case 0x156a54u: goto label_156a54;
        case 0x156a6cu: goto label_156a6c;
        default: break;
    }

    ctx->pc = 0x156a08u;

    // 0x156a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156a0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x156a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x156a10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x156a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x156a14: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x156A14u;
    {
        const bool branch_taken_0x156a14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x156A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A14u;
        // 0x156a18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a14) {
            ctx->pc = 0x156A6Cu;
            goto label_156a6c;
        }
    }
    ctx->pc = 0x156A1Cu;
    // 0x156a1c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x156A1Cu;
    {
        const bool branch_taken_0x156a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x156A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A1Cu;
        // 0x156a20: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a1c) {
            ctx->pc = 0x156A5Cu;
            goto label_156a5c;
        }
    }
    ctx->pc = 0x156A24u;
    // 0x156a24: 0x26102b10  addiu       $s0, $s0, 0x2B10
    ctx->pc = 0x156a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11024));
    // 0x156a28: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x156A28u;
    SET_GPR_U32(ctx, 31, 0x156A30u);
    ctx->pc = 0x156A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156A28u;
    // 0x156a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x156A28u, 0x156A30u)) {
        return;
    }
    ctx->pc = 0x156A30u;
label_156a30:
    // 0x156a30: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x156a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x156a34: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x156a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x156a38: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x156a38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x156a3c: 0xac62f068  sw          $v0, -0xF98($v1)
    ctx->pc = 0x156a3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF068u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF068u, _value); } while (0);
    // 0x156a40: 0x2484f070  addiu       $a0, $a0, -0xF90
    ctx->pc = 0x156a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963312));
    // 0x156a44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a48: 0x24c66a80  addiu       $a2, $a2, 0x6A80
    ctx->pc = 0x156a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27264));
    // 0x156a4c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x156A4Cu;
    SET_GPR_U32(ctx, 31, 0x156A54u);
    ctx->pc = 0x156A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156A4Cu;
    // 0x156a50: 0x240700b8  addiu       $a3, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x156A4Cu, 0x156A54u)) {
        return;
    }
    ctx->pc = 0x156A54u;
label_156a54:
    // 0x156a54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x156A54u;
    {
        const bool branch_taken_0x156a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A54u;
        // 0x156a58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a54) {
            ctx->pc = 0x156A70u;
            goto label_156a70;
        }
    }
    ctx->pc = 0x156A5Cu;
label_156a5c:
    // 0x156a5c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x156a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x156a60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x156a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156a64: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x156A64u;
    SET_GPR_U32(ctx, 31, 0x156A6Cu);
    ctx->pc = 0x156A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156A64u;
    // 0x156a68: 0x2484f070  addiu       $a0, $a0, -0xF90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x156A64u, 0x156A6Cu)) {
        return;
    }
    ctx->pc = 0x156A6Cu;
label_156a6c:
    // 0x156a6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x156a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156a70:
    // 0x156a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156a74: 0x3e00008  jr          $ra
    ctx->pc = 0x156A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A74u;
        // 0x156a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156A7Cu;
    // 0x156a7c: 0x0  nop
    ctx->pc = 0x156a7cu;
    // NOP
    ctx->pc = 0x156a80u;
}
