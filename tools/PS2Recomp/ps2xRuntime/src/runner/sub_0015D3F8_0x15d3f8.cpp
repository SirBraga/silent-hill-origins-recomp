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

// Function: sub_0015D3F8
// Address: 0x15d3f8 - 0x15d470
void sub_0015D3F8_0x15d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D3F8_0x15d3f8");
#endif

    switch (ctx->pc) {
        case 0x15d420u: goto label_15d420;
        case 0x15d444u: goto label_15d444;
        case 0x15d45cu: goto label_15d45c;
        default: break;
    }

    ctx->pc = 0x15d3f8u;

    // 0x15d3f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d3fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15d3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15d400: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15d400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15d404: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15D404u;
    {
        const bool branch_taken_0x15d404 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D404u;
        // 0x15d408: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d404) {
            ctx->pc = 0x15D45Cu;
            goto label_15d45c;
        }
    }
    ctx->pc = 0x15D40Cu;
    // 0x15d40c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x15D40Cu;
    {
        const bool branch_taken_0x15d40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D40Cu;
        // 0x15d410: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d40c) {
            ctx->pc = 0x15D44Cu;
            goto label_15d44c;
        }
    }
    ctx->pc = 0x15D414u;
    // 0x15d414: 0x261031e0  addiu       $s0, $s0, 0x31E0
    ctx->pc = 0x15d414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12768));
    // 0x15d418: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x15D418u;
    SET_GPR_U32(ctx, 31, 0x15D420u);
    ctx->pc = 0x15D41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D418u;
    // 0x15d41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x15D418u, 0x15D420u)) {
        return;
    }
    ctx->pc = 0x15D420u;
label_15d420:
    // 0x15d420: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15d420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x15d424: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15d424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15d428: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15d428u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15d42c: 0xac62f098  sw          $v0, -0xF68($v1)
    ctx->pc = 0x15d42cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF098u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF098u, _value); } while (0);
    // 0x15d430: 0x2484f0a0  addiu       $a0, $a0, -0xF60
    ctx->pc = 0x15d430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963360));
    // 0x15d434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d438: 0x24c6d470  addiu       $a2, $a2, -0x2B90
    ctx->pc = 0x15d438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956144));
    // 0x15d43c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x15D43Cu;
    SET_GPR_U32(ctx, 31, 0x15D444u);
    ctx->pc = 0x15D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D43Cu;
    // 0x15d440: 0x24070238  addiu       $a3, $zero, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x15D43Cu, 0x15D444u)) {
        return;
    }
    ctx->pc = 0x15D444u;
label_15d444:
    // 0x15d444: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15D444u;
    {
        const bool branch_taken_0x15d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D444u;
        // 0x15d448: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d444) {
            ctx->pc = 0x15D460u;
            goto label_15d460;
        }
    }
    ctx->pc = 0x15D44Cu;
label_15d44c:
    // 0x15d44c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15d450: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15d450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d454: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x15D454u;
    SET_GPR_U32(ctx, 31, 0x15D45Cu);
    ctx->pc = 0x15D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D454u;
    // 0x15d458: 0x2484f0a0  addiu       $a0, $a0, -0xF60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x15D454u, 0x15D45Cu)) {
        return;
    }
    ctx->pc = 0x15D45Cu;
label_15d45c:
    // 0x15d45c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15d45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15d460:
    // 0x15d460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d464: 0x3e00008  jr          $ra
    ctx->pc = 0x15D464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D464u;
        // 0x15d468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D46Cu;
    // 0x15d46c: 0x0  nop
    ctx->pc = 0x15d46cu;
    // NOP
    ctx->pc = 0x15d470u;
}
