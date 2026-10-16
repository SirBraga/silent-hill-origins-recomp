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

// Function: sub_0014D3D0
// Address: 0x14d3d0 - 0x14d428
void sub_0014D3D0_0x14d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D3D0_0x14d3d0");
#endif

    switch (ctx->pc) {
        case 0x14d3f4u: goto label_14d3f4;
        case 0x14d408u: goto label_14d408;
        case 0x14d414u: goto label_14d414;
        default: break;
    }

    ctx->pc = 0x14d3d0u;

    // 0x14d3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d3d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14d3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14d3d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d3dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3e0: 0x8e040120  lw          $a0, 0x120($s0)
    ctx->pc = 0x14d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x14d3e4: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14D3E4u;
    {
        const bool branch_taken_0x14d3e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3e4) {
            ctx->pc = 0x14D3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D3E4u;
            // 0x14d3e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D418u;
            goto label_14d418;
        }
    }
    ctx->pc = 0x14D3ECu;
    // 0x14d3ec: 0xc097a3e  jal         func_25E8F8
    ctx->pc = 0x14D3ECu;
    SET_GPR_U32(ctx, 31, 0x14D3F4u);
    ctx->pc = 0x25E8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E8F8u, 0x14D3ECu, 0x14D3F4u)) {
        return;
    }
    ctx->pc = 0x14D3F4u;
label_14d3f4:
    // 0x14d3f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D3F4u;
    {
        const bool branch_taken_0x14d3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3F4u;
        // 0x14d3f8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d3f4) {
            ctx->pc = 0x14D414u;
            goto label_14d414;
        }
    }
    ctx->pc = 0x14D3FCu;
    // 0x14d3fc: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x14d3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x14d400: 0xc05eeb4  jal         func_17BAD0
    ctx->pc = 0x14D400u;
    SET_GPR_U32(ctx, 31, 0x14D408u);
    ctx->pc = 0x14D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D400u;
    // 0x14d404: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BAD0u, 0x14D400u, 0x14D408u)) {
        return;
    }
    ctx->pc = 0x14D408u;
label_14d408:
    // 0x14d408: 0x8e040120  lw          $a0, 0x120($s0)
    ctx->pc = 0x14d408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x14d40c: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x14D40Cu;
    SET_GPR_U32(ctx, 31, 0x14D414u);
    ctx->pc = 0x14D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D40Cu;
    // 0x14d410: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x14D40Cu, 0x14D414u)) {
        return;
    }
    ctx->pc = 0x14D414u;
label_14d414:
    // 0x14d414: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14d414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14d418:
    // 0x14d418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d41c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D41Cu;
        // 0x14d420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D424u;
    // 0x14d424: 0x0  nop
    ctx->pc = 0x14d424u;
    // NOP
    ctx->pc = 0x14d428u;
}
