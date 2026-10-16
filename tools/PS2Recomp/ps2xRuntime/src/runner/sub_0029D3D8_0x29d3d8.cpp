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

// Function: sub_0029D3D8
// Address: 0x29d3d8 - 0x29d450
void sub_0029D3D8_0x29d3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D3D8_0x29d3d8");
#endif

    switch (ctx->pc) {
        case 0x29d40cu: goto label_29d40c;
        default: break;
    }

    ctx->pc = 0x29d3d8u;

    // 0x29d3d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29d3dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29d3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29d3e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d3e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29d3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d3e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29d3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29d3ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29d3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d3f0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x29d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x29d3f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29d3f8: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x29d3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x29d3fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D3FCu;
    {
        const bool branch_taken_0x29d3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3FCu;
        // 0x29d400: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3fc) {
            ctx->pc = 0x29D414u;
            goto label_29d414;
        }
    }
    ctx->pc = 0x29D404u;
    // 0x29d404: 0xc0a71c2  jal         func_29C708
    ctx->pc = 0x29D404u;
    SET_GPR_U32(ctx, 31, 0x29D40Cu);
    ctx->pc = 0x29D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D404u;
    // 0x29d408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C708u, 0x29D404u, 0x29D40Cu)) {
        return;
    }
    ctx->pc = 0x29D40Cu;
label_29d40c:
    // 0x29d40c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29d410: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x29d410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_29d414:
    // 0x29d414: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D414u;
    {
        const bool branch_taken_0x29d414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D414u;
        // 0x29d418: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d414) {
            ctx->pc = 0x29D424u;
            goto label_29d424;
        }
    }
    ctx->pc = 0x29D41Cu;
    // 0x29d41c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29D41Cu;
    {
        const bool branch_taken_0x29d41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D41Cu;
        // 0x29d420: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d41c) {
            ctx->pc = 0x29D428u;
            goto label_29d428;
        }
    }
    ctx->pc = 0x29D424u;
label_29d424:
    // 0x29d424: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x29d424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29d428:
    // 0x29d428: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x29d428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d42c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x29d430: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x29d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x29d434: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d438: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29d438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x29d43c: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x29d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
    // 0x29d440: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29d440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d448: 0x3e00008  jr          $ra
    ctx->pc = 0x29D448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D448u;
        // 0x29d44c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D450u;
}
