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

// Function: sub_001745A0
// Address: 0x1745a0 - 0x174618
void sub_001745A0_0x1745a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001745A0_0x1745a0");
#endif

    switch (ctx->pc) {
        case 0x1745c8u: goto label_1745c8;
        case 0x1745ecu: goto label_1745ec;
        case 0x174604u: goto label_174604;
        default: break;
    }

    ctx->pc = 0x1745a0u;

    // 0x1745a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1745a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1745a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1745a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1745a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1745a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1745ac: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1745ACu;
    {
        const bool branch_taken_0x1745ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1745B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745ACu;
        // 0x1745b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745ac) {
            ctx->pc = 0x174604u;
            goto label_174604;
        }
    }
    ctx->pc = 0x1745B4u;
    // 0x1745b4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1745B4u;
    {
        const bool branch_taken_0x1745b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1745B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745B4u;
        // 0x1745b8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745b4) {
            ctx->pc = 0x1745F4u;
            goto label_1745f4;
        }
    }
    ctx->pc = 0x1745BCu;
    // 0x1745bc: 0x26105ed8  addiu       $s0, $s0, 0x5ED8
    ctx->pc = 0x1745bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24280));
    // 0x1745c0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1745C0u;
    SET_GPR_U32(ctx, 31, 0x1745C8u);
    ctx->pc = 0x1745C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1745C0u;
    // 0x1745c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1745C0u, 0x1745C8u)) {
        return;
    }
    ctx->pc = 0x1745C8u;
label_1745c8:
    // 0x1745c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1745c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1745cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1745ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1745d0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1745d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1745d4: 0xac62f7e0  sw          $v0, -0x820($v1)
    ctx->pc = 0x1745d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF7E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF7E0u, _value); } while (0);
    // 0x1745d8: 0x2484f7e8  addiu       $a0, $a0, -0x818
    ctx->pc = 0x1745d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965224));
    // 0x1745dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1745dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1745e0: 0x24c64618  addiu       $a2, $a2, 0x4618
    ctx->pc = 0x1745e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17944));
    // 0x1745e4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1745E4u;
    SET_GPR_U32(ctx, 31, 0x1745ECu);
    ctx->pc = 0x1745E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1745E4u;
    // 0x1745e8: 0x24070074  addiu       $a3, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1745E4u, 0x1745ECu)) {
        return;
    }
    ctx->pc = 0x1745ECu;
label_1745ec:
    // 0x1745ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1745ECu;
    {
        const bool branch_taken_0x1745ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1745F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745ECu;
        // 0x1745f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745ec) {
            ctx->pc = 0x174608u;
            goto label_174608;
        }
    }
    ctx->pc = 0x1745F4u;
label_1745f4:
    // 0x1745f4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1745f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1745f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1745f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1745fc: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1745FCu;
    SET_GPR_U32(ctx, 31, 0x174604u);
    ctx->pc = 0x174600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1745FCu;
    // 0x174600: 0x2484f7e8  addiu       $a0, $a0, -0x818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1745FCu, 0x174604u)) {
        return;
    }
    ctx->pc = 0x174604u;
label_174604:
    // 0x174604: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x174604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_174608:
    // 0x174608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17460c: 0x3e00008  jr          $ra
    ctx->pc = 0x17460Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17460Cu;
        // 0x174610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17460Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174614u;
    // 0x174614: 0x0  nop
    ctx->pc = 0x174614u;
    // NOP
    ctx->pc = 0x174618u;
}
