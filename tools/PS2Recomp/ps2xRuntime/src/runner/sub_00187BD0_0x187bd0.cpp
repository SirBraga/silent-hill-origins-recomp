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

// Function: sub_00187BD0
// Address: 0x187bd0 - 0x187c50
void sub_00187BD0_0x187bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187BD0_0x187bd0");
#endif

    switch (ctx->pc) {
        case 0x187bf8u: goto label_187bf8;
        case 0x187c1cu: goto label_187c1c;
        case 0x187c34u: goto label_187c34;
        default: break;
    }

    ctx->pc = 0x187bd0u;

    // 0x187bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187bd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x187bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x187bd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x187bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x187bdc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x187BDCu;
    {
        const bool branch_taken_0x187bdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x187BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BDCu;
        // 0x187be0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bdc) {
            ctx->pc = 0x187C34u;
            goto label_187c34;
        }
    }
    ctx->pc = 0x187BE4u;
    // 0x187be4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x187BE4u;
    {
        const bool branch_taken_0x187be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BE4u;
        // 0x187be8: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187be4) {
            ctx->pc = 0x187C24u;
            goto label_187c24;
        }
    }
    ctx->pc = 0x187BECu;
    // 0x187bec: 0x26108998  addiu       $s0, $s0, -0x7668
    ctx->pc = 0x187becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936984));
    // 0x187bf0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x187BF0u;
    SET_GPR_U32(ctx, 31, 0x187BF8u);
    ctx->pc = 0x187BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187BF0u;
    // 0x187bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x187BF0u, 0x187BF8u)) {
        return;
    }
    ctx->pc = 0x187BF8u;
label_187bf8:
    // 0x187bf8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x187bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x187bfc: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187c00: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x187c00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x187c04: 0xac62bce0  sw          $v0, -0x4320($v1)
    ctx->pc = 0x187c04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6CBCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CBCE0u, _value); } while (0);
    // 0x187c08: 0x2484bce8  addiu       $a0, $a0, -0x4318
    ctx->pc = 0x187c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950120));
    // 0x187c0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c10: 0x24c67c50  addiu       $a2, $a2, 0x7C50
    ctx->pc = 0x187c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31824));
    // 0x187c14: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x187C14u;
    SET_GPR_U32(ctx, 31, 0x187C1Cu);
    ctx->pc = 0x187C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C14u;
    // 0x187c18: 0x24070098  addiu       $a3, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x187C14u, 0x187C1Cu)) {
        return;
    }
    ctx->pc = 0x187C1Cu;
label_187c1c:
    // 0x187c1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x187C1Cu;
    {
        const bool branch_taken_0x187c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C1Cu;
        // 0x187c20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c1c) {
            ctx->pc = 0x187C38u;
            goto label_187c38;
        }
    }
    ctx->pc = 0x187C24u;
label_187c24:
    // 0x187c24: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187c28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187c2c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x187C2Cu;
    SET_GPR_U32(ctx, 31, 0x187C34u);
    ctx->pc = 0x187C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C2Cu;
    // 0x187c30: 0x2484bce8  addiu       $a0, $a0, -0x4318 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x187C2Cu, 0x187C34u)) {
        return;
    }
    ctx->pc = 0x187C34u;
label_187c34:
    // 0x187c34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x187c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_187c38:
    // 0x187c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x187C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C3Cu;
        // 0x187c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187C44u;
    // 0x187c44: 0x0  nop
    ctx->pc = 0x187c44u;
    // NOP
    // 0x187c48: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x187c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x187c4c: 0x0  nop
    ctx->pc = 0x187c4cu;
    // NOP
    ctx->pc = 0x187c50u;
}
