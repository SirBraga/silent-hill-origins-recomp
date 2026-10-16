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

// Function: sub_0015A3A0
// Address: 0x15a3a0 - 0x15a420
void sub_0015A3A0_0x15a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A3A0_0x15a3a0");
#endif

    switch (ctx->pc) {
        case 0x15a3c8u: goto label_15a3c8;
        case 0x15a3ecu: goto label_15a3ec;
        case 0x15a404u: goto label_15a404;
        default: break;
    }

    ctx->pc = 0x15a3a0u;

    // 0x15a3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15a3a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15a3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15a3a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15a3ac: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15A3ACu;
    {
        const bool branch_taken_0x15a3ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3ACu;
        // 0x15a3b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3ac) {
            ctx->pc = 0x15A404u;
            goto label_15a404;
        }
    }
    ctx->pc = 0x15A3B4u;
    // 0x15a3b4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x15A3B4u;
    {
        const bool branch_taken_0x15a3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3B4u;
        // 0x15a3b8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3b4) {
            ctx->pc = 0x15A3F4u;
            goto label_15a3f4;
        }
    }
    ctx->pc = 0x15A3BCu;
    // 0x15a3bc: 0x26102ee8  addiu       $s0, $s0, 0x2EE8
    ctx->pc = 0x15a3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12008));
    // 0x15a3c0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x15A3C0u;
    SET_GPR_U32(ctx, 31, 0x15A3C8u);
    ctx->pc = 0x15A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A3C0u;
    // 0x15a3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x15A3C0u, 0x15A3C8u)) {
        return;
    }
    ctx->pc = 0x15A3C8u;
label_15a3c8:
    // 0x15a3c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x15a3cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15a3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15a3d0: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15a3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15a3d4: 0xac62f088  sw          $v0, -0xF78($v1)
    ctx->pc = 0x15a3d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF088u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF088u, _value); } while (0);
    // 0x15a3d8: 0x2484f090  addiu       $a0, $a0, -0xF70
    ctx->pc = 0x15a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963344));
    // 0x15a3dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3e0: 0x24c6a420  addiu       $a2, $a2, -0x5BE0
    ctx->pc = 0x15a3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943776));
    // 0x15a3e4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x15A3E4u;
    SET_GPR_U32(ctx, 31, 0x15A3ECu);
    ctx->pc = 0x15A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A3E4u;
    // 0x15a3e8: 0x240703a0  addiu       $a3, $zero, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x15A3E4u, 0x15A3ECu)) {
        return;
    }
    ctx->pc = 0x15A3ECu;
label_15a3ec:
    // 0x15a3ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15A3ECu;
    {
        const bool branch_taken_0x15a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3ECu;
        // 0x15a3f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3ec) {
            ctx->pc = 0x15A408u;
            goto label_15a408;
        }
    }
    ctx->pc = 0x15A3F4u;
label_15a3f4:
    // 0x15a3f4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15a3f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a3fc: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x15A3FCu;
    SET_GPR_U32(ctx, 31, 0x15A404u);
    ctx->pc = 0x15A400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A3FCu;
    // 0x15a400: 0x2484f090  addiu       $a0, $a0, -0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x15A3FCu, 0x15A404u)) {
        return;
    }
    ctx->pc = 0x15A404u;
label_15a404:
    // 0x15a404: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15a404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15a408:
    // 0x15a408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a40c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A40Cu;
        // 0x15a410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A414u;
    // 0x15a414: 0x0  nop
    ctx->pc = 0x15a414u;
    // NOP
    // 0x15a418: 0x0  nop
    ctx->pc = 0x15a418u;
    // NOP
    // 0x15a41c: 0x0  nop
    ctx->pc = 0x15a41cu;
    // NOP
    ctx->pc = 0x15a420u;
}
