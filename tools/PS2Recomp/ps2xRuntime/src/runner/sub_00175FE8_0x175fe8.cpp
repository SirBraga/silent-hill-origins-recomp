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

// Function: sub_00175FE8
// Address: 0x175fe8 - 0x176030
void sub_00175FE8_0x175fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175FE8_0x175fe8");
#endif

    switch (ctx->pc) {
        case 0x176004u: goto label_176004;
        case 0x176010u: goto label_176010;
        default: break;
    }

    ctx->pc = 0x175fe8u;

    // 0x175fe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175fec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x175fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175ff0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175ff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175ffc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x175FFCu;
    SET_GPR_U32(ctx, 31, 0x176004u);
    ctx->pc = 0x176000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175FFCu;
    // 0x176000: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x175FFCu, 0x176004u)) {
        return;
    }
    ctx->pc = 0x176004u;
label_176004:
    // 0x176004: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176008: 0xc05d80c  jal         func_176030
    ctx->pc = 0x176008u;
    SET_GPR_U32(ctx, 31, 0x176010u);
    ctx->pc = 0x17600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176008u;
    // 0x17600c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176030u, 0x176008u, 0x176010u)) {
        return;
    }
    ctx->pc = 0x176010u;
label_176010:
    // 0x176010: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x176010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x176014: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x176014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176018: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x176018u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x17601c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17601cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176020: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x176020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176024: 0x3e00008  jr          $ra
    ctx->pc = 0x176024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176024u;
        // 0x176028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17602Cu;
    // 0x17602c: 0x0  nop
    ctx->pc = 0x17602cu;
    // NOP
    ctx->pc = 0x176030u;
}
