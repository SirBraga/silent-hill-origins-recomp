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

// Function: sub_0011D748
// Address: 0x11d748 - 0x11d7c0
void sub_0011D748_0x11d748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D748_0x11d748");
#endif

    switch (ctx->pc) {
        case 0x11d770u: goto label_11d770;
        case 0x11d794u: goto label_11d794;
        case 0x11d7acu: goto label_11d7ac;
        default: break;
    }

    ctx->pc = 0x11d748u;

    // 0x11d748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d74c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11d74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11d750: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11d750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11d754: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11D754u;
    {
        const bool branch_taken_0x11d754 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D754u;
        // 0x11d758: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d754) {
            ctx->pc = 0x11D7ACu;
            goto label_11d7ac;
        }
    }
    ctx->pc = 0x11D75Cu;
    // 0x11d75c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x11D75Cu;
    {
        const bool branch_taken_0x11d75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D75Cu;
        // 0x11d760: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d75c) {
            ctx->pc = 0x11D79Cu;
            goto label_11d79c;
        }
    }
    ctx->pc = 0x11D764u;
    // 0x11d764: 0x2610b4c0  addiu       $s0, $s0, -0x4B40
    ctx->pc = 0x11d764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948032));
    // 0x11d768: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x11D768u;
    SET_GPR_U32(ctx, 31, 0x11D770u);
    ctx->pc = 0x11D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D768u;
    // 0x11d76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x11D768u, 0x11D770u)) {
        return;
    }
    ctx->pc = 0x11D770u;
label_11d770:
    // 0x11d770: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x11d770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x11d774: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11d774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11d778: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11d778u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11d77c: 0xac624588  sw          $v0, 0x4588($v1)
    ctx->pc = 0x11d77cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4588u, _value); } while (0);
    // 0x11d780: 0x24844590  addiu       $a0, $a0, 0x4590
    ctx->pc = 0x11d780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17808));
    // 0x11d784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d788: 0x24c6d7c0  addiu       $a2, $a2, -0x2840
    ctx->pc = 0x11d788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956992));
    // 0x11d78c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x11D78Cu;
    SET_GPR_U32(ctx, 31, 0x11D794u);
    ctx->pc = 0x11D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D78Cu;
    // 0x11d790: 0x24070160  addiu       $a3, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x11D78Cu, 0x11D794u)) {
        return;
    }
    ctx->pc = 0x11D794u;
label_11d794:
    // 0x11d794: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11D794u;
    {
        const bool branch_taken_0x11d794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D794u;
        // 0x11d798: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d794) {
            ctx->pc = 0x11D7B0u;
            goto label_11d7b0;
        }
    }
    ctx->pc = 0x11D79Cu;
label_11d79c:
    // 0x11d79c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11d7a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d7a4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x11D7A4u;
    SET_GPR_U32(ctx, 31, 0x11D7ACu);
    ctx->pc = 0x11D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7A4u;
    // 0x11d7a8: 0x24844590  addiu       $a0, $a0, 0x4590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x11D7A4u, 0x11D7ACu)) {
        return;
    }
    ctx->pc = 0x11D7ACu;
label_11d7ac:
    // 0x11d7ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11d7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11d7b0:
    // 0x11d7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11D7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7B4u;
        // 0x11d7b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D7BCu;
    // 0x11d7bc: 0x0  nop
    ctx->pc = 0x11d7bcu;
    // NOP
    ctx->pc = 0x11d7c0u;
}
