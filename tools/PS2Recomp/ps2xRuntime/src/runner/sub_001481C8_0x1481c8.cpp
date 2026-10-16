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

// Function: sub_001481C8
// Address: 0x1481c8 - 0x148210
void sub_001481C8_0x1481c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001481C8_0x1481c8");
#endif

    switch (ctx->pc) {
        case 0x1481e4u: goto label_1481e4;
        case 0x1481f0u: goto label_1481f0;
        default: break;
    }

    ctx->pc = 0x1481c8u;

    // 0x1481c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1481c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1481cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1481ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1481d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1481d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1481d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1481d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1481d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1481d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1481dc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1481DCu;
    SET_GPR_U32(ctx, 31, 0x1481E4u);
    ctx->pc = 0x1481E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1481DCu;
    // 0x1481e0: 0x24040154  addiu       $a0, $zero, 0x154 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1481DCu, 0x1481E4u)) {
        return;
    }
    ctx->pc = 0x1481E4u;
label_1481e4:
    // 0x1481e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1481e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1481e8: 0xc052084  jal         func_148210
    ctx->pc = 0x1481E8u;
    SET_GPR_U32(ctx, 31, 0x1481F0u);
    ctx->pc = 0x1481ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1481E8u;
    // 0x1481ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x148210u, 0x1481E8u, 0x1481F0u)) {
        return;
    }
    ctx->pc = 0x1481F0u;
label_1481f0:
    // 0x1481f0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1481f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1481f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1481f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1481f8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1481f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1481fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1481fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148200: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x148200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148204: 0x3e00008  jr          $ra
    ctx->pc = 0x148204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148204u;
        // 0x148208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14820Cu;
    // 0x14820c: 0x0  nop
    ctx->pc = 0x14820cu;
    // NOP
    ctx->pc = 0x148210u;
}
