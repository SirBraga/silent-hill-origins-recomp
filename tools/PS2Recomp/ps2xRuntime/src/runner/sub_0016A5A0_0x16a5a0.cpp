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

// Function: sub_0016A5A0
// Address: 0x16a5a0 - 0x16a618
void sub_0016A5A0_0x16a5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A5A0_0x16a5a0");
#endif

    switch (ctx->pc) {
        case 0x16a5c8u: goto label_16a5c8;
        case 0x16a5ecu: goto label_16a5ec;
        case 0x16a604u: goto label_16a604;
        default: break;
    }

    ctx->pc = 0x16a5a0u;

    // 0x16a5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a5a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16a5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16a5a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a5ac: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16A5ACu;
    {
        const bool branch_taken_0x16a5ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5ACu;
        // 0x16a5b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5ac) {
            ctx->pc = 0x16A604u;
            goto label_16a604;
        }
    }
    ctx->pc = 0x16A5B4u;
    // 0x16a5b4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16A5B4u;
    {
        const bool branch_taken_0x16a5b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5B4u;
        // 0x16a5b8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5b4) {
            ctx->pc = 0x16A5F4u;
            goto label_16a5f4;
        }
    }
    ctx->pc = 0x16A5BCu;
    // 0x16a5bc: 0x26104618  addiu       $s0, $s0, 0x4618
    ctx->pc = 0x16a5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17944));
    // 0x16a5c0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16A5C0u;
    SET_GPR_U32(ctx, 31, 0x16A5C8u);
    ctx->pc = 0x16A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A5C0u;
    // 0x16a5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16A5C0u, 0x16A5C8u)) {
        return;
    }
    ctx->pc = 0x16A5C8u;
label_16a5c8:
    // 0x16a5c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16a5cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16a5d0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16a5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16a5d4: 0xac62f648  sw          $v0, -0x9B8($v1)
    ctx->pc = 0x16a5d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF648u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF648u, _value); } while (0);
    // 0x16a5d8: 0x2484f650  addiu       $a0, $a0, -0x9B0
    ctx->pc = 0x16a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964816));
    // 0x16a5dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a5e0: 0x24c6a618  addiu       $a2, $a2, -0x59E8
    ctx->pc = 0x16a5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944280));
    // 0x16a5e4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16A5E4u;
    SET_GPR_U32(ctx, 31, 0x16A5ECu);
    ctx->pc = 0x16A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A5E4u;
    // 0x16a5e8: 0x24070058  addiu       $a3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16A5E4u, 0x16A5ECu)) {
        return;
    }
    ctx->pc = 0x16A5ECu;
label_16a5ec:
    // 0x16a5ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A5ECu;
    {
        const bool branch_taken_0x16a5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5ECu;
        // 0x16a5f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5ec) {
            ctx->pc = 0x16A608u;
            goto label_16a608;
        }
    }
    ctx->pc = 0x16A5F4u;
label_16a5f4:
    // 0x16a5f4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16a5f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16a5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a5fc: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16A5FCu;
    SET_GPR_U32(ctx, 31, 0x16A604u);
    ctx->pc = 0x16A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A5FCu;
    // 0x16a600: 0x2484f650  addiu       $a0, $a0, -0x9B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16A5FCu, 0x16A604u)) {
        return;
    }
    ctx->pc = 0x16A604u;
label_16a604:
    // 0x16a604: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16a608:
    // 0x16a608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a60c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A60Cu;
        // 0x16a610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A614u;
    // 0x16a614: 0x0  nop
    ctx->pc = 0x16a614u;
    // NOP
    ctx->pc = 0x16a618u;
}
