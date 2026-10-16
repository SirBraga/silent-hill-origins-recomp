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

// Function: sub_00173280
// Address: 0x173280 - 0x1732c8
void sub_00173280_0x173280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173280_0x173280");
#endif

    switch (ctx->pc) {
        case 0x17329cu: goto label_17329c;
        case 0x1732a8u: goto label_1732a8;
        default: break;
    }

    ctx->pc = 0x173280u;

    // 0x173280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173284: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x173284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173288: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17328c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17328cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173294: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x173294u;
    SET_GPR_U32(ctx, 31, 0x17329Cu);
    ctx->pc = 0x173298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173294u;
    // 0x173298: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x173294u, 0x17329Cu)) {
        return;
    }
    ctx->pc = 0x17329Cu;
label_17329c:
    // 0x17329c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17329cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732a0: 0xc05ccb2  jal         func_1732C8
    ctx->pc = 0x1732A0u;
    SET_GPR_U32(ctx, 31, 0x1732A8u);
    ctx->pc = 0x1732A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1732A0u;
    // 0x1732a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1732C8u, 0x1732A0u, 0x1732A8u)) {
        return;
    }
    ctx->pc = 0x1732A8u;
label_1732a8:
    // 0x1732a8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1732a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1732ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1732acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1732b0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1732b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1732b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1732b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1732b8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1732b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1732BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1732C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732BCu;
        // 0x1732c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1732BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1732C4u;
    // 0x1732c4: 0x0  nop
    ctx->pc = 0x1732c4u;
    // NOP
    ctx->pc = 0x1732c8u;
}
