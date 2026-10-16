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

// Function: sub_0019E3C0
// Address: 0x19e3c0 - 0x19e428
void sub_0019E3C0_0x19e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E3C0_0x19e3c0");
#endif

    switch (ctx->pc) {
        case 0x19e3e0u: goto label_19e3e0;
        case 0x19e3ecu: goto label_19e3ec;
        case 0x19e400u: goto label_19e400;
        default: break;
    }

    ctx->pc = 0x19e3c0u;

    // 0x19e3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e3c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e3cc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19e3d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e3d8: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19E3D8u;
    SET_GPR_U32(ctx, 31, 0x19E3E0u);
    ctx->pc = 0x19E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E3D8u;
    // 0x19e3dc: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19E3D8u, 0x19E3E0u)) {
        return;
    }
    ctx->pc = 0x19E3E0u;
label_19e3e0:
    // 0x19e3e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e3e4: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19E3E4u;
    SET_GPR_U32(ctx, 31, 0x19E3ECu);
    ctx->pc = 0x19E3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E3E4u;
    // 0x19e3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19E3E4u, 0x19E3ECu)) {
        return;
    }
    ctx->pc = 0x19E3ECu;
label_19e3ec:
    // 0x19e3ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19e3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e3f4: 0x2463a9c8  addiu       $v1, $v1, -0x5638
    ctx->pc = 0x19e3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945224));
    // 0x19e3f8: 0xc0b65ce  jal         func_2D9738
    ctx->pc = 0x19E3F8u;
    SET_GPR_U32(ctx, 31, 0x19E400u);
    ctx->pc = 0x19E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E3F8u;
    // 0x19e3fc: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9738u, 0x19E3F8u, 0x19E400u)) {
        return;
    }
    ctx->pc = 0x19E400u;
label_19e400:
    // 0x19e400: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19e400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19e404: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e40c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e414: 0x3e00008  jr          $ra
    ctx->pc = 0x19E414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E414u;
        // 0x19e418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E41Cu;
    // 0x19e41c: 0x0  nop
    ctx->pc = 0x19e41cu;
    // NOP
    // 0x19e420: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19e420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e424: 0x0  nop
    ctx->pc = 0x19e424u;
    // NOP
    ctx->pc = 0x19e428u;
}
