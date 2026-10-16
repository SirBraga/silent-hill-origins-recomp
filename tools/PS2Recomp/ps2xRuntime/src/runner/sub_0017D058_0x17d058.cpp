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

// Function: sub_0017D058
// Address: 0x17d058 - 0x17d0d0
void sub_0017D058_0x17d058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D058_0x17d058");
#endif

    switch (ctx->pc) {
        case 0x17d080u: goto label_17d080;
        case 0x17d0a4u: goto label_17d0a4;
        case 0x17d0bcu: goto label_17d0bc;
        default: break;
    }

    ctx->pc = 0x17d058u;

    // 0x17d058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d05c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17d05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17d060: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d064: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17D064u;
    {
        const bool branch_taken_0x17d064 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D064u;
        // 0x17d068: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d064) {
            ctx->pc = 0x17D0BCu;
            goto label_17d0bc;
        }
    }
    ctx->pc = 0x17D06Cu;
    // 0x17d06c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x17D06Cu;
    {
        const bool branch_taken_0x17d06c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D06Cu;
        // 0x17d070: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d06c) {
            ctx->pc = 0x17D0ACu;
            goto label_17d0ac;
        }
    }
    ctx->pc = 0x17D074u;
    // 0x17d074: 0x26107420  addiu       $s0, $s0, 0x7420
    ctx->pc = 0x17d074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29728));
    // 0x17d078: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x17D078u;
    SET_GPR_U32(ctx, 31, 0x17D080u);
    ctx->pc = 0x17D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D078u;
    // 0x17d07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x17D078u, 0x17D080u)) {
        return;
    }
    ctx->pc = 0x17D080u;
label_17d080:
    // 0x17d080: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x17d080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x17d084: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d088: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17d088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17d08c: 0xac62f938  sw          $v0, -0x6C8($v1)
    ctx->pc = 0x17d08cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF938u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF938u, _value); } while (0);
    // 0x17d090: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x17d090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x17d094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d098: 0x24c6d0d0  addiu       $a2, $a2, -0x2F30
    ctx->pc = 0x17d098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955216));
    // 0x17d09c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x17D09Cu;
    SET_GPR_U32(ctx, 31, 0x17D0A4u);
    ctx->pc = 0x17D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D09Cu;
    // 0x17d0a0: 0x24070084  addiu       $a3, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x17D09Cu, 0x17D0A4u)) {
        return;
    }
    ctx->pc = 0x17D0A4u;
label_17d0a4:
    // 0x17d0a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17D0A4u;
    {
        const bool branch_taken_0x17d0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0A4u;
        // 0x17d0a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d0a4) {
            ctx->pc = 0x17D0C0u;
            goto label_17d0c0;
        }
    }
    ctx->pc = 0x17D0ACu;
label_17d0ac:
    // 0x17d0ac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d0b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d0b4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x17D0B4u;
    SET_GPR_U32(ctx, 31, 0x17D0BCu);
    ctx->pc = 0x17D0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0B4u;
    // 0x17d0b8: 0x2484f940  addiu       $a0, $a0, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x17D0B4u, 0x17D0BCu)) {
        return;
    }
    ctx->pc = 0x17D0BCu;
label_17d0bc:
    // 0x17d0bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17d0c0:
    // 0x17d0c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17D0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0C4u;
        // 0x17d0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D0CCu;
    // 0x17d0cc: 0x0  nop
    ctx->pc = 0x17d0ccu;
    // NOP
    ctx->pc = 0x17d0d0u;
}
