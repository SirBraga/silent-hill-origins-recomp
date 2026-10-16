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

// Function: sub_001405E8
// Address: 0x1405e8 - 0x140630
void sub_001405E8_0x1405e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001405E8_0x1405e8");
#endif

    switch (ctx->pc) {
        case 0x140604u: goto label_140604;
        case 0x140610u: goto label_140610;
        default: break;
    }

    ctx->pc = 0x1405e8u;

    // 0x1405e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1405e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1405ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1405ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1405f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1405f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1405f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1405f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1405f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1405f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1405fc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1405FCu;
    SET_GPR_U32(ctx, 31, 0x140604u);
    ctx->pc = 0x140600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1405FCu;
    // 0x140600: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1405FCu, 0x140604u)) {
        return;
    }
    ctx->pc = 0x140604u;
label_140604:
    // 0x140604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140608: 0xc05018c  jal         func_140630
    ctx->pc = 0x140608u;
    SET_GPR_U32(ctx, 31, 0x140610u);
    ctx->pc = 0x14060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140608u;
    // 0x14060c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140630u, 0x140608u, 0x140610u)) {
        return;
    }
    ctx->pc = 0x140610u;
label_140610:
    // 0x140610: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x140610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x140614: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x140614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140618: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x140618u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x14061c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14061cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140620: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x140620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140624: 0x3e00008  jr          $ra
    ctx->pc = 0x140624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140624u;
        // 0x140628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14062Cu;
    // 0x14062c: 0x0  nop
    ctx->pc = 0x14062cu;
    // NOP
    ctx->pc = 0x140630u;
}
