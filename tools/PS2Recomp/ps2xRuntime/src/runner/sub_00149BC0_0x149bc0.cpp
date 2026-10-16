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

// Function: sub_00149BC0
// Address: 0x149bc0 - 0x149c10
void sub_00149BC0_0x149bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149BC0_0x149bc0");
#endif

    switch (ctx->pc) {
        case 0x149bdcu: goto label_149bdc;
        case 0x149be8u: goto label_149be8;
        default: break;
    }

    ctx->pc = 0x149bc0u;

    // 0x149bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149bc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x149bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149bc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149bcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149bd4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x149BD4u;
    SET_GPR_U32(ctx, 31, 0x149BDCu);
    ctx->pc = 0x149BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149BD4u;
    // 0x149bd8: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x149BD4u, 0x149BDCu)) {
        return;
    }
    ctx->pc = 0x149BDCu;
label_149bdc:
    // 0x149bdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149be0: 0xc052662  jal         func_149988
    ctx->pc = 0x149BE0u;
    SET_GPR_U32(ctx, 31, 0x149BE8u);
    ctx->pc = 0x149BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149BE0u;
    // 0x149be4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149988u, 0x149BE0u, 0x149BE8u)) {
        return;
    }
    ctx->pc = 0x149BE8u;
label_149be8:
    // 0x149be8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x149be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x149bec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149bf0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x149bf0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x149bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149bf8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x149bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x149BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BFCu;
        // 0x149c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149C04u;
    // 0x149c04: 0x0  nop
    ctx->pc = 0x149c04u;
    // NOP
    // 0x149c08: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x149c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x149c0c: 0x0  nop
    ctx->pc = 0x149c0cu;
    // NOP
    ctx->pc = 0x149c10u;
}
