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

// Function: sub_00184570
// Address: 0x184570 - 0x1845b8
void sub_00184570_0x184570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184570_0x184570");
#endif

    switch (ctx->pc) {
        case 0x18458cu: goto label_18458c;
        case 0x184598u: goto label_184598;
        default: break;
    }

    ctx->pc = 0x184570u;

    // 0x184570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184574: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x184574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x184578: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x184578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18457c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18457cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184584: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x184584u;
    SET_GPR_U32(ctx, 31, 0x18458Cu);
    ctx->pc = 0x184588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184584u;
    // 0x184588: 0x240414e0  addiu       $a0, $zero, 0x14E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x184584u, 0x18458Cu)) {
        return;
    }
    ctx->pc = 0x18458Cu;
label_18458c:
    // 0x18458c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18458cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184590: 0xc061196  jal         func_184658
    ctx->pc = 0x184590u;
    SET_GPR_U32(ctx, 31, 0x184598u);
    ctx->pc = 0x184594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184590u;
    // 0x184594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x184658u, 0x184590u, 0x184598u)) {
        return;
    }
    ctx->pc = 0x184598u;
label_184598:
    // 0x184598: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x184598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18459c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18459cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1845a0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1845a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1845a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1845a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1845a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1845a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1845ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1845B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845ACu;
        // 0x1845b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1845ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1845B4u;
    // 0x1845b4: 0x0  nop
    ctx->pc = 0x1845b4u;
    // NOP
    ctx->pc = 0x1845b8u;
}
