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

// Function: sub_00175798
// Address: 0x175798 - 0x175810
void sub_00175798_0x175798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175798_0x175798");
#endif

    switch (ctx->pc) {
        case 0x1757c0u: goto label_1757c0;
        case 0x1757e4u: goto label_1757e4;
        case 0x1757fcu: goto label_1757fc;
        default: break;
    }

    ctx->pc = 0x175798u;

    // 0x175798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17579c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1757a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1757a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1757a4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1757A4u;
    {
        const bool branch_taken_0x1757a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1757A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757A4u;
        // 0x1757a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757a4) {
            ctx->pc = 0x1757FCu;
            goto label_1757fc;
        }
    }
    ctx->pc = 0x1757ACu;
    // 0x1757ac: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1757ACu;
    {
        const bool branch_taken_0x1757ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757ACu;
        // 0x1757b0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757ac) {
            ctx->pc = 0x1757ECu;
            goto label_1757ec;
        }
    }
    ctx->pc = 0x1757B4u;
    // 0x1757b4: 0x261061c0  addiu       $s0, $s0, 0x61C0
    ctx->pc = 0x1757b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25024));
    // 0x1757b8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1757B8u;
    SET_GPR_U32(ctx, 31, 0x1757C0u);
    ctx->pc = 0x1757BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757B8u;
    // 0x1757bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1757B8u, 0x1757C0u)) {
        return;
    }
    ctx->pc = 0x1757C0u;
label_1757c0:
    // 0x1757c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1757c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1757c4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1757c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1757c8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1757c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1757cc: 0xac62f810  sw          $v0, -0x7F0($v1)
    ctx->pc = 0x1757ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF810u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF810u, _value); } while (0);
    // 0x1757d0: 0x2484f818  addiu       $a0, $a0, -0x7E8
    ctx->pc = 0x1757d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965272));
    // 0x1757d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1757d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757d8: 0x24c65810  addiu       $a2, $a2, 0x5810
    ctx->pc = 0x1757d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22544));
    // 0x1757dc: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1757DCu;
    SET_GPR_U32(ctx, 31, 0x1757E4u);
    ctx->pc = 0x1757E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757DCu;
    // 0x1757e0: 0x24070070  addiu       $a3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1757DCu, 0x1757E4u)) {
        return;
    }
    ctx->pc = 0x1757E4u;
label_1757e4:
    // 0x1757e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1757E4u;
    {
        const bool branch_taken_0x1757e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757E4u;
        // 0x1757e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757e4) {
            ctx->pc = 0x175800u;
            goto label_175800;
        }
    }
    ctx->pc = 0x1757ECu;
label_1757ec:
    // 0x1757ec: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1757ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1757f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1757f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1757f4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1757F4u;
    SET_GPR_U32(ctx, 31, 0x1757FCu);
    ctx->pc = 0x1757F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757F4u;
    // 0x1757f8: 0x2484f818  addiu       $a0, $a0, -0x7E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1757F4u, 0x1757FCu)) {
        return;
    }
    ctx->pc = 0x1757FCu;
label_1757fc:
    // 0x1757fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1757fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175800:
    // 0x175800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175804: 0x3e00008  jr          $ra
    ctx->pc = 0x175804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175804u;
        // 0x175808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17580Cu;
    // 0x17580c: 0x0  nop
    ctx->pc = 0x17580cu;
    // NOP
    ctx->pc = 0x175810u;
}
