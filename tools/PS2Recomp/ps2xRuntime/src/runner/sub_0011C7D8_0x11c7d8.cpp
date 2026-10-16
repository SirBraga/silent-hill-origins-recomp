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

// Function: sub_0011C7D8
// Address: 0x11c7d8 - 0x11c850
void sub_0011C7D8_0x11c7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C7D8_0x11c7d8");
#endif

    switch (ctx->pc) {
        case 0x11c800u: goto label_11c800;
        case 0x11c824u: goto label_11c824;
        case 0x11c83cu: goto label_11c83c;
        default: break;
    }

    ctx->pc = 0x11c7d8u;

    // 0x11c7d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c7dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11c7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11c7e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11c7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11c7e4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11C7E4u;
    {
        const bool branch_taken_0x11c7e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7E4u;
        // 0x11c7e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7e4) {
            ctx->pc = 0x11C83Cu;
            goto label_11c83c;
        }
    }
    ctx->pc = 0x11C7ECu;
    // 0x11c7ec: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x11C7ECu;
    {
        const bool branch_taken_0x11c7ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7ECu;
        // 0x11c7f0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7ec) {
            ctx->pc = 0x11C82Cu;
            goto label_11c82c;
        }
    }
    ctx->pc = 0x11C7F4u;
    // 0x11c7f4: 0x2610b388  addiu       $s0, $s0, -0x4C78
    ctx->pc = 0x11c7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947720));
    // 0x11c7f8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x11C7F8u;
    SET_GPR_U32(ctx, 31, 0x11C800u);
    ctx->pc = 0x11C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7F8u;
    // 0x11c7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x11C7F8u, 0x11C800u)) {
        return;
    }
    ctx->pc = 0x11C800u;
label_11c800:
    // 0x11c800: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x11c800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x11c804: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11c804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11c808: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11c808u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11c80c: 0xac624578  sw          $v0, 0x4578($v1)
    ctx->pc = 0x11c80cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4578u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4578u, _value); } while (0);
    // 0x11c810: 0x24844580  addiu       $a0, $a0, 0x4580
    ctx->pc = 0x11c810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    // 0x11c814: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c818: 0x24c6c850  addiu       $a2, $a2, -0x37B0
    ctx->pc = 0x11c818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953040));
    // 0x11c81c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x11C81Cu;
    SET_GPR_U32(ctx, 31, 0x11C824u);
    ctx->pc = 0x11C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C81Cu;
    // 0x11c820: 0x24070120  addiu       $a3, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x11C81Cu, 0x11C824u)) {
        return;
    }
    ctx->pc = 0x11C824u;
label_11c824:
    // 0x11c824: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11C824u;
    {
        const bool branch_taken_0x11c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C824u;
        // 0x11c828: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c824) {
            ctx->pc = 0x11C840u;
            goto label_11c840;
        }
    }
    ctx->pc = 0x11C82Cu;
label_11c82c:
    // 0x11c82c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11c830: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11c830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c834: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x11C834u;
    SET_GPR_U32(ctx, 31, 0x11C83Cu);
    ctx->pc = 0x11C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C834u;
    // 0x11c838: 0x24844580  addiu       $a0, $a0, 0x4580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x11C834u, 0x11C83Cu)) {
        return;
    }
    ctx->pc = 0x11C83Cu;
label_11c83c:
    // 0x11c83c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11c83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11c840:
    // 0x11c840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c844: 0x3e00008  jr          $ra
    ctx->pc = 0x11C844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C844u;
        // 0x11c848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C84Cu;
    // 0x11c84c: 0x0  nop
    ctx->pc = 0x11c84cu;
    // NOP
    ctx->pc = 0x11c850u;
}
